package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.DeferredDeeplinkListener;

/* JADX INFO: loaded from: classes7.dex */
public final class Z0 implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ DeferredDeeplinkListener f5978a;
    public final /* synthetic */ C2436s1 b;

    public Z0(C2436s1 c2436s1, DeferredDeeplinkListener deferredDeeplinkListener) {
        this.b = c2436s1;
        this.f5978a = deferredDeeplinkListener;
    }

    @Override // java.lang.Runnable
    public final void run() {
        this.b.f6303a.getClass();
        C2535w0 c2535w0 = C2535w0.e;
        c2535w0.f().a(this.f5978a);
    }
}
