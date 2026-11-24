package io.appmetrica.analytics;

import android.content.Context;
import io.appmetrica.analytics.impl.AbstractC2453si;
import io.appmetrica.analytics.impl.C2299md;
import io.appmetrica.analytics.impl.C2349od;
import io.appmetrica.analytics.impl.C2374pd;
import io.appmetrica.analytics.impl.C2399qd;
import io.appmetrica.analytics.impl.C2423rd;
import io.appmetrica.analytics.impl.C2448sd;
import io.appmetrica.analytics.impl.C2473td;
import io.appmetrica.analytics.impl.C2498ud;
import io.appmetrica.analytics.impl.C2560x0;

/* JADX INFO: loaded from: classes7.dex */
public final class ModulesFacade {
    public static final int EXTERNAL_ATTRIBUTION_ADJUST = 2;
    public static final int EXTERNAL_ATTRIBUTION_AIRBRIDGE = 5;
    public static final int EXTERNAL_ATTRIBUTION_APPSFLYER = 1;
    public static final int EXTERNAL_ATTRIBUTION_KOCHAVA = 3;
    public static final int EXTERNAL_ATTRIBUTION_SINGULAR = 6;
    public static final int EXTERNAL_ATTRIBUTION_TENJIN = 4;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static C2498ud f5386a = new C2498ud();

    public static IModuleReporter getModuleReporter(Context context, String str) {
        C2498ud c2498ud = f5386a;
        C2299md c2299md = c2498ud.b;
        c2299md.b.a(context);
        c2299md.d.a(str);
        c2498ud.c.f5612a.a(context.getApplicationContext().getApplicationContext());
        return AbstractC2453si.f6315a.a(context.getApplicationContext(), str);
    }

    public static boolean isActivatedForApp() {
        C2498ud c2498ud = f5386a;
        c2498ud.b.getClass();
        c2498ud.c.getClass();
        c2498ud.f6350a.getClass();
        return C2560x0.a();
    }

    public static void reportAdRevenue(AdRevenue adRevenue) {
        reportAdRevenue(adRevenue, Boolean.TRUE);
    }

    public static void reportEvent(ModuleEvent moduleEvent) {
        C2498ud c2498ud = f5386a;
        c2498ud.b.f6208a.a(null);
        c2498ud.c.getClass();
        c2498ud.d.execute(new C2374pd(c2498ud, moduleEvent));
    }

    public static void reportExternalAttribution(int i, String str) {
        C2498ud c2498ud = f5386a;
        c2498ud.b.getClass();
        c2498ud.c.getClass();
        c2498ud.d.execute(new C2399qd(c2498ud, i, str));
    }

    public static void sendEventsBuffer() {
        C2498ud c2498ud = f5386a;
        c2498ud.b.getClass();
        c2498ud.c.getClass();
        AppMetrica.sendEventsBuffer();
    }

    public static void setAdvIdentifiersTracking(boolean z) {
        C2498ud c2498ud = f5386a;
        c2498ud.b.getClass();
        c2498ud.c.getClass();
        c2498ud.d.execute(new C2423rd(c2498ud, z));
    }

    public static void setProxy(C2498ud c2498ud) {
        f5386a = c2498ud;
    }

    public static void setSessionExtra(String str, byte[] bArr) {
        C2498ud c2498ud = f5386a;
        c2498ud.b.c.a(str);
        c2498ud.c.getClass();
        c2498ud.d.execute(new C2448sd(c2498ud, str, bArr));
    }

    public static void subscribeForAutoCollectedData(Context context, String str) {
        C2498ud c2498ud = f5386a;
        C2299md c2299md = c2498ud.b;
        c2299md.b.a(context);
        c2299md.d.a(str);
        c2498ud.c.f5612a.a(context.getApplicationContext());
        c2498ud.d.execute(new C2473td(str));
    }

    public static void reportAdRevenue(AdRevenue adRevenue, Boolean bool) {
        C2498ud c2498ud = f5386a;
        boolean zBooleanValue = bool.booleanValue();
        c2498ud.b.getClass();
        c2498ud.c.getClass();
        c2498ud.d.execute(new C2349od(c2498ud, adRevenue, zBooleanValue));
    }
}
