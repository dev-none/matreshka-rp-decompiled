package io.sentry.metrics;

import io.sentry.SentryClient;
import io.sentry.SentryOptions;

/* JADX INFO: loaded from: classes7.dex */
public final class DefaultMetricsBatchProcessorFactory implements IMetricsBatchProcessorFactory {
    @Override // io.sentry.metrics.IMetricsBatchProcessorFactory
    public IMetricsBatchProcessor create(SentryOptions sentryOptions, SentryClient sentryClient) {
        return new MetricsBatchProcessor(sentryOptions, sentryClient);
    }
}
