package io.appmetrica.analytics.impl;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.vh, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2527vh extends Wg {
    public C2527vh(C2085e5 c2085e5) {
        super(c2085e5);
    }

    @Override // io.appmetrica.analytics.impl.Wg
    public final boolean a(W5 w5) {
        ((C2415r5) this.f5944a.p).e();
        Wk wk = this.f5944a.j;
        synchronized (wk) {
            Ik ikB = wk.b(w5);
            if (ikB.g) {
                ikB.g = false;
                Zk zk = ikB.b;
                zk.a(Zk.i, Boolean.FALSE);
                zk.b();
            }
            if (wk.g != 1) {
                wk.b(wk.f, w5);
            }
            wk.g = 1;
        }
        return true;
    }
}
