package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.modulesapi.internal.network.NetworkClientWithCacheControl;
import io.appmetrica.analytics.modulesapi.internal.network.SimpleNetworkApi;
import io.appmetrica.analytics.networktasks.internal.CacheControlHttpsConnectionPerformer;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.wl, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2556wl implements SimpleNetworkApi {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final CacheControlHttpsConnectionPerformer f6391a = new CacheControlHttpsConnectionPerformer(((El) C2495ua.k().A()).getSslSocketFactory());

    @Override // io.appmetrica.analytics.modulesapi.internal.network.SimpleNetworkApi
    public final void performRequestWithCacheControl(String str, NetworkClientWithCacheControl networkClientWithCacheControl) {
        this.f6391a.performConnection(str, new C2289m3(networkClientWithCacheControl));
    }
}
