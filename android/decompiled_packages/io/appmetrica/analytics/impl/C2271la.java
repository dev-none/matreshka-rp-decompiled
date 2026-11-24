package io.appmetrica.analytics.impl;

import android.content.Context;
import io.appmetrica.analytics.coreapi.internal.servicecomponents.ServiceComponentsInitializer;
import io.appmetrica.analytics.coreutils.internal.reflection.ReflectionUtils;
import io.appmetrica.analytics.coreutils.internal.time.SystemTimeProvider;
import io.appmetrica.analytics.modulesapi.internal.service.ModuleServiceEntryPoint;
import java.util.ArrayList;
import java.util.List;
import kotlin.collections.CollectionsKt;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.la, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2271la {
    public static final C2271la d = new C2271la();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final C2623zd f6189a = new C2623zd();
    public final ServiceComponentsInitializer b = AbstractC2152gk.a();
    public boolean c = false;

    public final void a(Context context) {
        C2197id c2197id;
        C2495ua.a(context);
        this.b.onCreate(context);
        this.f6189a.getClass();
        List<String> listA = C2495ua.H.s.a();
        ArrayList arrayList = new ArrayList(CollectionsKt.collectionSizeOrDefault(listA, 10));
        for (String str : listA) {
            ReflectionUtils reflectionUtils = ReflectionUtils.INSTANCE;
            Object objLoadAndInstantiateClassWithDefaultConstructor = ReflectionUtils.loadAndInstantiateClassWithDefaultConstructor(str, ModuleServiceEntryPoint.class);
            if (objLoadAndInstantiateClassWithDefaultConstructor == null) {
                c2197id = new C2197id(str, false);
            } else {
                C2495ua.H.p().a((ModuleServiceEntryPoint<Object>) objLoadAndInstantiateClassWithDefaultConstructor);
                c2197id = new C2197id(str, true);
            }
            arrayList.add(c2197id);
        }
        new C2430rk(C2495ua.H.D().d).a(context);
        C2495ua.H.q().a();
        new C2222jd(C2495ua.H.d.a(), C2495ua.H.z(), "service_modules", new SystemTimeProvider()).a(arrayList);
    }

    public final void b(Context context) {
        if (this.c) {
            return;
        }
        synchronized (this) {
            if (!this.c) {
                a(context);
                this.c = true;
            }
        }
    }
}
