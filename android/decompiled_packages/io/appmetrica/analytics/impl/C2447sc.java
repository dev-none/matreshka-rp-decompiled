package io.appmetrica.analytics.impl;

import android.content.Context;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.sc, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2447sc implements InterfaceC2315n4 {
    @Override // io.appmetrica.analytics.impl.InterfaceC2315n4
    /* JADX INFO: renamed from: b, reason: merged with bridge method [inline-methods] */
    public final C2472tc a(Context context, C2240k5 c2240k5, X3 x3, C2539w4 c2539w4) {
        Gg gg;
        C2497uc c2497uc = new C2497uc(x3.b, x3.f5951a);
        Hg hg = new Hg(new C2572xc());
        synchronized (c2240k5) {
            gg = (Gg) c2240k5.a(c2497uc, c2539w4, hg, c2240k5.f6167a);
        }
        return new C2472tc(context, gg);
    }
}
