package io.appmetrica.analytics.impl;

import android.os.Bundle;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.na, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2321na extends H4 {
    public C2321na(E4 e4) {
        super(e4);
    }

    @Override // io.appmetrica.analytics.impl.H4
    public final boolean a(W5 w5, B4 b4) {
        Bundle bundle = w5.m;
        C2091eb c2091eb = bundle != null ? (C2091eb) bundle.getParcelable("io.appmetrica.analytics.impl.IdentifiersData") : null;
        if (c2091eb != null) {
            if (c2091eb.d) {
                C2514v4 c2514v4 = b4.b.d.f5661a;
                Boolean bool = c2514v4.n;
                Boolean bool2 = c2514v4.i;
                C2495ua.H.c().c(bool != null ? bool.booleanValue() : true);
                C2495ua.H.h().b(bool2);
            }
        }
        this.f5701a.a(c2091eb);
        return false;
    }
}
