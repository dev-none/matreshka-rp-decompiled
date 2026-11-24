package io.appmetrica.analytics.impl;

/* JADX INFO: loaded from: classes7.dex */
public final class L0 implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ String f5766a;
    public final /* synthetic */ C2436s1 b;

    public L0(C2436s1 c2436s1, String str) {
        this.b = c2436s1;
        this.f5766a = str;
    }

    @Override // java.lang.Runnable
    public final void run() {
        this.b.d().b.a(this.f5766a, false);
    }
}
