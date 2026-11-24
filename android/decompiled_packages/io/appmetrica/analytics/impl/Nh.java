package io.appmetrica.analytics.impl;

/* JADX INFO: loaded from: classes7.dex */
public final class Nh implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ String f5809a;
    public final /* synthetic */ String b;
    public final /* synthetic */ Throwable c;
    public final /* synthetic */ C2279li d;

    public Nh(C2279li c2279li, String str, String str2, Throwable th) {
        this.d = c2279li;
        this.f5809a = str;
        this.b = str2;
        this.c = th;
    }

    @Override // java.lang.Runnable
    public final void run() {
        C2279li c2279li = this.d;
        C2279li.a(c2279li.f6193a, c2279li.d, c2279li.e).reportError(this.f5809a, this.b, this.c);
    }
}
