package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.networktasks.internal.BaseRequestConfig;
import java.util.Map;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.nh, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2328nh extends T5 {
    public final C2085e5 b;
    public final InterfaceC2303mh c;
    public final K3 d;

    public C2328nh(C2085e5 c2085e5, InterfaceC2303mh interfaceC2303mh) {
        this(c2085e5, interfaceC2303mh, new K3());
    }

    /* JADX WARN: Multi-variable type inference failed */
    @Override // io.appmetrica.analytics.impl.T5, io.appmetrica.analytics.networktasks.internal.BaseRequestConfig.ComponentLoader, io.appmetrica.analytics.networktasks.internal.BaseRequestConfig.RequestConfigLoader
    /* JADX INFO: renamed from: b, reason: merged with bridge method [inline-methods] and merged with bridge method [inline-methods] and merged with bridge method [inline-methods] */
    public final C2378ph load(S5 s5) {
        C2378ph c2378ph = (C2378ph) super.load(s5);
        c2378ph.m = ((C2252kh) s5.componentArguments).f6174a;
        c2378ph.r = this.b.t.a();
        c2378ph.w = this.b.q.a();
        C2252kh c2252kh = (C2252kh) s5.componentArguments;
        c2378ph.d = c2252kh.b;
        c2378ph.e = c2252kh.c;
        c2378ph.f = c2252kh.d;
        c2378ph.i = c2252kh.e;
        c2378ph.g = c2252kh.f;
        c2378ph.h = c2252kh.g;
        Boolean boolValueOf = Boolean.valueOf(c2252kh.h);
        InterfaceC2303mh interfaceC2303mh = this.c;
        c2378ph.j = boolValueOf;
        c2378ph.k = interfaceC2303mh;
        C2252kh c2252kh2 = (C2252kh) s5.componentArguments;
        c2378ph.v = c2252kh2.j;
        C2231jm c2231jm = s5.f5877a;
        C2439s4 c2439s4 = c2231jm.n;
        c2378ph.n = c2439s4.f6305a;
        De de = c2231jm.s;
        if (de != null) {
            c2378ph.s = de.f5641a;
            c2378ph.t = de.b;
        }
        c2378ph.o = c2439s4.b;
        c2378ph.q = c2231jm.e;
        c2378ph.p = c2231jm.k;
        K3 k3 = this.d;
        Map<String, String> map = c2252kh2.i;
        H3 h3F = C2495ua.H.f();
        k3.getClass();
        c2378ph.u = K3.a(map, c2231jm, h3F);
        c2378ph.x = this.b.v.e.keySet();
        return c2378ph;
    }

    @Override // io.appmetrica.analytics.networktasks.internal.BaseRequestConfig.ComponentLoader
    public final BaseRequestConfig createBlankConfig() {
        return new C2378ph(this.b);
    }

    public C2328nh(C2085e5 c2085e5, InterfaceC2303mh interfaceC2303mh, K3 k3) {
        super(c2085e5.getContext(), c2085e5.b().c());
        this.b = c2085e5;
        this.c = interfaceC2303mh;
        this.d = k3;
    }

    public final C2378ph a() {
        return new C2378ph(this.b);
    }
}
