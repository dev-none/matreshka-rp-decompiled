package ru.ok.tracer.lite.crash.report;

import android.util.Log;
import androidx.core.app.NotificationCompat;
import io.sentry.protocol.OperatingSystem;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.Executor;
import java.util.concurrent.TimeUnit;
import java.util.concurrent.atomic.AtomicInteger;
import javax.inject.Inject;
import kotlin.Deprecated;
import kotlin.Lazy;
import kotlin.LazyKt;
import kotlin.LazyThreadSafetyMode;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.StringsKt;
import ru.ok.tracer.base.drop.DropManager;
import ru.ok.tracer.base.limits.TokenBucket;
import ru.ok.tracer.lite.LogLevel;
import ru.ok.tracer.lite.Severity;
import ru.ok.tracer.lite.TagsStorageLite;
import ru.ok.tracer.lite.TracerLite;
import ru.ok.tracer.lite.crash.report.upload.CrashUploaderLite;
import ru.ok.tracer.lite.crash.report.upload.CrashUploaderLiteKt;
import ru.ok.tracer.lite.limits.TracerLiteLimits;
import ru.ok.tracer.lite.upload.TracerDropHolder;
import ru.ok.tracer.lite.utils.TracerExecutorsHolder;

/* JADX INFO: compiled from: TracerCrashReportLite.kt */
/* JADX INFO: loaded from: classes8.dex */
@Metadata(d1 = {"\u0000z\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000b\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0010\u0003\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\u0018\u0000 12\u00020\u0001:\u000212B\u0019\b\u0007\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\b\b\u0002\u0010\u0004\u001a\u00020\u0005¢\u0006\u0002\u0010\u0006J\u000e\u0010$\u001a\u00020%2\u0006\u0010&\u001a\u00020'J\u001c\u0010(\u001a\u00020%2\u0006\u0010)\u001a\u00020*2\n\b\u0002\u0010+\u001a\u0004\u0018\u00010'H\u0007J$\u0010(\u001a\u00020%2\u0006\u0010,\u001a\u00020-2\u0006\u0010)\u001a\u00020*2\n\b\u0002\u0010+\u001a\u0004\u0018\u00010'H\u0007J$\u0010(\u001a\u00020%2\u0006\u0010.\u001a\u00020/2\u0006\u0010)\u001a\u00020*2\n\b\u0002\u0010+\u001a\u0004\u0018\u00010'H\u0007J\"\u00100\u001a\u00020%2\u0006\u0010.\u001a\u00020'2\u0006\u0010)\u001a\u00020*2\b\u0010+\u001a\u0004\u0018\u00010'H\u0002R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082\u0004¢\u0006\u0002\n\u0000R\u0014\u0010\u0007\u001a\u00020\b8BX\u0082\u0004¢\u0006\u0006\u001a\u0004\b\t\u0010\nR\u0014\u0010\u000b\u001a\u00020\f8BX\u0082\u0004¢\u0006\u0006\u001a\u0004\b\r\u0010\u000eR\u000e\u0010\u000f\u001a\u00020\u0010X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0011\u001a\u00020\u0012X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0013\u001a\u00020\u0014X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0015\u001a\u00020\u0016X\u0082\u0004¢\u0006\u0002\n\u0000R\u001b\u0010\u0017\u001a\u00020\u00188BX\u0082\u0084\u0002¢\u0006\f\n\u0004\b\u001b\u0010\u001c\u001a\u0004\b\u0019\u0010\u001aR\u0014\u0010\u001d\u001a\u00020\u001e8BX\u0082\u0004¢\u0006\u0006\u001a\u0004\b\u001f\u0010 R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010!\u001a\u00020\u0018X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\"\u001a\u00020#X\u0082\u0004¢\u0006\u0002\n\u0000¨\u00063"}, d2 = {"Lru/ok/tracer/lite/crash/report/TracerCrashReportLite;", "", "tracer", "Lru/ok/tracer/lite/TracerLite;", "configuration", "Lru/ok/tracer/lite/crash/report/TracerCrashReportLite$Configuration;", "(Lru/ok/tracer/lite/TracerLite;Lru/ok/tracer/lite/crash/report/TracerCrashReportLite$Configuration;)V", "dropManager", "Lru/ok/tracer/base/drop/DropManager;", "getDropManager", "()Lru/ok/tracer/base/drop/DropManager;", "ioExecutor", "Ljava/util/concurrent/Executor;", "getIoExecutor", "()Ljava/util/concurrent/Executor;", "limits", "Lru/ok/tracer/lite/limits/TracerLiteLimits;", "logStorage", "Lru/ok/tracer/lite/crash/report/LogStorageLite;", "nonFatalBucket", "Lru/ok/tracer/base/limits/TokenBucket;", "nonFatalDropCount", "Ljava/util/concurrent/atomic/AtomicInteger;", "nonFatalsEnabled", "", "getNonFatalsEnabled", "()Z", "nonFatalsEnabled$delegate", "Lkotlin/Lazy;", "tagsStorage", "Lru/ok/tracer/lite/TagsStorageLite;", "getTagsStorage", "()Lru/ok/tracer/lite/TagsStorageLite;", "tracerIsDisabled", "uploader", "Lru/ok/tracer/lite/crash/report/upload/CrashUploaderLite;", "log", "", NotificationCompat.CATEGORY_MESSAGE, "", "report", "e", "", "issueKey", "logLevel", "Lru/ok/tracer/lite/LogLevel;", "severity", "Lru/ok/tracer/lite/Severity;", "reportException", "Companion", "Configuration", "tracer-lite-crash-report_release"}, k = 1, mv = {1, 7, 1}, xi = 48)
public final class TracerCrashReportLite {
    private static final Companion Companion = new Companion(null);

    @Deprecated
    private static final ConcurrentHashMap<String, TokenBucket> nonFatalBuckets = new ConcurrentHashMap<>();
    private final Configuration configuration;
    private final TracerLiteLimits limits;
    private final LogStorageLite logStorage;
    private final TokenBucket nonFatalBucket;
    private final AtomicInteger nonFatalDropCount;

    /* JADX INFO: renamed from: nonFatalsEnabled$delegate, reason: from kotlin metadata */
    private final Lazy nonFatalsEnabled;
    private final TracerLite tracer;
    private volatile boolean tracerIsDisabled;
    private final CrashUploaderLite uploader;

    /* JADX WARN: 'this' call moved to the top of the method (can break code semantics) */
    /* JADX WARN: Multi-variable type inference failed */
    @Inject
    public TracerCrashReportLite(TracerLite tracer) {
        this(tracer, null, 2, 0 == true ? 1 : 0);
        Intrinsics.checkNotNullParameter(tracer, "tracer");
    }

    public final void report(Throwable e) {
        Intrinsics.checkNotNullParameter(e, "e");
        report$default(this, e, null, 2, null);
    }

    @Deprecated(message = "Use Severity instead")
    public final void report(LogLevel logLevel, Throwable e) {
        Intrinsics.checkNotNullParameter(logLevel, "logLevel");
        Intrinsics.checkNotNullParameter(e, "e");
        report$default(this, logLevel, e, (String) null, 4, (Object) null);
    }

    public final void report(Severity severity, Throwable e) {
        Intrinsics.checkNotNullParameter(severity, "severity");
        Intrinsics.checkNotNullParameter(e, "e");
        report$default(this, severity, e, (String) null, 4, (Object) null);
    }

    @Inject
    public TracerCrashReportLite(TracerLite tracer, Configuration configuration) {
        TokenBucket tokenBucketOneShot;
        Intrinsics.checkNotNullParameter(tracer, "tracer");
        Intrinsics.checkNotNullParameter(configuration, "configuration");
        this.tracer = tracer;
        this.configuration = configuration;
        this.logStorage = new LogStorageLite(configuration.getMaxLogsLength());
        TracerLiteLimits tracerLiteLimits = TracerLiteLimits.INSTANCE.get(tracer);
        this.limits = tracerLiteLimits;
        this.uploader = new CrashUploaderLite(tracer, tracerLiteLimits);
        this.nonFatalsEnabled = LazyKt.lazy(LazyThreadSafetyMode.PUBLICATION, (Function0) new Function0<Boolean>() { // from class: ru.ok.tracer.lite.crash.report.TracerCrashReportLite$nonFatalsEnabled$2
            {
                super(0);
            }

            /* JADX WARN: Can't rename method to resolve collision */
            @Override // kotlin.jvm.functions.Function0
            public final Boolean invoke() {
                return Boolean.valueOf(this.this$0.configuration.getObfuscatedNonFatalsEnabled() || !ObfuscationUtils.isObfuscated() || ObfuscationUtils.hasTracer());
            }
        });
        ConcurrentHashMap<String, TokenBucket> concurrentHashMap = nonFatalBuckets;
        String libraryPackageName = tracer.getLibraryPackageName();
        TokenBucket tokenBucket = concurrentHashMap.get(libraryPackageName);
        if (tokenBucket == null) {
            if (configuration.getNonFatalRateLimitEnabled()) {
                tokenBucketOneShot = new TokenBucket(10, 3600000L, TimeUnit.MILLISECONDS);
            } else {
                tokenBucketOneShot = TokenBucket.INSTANCE.oneShot(8);
            }
            TokenBucket tokenBucketPutIfAbsent = concurrentHashMap.putIfAbsent(libraryPackageName, tokenBucketOneShot);
            tokenBucket = tokenBucketPutIfAbsent == null ? tokenBucketOneShot : tokenBucketPutIfAbsent;
        }
        Intrinsics.checkNotNullExpressionValue(tokenBucket, "nonFatalBuckets.getOrPut…        )\n        }\n    }");
        this.nonFatalBucket = tokenBucket;
        this.nonFatalDropCount = new AtomicInteger();
    }

    public /* synthetic */ TracerCrashReportLite(TracerLite tracerLite, Configuration configuration, int i, DefaultConstructorMarker defaultConstructorMarker) {
        this(tracerLite, (i & 2) != 0 ? new Configuration.Builder().build() : configuration);
    }

    private final TagsStorageLite getTagsStorage() {
        return TagsStorageLite.INSTANCE.get(this.tracer);
    }

    private final Executor getIoExecutor() {
        return TracerExecutorsHolder.INSTANCE.get(this.tracer).getIoExecutor();
    }

    private final DropManager getDropManager() {
        return TracerDropHolder.INSTANCE.get(this.tracer);
    }

    private final boolean getNonFatalsEnabled() {
        return ((Boolean) this.nonFatalsEnabled.getValue()).booleanValue();
    }

    public static /* synthetic */ void report$default(TracerCrashReportLite tracerCrashReportLite, Throwable th, String str, int i, Object obj) {
        if ((i & 2) != 0) {
            str = null;
        }
        tracerCrashReportLite.report(th, str);
    }

    public final void report(Throwable e, String issueKey) {
        Intrinsics.checkNotNullParameter(e, "e");
        reportException(CrashUploaderLiteKt.SEVERITY_NON_FATAL, e, issueKey);
    }

    public static /* synthetic */ void report$default(TracerCrashReportLite tracerCrashReportLite, Severity severity, Throwable th, String str, int i, Object obj) {
        if ((i & 4) != 0) {
            str = null;
        }
        tracerCrashReportLite.report(severity, th, str);
    }

    public final void report(Severity severity, Throwable e, String issueKey) {
        Intrinsics.checkNotNullParameter(severity, "severity");
        Intrinsics.checkNotNullParameter(e, "e");
        reportException(CrashUploaderLiteKt.toApiString(severity), e, issueKey);
    }

    public static /* synthetic */ void report$default(TracerCrashReportLite tracerCrashReportLite, LogLevel logLevel, Throwable th, String str, int i, Object obj) {
        if ((i & 4) != 0) {
            str = null;
        }
        tracerCrashReportLite.report(logLevel, th, str);
    }

    @Deprecated(message = "Use Severity instead")
    public final void report(LogLevel logLevel, Throwable e, String issueKey) {
        Intrinsics.checkNotNullParameter(logLevel, "logLevel");
        Intrinsics.checkNotNullParameter(e, "e");
        reportException(CrashUploaderLiteKt.toApiString(logLevel.getSeverity()), e, issueKey);
    }

    private final void reportException(final String severity, final Throwable e, final String issueKey) {
        if (this.tracerIsDisabled) {
            Log.d("Tracer", "Tracer is disabled");
            return;
        }
        if (getNonFatalsEnabled()) {
            if (this.limits.isLimited(TracerCrashReportLiteKt.FEATURE_CRASH_REPORT, null)) {
                Log.e("Tracer", "Feature CRASH_REPORT limited");
            } else {
                if (!TokenBucket.allow$default(this.nonFatalBucket, 0, 1, null)) {
                    Log.d("Tracer", "Can't handle non fatal exception. Max non fatal count is reached.");
                    this.nonFatalDropCount.incrementAndGet();
                    getIoExecutor().execute(new Runnable() { // from class: ru.ok.tracer.lite.crash.report.TracerCrashReportLite$$ExternalSyntheticLambda0
                        @Override // java.lang.Runnable
                        public final void run() {
                            TracerCrashReportLite.reportException$lambda$1(this.f$0);
                        }
                    });
                    return;
                }
                getIoExecutor().execute(new Runnable() { // from class: ru.ok.tracer.lite.crash.report.TracerCrashReportLite$$ExternalSyntheticLambda1
                    @Override // java.lang.Runnable
                    public final void run() {
                        TracerCrashReportLite.reportException$lambda$2(this.f$0, severity, e, issueKey);
                    }
                });
            }
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void reportException$lambda$1(TracerCrashReportLite this$0) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        this$0.getDropManager().drop("non_fatal", this$0.configuration.getNonFatalRateLimitEnabled() ? "max_non_fatals_per_interval_reached" : "max_non_fatals_per_session_reached", this$0.nonFatalDropCount.getAndSet(0));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void reportException$lambda$2(TracerCrashReportLite this$0, String severity, Throwable e, String str) {
        String string;
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        Intrinsics.checkNotNullParameter(severity, "$severity");
        Intrinsics.checkNotNullParameter(e, "$e");
        if (this$0.tracer.isDisabled()) {
            Log.d("Tracer", "Tracer is disabled");
            this$0.tracerIsDisabled = true;
            return;
        }
        String strTake = null;
        if (this$0.limits.isLimited(TracerCrashReportLiteKt.FEATURE_CRASH_REPORT, null)) {
            Log.e("Tracer", "Feature CRASH_REPORT limited");
            return;
        }
        CrashUploaderLite crashUploaderLite = this$0.uploader;
        if (str != null && (string = StringsKt.trim((CharSequence) str).toString()) != null) {
            if (string.length() <= 0) {
                string = null;
            }
            if (string != null) {
                strTake = StringsKt.take(string, 32);
            }
        }
        crashUploaderLite.upload(severity, e, strTake, this$0.logStorage.getLogs$tracer_lite_crash_report_release(), this$0.getTagsStorage().getTags());
    }

    public final void log(String msg) {
        Intrinsics.checkNotNullParameter(msg, "msg");
        if (this.tracerIsDisabled) {
            Log.d("Tracer", "Tracer is disabled");
        } else {
            this.logStorage.log(msg);
        }
    }

    /* JADX INFO: compiled from: TracerCrashReportLite.kt */
    @Metadata(d1 = {"\u0000\u001a\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\u0010\u000e\n\u0002\u0018\u0002\n\u0000\b\u0082\u0003\u0018\u00002\u00020\u0001B\u0007\b\u0002¢\u0006\u0002\u0010\u0002R\u001a\u0010\u0003\u001a\u000e\u0012\u0004\u0012\u00020\u0005\u0012\u0004\u0012\u00020\u00060\u0004X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u0007"}, d2 = {"Lru/ok/tracer/lite/crash/report/TracerCrashReportLite$Companion;", "", "()V", "nonFatalBuckets", "Ljava/util/concurrent/ConcurrentHashMap;", "", "Lru/ok/tracer/base/limits/TokenBucket;", "tracer-lite-crash-report_release"}, k = 1, mv = {1, 7, 1}, xi = 48)
    private static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        private Companion() {
        }
    }

    /* JADX INFO: compiled from: TracerCrashReportLite.kt */
    @Metadata(d1 = {"\u0000\"\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u0003\n\u0002\u0010\u000b\n\u0002\b\u0007\u0018\u0000 \u00102\u00020\u0001:\u0002\u000f\u0010B\u000f\b\u0002\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0002\u0010\u0004R\u0014\u0010\u0005\u001a\u00020\u0006X\u0080\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u0007\u0010\bR\u0014\u0010\t\u001a\u00020\nX\u0080\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u000b\u0010\fR\u0014\u0010\r\u001a\u00020\nX\u0080\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u000e\u0010\f¨\u0006\u0011"}, d2 = {"Lru/ok/tracer/lite/crash/report/TracerCrashReportLite$Configuration;", "", "builder", "Lru/ok/tracer/lite/crash/report/TracerCrashReportLite$Configuration$Builder;", "(Lru/ok/tracer/lite/crash/report/TracerCrashReportLite$Configuration$Builder;)V", "maxLogsLength", "", "getMaxLogsLength$tracer_lite_crash_report_release", "()I", "nonFatalRateLimitEnabled", "", "getNonFatalRateLimitEnabled$tracer_lite_crash_report_release", "()Z", "obfuscatedNonFatalsEnabled", "getObfuscatedNonFatalsEnabled$tracer_lite_crash_report_release", "Builder", "Companion", "tracer-lite-crash-report_release"}, k = 1, mv = {1, 7, 1}, xi = 48)
    public static final class Configuration {

        /* JADX INFO: renamed from: Companion, reason: from kotlin metadata */
        public static final Companion INSTANCE = new Companion(null);
        private final int maxLogsLength;
        private final boolean nonFatalRateLimitEnabled;
        private final boolean obfuscatedNonFatalsEnabled;

        public /* synthetic */ Configuration(Builder builder, DefaultConstructorMarker defaultConstructorMarker) {
            this(builder);
        }

        private Configuration(Builder builder) {
            this.obfuscatedNonFatalsEnabled = builder.getObfuscatedNonFatalsEnabled();
            this.maxLogsLength = builder.getExperimentalMaxLogLength();
            this.nonFatalRateLimitEnabled = builder.getExperimentalNonFatalRateLimitEnabled();
        }

        /* JADX INFO: renamed from: getObfuscatedNonFatalsEnabled$tracer_lite_crash_report_release, reason: from getter */
        public final boolean getObfuscatedNonFatalsEnabled() {
            return this.obfuscatedNonFatalsEnabled;
        }

        /* JADX INFO: renamed from: getMaxLogsLength$tracer_lite_crash_report_release, reason: from getter */
        public final int getMaxLogsLength() {
            return this.maxLogsLength;
        }

        /* JADX INFO: renamed from: getNonFatalRateLimitEnabled$tracer_lite_crash_report_release, reason: from getter */
        public final boolean getNonFatalRateLimitEnabled() {
            return this.nonFatalRateLimitEnabled;
        }

        /* JADX INFO: compiled from: TracerCrashReportLite.kt */
        @Metadata(d1 = {"\u0000\"\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u0005\n\u0002\u0010\u000b\n\u0002\b\b\n\u0002\u0018\u0002\n\u0000\u0018\u00002\u00020\u0001B\u0005¢\u0006\u0002\u0010\u0002J\u0006\u0010\u0012\u001a\u00020\u0013R\u001a\u0010\u0003\u001a\u00020\u0004X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u0005\u0010\u0006\"\u0004\b\u0007\u0010\bR\u001a\u0010\t\u001a\u00020\nX\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u000b\u0010\f\"\u0004\b\r\u0010\u000eR\u001a\u0010\u000f\u001a\u00020\nX\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u0010\u0010\f\"\u0004\b\u0011\u0010\u000e¨\u0006\u0014"}, d2 = {"Lru/ok/tracer/lite/crash/report/TracerCrashReportLite$Configuration$Builder;", "", "()V", "experimentalMaxLogLength", "", "getExperimentalMaxLogLength", "()I", "setExperimentalMaxLogLength", "(I)V", "experimentalNonFatalRateLimitEnabled", "", "getExperimentalNonFatalRateLimitEnabled", "()Z", "setExperimentalNonFatalRateLimitEnabled", "(Z)V", "obfuscatedNonFatalsEnabled", "getObfuscatedNonFatalsEnabled", "setObfuscatedNonFatalsEnabled", OperatingSystem.JsonKeys.BUILD, "Lru/ok/tracer/lite/crash/report/TracerCrashReportLite$Configuration;", "tracer-lite-crash-report_release"}, k = 1, mv = {1, 7, 1}, xi = 48)
        public static final class Builder {
            private int experimentalMaxLogLength = 65536;
            private boolean experimentalNonFatalRateLimitEnabled;
            private boolean obfuscatedNonFatalsEnabled;

            public final boolean getObfuscatedNonFatalsEnabled() {
                return this.obfuscatedNonFatalsEnabled;
            }

            public final void setObfuscatedNonFatalsEnabled(boolean z) {
                this.obfuscatedNonFatalsEnabled = z;
            }

            public final int getExperimentalMaxLogLength() {
                return this.experimentalMaxLogLength;
            }

            public final void setExperimentalMaxLogLength(int i) {
                this.experimentalMaxLogLength = i;
            }

            public final boolean getExperimentalNonFatalRateLimitEnabled() {
                return this.experimentalNonFatalRateLimitEnabled;
            }

            public final void setExperimentalNonFatalRateLimitEnabled(boolean z) {
                this.experimentalNonFatalRateLimitEnabled = z;
            }

            public final Configuration build() {
                return new Configuration(this, null);
            }
        }

        /* JADX INFO: compiled from: TracerCrashReportLite.kt */
        @Metadata(d1 = {"\u0000$\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0010\u0002\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\u0007\b\u0002¢\u0006\u0002\u0010\u0002J%\u0010\u0003\u001a\u00020\u00042\u0017\u0010\u0005\u001a\u0013\u0012\u0004\u0012\u00020\u0007\u0012\u0004\u0012\u00020\b0\u0006¢\u0006\u0002\b\tH\u0086\bø\u0001\u0000\u0082\u0002\u0007\n\u0005\b\u009920\u0001¨\u0006\n"}, d2 = {"Lru/ok/tracer/lite/crash/report/TracerCrashReportLite$Configuration$Companion;", "", "()V", OperatingSystem.JsonKeys.BUILD, "Lru/ok/tracer/lite/crash/report/TracerCrashReportLite$Configuration;", "block", "Lkotlin/Function1;", "Lru/ok/tracer/lite/crash/report/TracerCrashReportLite$Configuration$Builder;", "", "Lkotlin/ExtensionFunctionType;", "tracer-lite-crash-report_release"}, k = 1, mv = {1, 7, 1}, xi = 48)
        public static final class Companion {
            public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
                this();
            }

            private Companion() {
            }

            public final Configuration build(Function1<? super Builder, Unit> block) {
                Intrinsics.checkNotNullParameter(block, "block");
                Builder builder = new Builder();
                block.invoke(builder);
                return builder.build();
            }
        }
    }
}
