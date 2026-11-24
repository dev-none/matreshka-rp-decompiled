package io.appmetrica.analytics.impl;

/* JADX INFO: loaded from: classes7.dex */
public final class Qh implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ C2279li f5852a;

    public Qh(C2279li c2279li) {
        this.f5852a = c2279li;
    }

    @Override // java.lang.Runnable
    public final void run() {
        C2279li c2279li = this.f5852a;
        C2279li.a(c2279li.f6193a, c2279li.d, c2279li.e).pauseSession();
    }
}
