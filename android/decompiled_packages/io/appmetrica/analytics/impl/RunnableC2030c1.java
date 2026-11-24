package io.appmetrica.analytics.impl;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.c1, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class RunnableC2030c1 implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ String f6022a;
    public final /* synthetic */ String b;
    public final /* synthetic */ C2436s1 c;

    public RunnableC2030c1(C2436s1 c2436s1, String str, String str2) {
        this.c = c2436s1;
        this.f6022a = str;
        this.b = str2;
    }

    @Override // java.lang.Runnable
    public final void run() {
        C2436s1.a(this.c).b(this.f6022a, this.b);
    }
}
