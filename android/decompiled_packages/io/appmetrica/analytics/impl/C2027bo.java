package io.appmetrica.analytics.impl;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.bo, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2027bo extends H4 {
    public final L6 b;

    public C2027bo(E4 e4, L6 l6) {
        super(e4);
        this.b = l6;
    }

    @Override // io.appmetrica.analytics.impl.H4
    public final boolean a(W5 w5, B4 b4) {
        C2514v4 c2514v4 = b4.b.d.f5661a;
        this.b.a(c2514v4.i);
        Rb rbM = C2495ua.H.m();
        if (Boolean.TRUE.equals(c2514v4.b)) {
            rbM.a(true);
        } else {
            if (Boolean.FALSE.equals(c2514v4.b)) {
                rbM.a(false);
            }
        }
        rbM.a(c2514v4.c);
        Boolean bool = c2514v4.n;
        C2495ua.H.c().b(bool != null ? bool.booleanValue() : true);
        return false;
    }
}
