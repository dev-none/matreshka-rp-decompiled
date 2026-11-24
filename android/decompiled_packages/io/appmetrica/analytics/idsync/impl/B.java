package io.appmetrica.analytics.idsync.impl;

import io.appmetrica.analytics.modulesapi.internal.common.ModulePreferences;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;
import kotlin.collections.CollectionsKt;
import kotlin.collections.MapsKt;
import kotlin.ranges.RangesKt;

/* JADX INFO: loaded from: classes7.dex */
public final class B {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final ModulePreferences f5558a;
    public final A b = new A();
    public final String c = "request_state";
    public final Map d = MapsKt.toMutableMap(a());

    public B(ModulePreferences modulePreferences) {
        this.f5558a = modulePreferences;
    }

    public final LinkedHashMap a() {
        List<z> listA = this.b.toModel(this.f5558a.getString(this.c, null));
        LinkedHashMap linkedHashMap = new LinkedHashMap(RangesKt.coerceAtLeast(MapsKt.mapCapacity(CollectionsKt.collectionSizeOrDefault(listA, 10)), 16));
        for (Object obj : listA) {
            linkedHashMap.put(((z) obj).f5579a, obj);
        }
        return linkedHashMap;
    }
}
