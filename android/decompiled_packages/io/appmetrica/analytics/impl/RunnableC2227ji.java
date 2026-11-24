package io.appmetrica.analytics.impl;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.ji, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class RunnableC2227ji implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ String f6155a;
    public final /* synthetic */ C2279li b;

    public RunnableC2227ji(C2279li c2279li, String str) {
        this.b = c2279li;
        this.f6155a = str;
    }

    @Override // java.lang.Runnable
    public final void run() {
        C2279li c2279li = this.b;
        C2279li.a(c2279li.f6193a, c2279li.d, c2279li.e).reportEvent(this.f6155a);
    }
}
