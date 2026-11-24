package io.appmetrica.analytics.impl;

import java.util.HashMap;

/* JADX INFO: loaded from: classes7.dex */
public final class Tm {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final HashMap f5911a;

    public Tm() {
        HashMap map = new HashMap();
        this.f5911a = map;
        Nm nm = new Nm();
        Om om = new Om();
        Pm pm = new Pm();
        Qm qm = new Qm();
        map.put(C2333nm.class, nm);
        map.put(C2031c2.class, om);
        map.put(Cif.class, pm);
        map.put(A3.class, qm);
    }

    public static Um a(Class cls) {
        return (Um) Sm.f5890a.f5911a.get(cls);
    }
}
