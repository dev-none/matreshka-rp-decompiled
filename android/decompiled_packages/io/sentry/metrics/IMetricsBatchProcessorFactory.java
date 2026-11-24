package io.sentry.metrics;

import io.sentry.SentryClient;
import io.sentry.SentryOptions;

/* JADX INFO: loaded from: classes7.dex */
public interface IMetricsBatchProcessorFactory {
    IMetricsBatchProcessor create(SentryOptions sentryOptions, SentryClient sentryClient);
}
