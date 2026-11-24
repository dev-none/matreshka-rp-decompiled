package io.appmetrica.analytics.impl;

import android.content.ContentValues;

/* JADX INFO: loaded from: classes7.dex */
public final class S8 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final String f5880a;
    public String b;
    public final Long c;
    public final Long d;
    public final Long e;
    public final Long f;
    public final C2393q7 g;
    public final EnumC2195ib h;
    public final Integer i;
    public final String j;
    public final Integer k;
    public final Integer l;
    public final String m;
    public final String n;
    public final N8 o;
    public final EnumC2245ka p;
    public final EnumC2469t9 q;
    public final Boolean r;
    public final Integer s;
    public final byte[] t;

    /* JADX WARN: Multi-variable type inference failed */
    public S8(ContentValues contentValues) {
        C2293m7 model = new C2318n7(null, 1, 0 == true ? 1 : 0).toModel(contentValues);
        this.f5880a = model.a().j();
        this.b = model.a().p();
        this.c = model.c();
        this.d = model.b();
        this.e = model.a().k();
        this.f = model.d();
        this.g = model.a().i();
        this.h = model.e();
        this.i = model.a().d();
        this.j = model.a().f();
        this.k = model.a().o();
        this.l = model.a().c();
        this.m = model.a().b();
        this.n = model.a().m();
        N8 n8E = model.a().e();
        this.o = n8E == null ? N8.a(null) : n8E;
        EnumC2245ka enumC2245kaH = model.a().h();
        this.p = enumC2245kaH == null ? EnumC2245ka.a(null) : enumC2245kaH;
        this.q = model.a().n();
        this.r = model.a().a();
        this.s = model.a().l();
        this.t = model.a().g();
    }
}
