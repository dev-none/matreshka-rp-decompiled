package io.appmetrica.analytics.impl;

/* JADX INFO: loaded from: classes7.dex */
public final class X5 extends A4 {
    public X5(String str, double d) {
        super(2, str, Double.valueOf(d), new C2571xb(), new C2614z4(new Nb(new C2464t4(100))));
    }

    @Override // io.appmetrica.analytics.impl.A4
    public final void a(C2182ho c2182ho) {
        C2233jo c2233jo = c2182ho.d;
        c2233jo.c = ((Double) this.f).doubleValue() + c2233jo.c;
    }
}
