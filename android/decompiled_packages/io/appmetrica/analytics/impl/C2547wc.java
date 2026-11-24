package io.appmetrica.analytics.impl;

import android.content.Context;
import io.appmetrica.analytics.coreutils.internal.services.PackageManagerUtils;
import io.appmetrica.analytics.coreutils.internal.time.TimePassedChecker;
import io.appmetrica.analytics.internal.CounterConfigurationReporterType;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.wc, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2547wc extends C2085e5 implements Ta, Sa {
    public final C2402qg w;
    public final C2501ug x;
    public final L6 y;

    public C2547wc(Context context, C2231jm c2231jm, X4 x4, C2514v4 c2514v4, C2402qg c2402qg, L6 l6, AbstractC2034c5 abstractC2034c5) {
        this(context, x4, c2514v4, new C2235k0(), new TimePassedChecker(), new C2597yc(context, x4, c2514v4, abstractC2034c5, c2231jm, new C2422rc(l6), C2495ua.k().x().d(), PackageManagerUtils.getAppVersionCodeInt(context), C2495ua.k().x(), C2495ua.k().l(), new C2273lc()), c2402qg, l6);
    }

    @Override // io.appmetrica.analytics.impl.C2085e5
    public final void C() {
        this.w.a(this.x);
    }

    public final boolean D() {
        boolean zOptBoolean;
        zo zoVar = this.t;
        synchronized (zoVar) {
            zOptBoolean = zoVar.f6438a.a().optBoolean("referrer_handled", false);
        }
        return zOptBoolean;
    }

    @Override // io.appmetrica.analytics.impl.C2085e5, io.appmetrica.analytics.impl.Wa, io.appmetrica.analytics.impl.La
    public final synchronized void a(C2514v4 c2514v4) {
        super.a(c2514v4);
        this.y.a(c2514v4.i);
    }

    @Override // io.appmetrica.analytics.impl.C2085e5, io.appmetrica.analytics.impl.La
    public final CounterConfigurationReporterType c() {
        return CounterConfigurationReporterType.MAIN;
    }

    @Override // io.appmetrica.analytics.impl.Sa
    public final void a() {
        zo zoVar = this.t;
        synchronized (zoVar) {
            Ao ao = zoVar.f6438a;
            ao.a(ao.a().put("referrer_handled", true));
        }
    }

    public C2547wc(Context context, X4 x4, C2514v4 c2514v4, C2235k0 c2235k0, TimePassedChecker timePassedChecker, C2597yc c2597yc, C2402qg c2402qg, L6 l6) {
        super(context, x4, c2235k0, timePassedChecker, c2597yc, c2514v4);
        this.w = c2402qg;
        C2089e9 c2089e9K = k();
        c2089e9K.a(EnumC2195ib.EVENT_TYPE_REGULAR, new Mg(c2089e9K.b()));
        this.x = c2597yc.a(this);
        this.y = l6;
        C2495ua.k().y().onMainReporterCreated(new Ak(this, c2514v4));
    }
}
