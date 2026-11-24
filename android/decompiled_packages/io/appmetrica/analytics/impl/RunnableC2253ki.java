package io.appmetrica.analytics.impl;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.ki, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class RunnableC2253ki implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ String f6175a;
    public final /* synthetic */ String b;
    public final /* synthetic */ C2279li c;

    public RunnableC2253ki(C2279li c2279li, String str, String str2) {
        this.c = c2279li;
        this.f6175a = str;
        this.b = str2;
    }

    @Override // java.lang.Runnable
    public final void run() {
        C2279li c2279li = this.c;
        C2279li.a(c2279li.f6193a, c2279li.d, c2279li.e).reportEvent(this.f6175a, this.b);
    }
}
