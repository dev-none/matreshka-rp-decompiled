package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreapi.internal.data.ProtobufConverter;
import io.appmetrica.analytics.networktasks.internal.RetryPolicyConfig;
import java.util.Arrays;
import java.util.List;
import java.util.Map;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.km, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2257km implements ProtobufConverter {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Ee f6178a = new Ee();
    public final C2296ma b = new C2296ma();
    public final Lm c = new Lm();
    public final C2314n3 d = new C2314n3();
    public final C2512v2 e = new C2512v2();
    public final D6 f = new D6();
    public final Hm g = new Hm();
    public final C2548wd h = new C2548wd();
    public final J9 i = new J9();

    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final Am fromModel(C2333nm c2333nm) {
        Am am = new Am();
        am.s = c2333nm.u;
        am.t = c2333nm.v;
        String str = c2333nm.f6228a;
        if (str != null) {
            am.f5600a = str;
        }
        List list = c2333nm.f;
        if (list != null) {
            am.f = (String[]) list.toArray(new String[list.size()]);
        }
        List list2 = c2333nm.g;
        if (list2 != null) {
            am.g = (String[]) list2.toArray(new String[list2.size()]);
        }
        List list3 = c2333nm.b;
        if (list3 != null) {
            am.c = (String[]) list3.toArray(new String[list3.size()]);
        }
        List list4 = c2333nm.h;
        if (list4 != null) {
            am.o = (String[]) list4.toArray(new String[list4.size()]);
        }
        Map<String, ? extends List<String>> map = c2333nm.i;
        if (map != null) {
            am.h = this.f.fromModel(map);
        }
        De de = c2333nm.s;
        if (de != null) {
            am.v = this.f6178a.fromModel(de);
        }
        String str2 = c2333nm.j;
        if (str2 != null) {
            am.j = str2;
        }
        String str3 = c2333nm.c;
        if (str3 != null) {
            am.d = str3;
        }
        String str4 = c2333nm.d;
        if (str4 != null) {
            am.e = str4;
        }
        String str5 = c2333nm.e;
        if (str5 != null) {
            am.r = str5;
        }
        am.i = this.b.fromModel(c2333nm.m);
        String str6 = c2333nm.k;
        if (str6 != null) {
            am.k = str6;
        }
        String str7 = c2333nm.l;
        if (str7 != null) {
            am.l = str7;
        }
        am.m = c2333nm.p;
        am.b = c2333nm.n;
        am.q = c2333nm.o;
        RetryPolicyConfig retryPolicyConfig = c2333nm.t;
        am.w = retryPolicyConfig.maxIntervalSeconds;
        am.x = retryPolicyConfig.exponentialMultiplier;
        String str8 = c2333nm.q;
        if (str8 != null) {
            am.n = str8;
        }
        Km km = c2333nm.r;
        if (km != null) {
            this.c.getClass();
            C2632zm c2632zm = new C2632zm();
            c2632zm.f6436a = km.f5764a;
            am.p = c2632zm;
        }
        am.u = c2333nm.w;
        C2264l3 c2264l3 = c2333nm.x;
        if (c2264l3 != null) {
            this.d.getClass();
            C2457sm c2457sm = new C2457sm();
            c2457sm.f6319a = c2264l3.f6182a;
            am.y = c2457sm;
        }
        C2487u2 c2487u2 = c2333nm.y;
        if (c2487u2 != null) {
            am.z = this.e.fromModel(c2487u2);
        }
        am.A = this.g.fromModel(c2333nm.z);
        am.B = this.h.fromModel(c2333nm.A);
        am.C = this.i.fromModel(c2333nm.B);
        return am;
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final C2333nm toModel(Am am) {
        C2308mm c2308mm = new C2308mm(this.b.toModel(am.i));
        c2308mm.f6214a = am.f5600a;
        c2308mm.j = am.j;
        c2308mm.c = am.d;
        c2308mm.b = Arrays.asList(am.c);
        c2308mm.g = Arrays.asList(am.g);
        c2308mm.f = Arrays.asList(am.f);
        c2308mm.d = am.e;
        c2308mm.e = am.r;
        c2308mm.h = Arrays.asList(am.o);
        c2308mm.k = am.k;
        c2308mm.l = am.l;
        c2308mm.q = am.m;
        c2308mm.o = am.b;
        c2308mm.p = am.q;
        c2308mm.t = am.s;
        c2308mm.u = am.t;
        c2308mm.r = am.n;
        c2308mm.v = am.u;
        c2308mm.w = new RetryPolicyConfig(am.w, am.x);
        c2308mm.i = this.f.toModel(am.h);
        C2582xm c2582xm = am.v;
        if (c2582xm != null) {
            this.f6178a.getClass();
            c2308mm.n = new De(c2582xm.f6404a, c2582xm.b);
        }
        C2632zm c2632zm = am.p;
        if (c2632zm != null) {
            this.c.getClass();
            c2308mm.s = new Km(c2632zm.f6436a);
        }
        C2457sm c2457sm = am.y;
        if (c2457sm != null) {
            this.d.getClass();
            c2308mm.x = new C2264l3(c2457sm.f6319a);
        }
        C2432rm c2432rm = am.z;
        if (c2432rm != null) {
            c2308mm.y = this.e.toModel(c2432rm);
        }
        C2607ym c2607ym = am.A;
        if (c2607ym != null) {
            this.g.getClass();
            c2308mm.z = new Gm(c2607ym.f6418a);
        }
        c2308mm.A = this.h.toModel(am.B);
        C2507um c2507um = am.C;
        if (c2507um != null) {
            this.i.getClass();
            c2308mm.B = new I9(c2507um.f6357a);
        }
        return new C2333nm(c2308mm);
    }
}
