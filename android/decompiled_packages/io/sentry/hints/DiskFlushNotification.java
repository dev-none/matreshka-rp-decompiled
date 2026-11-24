package io.sentry.hints;

import io.sentry.protocol.SentryId;

/* JADX INFO: loaded from: classes7.dex */
public interface DiskFlushNotification {
    boolean isFlushable(SentryId sentryId);

    void markFlushed();

    void setFlushable(SentryId sentryId);
}
