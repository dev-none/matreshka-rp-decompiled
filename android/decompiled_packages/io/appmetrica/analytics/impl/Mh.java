package io.appmetrica.analytics.impl;

/* JADX INFO: loaded from: classes7.dex */
public final class Mh implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ String f5793a;
    public final /* synthetic */ Throwable b;
    public final /* synthetic */ C2279li c;

    public Mh(C2279li c2279li, String str, Throwable th) {
        this.c = c2279li;
        this.f5793a = str;
        this.b = th;
    }

    @Override // java.lang.Runnable
    public final void run() {
        C2279li c2279li = this.c;
        C2279li.a(c2279li.f6193a, c2279li.d, c2279li.e).reportError(this.f5793a, this.b);
    }
}
