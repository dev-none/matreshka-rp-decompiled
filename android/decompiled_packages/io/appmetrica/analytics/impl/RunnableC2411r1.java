package io.appmetrica.analytics.impl;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.r1, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class RunnableC2411r1 implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ Throwable f6284a;
    public final /* synthetic */ C2436s1 b;

    public RunnableC2411r1(C2436s1 c2436s1, Throwable th) {
        this.b = c2436s1;
        this.f6284a = th;
    }

    @Override // java.lang.Runnable
    public final void run() {
        C2436s1.a(this.b).reportUnhandledException(this.f6284a);
    }
}
