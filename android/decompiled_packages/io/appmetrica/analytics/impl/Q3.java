package io.appmetrica.analytics.impl;

import android.content.Context;
import io.appmetrica.analytics.modulesapi.internal.client.ModuleClientActivator;

/* JADX INFO: loaded from: classes7.dex */
public final class Q3 implements ModuleClientActivator {
    @Override // io.appmetrica.analytics.modulesapi.internal.client.ModuleClientActivator
    public final void activate(Context context) {
        C2003b0 c2003b0B = C2213j4.l().b();
        c2003b0B.c.a().executeDelayed(new C1977a0(c2003b0B, context), c2003b0B.d);
    }
}
