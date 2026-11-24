package io.appmetrica.analytics.impl;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.bn, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2026bn extends A4 {
    public final Nn g;

    public C2026bn(String str, String str2, Nn nn, uo uoVar, R2 r2) {
        super(0, str, str2, uoVar, r2);
        this.g = nn;
    }

    @Override // io.appmetrica.analytics.impl.A4
    public final void a(C2182ho c2182ho) {
        String str = (String) this.g.a((String) this.f);
        c2182ho.d.f6161a = str == null ? new byte[0] : str.getBytes();
    }

    public final Nn h() {
        return this.g;
    }
}
