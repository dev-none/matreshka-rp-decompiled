package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreapi.internal.backport.BiFunction;
import java.util.ArrayList;
import java.util.Map;
import java.util.TreeMap;

/* JADX INFO: loaded from: classes7.dex */
public final class Fn {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final En f5680a;
    public final BiFunction b;
    public final Hf c;

    public Fn() {
        this(new Cn(), new C2445sa(), C2213j4.l().n());
    }

    public final ArrayList a(Thread thread, Thread thread2) {
        Map mapC;
        ArrayList arrayList = new ArrayList();
        TreeMap treeMap = new TreeMap(new Dn());
        try {
            mapC = this.f5680a.c();
        } catch (SecurityException unused) {
            mapC = null;
        }
        if (mapC != null) {
            treeMap.putAll(mapC);
        }
        if (thread2 != null) {
            treeMap.remove(thread2);
        }
        for (Map.Entry entry : treeMap.entrySet()) {
            Thread thread3 = (Thread) entry.getKey();
            if (thread3 != thread && thread3 != thread2) {
                arrayList.add((C2608yn) this.b.apply(thread3, (StackTraceElement[]) entry.getValue()));
            }
        }
        return arrayList;
    }

    public Fn(En en, C2445sa c2445sa, C2591y6 c2591y6) {
        this.f5680a = en;
        this.b = c2445sa;
        this.c = c2591y6;
    }
}
