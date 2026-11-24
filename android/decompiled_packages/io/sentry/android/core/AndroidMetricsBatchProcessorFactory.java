package io.sentry.android.core;

import io.sentry.SentryClient;
import io.sentry.SentryOptions;
import io.sentry.metrics.IMetricsBatchProcessor;
import io.sentry.metrics.IMetricsBatchProcessorFactory;

/* JADX INFO: loaded from: classes7.dex */
public final class AndroidMetricsBatchProcessorFactory implements IMetricsBatchProcessorFactory {
    @Override // io.sentry.metrics.IMetricsBatchProcessorFactory
    public IMetricsBatchProcessor create(SentryOptions sentryOptions, SentryClient sentryClient) {
        return new AndroidMetricsBatchProcessor(sentryOptions, sentryClient);
    }
}
