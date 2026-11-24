package io.appmetrica.analytics.impl;

/* JADX INFO: loaded from: classes7.dex */
public abstract class X7 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Kc f5953a;

    public X7() {
        Kc kc = new Kc(0);
        kc.a(Y7.b, 0);
        kc.a(Y7.c, 1);
        kc.a(Y7.d, 2);
        kc.a(Y7.e, 3);
        this.f5953a = kc;
    }

    public final Kc a() {
        return this.f5953a;
    }

    public abstract boolean a(Object obj, Object obj2);
}
