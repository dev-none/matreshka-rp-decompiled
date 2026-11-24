package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.modulesapi.internal.network.NetworkClientWithCacheControl;
import io.appmetrica.analytics.networktasks.internal.CacheControlHttpsConnectionPerformer;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.m3, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2289m3 implements CacheControlHttpsConnectionPerformer.Client {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final NetworkClientWithCacheControl f6202a;

    public C2289m3(NetworkClientWithCacheControl networkClientWithCacheControl) {
        this.f6202a = networkClientWithCacheControl;
    }

    @Override // io.appmetrica.analytics.networktasks.internal.CacheControlHttpsConnectionPerformer.Client
    public final String getOldETag() {
        return this.f6202a.getETag();
    }

    @Override // io.appmetrica.analytics.networktasks.internal.CacheControlHttpsConnectionPerformer.Client
    public final void onError() {
        this.f6202a.onError();
    }

    @Override // io.appmetrica.analytics.networktasks.internal.CacheControlHttpsConnectionPerformer.Client
    public final void onNotModified() {
        this.f6202a.onNotModified();
    }

    @Override // io.appmetrica.analytics.networktasks.internal.CacheControlHttpsConnectionPerformer.Client
    public final void onResponse(String str, byte[] bArr) {
        this.f6202a.onResponse(str, bArr);
    }
}
