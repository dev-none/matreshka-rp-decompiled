package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.modulesapi.internal.service.event.ModuleServiceEventHandler;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collection;
import java.util.LinkedHashMap;
import java.util.Map;
import kotlin.Pair;
import kotlin.TuplesKt;
import kotlin.jvm.internal.StringCompanionObject;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.nd, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2324nd extends Wg {
    public final ArrayList b;

    public C2324nd(C2085e5 c2085e5) {
        super(c2085e5);
        String strB = c2085e5.b().b();
        strB = strB == null ? "empty" : strB;
        StringCompanionObject stringCompanionObject = StringCompanionObject.INSTANCE;
        String.format("[ModulesEventHandler-%s]", Arrays.copyOf(new Object[]{strB}, 1));
        LinkedHashMap linkedHashMapA = C2495ua.k().o().a(strB);
        ArrayList arrayList = new ArrayList(linkedHashMapA.size());
        for (Map.Entry entry : linkedHashMapA.entrySet()) {
            arrayList.add(TuplesKt.to(entry.getValue(), new C1990ad(c2085e5, (String) entry.getKey())));
        }
        this.b = arrayList;
    }

    @Override // io.appmetrica.analytics.impl.Wg
    public final boolean a(W5 w5) {
        if (this.f5944a.t.c()) {
            ArrayList<Pair> arrayList = this.b;
            if (!(arrayList instanceof Collection) || !arrayList.isEmpty()) {
                for (Pair pair : arrayList) {
                    ModuleServiceEventHandler moduleServiceEventHandler = (ModuleServiceEventHandler) pair.component1();
                    C1990ad c1990ad = (C1990ad) pair.component2();
                    if (moduleServiceEventHandler.handle(new C2068dd(c1990ad.b, c1990ad.f6001a, new C2042cd(c1990ad.d, c1990ad.c, w5)), w5)) {
                        return true;
                    }
                }
            }
        }
        return false;
    }
}
