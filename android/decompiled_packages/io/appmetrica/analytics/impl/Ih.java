package io.appmetrica.analytics.impl;

import android.content.Context;
import io.appmetrica.analytics.coreutils.internal.services.PackageManagerUtils;
import io.appmetrica.analytics.coreutils.internal.time.TimePassedChecker;

/* JADX INFO: loaded from: classes7.dex */
public final class Ih extends C2085e5 {
    public final String w;
    public final L6 x;

    public Ih(Context context, X4 x4, C2514v4 c2514v4, L6 l6, C2231jm c2231jm, AbstractC2034c5 abstractC2034c5, InterfaceC2619z9 interfaceC2619z9) {
        this(context, x4, new C2235k0(), new TimePassedChecker(), new C2214j5(context, x4, c2514v4, abstractC2034c5, c2231jm, new Dh(l6), C2495ua.k().x().d(), PackageManagerUtils.getAppVersionCodeInt(context), C2495ua.k().l(), interfaceC2619z9), l6, c2514v4);
    }

    @Override // io.appmetrica.analytics.impl.C2085e5, io.appmetrica.analytics.impl.Wa, io.appmetrica.analytics.impl.La
    public final synchronized void a(C2514v4 c2514v4) {
        super.a(c2514v4);
        this.x.a(this.w, c2514v4.i);
    }

    public Ih(Context context, X4 x4, C2235k0 c2235k0, TimePassedChecker timePassedChecker, C2214j5 c2214j5, L6 l6, C2514v4 c2514v4) {
        super(context, x4, c2235k0, timePassedChecker, c2214j5, c2514v4);
        this.w = x4.b();
        this.x = l6;
    }
}
