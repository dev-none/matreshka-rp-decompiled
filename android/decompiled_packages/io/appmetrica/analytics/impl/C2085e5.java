package io.appmetrica.analytics.impl;

import android.content.Context;
import android.text.TextUtils;
import io.appmetrica.analytics.AppMetrica;
import io.appmetrica.analytics.coreutils.internal.services.PackageManagerUtils;
import io.appmetrica.analytics.coreutils.internal.time.TimePassedChecker;
import io.appmetrica.analytics.internal.CounterConfigurationReporterType;
import io.appmetrica.analytics.logger.appmetrica.internal.PublicLogger;
import java.util.Iterator;
import java.util.List;
import java.util.Set;
import kotlin.collections.CollectionsKt;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.e5, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public class C2085e5 implements Wa, La, InterfaceC2353oh {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Context f6057a;
    public final X4 b;
    public final C2018bf c;
    public final C2095ef d;
    public final S6 e;
    public final C2603yi f;
    public final C2089e9 g;
    public final C2209j0 h;
    public final C2235k0 i;
    public final Wk j;
    public final Vg k;
    public final R8 l;
    public final PublicLogger m;
    public final C2419r9 n;
    public final Z4 o;
    public final InterfaceC2569x9 p;
    public final C2488u3 q;
    public final TimePassedChecker r;
    public final C2600yf s;
    public final zo t;
    public final Ok u;
    public final C2562x2 v;

    public C2085e5(Context context, C2231jm c2231jm, X4 x4, C2514v4 c2514v4, InterfaceC2303mh interfaceC2303mh, AbstractC2034c5 abstractC2034c5) {
        this(context, x4, new C2235k0(), new TimePassedChecker(), new C2214j5(context, x4, c2514v4, abstractC2034c5, c2231jm, interfaceC2303mh, C2495ua.k().x().d(), PackageManagerUtils.getAppVersionCodeInt(context), C2495ua.k().l(), new W4()), c2514v4);
    }

    public final boolean A() {
        C2378ph c2378ph = (C2378ph) this.k.a();
        return c2378ph.n && this.r.didTimePassSeconds(this.n.l, c2378ph.t, "should force send permissions");
    }

    public final boolean B() {
        C2231jm c2231jm;
        C2600yf c2600yf = this.s;
        c2600yf.h.a(c2600yf.f5930a);
        boolean z = ((C2525vf) c2600yf.c()).d;
        Vg vg = this.k;
        synchronized (vg) {
            c2231jm = vg.c.f5877a;
        }
        return !(z && c2231jm.q);
    }

    public void C() {
    }

    @Override // io.appmetrica.analytics.impl.Wa, io.appmetrica.analytics.impl.Ul
    public final void a(Nl nl, C2231jm c2231jm) {
    }

    @Override // io.appmetrica.analytics.impl.La
    public final X4 b() {
        return this.b;
    }

    public CounterConfigurationReporterType c() {
        return CounterConfigurationReporterType.MANUAL;
    }

    public final void d() {
        C2209j0 c2209j0 = this.h;
        synchronized (c2209j0) {
            c2209j0.f6142a = new Mc();
        }
        this.i.a(this.h.a(), this.c);
    }

    public final synchronized void e() {
        ((C2415r5) this.p).d();
    }

    public final C2562x2 f() {
        return this.v;
    }

    public final C2488u3 g() {
        return this.q;
    }

    @Override // io.appmetrica.analytics.impl.La
    public final Context getContext() {
        return this.f6057a;
    }

    public final C2018bf h() {
        return this.c;
    }

    public final S6 i() {
        return this.e;
    }

    public final R8 j() {
        return this.l;
    }

    public final C2089e9 k() {
        return this.g;
    }

    public final C2419r9 l() {
        return this.n;
    }

    public final InterfaceC2569x9 m() {
        return this.p;
    }

    public final C2378ph n() {
        return (C2378ph) this.k.a();
    }

    public final String o() {
        return this.c.j();
    }

    public final PublicLogger p() {
        return this.m;
    }

    public final C2095ef q() {
        return this.d;
    }

    public final Ok r() {
        return this.u;
    }

    public final Wk s() {
        return this.j;
    }

    public final C2231jm t() {
        C2231jm c2231jm;
        Vg vg = this.k;
        synchronized (vg) {
            c2231jm = vg.c.f5877a;
        }
        return c2231jm;
    }

    public final zo u() {
        return this.t;
    }

    public final void v() {
        C2419r9 c2419r9 = this.n;
        int i = c2419r9.k;
        c2419r9.m = i;
        c2419r9.f6291a.a(i).b();
    }

    public final void w() {
        int iOptInt;
        int libraryApiLevel = AppMetrica.getLibraryApiLevel();
        zo zoVar = this.t;
        synchronized (zoVar) {
            iOptInt = zoVar.f6438a.a().optInt("last_migration_api_level", 0);
        }
        Integer numValueOf = Integer.valueOf(iOptInt);
        numValueOf.getClass();
        if (iOptInt < libraryApiLevel) {
            this.o.getClass();
            List listListOf = CollectionsKt.listOf(new C2008b5(this));
            numValueOf.getClass();
            Iterator it = listListOf.iterator();
            while (it.hasNext()) {
                ((AbstractC1982a5) it.next()).a(iOptInt);
            }
            this.t.b(libraryApiLevel);
        }
    }

    public final boolean x() {
        C2378ph c2378ph = (C2378ph) this.k.a();
        return c2378ph.n && c2378ph.isIdentifiersValid() && this.r.didTimePassSeconds(this.n.l, c2378ph.s, "need to check permissions");
    }

    public final boolean y() {
        C2419r9 c2419r9 = this.n;
        return c2419r9.m < c2419r9.k && ((C2378ph) this.k.a()).o && ((C2378ph) this.k.a()).isIdentifiersValid();
    }

    public final void z() {
        Vg vg = this.k;
        synchronized (vg) {
            vg.f6363a = null;
        }
    }

    public final void b(W5 w5) {
        this.h.a(w5.f);
        C2184i0 c2184i0A = this.h.a();
        C2235k0 c2235k0 = this.i;
        C2018bf c2018bf = this.c;
        synchronized (c2235k0) {
            if (c2184i0A.b > c2018bf.d().b) {
                c2018bf.a(c2184i0A).b();
                this.m.info("Save new app environment for %s. Value: %s", this.b, c2184i0A.f6120a);
            }
        }
    }

    @Override // io.appmetrica.analytics.impl.Wa
    public final void a(W5 w5) {
        String strA = Vf.a("Event received on service", EnumC2195ib.a(w5.d), w5.getName(), w5.getValue());
        if (strA != null) {
            this.m.info(strA, new Object[0]);
        }
        String str = this.b.b;
        if (TextUtils.isEmpty(str) || "-1".equals(str)) {
            return;
        }
        this.f.a(w5, new C2578xi());
    }

    @Override // io.appmetrica.analytics.impl.Wa, io.appmetrica.analytics.impl.La
    public synchronized void a(C2514v4 c2514v4) {
        long jLongValue;
        this.k.a(c2514v4);
        boolean z = false;
        if (Boolean.TRUE.equals(c2514v4.h)) {
            this.m.setEnabled(true);
        } else {
            if (Boolean.FALSE.equals(c2514v4.h)) {
                this.m.setEnabled(false);
            }
        }
        C2562x2 c2562x2 = this.v;
        Set<String> set = c2514v4.o;
        long jCurrentTimeMillis = c2562x2.d.currentTimeMillis();
        boolean z2 = false;
        for (String str : set) {
            Long l = (Long) c2562x2.e.get(str);
            if (l != null) {
                jLongValue = l.longValue();
            } else {
                jLongValue = -1;
                z2 = true;
            }
            if (jCurrentTimeMillis - jLongValue > c2562x2.b) {
                c2562x2.e.put(str, Long.valueOf(jCurrentTimeMillis));
                z = true;
            }
        }
        if (z) {
            c2562x2.a(c2562x2.e);
            c2562x2.f6397a.a(c2562x2.e);
        }
        if (z2) {
            this.k.e();
        }
    }

    public C2085e5(Context context, X4 x4, C2235k0 c2235k0, TimePassedChecker timePassedChecker, C2214j5 c2214j5, C2514v4 c2514v4) {
        this.f6057a = context.getApplicationContext();
        this.b = x4;
        this.i = c2235k0;
        this.r = timePassedChecker;
        zo zoVarF = c2214j5.f();
        this.t = zoVarF;
        this.s = C2495ua.k().t();
        C2018bf c2018bfA = c2214j5.e().a();
        this.c = c2018bfA;
        this.v = c2214j5.a(c2018bfA);
        Vg vgA = c2214j5.a(this);
        this.k = vgA;
        PublicLogger publicLoggerA = c2214j5.d().a();
        this.m = publicLoggerA;
        this.d = C2495ua.k().z();
        C2209j0 c2209j0A = c2235k0.a(x4, publicLoggerA, c2018bfA);
        this.h = c2209j0A;
        this.l = c2214j5.a();
        S6 s6B = c2214j5.b(this);
        this.e = s6B;
        Ai aiD = c2214j5.d(this);
        this.o = C2214j5.b();
        w();
        Wk wkA = C2214j5.a(this, zoVarF, new C2060d5(this));
        this.j = wkA;
        publicLoggerA.info("Read app environment for component %s. Value: %s", x4.toString(), c2209j0A.a().f6120a);
        Ok okC = c2214j5.c();
        this.u = okC;
        this.n = c2214j5.a(c2018bfA, zoVarF, wkA, s6B, c2209j0A, okC, aiD);
        C2089e9 c2089e9C = C2214j5.c(this);
        this.g = c2089e9C;
        this.f = C2214j5.a(this, c2089e9C);
        this.q = c2214j5.b(c2018bfA);
        this.p = c2214j5.a(aiD, s6B, vgA, c2514v4, x4, c2018bfA);
        s6B.e();
    }

    @Override // io.appmetrica.analytics.impl.Wa, io.appmetrica.analytics.impl.Ul
    public final synchronized void a(C2231jm c2231jm) {
        this.k.a(c2231jm);
        ((C2415r5) this.p).e();
    }

    public final void a(String str) {
        this.c.j(str).b();
    }
}
