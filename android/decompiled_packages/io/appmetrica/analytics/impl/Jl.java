package io.appmetrica.analytics.impl;

import java.util.ArrayList;
import java.util.Collection;
import java.util.Iterator;

/* JADX INFO: loaded from: classes7.dex */
public final class Jl {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ Ll f5750a;

    public Jl(Ll ll) {
        this.f5750a = ll;
    }

    public final void a(String str, Nl nl, C2231jm c2231jm) {
        ArrayList arrayList;
        synchronized (this.f5750a.b) {
            Collection collection = (Collection) this.f5750a.f5780a.f6383a.get(str);
            arrayList = collection == null ? new ArrayList() : new ArrayList(collection);
        }
        Iterator it = arrayList.iterator();
        while (it.hasNext()) {
            ((Ul) it.next()).a(nl, c2231jm);
        }
    }
}
