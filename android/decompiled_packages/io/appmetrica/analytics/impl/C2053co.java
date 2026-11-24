package io.appmetrica.analytics.impl;

import android.text.TextUtils;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.co, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2053co extends Wg {
    public C2053co(C2085e5 c2085e5) {
        super(c2085e5);
    }

    @Override // io.appmetrica.analytics.impl.Wg
    public final boolean a(W5 w5) {
        String strJ = this.f5944a.c.j();
        String str = w5.h;
        this.f5944a.c.j(str).b();
        if (TextUtils.equals(strJ, str)) {
            return false;
        }
        this.f5944a.a(U3.o());
        return false;
    }
}
