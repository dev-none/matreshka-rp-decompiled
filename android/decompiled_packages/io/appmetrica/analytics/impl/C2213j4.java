package io.appmetrica.analytics.impl;

import android.content.Context;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.j4, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2213j4 {
    public static volatile C2213j4 u;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final C2591y6 f6145a;
    public final L7 b;
    public final Z3 c;
    public final Q1 d;
    public final C2335o e;
    public final C2024bl f;
    public final L5 g;
    public final C2285m h;
    public final C2384pn i;
    public Cd j;
    public final C2410r0 k;
    public volatile C2136g4 l;
    public final Zc m;
    public volatile C1992af n;
    public C2151gj o;
    public final C2560x0 p;
    public final U1 q;
    public final C2219ja r;
    public volatile C2003b0 s;
    public volatile T9 t;

    public C2213j4(C2591y6 c2591y6, C2335o c2335o, Z3 z3) {
        this(c2591y6, c2335o, z3, new C2285m(c2335o));
    }

    public static C2213j4 l() {
        if (u == null) {
            synchronized (C2213j4.class) {
                if (u == null) {
                    u = new C2213j4(new C2591y6(), new C2335o(), new Z3());
                }
            }
        }
        return u;
    }

    public final C2335o a() {
        return this.e;
    }

    public final C1992af b(Context context) {
        C1992af c1992af;
        C1992af c1992af2 = this.n;
        if (c1992af2 != null) {
            return c1992af2;
        }
        synchronized (this) {
            c1992af = this.n;
            if (c1992af == null) {
                c1992af = new C1992af(C2139g7.a(context).a());
                this.n = c1992af;
            }
        }
        return c1992af;
    }

    public final C2410r0 c() {
        return this.k;
    }

    public final C2560x0 d() {
        return this.p;
    }

    public final Q1 e() {
        return this.d;
    }

    public final U1 f() {
        return this.q;
    }

    public final Z3 g() {
        return this.c;
    }

    public final L5 h() {
        return this.g;
    }

    public final C2591y6 i() {
        return this.f6145a;
    }

    public final L7 j() {
        return this.b;
    }

    public final C2219ja k() {
        return this.r;
    }

    public final C2136g4 m() {
        C2136g4 c2136g4;
        C2136g4 c2136g5 = this.l;
        if (c2136g5 != null) {
            return c2136g5;
        }
        synchronized (this) {
            c2136g4 = this.l;
            if (c2136g4 == null) {
                c2136g4 = new C2136g4();
                this.l = c2136g4;
            }
        }
        return c2136g4;
    }

    public final C2591y6 n() {
        return this.f6145a;
    }

    public final C2024bl o() {
        return this.f;
    }

    public C2213j4(C2591y6 c2591y6, C2335o c2335o, Z3 z3, C2285m c2285m) {
        this(c2591y6, new L7(), z3, c2285m, new Q1(), c2335o, new C2024bl(c2335o, c2285m), new L5(c2335o), new C2384pn(), new C2410r0());
    }

    public final synchronized Cd a(Context context) {
        if (this.j == null) {
            this.j = new Cd(context, new oo());
        }
        return this.j;
    }

    public C2213j4(C2591y6 c2591y6, L7 l7, Z3 z3, C2285m c2285m, Q1 q1, C2335o c2335o, C2024bl c2024bl, L5 l5, C2384pn c2384pn, C2410r0 c2410r0) {
        this.m = new Zc();
        this.p = new C2560x0();
        this.q = new U1();
        this.r = new C2219ja();
        new K7();
        this.f6145a = c2591y6;
        this.b = l7;
        this.c = z3;
        this.h = c2285m;
        this.d = q1;
        this.e = c2335o;
        this.f = c2024bl;
        this.g = l5;
        this.i = c2384pn;
        this.k = c2410r0;
    }

    public final C2003b0 b() {
        C2003b0 c2003b0;
        C2003b0 c2003b1 = this.s;
        if (c2003b1 != null) {
            return c2003b1;
        }
        synchronized (this) {
            c2003b0 = this.s;
            if (c2003b0 == null) {
                c2003b0 = new C2003b0(this.p, this.f, this.c);
                this.s = c2003b0;
            }
        }
        return c2003b0;
    }
}
