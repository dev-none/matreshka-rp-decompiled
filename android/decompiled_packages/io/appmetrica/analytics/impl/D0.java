package io.appmetrica.analytics.impl;

import android.content.Context;
import androidx.core.app.NotificationCompat;
import io.appmetrica.analytics.ModuleEvent;
import io.appmetrica.analytics.ModulesFacade;
import io.appmetrica.analytics.logger.appmetrica.internal.PublicLogger;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import kotlin.Pair;
import kotlin.TuplesKt;
import kotlin.collections.CollectionsKt;
import kotlin.collections.MapsKt;

/* JADX INFO: loaded from: classes7.dex */
public final class D0 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Ib f5633a = new Ib(C2213j4.l().d());
    public final Jb b = new Jb();
    public final Lb c = new Lb();

    public final void a(final String str, final String str2, final String str3) {
        Ib ib = this.f5633a;
        if (ib.c.a((Void) null).f6320a && ib.d.a(str).f6320a && ib.e.a(str2).f6320a && ib.f.a(str3).f6320a) {
            this.b.getClass();
            ((G9) C2213j4.l().c.a()).b.post(new Runnable() { // from class: io.appmetrica.analytics.impl.D0$$ExternalSyntheticLambda0
                @Override // java.lang.Runnable
                public final void run() {
                    D0.a(this.f$0, str, str2, str3);
                }
            });
            return;
        }
        String str4 = "Failed report event from sender: " + str + " with name = " + str2 + " and payload = " + str3;
        PublicLogger.INSTANCE.getAnonymousInstance().warning("[AppMetricaLibraryAdapterProxy]" + str4, new Object[0]);
    }

    public static final void a(D0 d0, String str, String str2, String str3) {
        List list;
        Context contextA;
        Lb lb = d0.c;
        lb.getClass();
        Pair[] pairArr = new Pair[3];
        if (str == null) {
            str = "null";
        }
        pairArr[0] = TuplesKt.to("sender", str);
        if (str2 == null) {
            str2 = "null";
        }
        pairArr[1] = TuplesKt.to(NotificationCompat.CATEGORY_EVENT, str2);
        if (str3 == null) {
            str3 = "null";
        }
        pairArr[2] = TuplesKt.to("payload", str3);
        Map<String, Object> mapMutableMapOf = MapsKt.mutableMapOf(pairArr);
        ModuleEvent.Builder builderWithName = ModuleEvent.newBuilder(4).withName("appmetrica_system_event_42");
        synchronized (lb) {
            if (lb.f5772a == null && (contextA = C2213j4.l().g.a()) != null) {
                lb.f5772a = CollectionsKt.listOf((Object[]) new InterfaceC2459t[]{new Wd(), new C2206in(contextA), new Ko()});
            }
            list = lb.f5772a;
        }
        if (list != null) {
            Iterator it = list.iterator();
            while (it.hasNext()) {
                ((InterfaceC2459t) it.next()).a(mapMutableMapOf);
            }
        }
        ModulesFacade.reportEvent(builderWithName.withAttributes(mapMutableMapOf).build());
    }
}
