package io.sentry.logger;

import io.sentry.SentryClient;
import io.sentry.SentryOptions;

/* JADX INFO: loaded from: classes7.dex */
public interface ILoggerBatchProcessorFactory {
    ILoggerBatchProcessor create(SentryOptions sentryOptions, SentryClient sentryClient);
}
