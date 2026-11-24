package io.appmetrica.analytics.impl;

import java.util.ArrayList;
import java.util.Collection;
import java.util.Iterator;
import java.util.List;
import kotlin.collections.CollectionsKt;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.v3, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2513v3 implements Cdo {
    @Override // kotlin.jvm.functions.Function2
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final List<C2613z3> invoke(List<C2613z3> list, C2613z3 c2613z3) {
        if (!(list instanceof Collection) || !list.isEmpty()) {
            Iterator<T> it = list.iterator();
            while (it.hasNext()) {
                Y7 y7 = ((C2613z3) it.next()).b;
                Y7 y8 = c2613z3.b;
                if (y7 == y8) {
                    if (y8 != Y7.c) {
                        return null;
                    }
                    ArrayList arrayList = new ArrayList();
                    for (Object obj : list) {
                        if (((C2613z3) obj).b != Y7.c) {
                            arrayList.add(obj);
                        }
                    }
                    return CollectionsKt.plus((Collection<? extends C2613z3>) arrayList, c2613z3);
                }
            }
        }
        return CollectionsKt.plus((Collection<? extends C2613z3>) list, c2613z3);
    }
}
