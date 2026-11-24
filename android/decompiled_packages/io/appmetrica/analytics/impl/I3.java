package io.appmetrica.analytics.impl;

/* JADX INFO: loaded from: classes7.dex */
public final class I3 extends X7 {
    @Override // io.appmetrica.analytics.impl.X7
    public final boolean a(C2613z3 c2613z3, C2613z3 c2613z4) {
        if (no.a(c2613z4.f6424a)) {
            return true;
        }
        if (no.a(c2613z3.f6424a)) {
            return false;
        }
        Y7 y7 = c2613z3.b;
        if (y7 == Y7.c) {
            if (((Number) this.f5953a.a(y7)).intValue() >= ((Number) this.f5953a.a(c2613z4.b)).intValue()) {
                return true;
            }
        } else if (((Number) this.f5953a.a(y7)).intValue() > ((Number) this.f5953a.a(c2613z4.b)).intValue()) {
            return true;
        }
        return false;
    }
}
