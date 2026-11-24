package io.appmetrica.analytics.impl;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.p1, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class RunnableC2362p1 implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ String f6248a;
    public final /* synthetic */ Throwable b;
    public final /* synthetic */ C2436s1 c;

    public RunnableC2362p1(C2436s1 c2436s1, String str, Throwable th) {
        this.c = c2436s1;
        this.f6248a = str;
        this.b = th;
    }

    @Override // java.lang.Runnable
    public final void run() {
        C2436s1.a(this.c).reportError(this.f6248a, this.b);
    }
}
