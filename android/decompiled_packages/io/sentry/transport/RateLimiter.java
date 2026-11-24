package io.sentry.transport;

import androidx.core.app.NotificationCompat;
import androidx.media3.extractor.text.ttml.TtmlNode;
import com.google.common.base.Ascii;
import io.appmetrica.analytics.coreutils.internal.StringUtils;
import io.sentry.DataCategory;
import io.sentry.Hint;
import io.sentry.ISentryLifecycleToken;
import io.sentry.SentryEnvelope;
import io.sentry.SentryEnvelopeItem;
import io.sentry.SentryLevel;
import io.sentry.SentryOptions;
import io.sentry.cache.EnvelopeCache;
import io.sentry.clientreport.DiscardReason;
import io.sentry.hints.DiskFlushNotification;
import io.sentry.hints.Retryable;
import io.sentry.hints.SubmissionResult;
import io.sentry.protocol.Feedback;
import io.sentry.util.AutoClosableReentrantLock;
import io.sentry.util.HintUtils;
import java.io.Closeable;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Date;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.Timer;
import java.util.TimerTask;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.CopyOnWriteArrayList;

/* JADX INFO: loaded from: classes7.dex */
public final class RateLimiter implements Closeable {
    private static final int HTTP_RETRY_AFTER_DEFAULT_DELAY_MILLIS = 60000;
    private final ICurrentDateProvider currentDateProvider;
    private final SentryOptions options;
    private final List<IRateLimitObserver> rateLimitObservers;
    private final Map<DataCategory, Date> sentryRetryAfterLimit;
    private Timer timer;
    private final AutoClosableReentrantLock timerLock;

    public interface IRateLimitObserver {
        void onRateLimitChanged(RateLimiter rateLimiter);
    }

    public RateLimiter(ICurrentDateProvider iCurrentDateProvider, SentryOptions sentryOptions) {
        this.sentryRetryAfterLimit = new ConcurrentHashMap();
        this.rateLimitObservers = new CopyOnWriteArrayList();
        this.timer = null;
        this.timerLock = new AutoClosableReentrantLock();
        this.currentDateProvider = iCurrentDateProvider;
        this.options = sentryOptions;
    }

    public RateLimiter(SentryOptions sentryOptions) {
        this(CurrentDateProvider.getInstance(), sentryOptions);
    }

    public SentryEnvelope filter(SentryEnvelope sentryEnvelope, Hint hint) {
        ArrayList arrayList = null;
        for (SentryEnvelopeItem sentryEnvelopeItem : sentryEnvelope.getItems()) {
            if (isRetryAfter(sentryEnvelopeItem.getHeader().getType().getItemType())) {
                if (arrayList == null) {
                    arrayList = new ArrayList();
                }
                arrayList.add(sentryEnvelopeItem);
                this.options.getClientReportRecorder().recordLostEnvelopeItem(DiscardReason.RATELIMIT_BACKOFF, sentryEnvelopeItem);
            }
        }
        if (arrayList == null) {
            return sentryEnvelope;
        }
        this.options.getLogger().log(SentryLevel.WARNING, "%d envelope items will be dropped due rate limiting.", Integer.valueOf(arrayList.size()));
        ArrayList arrayList2 = new ArrayList();
        for (SentryEnvelopeItem sentryEnvelopeItem2 : sentryEnvelope.getItems()) {
            if (!arrayList.contains(sentryEnvelopeItem2)) {
                arrayList2.add(sentryEnvelopeItem2);
            }
        }
        if (arrayList2.isEmpty()) {
            this.options.getLogger().log(SentryLevel.WARNING, "Envelope discarded due all items rate limited.", new Object[0]);
            markHintWhenSendingFailed(hint, false);
            return null;
        }
        return new SentryEnvelope(sentryEnvelope.getHeader(), arrayList2);
    }

    public boolean isActiveForCategory(DataCategory dataCategory) {
        Date date;
        Date date2 = new Date(this.currentDateProvider.getCurrentTimeMillis());
        Date date3 = this.sentryRetryAfterLimit.get(DataCategory.All);
        if (date3 != null && !date2.after(date3)) {
            return true;
        }
        if (DataCategory.Unknown.equals(dataCategory) || (date = this.sentryRetryAfterLimit.get(dataCategory)) == null) {
            return false;
        }
        return !date2.after(date);
    }

    public boolean isAnyRateLimitActive() {
        Date date = new Date(this.currentDateProvider.getCurrentTimeMillis());
        Iterator<DataCategory> it = this.sentryRetryAfterLimit.keySet().iterator();
        while (it.hasNext()) {
            Date date2 = this.sentryRetryAfterLimit.get(it.next());
            if (date2 != null && !date.after(date2)) {
                return true;
            }
        }
        return false;
    }

    private void markHintWhenSendingFailed(Hint hint, final boolean z) {
        HintUtils.runIfHasType(hint, SubmissionResult.class, new HintUtils.SentryConsumer() { // from class: io.sentry.transport.RateLimiter$$ExternalSyntheticLambda0
            @Override // io.sentry.util.HintUtils.SentryConsumer
            public final void accept(Object obj) {
                ((SubmissionResult) obj).setResult(false);
            }
        });
        HintUtils.runIfHasType(hint, Retryable.class, new HintUtils.SentryConsumer() { // from class: io.sentry.transport.RateLimiter$$ExternalSyntheticLambda1
            @Override // io.sentry.util.HintUtils.SentryConsumer
            public final void accept(Object obj) {
                ((Retryable) obj).setRetry(z);
            }
        });
        HintUtils.runIfHasType(hint, DiskFlushNotification.class, new HintUtils.SentryConsumer() { // from class: io.sentry.transport.RateLimiter$$ExternalSyntheticLambda2
            @Override // io.sentry.util.HintUtils.SentryConsumer
            public final void accept(Object obj) {
                this.f$0.m9854xc3679093((DiskFlushNotification) obj);
            }
        });
    }

    /* JADX INFO: renamed from: lambda$markHintWhenSendingFailed$2$io-sentry-transport-RateLimiter, reason: not valid java name */
    /* synthetic */ void m9854xc3679093(DiskFlushNotification diskFlushNotification) {
        diskFlushNotification.markFlushed();
        this.options.getLogger().log(SentryLevel.DEBUG, "Disk flush envelope fired due to rate limit", new Object[0]);
    }

    private boolean isRetryAfter(String str) {
        Iterator<DataCategory> it = getCategoryFromItemType(str).iterator();
        while (it.hasNext()) {
            if (isActiveForCategory(it.next())) {
                return true;
            }
        }
        return false;
    }

    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    private List<DataCategory> getCategoryFromItemType(String str) {
        str.hashCode();
        byte b = -1;
        switch (str.hashCode()) {
            case -1963501277:
                if (str.equals("attachment")) {
                    b = 0;
                }
                break;
            case -1639516637:
                if (str.equals("replay_video")) {
                    b = 1;
                }
                break;
            case -729715625:
                if (str.equals("profile_chunk")) {
                    b = 2;
                }
                break;
            case -309425751:
                if (str.equals("profile")) {
                    b = 3;
                }
                break;
            case -191501435:
                if (str.equals(Feedback.TYPE)) {
                    b = 4;
                }
                break;
            case 107332:
                if (str.equals("log")) {
                    b = 5;
                }
                break;
            case 3536714:
                if (str.equals(TtmlNode.TAG_SPAN)) {
                    b = 6;
                }
                break;
            case 96891546:
                if (str.equals(NotificationCompat.CATEGORY_EVENT)) {
                    b = 7;
                }
                break;
            case 229505514:
                if (str.equals("trace_metric")) {
                    b = 8;
                }
                break;
            case 1536888764:
                if (str.equals("check_in")) {
                    b = 9;
                }
                break;
            case 1984987798:
                if (str.equals(EnvelopeCache.PREFIX_CURRENT_SESSION_FILE)) {
                    b = 10;
                }
                break;
            case 2141246174:
                if (str.equals("transaction")) {
                    b = Ascii.VT;
                }
                break;
        }
        switch (b) {
            case 0:
                return Collections.singletonList(DataCategory.Attachment);
            case 1:
                return Collections.singletonList(DataCategory.Replay);
            case 2:
                return Arrays.asList(DataCategory.ProfileChunkUi, DataCategory.ProfileChunk);
            case 3:
                return Collections.singletonList(DataCategory.Profile);
            case 4:
                return Collections.singletonList(DataCategory.Feedback);
            case 5:
                return Collections.singletonList(DataCategory.LogItem);
            case 6:
                return Collections.singletonList(DataCategory.Span);
            case 7:
                return Collections.singletonList(DataCategory.Error);
            case 8:
                return Collections.singletonList(DataCategory.TraceMetric);
            case 9:
                return Collections.singletonList(DataCategory.Monitor);
            case 10:
                return Collections.singletonList(DataCategory.Session);
            case 11:
                return Collections.singletonList(DataCategory.Transaction);
            default:
                return Collections.singletonList(DataCategory.Unknown);
        }
    }

    public void updateRetryAfterLimits(String str, String str2, int i) {
        if (str == null) {
            if (i == 429) {
                applyRetryAfterOnlyIfLonger(DataCategory.All, new Date(this.currentDateProvider.getCurrentTimeMillis() + parseRetryAfterOrDefault(str2)));
                return;
            }
            return;
        }
        for (String str3 : str.split(StringUtils.COMMA, -1)) {
            String[] strArrSplit = str3.replace(" ", "").split(StringUtils.PROCESS_POSTFIX_DELIMITER, -1);
            if (strArrSplit.length > 0) {
                long retryAfterOrDefault = parseRetryAfterOrDefault(strArrSplit[0]);
                if (strArrSplit.length > 1) {
                    String str4 = strArrSplit[1];
                    Date date = new Date(this.currentDateProvider.getCurrentTimeMillis() + retryAfterOrDefault);
                    if (str4 != null && !str4.isEmpty()) {
                        for (String str5 : str4.split(";", -1)) {
                            DataCategory dataCategoryValueOf = DataCategory.Unknown;
                            try {
                                String strCamelCase = io.sentry.util.StringUtils.camelCase(str5);
                                if (strCamelCase != null) {
                                    dataCategoryValueOf = DataCategory.valueOf(strCamelCase);
                                } else {
                                    this.options.getLogger().log(SentryLevel.ERROR, "Couldn't capitalize: %s", str5);
                                }
                            } catch (IllegalArgumentException e) {
                                this.options.getLogger().log(SentryLevel.INFO, e, "Unknown category: %s", str5);
                            }
                            if (!DataCategory.Unknown.equals(dataCategoryValueOf)) {
                                applyRetryAfterOnlyIfLonger(dataCategoryValueOf, date);
                            }
                        }
                    } else {
                        applyRetryAfterOnlyIfLonger(DataCategory.All, date);
                    }
                }
            }
        }
    }

    private void applyRetryAfterOnlyIfLonger(DataCategory dataCategory, Date date) {
        Date date2 = this.sentryRetryAfterLimit.get(dataCategory);
        if (date2 == null || date.after(date2)) {
            this.sentryRetryAfterLimit.put(dataCategory, date);
            notifyRateLimitObservers();
            ISentryLifecycleToken iSentryLifecycleTokenAcquire = this.timerLock.acquire();
            try {
                if (this.timer == null) {
                    this.timer = new Timer(true);
                }
                this.timer.schedule(new TimerTask() { // from class: io.sentry.transport.RateLimiter.1
                    @Override // java.util.TimerTask, java.lang.Runnable
                    public void run() {
                        RateLimiter.this.notifyRateLimitObservers();
                    }
                }, date);
                if (iSentryLifecycleTokenAcquire != null) {
                    iSentryLifecycleTokenAcquire.close();
                }
            } catch (Throwable th) {
                if (iSentryLifecycleTokenAcquire != null) {
                    try {
                        iSentryLifecycleTokenAcquire.close();
                    } catch (Throwable th2) {
                        th.addSuppressed(th2);
                    }
                }
                throw th;
            }
        }
    }

    private long parseRetryAfterOrDefault(String str) {
        if (str == null) {
            return 60000L;
        }
        try {
            return (long) (Double.parseDouble(str) * 1000.0d);
        } catch (NumberFormatException unused) {
            return 60000L;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void notifyRateLimitObservers() {
        Iterator<IRateLimitObserver> it = this.rateLimitObservers.iterator();
        while (it.hasNext()) {
            it.next().onRateLimitChanged(this);
        }
    }

    public void addRateLimitObserver(IRateLimitObserver iRateLimitObserver) {
        this.rateLimitObservers.add(iRateLimitObserver);
    }

    public void removeRateLimitObserver(IRateLimitObserver iRateLimitObserver) {
        this.rateLimitObservers.remove(iRateLimitObserver);
    }

    @Override // java.io.Closeable, java.lang.AutoCloseable
    public void close() throws IOException {
        ISentryLifecycleToken iSentryLifecycleTokenAcquire = this.timerLock.acquire();
        try {
            Timer timer = this.timer;
            if (timer != null) {
                timer.cancel();
                this.timer = null;
            }
            if (iSentryLifecycleTokenAcquire != null) {
                iSentryLifecycleTokenAcquire.close();
            }
            this.rateLimitObservers.clear();
        } catch (Throwable th) {
            if (iSentryLifecycleTokenAcquire != null) {
                try {
                    iSentryLifecycleTokenAcquire.close();
                } catch (Throwable th2) {
                    th.addSuppressed(th2);
                }
            }
            throw th;
        }
    }
}
