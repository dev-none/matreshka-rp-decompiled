package io.appmetrica.analytics.impl;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.bi, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class RunnableC2021bi implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ String f6017a;
    public final /* synthetic */ byte[] b;
    public final /* synthetic */ C2279li c;

    public RunnableC2021bi(C2279li c2279li, String str, byte[] bArr) {
        this.c = c2279li;
        this.f6017a = str;
        this.b = bArr;
    }

    @Override // java.lang.Runnable
    public final void run() {
        C2279li c2279li = this.c;
        C2279li.a(c2279li.f6193a, c2279li.d, c2279li.e).setSessionExtra(this.f6017a, this.b);
    }
}
