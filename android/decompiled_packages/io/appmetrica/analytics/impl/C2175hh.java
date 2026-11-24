package io.appmetrica.analytics.impl;

import java.util.concurrent.TimeUnit;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.hh, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2175hh extends Wg {
    public C2175hh(C2085e5 c2085e5) {
        super(c2085e5);
    }

    @Override // io.appmetrica.analytics.impl.Wg
    public final boolean a(W5 w5) {
        Ik ikB;
        Yk yk;
        C2419r9 c2419r9 = this.f5944a.n;
        Wk wk = c2419r9.c;
        if (wk.g == 0) {
            ikB = wk.d.b();
            Ik ikB2 = wk.e.b();
            if ((ikB == null ? -1L : ikB.d) <= (ikB2 != null ? ikB2.d : -1L)) {
                ikB = ikB2;
            }
        } else {
            ikB = wk.f;
        }
        if (ikB != null) {
            yk = new Yk();
            yk.f5974a = ikB.d;
            long andIncrement = ikB.f.getAndIncrement();
            Zk zk = ikB.b;
            zk.a(Zk.g, Long.valueOf(ikB.f.get()));
            zk.b();
            yk.b = andIncrement;
            yk.c = TimeUnit.MILLISECONDS.toSeconds(ikB.j);
            yk.d = ikB.c.f5779a;
        } else {
            long j = w5.j;
            long jA = wk.b.a();
            S6 s6 = wk.f5946a.e;
            EnumC1998al enumC1998al = EnumC1998al.BACKGROUND;
            s6.a(jA, enumC1998al, j);
            yk = new Yk();
            yk.f5974a = jA;
            yk.d = enumC1998al;
            yk.b = 0L;
            yk.c = 0L;
        }
        c2419r9.a(w5, yk);
        return false;
    }
}
