package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.DeferredDeeplinkParametersListener;

/* JADX INFO: loaded from: classes7.dex */
public final class Y0 implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ DeferredDeeplinkParametersListener f5962a;
    public final /* synthetic */ C2436s1 b;

    public Y0(C2436s1 c2436s1, DeferredDeeplinkParametersListener deferredDeeplinkParametersListener) {
        this.b = c2436s1;
        this.f5962a = deferredDeeplinkParametersListener;
    }

    @Override // java.lang.Runnable
    public final void run() {
        this.b.f6303a.getClass();
        C2535w0 c2535w0 = C2535w0.e;
        c2535w0.f().a(this.f5962a);
    }
}
