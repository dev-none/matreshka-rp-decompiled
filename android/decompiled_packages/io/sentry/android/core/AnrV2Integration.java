package io.sentry.android.core;

import android.app.ApplicationExitInfo;
import android.content.Context;
import io.sentry.Attachment;
import io.sentry.DateUtils;
import io.sentry.Hint;
import io.sentry.ILogger;
import io.sentry.IScopes;
import io.sentry.Integration;
import io.sentry.SentryEvent;
import io.sentry.SentryLevel;
import io.sentry.SentryOptions;
import io.sentry.android.core.cache.AndroidEnvelopeCache;
import io.sentry.android.core.internal.threaddump.Lines;
import io.sentry.android.core.internal.threaddump.ThreadDumpParser;
import io.sentry.hints.AbnormalExit;
import io.sentry.hints.Backfillable;
import io.sentry.hints.BlockingFlushHint;
import io.sentry.protocol.DebugImage;
import io.sentry.protocol.DebugMeta;
import io.sentry.protocol.Message;
import io.sentry.protocol.SentryId;
import io.sentry.protocol.SentryThread;
import io.sentry.transport.CurrentDateProvider;
import io.sentry.transport.ICurrentDateProvider;
import io.sentry.util.HintUtils;
import io.sentry.util.IntegrationUtils;
import io.sentry.util.Objects;
import java.io.BufferedReader;
import java.io.ByteArrayInputStream;
import java.io.ByteArrayOutputStream;
import java.io.Closeable;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.util.List;

/* JADX INFO: loaded from: classes7.dex */
public class AnrV2Integration implements Integration, Closeable {
    private final Context context;
    private final ICurrentDateProvider dateProvider;
    private SentryAndroidOptions options;

    public AnrV2Integration(Context context) {
        this(context, CurrentDateProvider.getInstance());
    }

    AnrV2Integration(Context context, ICurrentDateProvider iCurrentDateProvider) {
        this.context = ContextUtils.getApplicationContext(context);
        this.dateProvider = iCurrentDateProvider;
    }

    @Override // io.sentry.Integration
    public void register(IScopes iScopes, SentryOptions sentryOptions) {
        SentryAndroidOptions sentryAndroidOptions = (SentryAndroidOptions) Objects.requireNonNull(sentryOptions instanceof SentryAndroidOptions ? (SentryAndroidOptions) sentryOptions : null, "SentryAndroidOptions is required");
        this.options = sentryAndroidOptions;
        sentryAndroidOptions.getLogger().log(SentryLevel.DEBUG, "AnrIntegration enabled: %s", Boolean.valueOf(this.options.isAnrEnabled()));
        if (this.options.getCacheDirPath() == null) {
            this.options.getLogger().log(SentryLevel.INFO, "Cache dir is not set, unable to process ANRs", new Object[0]);
            return;
        }
        if (this.options.isAnrEnabled()) {
            try {
                sentryOptions.getExecutorService().submit(new ApplicationExitInfoHistoryDispatcher(this.context, iScopes, this.options, this.dateProvider, new AnrV2Policy(this.options)));
            } catch (Throwable th) {
                sentryOptions.getLogger().log(SentryLevel.DEBUG, "Failed to start ANR processor.", th);
            }
            sentryOptions.getLogger().log(SentryLevel.DEBUG, "AnrV2Integration installed.", new Object[0]);
            IntegrationUtils.addIntegrationToSdkVersion("AnrV2");
        }
    }

    @Override // java.io.Closeable, java.lang.AutoCloseable
    public void close() throws IOException {
        SentryAndroidOptions sentryAndroidOptions = this.options;
        if (sentryAndroidOptions != null) {
            sentryAndroidOptions.getLogger().log(SentryLevel.DEBUG, "AnrV2Integration removed.", new Object[0]);
        }
    }

    private static final class AnrV2Policy implements ApplicationExitInfoHistoryDispatcher.ApplicationExitInfoPolicy {
        private final SentryAndroidOptions options;

        @Override // io.sentry.android.core.ApplicationExitInfoHistoryDispatcher.ApplicationExitInfoPolicy
        public int getTargetReason() {
            return 6;
        }

        AnrV2Policy(SentryAndroidOptions sentryAndroidOptions) {
            this.options = sentryAndroidOptions;
        }

        @Override // io.sentry.android.core.ApplicationExitInfoHistoryDispatcher.ApplicationExitInfoPolicy
        public String getLabel() {
            return AndroidEnvelopeCache.LAST_ANR_MARKER_LABEL;
        }

        @Override // io.sentry.android.core.ApplicationExitInfoHistoryDispatcher.ApplicationExitInfoPolicy
        public boolean shouldReportHistorical() {
            return this.options.isReportHistoricalAnrs();
        }

        @Override // io.sentry.android.core.ApplicationExitInfoHistoryDispatcher.ApplicationExitInfoPolicy
        public Long getLastReportedTimestamp() {
            return AndroidEnvelopeCache.lastReportedAnr(this.options);
        }

        @Override // io.sentry.android.core.ApplicationExitInfoHistoryDispatcher.ApplicationExitInfoPolicy
        public ApplicationExitInfoHistoryDispatcher.Report buildReport(ApplicationExitInfo applicationExitInfo, boolean z) {
            long timestamp = applicationExitInfo.getTimestamp();
            boolean z2 = applicationExitInfo.getImportance() != 100;
            ParseResult threadDump = parseThreadDump(applicationExitInfo, z2);
            if (threadDump.type == ParseResult.Type.NO_DUMP) {
                this.options.getLogger().log(SentryLevel.WARNING, "Not reporting ANR event as there was no thread dump for the ANR %s", applicationExitInfo.toString());
                return null;
            }
            AnrV2Hint anrV2Hint = new AnrV2Hint(this.options.getFlushTimeoutMillis(), this.options.getLogger(), timestamp, z, z2);
            Hint hintCreateWithTypeCheckHint = HintUtils.createWithTypeCheckHint(anrV2Hint);
            SentryEvent sentryEvent = new SentryEvent();
            if (threadDump.type == ParseResult.Type.ERROR) {
                Message message = new Message();
                message.setFormatted("Sentry Android SDK failed to parse system thread dump for this ANR. We recommend enabling [SentryOptions.isAttachAnrThreadDump] option to attach the thread dump as plain text and report this issue on GitHub.");
                sentryEvent.setMessage(message);
            } else if (threadDump.type == ParseResult.Type.DUMP) {
                sentryEvent.setThreads(threadDump.threads);
                if (threadDump.debugImages != null) {
                    DebugMeta debugMeta = new DebugMeta();
                    debugMeta.setImages(threadDump.debugImages);
                    sentryEvent.setDebugMeta(debugMeta);
                }
            }
            sentryEvent.setLevel(SentryLevel.FATAL);
            sentryEvent.setTimestamp(DateUtils.getDateTime(timestamp));
            if (this.options.isAttachAnrThreadDump() && threadDump.dump != null) {
                hintCreateWithTypeCheckHint.setThreadDump(Attachment.fromThreadDump(threadDump.dump));
            }
            return new ApplicationExitInfoHistoryDispatcher.Report(sentryEvent, hintCreateWithTypeCheckHint, anrV2Hint);
        }

        private ParseResult parseThreadDump(ApplicationExitInfo applicationExitInfo, boolean z) {
            try {
                InputStream traceInputStream = applicationExitInfo.getTraceInputStream();
                try {
                    if (traceInputStream == null) {
                        ParseResult parseResult = new ParseResult(ParseResult.Type.NO_DUMP);
                        if (traceInputStream != null) {
                            traceInputStream.close();
                        }
                        return parseResult;
                    }
                    byte[] dumpBytes = getDumpBytes(traceInputStream);
                    if (traceInputStream != null) {
                        traceInputStream.close();
                    }
                    try {
                        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(new ByteArrayInputStream(dumpBytes)));
                        try {
                            Lines lines = Lines.readLines(bufferedReader);
                            ThreadDumpParser threadDumpParser = new ThreadDumpParser(this.options, z);
                            threadDumpParser.parse(lines);
                            List<SentryThread> threads = threadDumpParser.getThreads();
                            List<DebugImage> debugImages = threadDumpParser.getDebugImages();
                            if (threads.isEmpty()) {
                                ParseResult parseResult2 = new ParseResult(ParseResult.Type.NO_DUMP);
                                bufferedReader.close();
                                return parseResult2;
                            }
                            ParseResult parseResult3 = new ParseResult(ParseResult.Type.DUMP, dumpBytes, threads, debugImages);
                            bufferedReader.close();
                            return parseResult3;
                        } catch (Throwable th) {
                            try {
                                bufferedReader.close();
                            } catch (Throwable th2) {
                                th.addSuppressed(th2);
                            }
                            throw th;
                        }
                    } catch (Throwable th3) {
                        this.options.getLogger().log(SentryLevel.WARNING, "Failed to parse ANR thread dump", th3);
                        return new ParseResult(ParseResult.Type.ERROR, dumpBytes);
                    }
                } catch (Throwable th4) {
                    if (traceInputStream != null) {
                        try {
                            traceInputStream.close();
                        } catch (Throwable th5) {
                            th4.addSuppressed(th5);
                        }
                    }
                    throw th4;
                }
            } catch (Throwable th6) {
                this.options.getLogger().log(SentryLevel.WARNING, "Failed to read ANR thread dump", th6);
                return new ParseResult(ParseResult.Type.NO_DUMP);
            }
        }

        private byte[] getDumpBytes(InputStream inputStream) throws IOException {
            ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream();
            try {
                byte[] bArr = new byte[1024];
                while (true) {
                    int i = inputStream.read(bArr, 0, 1024);
                    if (i != -1) {
                        byteArrayOutputStream.write(bArr, 0, i);
                    } else {
                        byte[] byteArray = byteArrayOutputStream.toByteArray();
                        byteArrayOutputStream.close();
                        return byteArray;
                    }
                }
            } catch (Throwable th) {
                try {
                    byteArrayOutputStream.close();
                } catch (Throwable th2) {
                    th.addSuppressed(th2);
                }
                throw th;
            }
        }
    }

    public static final class AnrV2Hint extends BlockingFlushHint implements Backfillable, AbnormalExit {
        private final boolean isBackgroundAnr;
        private final boolean shouldEnrich;
        private final long timestamp;

        @Override // io.sentry.hints.AbnormalExit
        public boolean ignoreCurrentThread() {
            return false;
        }

        @Override // io.sentry.hints.DiskFlushNotification
        public boolean isFlushable(SentryId sentryId) {
            return true;
        }

        @Override // io.sentry.hints.DiskFlushNotification
        public void setFlushable(SentryId sentryId) {
        }

        public AnrV2Hint(long j, ILogger iLogger, long j2, boolean z, boolean z2) {
            super(j, iLogger);
            this.timestamp = j2;
            this.shouldEnrich = z;
            this.isBackgroundAnr = z2;
        }

        @Override // io.sentry.hints.AbnormalExit
        public Long timestamp() {
            return Long.valueOf(this.timestamp);
        }

        @Override // io.sentry.hints.Backfillable
        public boolean shouldEnrich() {
            return this.shouldEnrich;
        }

        @Override // io.sentry.hints.AbnormalExit
        public String mechanism() {
            return this.isBackgroundAnr ? "anr_background" : "anr_foreground";
        }
    }

    static final class ParseResult {
        final List<DebugImage> debugImages;
        final byte[] dump;
        final List<SentryThread> threads;
        final Type type;

        enum Type {
            DUMP,
            NO_DUMP,
            ERROR
        }

        ParseResult(Type type) {
            this.type = type;
            this.dump = null;
            this.threads = null;
            this.debugImages = null;
        }

        ParseResult(Type type, byte[] bArr) {
            this.type = type;
            this.dump = bArr;
            this.threads = null;
            this.debugImages = null;
        }

        ParseResult(Type type, byte[] bArr, List<SentryThread> list, List<DebugImage> list2) {
            this.type = type;
            this.dump = bArr;
            this.threads = list;
            this.debugImages = list2;
        }
    }
}
