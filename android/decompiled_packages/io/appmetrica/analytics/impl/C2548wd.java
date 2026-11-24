package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreapi.internal.data.Converter;
import java.util.ArrayList;
import java.util.Map;
import kotlin.Pair;
import kotlin.TuplesKt;
import kotlin.collections.MapsKt;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.wd, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2548wd implements Converter {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Ck f6385a = C2495ua.k().p();

    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final C2557wm[] fromModel(Map<String, ? extends Object> map) {
        C2557wm c2557wm;
        Map<String, C2119fd> mapC = this.f6385a.c();
        ArrayList arrayList = new ArrayList();
        for (Map.Entry<String, ? extends Object> entry : map.entrySet()) {
            String key = entry.getKey();
            Object value = entry.getValue();
            C2119fd c2119fd = mapC.get(key);
            if (c2119fd == null || value == null) {
                c2557wm = null;
            } else {
                c2557wm = new C2557wm();
                c2557wm.f6392a = key;
                c2557wm.b = (byte[]) c2119fd.c.fromModel(value);
            }
            if (c2557wm != null) {
                arrayList.add(c2557wm);
            }
        }
        Object[] array = arrayList.toArray(new C2557wm[0]);
        if (array != null) {
            return (C2557wm[]) array;
        }
        throw new NullPointerException("null cannot be cast to non-null type kotlin.Array<T of kotlin.collections.ArraysKt__ArraysJVMKt.toTypedArray>");
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final Map<String, Object> toModel(C2557wm[] c2557wmArr) {
        Map<String, C2119fd> mapC = this.f6385a.c();
        ArrayList arrayList = new ArrayList();
        for (C2557wm c2557wm : c2557wmArr) {
            C2119fd c2119fd = mapC.get(c2557wm.f6392a);
            Pair pair = c2119fd != null ? TuplesKt.to(c2557wm.f6392a, c2119fd.c.toModel(c2557wm.b)) : null;
            if (pair != null) {
                arrayList.add(pair);
            }
        }
        return MapsKt.toMap(arrayList);
    }
}
