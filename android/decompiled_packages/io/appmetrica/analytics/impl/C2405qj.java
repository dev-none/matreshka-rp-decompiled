package io.appmetrica.analytics.impl;

import android.content.Context;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.qj, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2405qj implements InterfaceC2315n4 {
    @Override // io.appmetrica.analytics.impl.InterfaceC2315n4
    /* JADX INFO: renamed from: b, reason: merged with bridge method [inline-methods] */
    public final C2305mj a(Context context, C2240k5 c2240k5, X3 x3, C2539w4 c2539w4) {
        Gg gg;
        X4 x4 = new X4(x3.b, x3.f5951a);
        synchronized (c2240k5) {
            gg = (Gg) c2240k5.f6167a.get(x4.toString());
        }
        return new C2305mj(gg);
    }
}
