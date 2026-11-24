package io.appmetrica.analytics.networktasks.internal;

/* JADX INFO: loaded from: classes7.dex */
public class DefaultNetworkResponseHandler implements NetworkResponseHandler<DefaultResponseParser.Response> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final DefaultResponseParser f6499a;

    public DefaultNetworkResponseHandler() {
        this(new DefaultResponseParser());
    }

    DefaultNetworkResponseHandler(DefaultResponseParser defaultResponseParser) {
        this.f6499a = defaultResponseParser;
    }

    /* JADX WARN: Can't rename method to resolve collision */
    @Override // io.appmetrica.analytics.networktasks.internal.NetworkResponseHandler
    public DefaultResponseParser.Response handle(ResponseDataHolder responseDataHolder) {
        if (200 == responseDataHolder.getResponseCode()) {
            return this.f6499a.parse(responseDataHolder.getResponseData());
        }
        return null;
    }
}
