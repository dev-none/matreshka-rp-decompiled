package io.appmetrica.analytics.impl;

import android.content.Context;

/* JADX INFO: loaded from: classes7.dex */
public final class Hh implements InterfaceC2315n4 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final InterfaceC2111f5 f5708a;

    public Hh(InterfaceC2111f5 interfaceC2111f5) {
        this.f5708a = interfaceC2111f5;
    }

    @Override // io.appmetrica.analytics.impl.InterfaceC2315n4
    /* JADX INFO: renamed from: b, reason: merged with bridge method [inline-methods] */
    public final Fg a(Context context, C2240k5 c2240k5, X3 x3, C2539w4 c2539w4) {
        Gg gg;
        X4 x4 = new X4(x3.b, x3.f5951a);
        Hg hg = new Hg(this.f5708a);
        synchronized (c2240k5) {
            gg = (Gg) c2240k5.a(x4, c2539w4, hg, c2240k5.f6167a);
        }
        return new Fg(context, gg);
    }
}
