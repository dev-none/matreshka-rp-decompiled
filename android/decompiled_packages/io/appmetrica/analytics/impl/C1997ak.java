package io.appmetrica.analytics.impl;

import android.content.Context;
import io.appmetrica.analytics.coreutils.internal.services.PackageManagerUtils;
import io.appmetrica.analytics.coreutils.internal.time.TimePassedChecker;
import io.appmetrica.analytics.internal.CounterConfigurationReporterType;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.ak, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C1997ak extends C2085e5 {
    public C1997ak(Context context, C2231jm c2231jm, X4 x4, C2514v4 c2514v4, InterfaceC2303mh interfaceC2303mh, AbstractC2034c5 abstractC2034c5, W4 w4) {
        this(context, x4, new C2235k0(), new TimePassedChecker(), new C2214j5(context, x4, c2514v4, abstractC2034c5, c2231jm, interfaceC2303mh, C2495ua.k().x().d(), PackageManagerUtils.getAppVersionCodeInt(context), C2495ua.k().l(), w4), c2514v4);
    }

    @Override // io.appmetrica.analytics.impl.C2085e5, io.appmetrica.analytics.impl.La
    public final CounterConfigurationReporterType c() {
        return CounterConfigurationReporterType.SELF_SDK;
    }

    public C1997ak(Context context, X4 x4, C2235k0 c2235k0, TimePassedChecker timePassedChecker, C2214j5 c2214j5, C2514v4 c2514v4) {
        super(context, x4, c2235k0, timePassedChecker, c2214j5, c2514v4);
    }
}
