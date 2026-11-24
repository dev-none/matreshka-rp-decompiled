package io.appmetrica.analytics.impl;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.di, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class RunnableC2073di implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ Sn f6048a;
    public final /* synthetic */ C2279li b;

    public RunnableC2073di(C2279li c2279li, Sn sn) {
        this.b = c2279li;
        this.f6048a = sn;
    }

    @Override // java.lang.Runnable
    public final void run() {
        C2279li c2279li = this.b;
        C2279li.a(c2279li.f6193a, c2279li.d, c2279li.e).a(this.f6048a);
    }
}
