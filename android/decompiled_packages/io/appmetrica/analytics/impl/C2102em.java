package io.appmetrica.analytics.impl;

import android.content.Context;
import io.appmetrica.analytics.coreutils.internal.services.SafePackageManager;
import io.appmetrica.analytics.networktasks.internal.BaseRequestConfig;
import java.util.Map;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.em, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2102em extends T5 {
    public final H3 b;

    public C2102em(Context context, String str) {
        this(context, str, new SafePackageManager(), C2495ua.k().f());
    }

    /* JADX WARN: Multi-variable type inference failed */
    @Override // io.appmetrica.analytics.impl.T5, io.appmetrica.analytics.networktasks.internal.BaseRequestConfig.ComponentLoader, io.appmetrica.analytics.networktasks.internal.BaseRequestConfig.RequestConfigLoader
    /* JADX INFO: renamed from: b, reason: merged with bridge method [inline-methods] */
    public final C2128fm load(S5 s5) {
        C2128fm c2128fm = (C2128fm) super.load(s5);
        C2231jm c2231jm = s5.f5877a;
        c2128fm.d = c2231jm.f;
        c2128fm.e = c2231jm.g;
        C2077dm c2077dm = (C2077dm) s5.componentArguments;
        String str = c2077dm.f6051a;
        if (str != null) {
            c2128fm.f = str;
            c2128fm.g = c2077dm.b;
        }
        Map<String, String> map = c2077dm.c;
        c2128fm.h = map;
        c2128fm.i = (C2613z3) this.b.a(new C2613z3(map, Y7.c));
        C2077dm c2077dm2 = (C2077dm) s5.componentArguments;
        c2128fm.k = c2077dm2.d;
        c2128fm.j = c2077dm2.e;
        C2231jm c2231jm2 = s5.f5877a;
        c2128fm.l = c2231jm2.p;
        c2128fm.m = c2231jm2.r;
        long j = c2231jm2.v;
        if (c2128fm.n == 0) {
            c2128fm.n = j;
        }
        return c2128fm;
    }

    @Override // io.appmetrica.analytics.networktasks.internal.BaseRequestConfig.ComponentLoader
    public final BaseRequestConfig createBlankConfig() {
        return new C2128fm();
    }

    public C2102em(Context context, String str, SafePackageManager safePackageManager, H3 h3) {
        super(context, str, safePackageManager);
        this.b = h3;
    }

    public final C2128fm a() {
        return new C2128fm();
    }
}
