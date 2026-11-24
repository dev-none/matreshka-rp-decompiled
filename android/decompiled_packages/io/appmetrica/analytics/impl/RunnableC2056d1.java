package io.appmetrica.analytics.impl;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.d1, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class RunnableC2056d1 implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ String f6037a;
    public final /* synthetic */ C2436s1 b;

    public RunnableC2056d1(C2436s1 c2436s1, String str) {
        this.b = c2436s1;
        this.f6037a = str;
    }

    @Override // java.lang.Runnable
    public final void run() {
        C2436s1.a(this.b).b(this.f6037a);
    }
}
