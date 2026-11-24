package io.appmetrica.analytics.impl;

import java.util.Iterator;

/* JADX INFO: loaded from: classes7.dex */
public abstract class N2 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Kf f5800a;
    public final La b;

    public N2(Kf kf, La la) {
        this.f5800a = kf;
        this.b = la;
    }

    public final boolean a(W5 w5, M2 m2) {
        Iterator it = ((C2038c9) this.f5800a.a(w5.d)).f6026a.iterator();
        while (it.hasNext()) {
            if (m2.a(it.next(), w5)) {
                return true;
            }
        }
        return false;
    }

    public final Kf b() {
        return this.f5800a;
    }

    public final La a() {
        return this.b;
    }
}
