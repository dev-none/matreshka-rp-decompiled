package io.appmetrica.analytics.impl;

import java.util.concurrent.TimeUnit;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.b5, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2008b5 extends AbstractC1982a5 {
    public C2008b5(C2085e5 c2085e5) {
        super(c2085e5);
    }

    @Override // io.appmetrica.analytics.impl.AbstractC1982a5
    public final boolean b(int i) {
        return i < 113;
    }

    @Override // io.appmetrica.analytics.impl.AbstractC1982a5
    public final void c() {
        C2018bf c2018bf = this.f5997a.c;
        try {
            Zk zk = new Zk(c2018bf, H2.g);
            Long lA = zk.c.a(Zk.d);
            if (lA != null) {
                zk.a(Zk.d, Long.valueOf(TimeUnit.SECONDS.toMillis(lA.longValue())));
            }
            Long lA2 = zk.c.a(Zk.e);
            if (lA2 != null) {
                zk.a(Zk.e, Long.valueOf(TimeUnit.SECONDS.toMillis(lA2.longValue())));
            }
        } catch (Throwable unused) {
        }
        try {
            Zk zk2 = new Zk(c2018bf, "foreground");
            Long lA3 = zk2.c.a(Zk.d);
            if (lA3 != null) {
                zk2.a(Zk.d, Long.valueOf(TimeUnit.SECONDS.toMillis(lA3.longValue())));
            }
            Long lA4 = zk2.c.a(Zk.e);
            if (lA4 != null) {
                zk2.a(Zk.e, Long.valueOf(TimeUnit.SECONDS.toMillis(lA4.longValue())));
            }
        } catch (Throwable unused2) {
        }
    }
}
