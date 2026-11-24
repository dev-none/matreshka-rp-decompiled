package io.appmetrica.analytics.impl;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.ii, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class RunnableC2201ii implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ C2279li f6137a;

    public RunnableC2201ii(C2279li c2279li) {
        this.f6137a = c2279li;
    }

    @Override // java.lang.Runnable
    public final void run() {
        C2279li c2279li = this.f6137a;
        C2279li.a(c2279li.f6193a, c2279li.d, c2279li.e).clearAppEnvironment();
    }
}
