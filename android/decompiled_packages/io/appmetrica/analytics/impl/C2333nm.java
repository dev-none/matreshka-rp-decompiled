package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreutils.internal.collection.CollectionUtils;
import io.appmetrica.analytics.networktasks.internal.RetryPolicyConfig;
import java.util.Collections;
import java.util.List;
import java.util.Map;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.nm, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2333nm {
    public final Map A;
    public final I9 B;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final String f6228a;
    public final List b;
    public final String c;
    public final String d;
    public final String e;
    public final List f;
    public final List g;
    public final List h;
    public final Map i;
    public final String j;
    public final String k;
    public final String l;
    public final C2439s4 m;
    public final long n;
    public final boolean o;
    public final boolean p;
    public final String q;
    public final Km r;
    public final De s;
    public final RetryPolicyConfig t;
    public final long u;
    public final long v;
    public final boolean w;
    public final C2264l3 x;
    public final C2487u2 y;
    public final Gm z;

    public C2333nm(C2308mm c2308mm) {
        this.f6228a = c2308mm.f6214a;
        List list = c2308mm.b;
        this.b = list == null ? null : CollectionUtils.unmodifiableListCopy(list);
        this.c = c2308mm.c;
        this.d = c2308mm.d;
        this.e = c2308mm.e;
        List list2 = c2308mm.f;
        this.f = list2 == null ? null : CollectionUtils.unmodifiableListCopy(list2);
        List list3 = c2308mm.g;
        this.g = list3 == null ? null : CollectionUtils.unmodifiableListCopy(list3);
        List list4 = c2308mm.h;
        this.h = list4 == null ? null : CollectionUtils.unmodifiableListCopy(list4);
        Map map = c2308mm.i;
        this.i = map != null ? CollectionUtils.unmodifiableMapCopy(map) : null;
        this.j = c2308mm.j;
        this.k = c2308mm.k;
        this.m = c2308mm.m;
        this.s = c2308mm.n;
        this.n = c2308mm.o;
        this.o = c2308mm.p;
        this.l = c2308mm.l;
        this.p = c2308mm.q;
        this.q = c2308mm.r;
        this.r = c2308mm.s;
        this.u = c2308mm.t;
        this.v = c2308mm.u;
        this.w = c2308mm.v;
        RetryPolicyConfig retryPolicyConfig = c2308mm.w;
        if (retryPolicyConfig == null) {
            Am am = new Am();
            this.t = new RetryPolicyConfig(am.w, am.x);
        } else {
            this.t = retryPolicyConfig;
        }
        this.x = c2308mm.x;
        this.y = c2308mm.y;
        this.z = c2308mm.z == null ? new Gm(O7.b.f6418a) : c2308mm.z;
        this.A = c2308mm.A == null ? Collections.EMPTY_MAP : c2308mm.A;
        this.B = c2308mm.B;
    }

    public final C2308mm a(C2439s4 c2439s4) {
        C2308mm c2308mm = new C2308mm(c2439s4);
        c2308mm.f6214a = this.f6228a;
        c2308mm.f = this.f;
        c2308mm.g = this.g;
        c2308mm.j = this.j;
        c2308mm.b = this.b;
        c2308mm.c = this.c;
        c2308mm.d = this.d;
        c2308mm.e = this.e;
        c2308mm.h = this.h;
        c2308mm.i = this.i;
        c2308mm.k = this.k;
        c2308mm.l = this.l;
        c2308mm.q = this.p;
        c2308mm.o = this.n;
        c2308mm.p = this.o;
        c2308mm.r = this.q;
        c2308mm.n = this.s;
        c2308mm.t = this.u;
        c2308mm.u = this.v;
        c2308mm.s = this.r;
        c2308mm.v = this.w;
        c2308mm.w = this.t;
        c2308mm.x = this.x;
        c2308mm.y = this.y;
        c2308mm.z = this.z;
        c2308mm.A = this.A;
        c2308mm.B = this.B;
        return c2308mm;
    }

    public final String toString() {
        return "StartupStateModel{uuid='" + this.f6228a + "', reportUrls=" + this.b + ", getAdUrl='" + this.c + "', reportAdUrl='" + this.d + "', certificateUrl='" + this.e + "', hostUrlsFromStartup=" + this.f + ", hostUrlsFromClient=" + this.g + ", diagnosticUrls=" + this.h + ", customSdkHosts=" + this.i + ", encodedClidsFromResponse='" + this.j + "', lastClientClidsForStartupRequest='" + this.k + "', lastChosenForRequestClids='" + this.l + "', collectingFlags=" + this.m + ", obtainTime=" + this.n + ", hadFirstStartup=" + this.o + ", startupDidNotOverrideClids=" + this.p + ", countryInit='" + this.q + "', statSending=" + this.r + ", permissionsCollectingConfig=" + this.s + ", retryPolicyConfig=" + this.t + ", obtainServerTime=" + this.u + ", firstStartupServerTime=" + this.v + ", outdated=" + this.w + ", cacheControl=" + this.x + ", attributionConfig=" + this.y + ", startupUpdateConfig=" + this.z + ", modulesRemoteConfigs=" + this.A + ", externalAttributionConfig=" + this.B + '}';
    }
}
