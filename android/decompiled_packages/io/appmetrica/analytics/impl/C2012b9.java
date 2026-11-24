package io.appmetrica.analytics.impl;

import java.util.Collections;
import java.util.HashMap;
import java.util.Map;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.b9, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2012b9 {
    public static final Map h;
    public static final C2012b9 i;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Ed f6014a;
    public final vo b;
    public final D8 c;
    public final A9 d;
    public final InterfaceC2041cc e;
    public final InterfaceC2017be f;
    public final U9 g;

    static {
        HashMap map = new HashMap();
        map.put(EnumC2245ka.FIRST_OCCURRENCE, 1);
        map.put(EnumC2245ka.NON_FIRST_OCCURENCE, 0);
        map.put(EnumC2245ka.UNKNOWN, -1);
        h = Collections.unmodifiableMap(map);
        i = new C2012b9(new Wi(), new C2052cn(), new C2223je(), new Vi(), new C2396qa(), new C2420ra(), new C2371pa());
    }

    public C2012b9(C1986a9 c1986a9) {
        this(c1986a9.f5999a, c1986a9.b, c1986a9.c, c1986a9.d, c1986a9.e, c1986a9.f, c1986a9.g);
    }

    public final C2270l9 a(S8 s8, C2378ph c2378ph) {
        C2270l9 c2270l9 = new C2270l9();
        C2244k9 c2244k9A = this.f.a(s8.l, s8.m);
        C2141g9 c2141g9A = this.e.a(s8.g);
        if (c2244k9A != null) {
            c2270l9.g = c2244k9A;
        }
        if (c2141g9A != null) {
            c2270l9.f = c2141g9A;
        }
        String strA = this.f6014a.a(s8.f5880a);
        if (strA != null) {
            c2270l9.d = strA;
        }
        c2270l9.e = this.b.a(s8, c2378ph);
        String str = s8.j;
        if (str != null) {
            c2270l9.h = str;
        }
        Integer numA = this.d.a(s8);
        if (numA != null) {
            c2270l9.c = numA.intValue();
        }
        Long l = s8.c;
        if (l != null) {
            c2270l9.f6188a = l.longValue();
        }
        Long l2 = s8.d;
        if (l2 != null) {
            c2270l9.n = l2.longValue();
        }
        Long l3 = s8.e;
        if (l3 != null) {
            c2270l9.o = l3.longValue();
        }
        Long l4 = s8.f;
        if (l4 != null) {
            c2270l9.b = l4.longValue();
        }
        Integer num = s8.k;
        if (num != null) {
            c2270l9.i = num.intValue();
        }
        c2270l9.j = this.c.a(s8.o);
        C2393q7 c2393q7 = s8.g;
        c2270l9.k = c2393q7 != null ? new C2342o6().a(c2393q7.f6268a) : -1;
        String str2 = s8.n;
        if (str2 != null) {
            c2270l9.l = str2.getBytes();
        }
        EnumC2245ka enumC2245ka = s8.p;
        Integer num2 = enumC2245ka != null ? (Integer) h.get(enumC2245ka) : null;
        if (num2 != null) {
            c2270l9.m = num2.intValue();
        }
        EnumC2469t9 enumC2469t9 = s8.q;
        if (enumC2469t9 != null) {
            int iOrdinal = enumC2469t9.ordinal();
            if (iOrdinal == 0) {
                c2270l9.p = 0;
            } else if (iOrdinal == 1) {
                c2270l9.p = 1;
            } else if (iOrdinal == 2) {
                c2270l9.p = 2;
            }
        }
        Boolean bool = s8.r;
        if (bool != null) {
            c2270l9.q = bool.booleanValue();
        }
        Integer num3 = s8.s;
        if (num3 != null) {
            c2270l9.r = num3.intValue();
        }
        c2270l9.s = ((C2371pa) this.g).a(s8.t);
        return c2270l9;
    }

    public C2012b9(Ed ed, vo voVar, D8 d8, A9 a9, InterfaceC2041cc interfaceC2041cc, InterfaceC2017be interfaceC2017be, U9 u9) {
        this.f6014a = ed;
        this.b = voVar;
        this.c = d8;
        this.d = a9;
        this.e = interfaceC2041cc;
        this.f = interfaceC2017be;
        this.g = u9;
    }

    public static C1986a9 a() {
        return new C1986a9(i);
    }
}
