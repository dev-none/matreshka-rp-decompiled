package io.sentry.logger;

import io.sentry.SentryLogEvent;

/* JADX INFO: loaded from: classes7.dex */
public interface ILoggerBatchProcessor {
    void add(SentryLogEvent sentryLogEvent);

    void close(boolean z);

    void flush(long j);
}
