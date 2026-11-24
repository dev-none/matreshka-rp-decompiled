package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.networktasks.internal.RetryPolicyConfig;
import java.util.List;
import java.util.Map;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.jm, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2231jm {
    public final Map A;
    public final I9 B;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final String f6159a;
    public final String b;
    public final C2333nm c;
    public final String d;
    public final List e;
    public final List f;
    public final List g;
    public final Map h;
    public final String i;
    public final String j;
    public final String k;
    public final String l;
    public final String m;
    public final C2439s4 n;
    public final long o;
    public final boolean p;
    public final boolean q;
    public final String r;
    public final De s;
    public final RetryPolicyConfig t;
    public final long u;
    public final long v;
    public final boolean w;
    public final C2264l3 x;
    public final C2487u2 y;
    public final Gm z;

    public C2231jm(String str, String str2, C2333nm c2333nm) {
        this.f6159a = str;
        this.b = str2;
        this.c = c2333nm;
        this.d = c2333nm.f6228a;
        this.e = c2333nm.b;
        this.f = c2333nm.f;
        this.g = c2333nm.g;
        List list = c2333nm.h;
        this.h = c2333nm.i;
        this.i = c2333nm.c;
        this.j = c2333nm.d;
        String str3 = c2333nm.e;
        this.k = c2333nm.j;
        this.l = c2333nm.k;
        this.m = c2333nm.l;
        this.n = c2333nm.m;
        this.o = c2333nm.n;
        this.p = c2333nm.o;
        this.q = c2333nm.p;
        this.r = c2333nm.q;
        Km km = c2333nm.r;
        this.s = c2333nm.s;
        this.t = c2333nm.t;
        this.u = c2333nm.u;
        this.v = c2333nm.v;
        this.w = c2333nm.w;
        this.x = c2333nm.x;
        this.y = c2333nm.y;
        this.z = c2333nm.z;
        this.A = c2333nm.A;
        this.B = c2333nm.B;
    }

    public final String a() {
        return this.f6159a;
    }

    public final String b() {
        return this.b;
    }

    public final String c() {
        return this.d;
    }

    public final String toString() {
        return "StartupState(deviceId=" + this.f6159a + ", deviceIdHash=" + this.b + ", startupStateModel=" + this.c + ')';
    }
}
