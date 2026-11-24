package io.sentry;

import io.sentry.transport.ITransport;

/* JADX INFO: loaded from: classes7.dex */
public interface ITransportFactory {
    ITransport create(SentryOptions sentryOptions, RequestDetails requestDetails);
}
