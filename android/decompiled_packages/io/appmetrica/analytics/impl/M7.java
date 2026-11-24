package io.appmetrica.analytics.impl;

import android.content.Context;
import io.appmetrica.analytics.coreapi.internal.servicecomponents.ServiceComponentsInitializer;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Iterator;
import java.util.List;
import kotlin.collections.CollectionsKt;

/* JADX INFO: loaded from: classes7.dex */
public final class M7 implements ServiceComponentsInitializer {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final List f5787a = CollectionsKt.listOf((Object[]) new String[]{"io.appmetrica.analytics.remotepermissions.internal.RemotePermissionsModuleEntryPoint", "io.appmetrica.analytics.apphud.internal.ApphudServiceModuleEntryPoint", "io.appmetrica.analytics.screenshot.internal.ScreenshotServiceModuleEntryPoint", "io.appmetrica.analytics.billing.internal.BillingServiceModuleEntryPoint", "io.appmetrica.analytics.idsync.internal.IdSyncModuleEntryPoint"});

    @Override // io.appmetrica.analytics.coreapi.internal.servicecomponents.ServiceComponentsInitializer
    public final void onCreate(Context context) {
        Zc zc = C2495ua.H.s;
        List list = this.f5787a;
        ArrayList arrayList = new ArrayList(CollectionsKt.collectionSizeOrDefault(list, 10));
        Iterator it = list.iterator();
        while (it.hasNext()) {
            arrayList.add(new C2565x5((String) it.next()));
        }
        Object[] array = arrayList.toArray(new C2565x5[0]);
        if (array == null) {
            throw new NullPointerException("null cannot be cast to non-null type kotlin.Array<T of kotlin.collections.ArraysKt__ArraysJVMKt.toTypedArray>");
        }
        C2565x5[] c2565x5Arr = (C2565x5[]) array;
        Yc[] ycArr = (Yc[]) Arrays.copyOf(c2565x5Arr, c2565x5Arr.length);
        synchronized (zc) {
            CollectionsKt.addAll(zc.f5984a, ycArr);
        }
        C2495ua.H.s.a(new Ze(context, "io.appmetrica.analytics.modules.ads", "lsm"));
    }
}
