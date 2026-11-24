package io.appmetrica.analytics.impl;

import android.text.TextUtils;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.aj, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C1996aj extends Wg {
    public C1996aj(C2085e5 c2085e5) {
        super(c2085e5);
    }

    @Override // io.appmetrica.analytics.impl.Wg
    public final boolean a(W5 w5) {
        String str = w5.h;
        if (TextUtils.isEmpty(str)) {
            return false;
        }
        this.f5944a.c.j(str).b();
        return false;
    }
}
