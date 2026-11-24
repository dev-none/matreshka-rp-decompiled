package io.appmetrica.analytics.impl;

/* JADX INFO: loaded from: classes7.dex */
public final class Rh implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ String f5868a;
    public final /* synthetic */ C2279li b;

    public Rh(C2279li c2279li, String str) {
        this.b = c2279li;
        this.f5868a = str;
    }

    @Override // java.lang.Runnable
    public final void run() {
        C2279li c2279li = this.b;
        C2279li.a(c2279li.f6193a, c2279li.d, c2279li.e).setUserProfileID(this.f5868a);
    }
}
