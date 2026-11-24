package io.appmetrica.analytics.impl;

/* JADX INFO: loaded from: classes7.dex */
public final class Xh implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ boolean f5957a;
    public final /* synthetic */ C2279li b;

    public Xh(C2279li c2279li, boolean z) {
        this.b = c2279li;
        this.f5957a = z;
    }

    @Override // java.lang.Runnable
    public final void run() {
        C2279li c2279li = this.b;
        C2279li.a(c2279li.f6193a, c2279li.d, c2279li.e).setDataSendingEnabled(this.f5957a);
    }
}
