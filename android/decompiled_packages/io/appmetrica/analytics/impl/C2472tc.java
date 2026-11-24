package io.appmetrica.analytics.impl;

import android.content.Context;
import io.appmetrica.analytics.coreutils.internal.WrapUtils;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.tc, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2472tc extends AbstractC2105f {
    public C2472tc(Context context, Gg gg) {
        super(context, gg);
    }

    @Override // io.appmetrica.analytics.impl.AbstractC2105f
    public final void b(W5 w5, C2539w4 c2539w4) {
        boolean zBooleanValue = ((Boolean) WrapUtils.getOrDefault(c2539w4.b.b, Boolean.FALSE)).booleanValue();
        Rb rbM = C2495ua.H.m();
        rbM.a(zBooleanValue);
        rbM.a(c2539w4.b.c);
        Boolean bool = c2539w4.b.n;
        if (bool != null) {
            C2495ua.H.c().b(bool.booleanValue());
        }
        this.b.a(w5, c2539w4);
    }
}
