package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreutils.internal.time.SystemTimeProvider;
import io.appmetrica.analytics.coreutils.internal.time.TimeProvider;
import java.util.HashMap;
import java.util.Map;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.r9, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2419r9 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final C2018bf f6291a;
    public final zo b;
    public final Wk c;
    public final S6 d;
    public final M8 e;
    public final Ok f;
    public final C2209j0 g;
    public final Y8 h;
    public final C2137g5 i;
    public final TimeProvider j;
    public final int k;
    public long l;
    public int m;

    public C2419r9(C2018bf c2018bf, zo zoVar, Wk wk, S6 s6, C2209j0 c2209j0, M8 m8, Ok ok, int i, C2137g5 c2137g5, Y8 y8, SystemTimeProvider systemTimeProvider) {
        this.f6291a = c2018bf;
        this.b = zoVar;
        this.c = wk;
        this.d = s6;
        this.g = c2209j0;
        this.e = m8;
        this.f = ok;
        this.k = i;
        this.h = y8;
        this.j = systemTimeProvider;
        this.i = c2137g5;
        this.l = c2018bf.i();
        this.m = c2018bf.h();
    }

    public final void a(W5 w5, Yk yk) {
        Map map = w5.p;
        Ok ok = this.f;
        ok.getClass();
        map.putAll(new HashMap(ok.b));
        w5.c(this.f6291a.j());
        w5.o = Integer.valueOf(this.b.b());
        C2184i0 c2184i0A = this.g.a();
        M8 m8 = this.e;
        m8.getClass();
        L8 l8 = (L8) m8.b.a(EnumC2195ib.a(w5.d));
        S6 s6 = this.d;
        E8 e8A = l8.a(w5);
        int i = w5.d;
        Y8 y8 = this.h;
        C2368p7 c2368p7 = new C2368p7(s6.g, yk, i, y8, e8A, (C2378ph) s6.h.k.a(), c2184i0A);
        Long lValueOf = Long.valueOf(yk.f5974a);
        EnumC1998al enumC1998al = yk.d;
        Long lValueOf2 = Long.valueOf(yk.b);
        EnumC2195ib enumC2195ibA = EnumC2195ib.a(c2368p7.h.d);
        long jOptLong = 0;
        if (!D9.g.contains(EnumC2195ib.a(i))) {
            zo zoVar = y8.b;
            synchronized (zoVar) {
                jOptLong = zoVar.f6438a.a().optLong("global_number", 0L);
            }
            y8.b.b(1 + jOptLong);
        }
        s6.a(s6.l.fromModel(new C2293m7(lValueOf, enumC1998al, lValueOf2, enumC2195ibA, Long.valueOf(jOptLong), Long.valueOf(yk.c), c2368p7.a())));
        this.i.f6087a.h();
    }
}
