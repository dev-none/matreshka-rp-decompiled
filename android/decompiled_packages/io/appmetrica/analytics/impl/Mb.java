package io.appmetrica.analytics.impl;

import java.util.ArrayList;
import java.util.Iterator;

/* JADX INFO: loaded from: classes7.dex */
public final class Mb {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final W2 f5789a;
    public final C2363p2 b;
    public final ArrayList c;

    public Mb(W2 w2, C2363p2 c2363p2) {
        ArrayList arrayList = new ArrayList();
        this.c = arrayList;
        this.f5789a = w2;
        arrayList.add(w2);
        this.b = c2363p2;
        arrayList.add(c2363p2);
    }

    public final synchronized void a() {
        Iterator it = this.c.iterator();
        while (it.hasNext()) {
            ((InterfaceC2381pk) it.next()).onCreate();
        }
    }

    public final synchronized void a(C2470ta c2470ta) {
        this.c.add(c2470ta);
    }
}
