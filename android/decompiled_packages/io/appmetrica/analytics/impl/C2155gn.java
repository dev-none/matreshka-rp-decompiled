package io.appmetrica.analytics.impl;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.gn, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2155gn implements Nn {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Nn f6102a;
    public final Object b;

    public C2155gn(Nn nn, Object obj) {
        this.f6102a = nn;
        this.b = obj;
    }

    @Override // io.appmetrica.analytics.impl.Nn
    public final Object a(Object obj) {
        return obj != this.f6102a.a(obj) ? this.b : obj;
    }
}
