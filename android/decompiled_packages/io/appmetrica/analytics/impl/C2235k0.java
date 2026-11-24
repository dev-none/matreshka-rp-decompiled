package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.logger.appmetrica.internal.PublicLogger;
import java.util.HashMap;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.k0, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2235k0 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final HashMap f6163a = new HashMap();

    public final synchronized C2209j0 a(X4 x4, PublicLogger publicLogger, C2018bf c2018bf) {
        C2209j0 c2209j0;
        c2209j0 = (C2209j0) this.f6163a.get(x4.toString());
        if (c2209j0 == null) {
            C2184i0 c2184i0D = c2018bf.d();
            c2209j0 = new C2209j0(c2184i0D.f6120a, c2184i0D.b, new C2531vl(publicLogger, "[App Environment]"));
            this.f6163a.put(x4.toString(), c2209j0);
        }
        return c2209j0;
    }

    public final synchronized void a(C2184i0 c2184i0, C2018bf c2018bf) {
        c2018bf.a(c2184i0).b();
    }
}
