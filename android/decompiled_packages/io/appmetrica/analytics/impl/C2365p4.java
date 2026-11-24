package io.appmetrica.analytics.impl;

import kotlin.NoWhenBranchMatchedException;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.p4, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2365p4 {
    public static InterfaceC2315n4 a(X3 x3) {
        switch (AbstractC2340o4.f6234a[x3.e.ordinal()]) {
            case 1:
                return new C2170hc();
            case 2:
                return new C2330nj();
            case 3:
                return new C2405qj();
            case 4:
                return new Hh(new Jh());
            case 5:
                return new Hh(new Zj());
            case 6:
                return new C2447sc();
            case 7:
                return new C2447sc();
            default:
                throw new NoWhenBranchMatchedException();
        }
    }
}
