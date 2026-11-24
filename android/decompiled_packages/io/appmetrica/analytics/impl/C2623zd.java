package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreutils.internal.reflection.ReflectionUtils;
import io.appmetrica.analytics.modulesapi.internal.client.ModuleClientEntryPoint;
import java.util.ArrayList;
import java.util.List;
import kotlin.collections.CollectionsKt;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.zd, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2623zd {
    public static ArrayList a() {
        C2197id c2197id;
        List<String> listA = C2213j4.l().m.a();
        ArrayList arrayList = new ArrayList(CollectionsKt.collectionSizeOrDefault(listA, 10));
        for (String str : listA) {
            ReflectionUtils reflectionUtils = ReflectionUtils.INSTANCE;
            Object objLoadAndInstantiateClassWithDefaultConstructor = ReflectionUtils.loadAndInstantiateClassWithDefaultConstructor(str, ModuleClientEntryPoint.class);
            if (objLoadAndInstantiateClassWithDefaultConstructor == null) {
                c2197id = new C2197id(str, false);
            } else {
                C2213j4.l().m().b.add((ModuleClientEntryPoint) objLoadAndInstantiateClassWithDefaultConstructor);
                c2197id = new C2197id(str, true);
            }
            arrayList.add(c2197id);
        }
        return arrayList;
    }
}
