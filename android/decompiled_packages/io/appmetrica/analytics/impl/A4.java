package io.appmetrica.analytics.impl;

import java.util.HashMap;

/* JADX INFO: loaded from: classes7.dex */
public abstract class A4 extends Hd {
    public final Object f;

    public A4(int i, String str, Object obj, uo uoVar, R2 r2) {
        super(i, str, uoVar, r2);
        this.f = obj;
    }

    @Override // io.appmetrica.analytics.impl.Hd, io.appmetrica.analytics.impl.InterfaceC2156go
    public final void a(C2130fo c2130fo) {
        if (f()) {
            R2 r2 = this.d;
            int i = this.b;
            C2182ho c2182hoA = r2.a(c2130fo, (C2182ho) ((HashMap) c2130fo.f6082a.get(i)).get(this.f5706a), this);
            if (c2182hoA != null) {
                a(c2182hoA);
            }
        }
    }

    public abstract void a(C2182ho c2182ho);

    public final Object g() {
        return this.f;
    }
}
