package io.appmetrica.analytics.impl;

/* JADX INFO: loaded from: classes7.dex */
public final class Ph implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ C2279li f5838a;

    public Ph(C2279li c2279li) {
        this.f5838a = c2279li;
    }

    @Override // java.lang.Runnable
    public final void run() {
        C2279li c2279li = this.f5838a;
        C2279li.a(c2279li.f6193a, c2279li.d, c2279li.e).resumeSession();
    }
}
