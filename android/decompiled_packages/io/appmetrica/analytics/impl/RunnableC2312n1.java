package io.appmetrica.analytics.impl;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.n1, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class RunnableC2312n1 implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ String f6217a;
    public final /* synthetic */ String b;
    public final /* synthetic */ C2436s1 c;

    public RunnableC2312n1(C2436s1 c2436s1, String str, String str2) {
        this.c = c2436s1;
        this.f6217a = str;
        this.b = str2;
    }

    @Override // java.lang.Runnable
    public final void run() {
        C2436s1.a(this.c).reportEvent(this.f6217a, this.b);
    }
}
