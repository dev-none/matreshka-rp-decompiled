package io.appmetrica.analytics.impl;

/* JADX INFO: loaded from: classes7.dex */
public final class Oh implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ Throwable f5821a;
    public final /* synthetic */ C2279li b;

    public Oh(C2279li c2279li, Throwable th) {
        this.b = c2279li;
        this.f5821a = th;
    }

    @Override // java.lang.Runnable
    public final void run() {
        C2279li c2279li = this.b;
        C2279li.a(c2279li.f6193a, c2279li.d, c2279li.e).reportUnhandledException(this.f5821a);
    }
}
