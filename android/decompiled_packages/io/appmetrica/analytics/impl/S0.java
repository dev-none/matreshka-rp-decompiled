package io.appmetrica.analytics.impl;

/* JADX INFO: loaded from: classes7.dex */
public final class S0 implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ String f5874a;
    public final /* synthetic */ C2436s1 b;

    public S0(C2436s1 c2436s1, String str) {
        this.b = c2436s1;
        this.f5874a = str;
    }

    @Override // java.lang.Runnable
    public final void run() {
        C2560x0 c2560x0 = this.b.f6303a;
        String str = this.f5874a;
        c2560x0.getClass();
        C2535w0.c().setUserProfileID(str);
    }
}
