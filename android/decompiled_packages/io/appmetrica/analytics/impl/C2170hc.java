package io.appmetrica.analytics.impl;

import android.content.Context;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.hc, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2170hc implements InterfaceC2315n4 {
    @Override // io.appmetrica.analytics.impl.InterfaceC2315n4
    /* JADX INFO: renamed from: b, reason: merged with bridge method [inline-methods] */
    public final B4 a(Context context, C2240k5 c2240k5, X3 x3, C2539w4 c2539w4) {
        E4 e4;
        C4 c4 = new C4(x3.b);
        F4 f4 = new F4();
        synchronized (c2240k5) {
            e4 = (E4) c2240k5.a(c4, c2539w4, f4, c2240k5.b);
        }
        return new B4(context, e4, c2539w4);
    }
}
