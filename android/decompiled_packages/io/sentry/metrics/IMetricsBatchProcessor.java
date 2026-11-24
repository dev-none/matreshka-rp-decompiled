package io.sentry.metrics;

import io.sentry.SentryMetricsEvent;

/* JADX INFO: loaded from: classes7.dex */
public interface IMetricsBatchProcessor {
    void add(SentryMetricsEvent sentryMetricsEvent);

    void close(boolean z);

    void flush(long j);
}
