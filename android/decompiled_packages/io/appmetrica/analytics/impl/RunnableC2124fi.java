package io.appmetrica.analytics.impl;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.fi, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class RunnableC2124fi implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ V f6079a;
    public final /* synthetic */ C2279li b;

    public RunnableC2124fi(C2279li c2279li, V v) {
        this.b = c2279li;
        this.f6079a = v;
    }

    @Override // java.lang.Runnable
    public final void run() {
        C2279li c2279li = this.b;
        C2279li.a(c2279li.f6193a, c2279li.d, c2279li.e).a(this.f6079a);
    }
}
