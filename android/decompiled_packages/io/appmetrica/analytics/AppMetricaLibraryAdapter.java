package io.appmetrica.analytics;

import android.content.Context;
import io.appmetrica.analytics.coreutils.internal.ApiKeyUtils;
import io.appmetrica.analytics.impl.C1977a0;
import io.appmetrica.analytics.impl.C2003b0;
import io.appmetrica.analytics.impl.C2213j4;
import io.appmetrica.analytics.impl.D0;
import io.appmetrica.analytics.impl.Ib;
import io.appmetrica.analytics.impl.Jb;
import io.appmetrica.analytics.logger.appmetrica.internal.ImportantLogger;

/* JADX INFO: loaded from: classes7.dex */
public class AppMetricaLibraryAdapter {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static D0 f5379a = new D0();

    public static void activate(Context context) {
        D0 d0 = f5379a;
        if (!d0.f5633a.f5725a.a(context).f6320a) {
            ImportantLogger.INSTANCE.info("[AppMetricaLibraryAdapterProxy]", "Activation failed due to context is null", new Object[0]);
            return;
        }
        Jb jb = d0.b;
        Context applicationContext = context.getApplicationContext();
        jb.getClass();
        C2213j4.l().g.a(applicationContext);
        C2213j4.l().b().a(applicationContext, AppMetricaLibraryAdapterConfig.newConfigBuilder().build());
    }

    public static void reportEvent(String str, String str2, String str3) {
        f5379a.a(str, str2, str3);
    }

    public static void setAdvIdentifiersTracking(boolean z) {
        D0 d0 = f5379a;
        if (d0.f5633a.c.a((Void) null).f6320a) {
            d0.b.getClass();
            ModulesFacade.setAdvIdentifiersTracking(z);
        }
    }

    public static void setProxy(D0 d0) {
        f5379a = d0;
    }

    public static void subscribeForAutoCollectedData(Context context, String str) {
        D0 d0 = f5379a;
        d0.getClass();
        ImportantLogger.INSTANCE.info("[AppMetricaLibraryAdapterProxy]", "Subscribe for auto-collected data with api key: " + ApiKeyUtils.createPartialApiKey(str), new Object[0]);
        Ib ib = d0.f5633a;
        if (ib.g.a(str).f6320a && ib.f5725a.a(context).f6320a) {
            d0.b.getClass();
            C2213j4.l().g.a(context);
            C2003b0 c2003b0B = C2213j4.l().b();
            c2003b0B.c.a().executeDelayed(new C1977a0(c2003b0B, context), c2003b0B.d);
            ModulesFacade.subscribeForAutoCollectedData(context, str);
        }
    }

    public static void activate(Context context, AppMetricaLibraryAdapterConfig appMetricaLibraryAdapterConfig) {
        D0 d0 = f5379a;
        Ib ib = d0.f5633a;
        if (ib.f5725a.a(context).f6320a && ib.b.a(appMetricaLibraryAdapterConfig).f6320a) {
            Jb jb = d0.b;
            Context applicationContext = context.getApplicationContext();
            jb.getClass();
            C2213j4.l().g.a(applicationContext);
            C2213j4.l().b().a(applicationContext, appMetricaLibraryAdapterConfig);
            return;
        }
        ImportantLogger.INSTANCE.info("[AppMetricaLibraryAdapterProxy]", "Activation failed due to context is null or invalid config", new Object[0]);
    }
}
