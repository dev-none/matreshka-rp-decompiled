package io.appmetrica.analytics.impl;

/* JADX INFO: loaded from: classes7.dex */
public final class Q0 implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ boolean f5843a;
    public final /* synthetic */ C2436s1 b;

    public Q0(C2436s1 c2436s1, boolean z) {
        this.b = c2436s1;
        this.f5843a = z;
    }

    @Override // java.lang.Runnable
    public final void run() {
        C2560x0 c2560x0 = this.b.f6303a;
        boolean z = this.f5843a;
        c2560x0.getClass();
        C2535w0.c().a(z, true);
    }
}
