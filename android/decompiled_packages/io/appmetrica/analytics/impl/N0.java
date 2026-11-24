package io.appmetrica.analytics.impl;

/* JADX INFO: loaded from: classes7.dex */
public final class N0 implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ String f5799a;
    public final /* synthetic */ C2436s1 b;

    public N0(C2436s1 c2436s1, String str) {
        this.b = c2436s1;
        this.f5799a = str;
    }

    @Override // java.lang.Runnable
    public final void run() {
        C2436s1.a(this.b).c(this.f5799a);
    }
}
