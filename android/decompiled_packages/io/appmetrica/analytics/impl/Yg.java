package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.IReporter;
import java.util.HashMap;

/* JADX INFO: loaded from: classes7.dex */
public final class Yg extends Wg {
    public final IReporter b;

    public Yg(C2085e5 c2085e5, IReporter iReporter) {
        super(c2085e5);
        this.b = iReporter;
    }

    @Override // io.appmetrica.analytics.impl.Wg
    public final boolean a(W5 w5) {
        Nc nc = (Nc) Nc.c.get(w5.d);
        HashMap map = new HashMap();
        map.put("type", nc.f5805a);
        map.put("delivery_method", nc.b);
        this.b.reportEvent("crash_saved", map);
        return false;
    }
}
