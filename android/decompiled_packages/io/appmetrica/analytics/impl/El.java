package io.appmetrica.analytics.impl;

import android.content.Context;
import javax.net.ssl.SSLSocketFactory;

/* JADX INFO: loaded from: classes7.dex */
public final class El implements S2 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Context f5664a;

    public El(Context context) {
        this.f5664a = context;
    }

    @Override // io.appmetrica.analytics.impl.S2, io.appmetrica.analytics.impl.InterfaceC2358om
    public final void a(C2231jm c2231jm) {
    }

    public final Context b() {
        return this.f5664a;
    }

    @Override // io.appmetrica.analytics.coreapi.internal.io.SslSocketFactoryProvider
    public final SSLSocketFactory getSslSocketFactory() {
        return null;
    }
}
