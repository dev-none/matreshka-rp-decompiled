package io.appmetrica.analytics.impl;

import android.content.Context;
import android.location.Location;
import android.os.Bundle;
import io.appmetrica.analytics.AdvIdentifiersResult;
import io.appmetrica.analytics.AppMetricaConfig;
import io.appmetrica.analytics.AppMetricaLibraryAdapterConfig;
import io.appmetrica.analytics.DeferredDeeplinkListener;
import io.appmetrica.analytics.DeferredDeeplinkParametersListener;
import io.appmetrica.analytics.ReporterConfig;
import io.appmetrica.analytics.StartupParamsCallback;
import io.appmetrica.analytics.coreapi.internal.lifecycle.ActivityEvent;
import io.appmetrica.analytics.coreutils.internal.ApiKeyUtils;
import io.appmetrica.analytics.coreutils.internal.WrapUtils;
import io.appmetrica.analytics.coreutils.internal.logger.LoggerStorage;
import io.appmetrica.analytics.logger.appmetrica.internal.ImportantLogger;
import io.appmetrica.analytics.logger.appmetrica.internal.PublicLogger;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: loaded from: classes7.dex */
public final class A0 implements Ja {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Context f5587a;
    public final Ia b;
    public final C1992af c;
    public final Sl d;
    public final C2352og e;
    public final Gf f;
    public final C2354oi g;
    public final Bi h;
    public final L7 i;
    public final C2024bl j;
    public volatile C2398qc k;
    public final C2286m0 l;
    public boolean m;

    public A0(Context context, Ia ia) {
        this.f5587a = context;
        this.b = ia;
        C1992af c1992afB = C2213j4.l().b(context);
        this.c = c1992afB;
        ArrayList arrayListA = C2623zd.a();
        C2213j4 c2213j4L = C2213j4.l();
        c2213j4L.m().a(new S3(context));
        B0.a(context).a(arrayListA);
        Gf gfA = B0.a(context, B0.a(ia.b(), this));
        this.f = gfA;
        L7 l7J = c2213j4L.j();
        this.i = l7J;
        Bi biA = B0.a(gfA, context, ia.getDefaultExecutor());
        this.h = biA;
        l7J.a(biA);
        Sl slA = B0.a(context, biA, c1992afB, ia.b());
        this.d = slA;
        biA.a(slA);
        this.e = B0.a(biA, c1992afB, ia.b());
        this.g = B0.a(context, gfA, biA, ia.b(), slA);
        this.j = c2213j4L.o();
        this.l = new C2286m0(c1992afB);
    }

    @Override // io.appmetrica.analytics.impl.Ja
    public final Ya c(ReporterConfig reporterConfig) {
        return this.g.b(reporterConfig);
    }

    @Override // io.appmetrica.analytics.impl.Ja, io.appmetrica.analytics.impl.Oc
    public final void clearAppEnvironment() {
        j().clearAppEnvironment();
    }

    @Override // io.appmetrica.analytics.impl.Ja
    public final C2090ea d() {
        return this.d.e();
    }

    @Override // io.appmetrica.analytics.impl.Ja
    public final String e() {
        return this.d.d();
    }

    @Override // io.appmetrica.analytics.impl.Ja
    public final Map<String, String> g() {
        return this.d.b();
    }

    @Override // io.appmetrica.analytics.impl.Ja
    public final AdvIdentifiersResult h() {
        return this.d.a();
    }

    @Override // io.appmetrica.analytics.impl.Ja
    public final C2398qc i() {
        return this.k;
    }

    public final Pa j() {
        C2398qc c2398qc = this.k;
        Intrinsics.checkNotNull(c2398qc);
        return c2398qc.f6272a;
    }

    public final C2354oi k() {
        return this.g;
    }

    @Override // io.appmetrica.analytics.impl.Ja, io.appmetrica.analytics.impl.Oc
    public final void putAppEnvironmentValue(String str, String str2) {
        j().putAppEnvironmentValue(str, str2);
    }

    @Override // io.appmetrica.analytics.impl.Ja, io.appmetrica.analytics.impl.Oc
    public final void setDataSendingEnabled(boolean z) {
        j().setDataSendingEnabled(z);
    }

    @Override // io.appmetrica.analytics.impl.Ja, io.appmetrica.analytics.impl.Oc
    public final void setUserProfileID(String str) {
        j().setUserProfileID(str);
    }

    @Override // io.appmetrica.analytics.impl.Ja
    public final void a(AppMetricaLibraryAdapterConfig appMetricaLibraryAdapterConfig) {
        Boolean bool;
        C2286m0 c2286m0 = this.l;
        C2485u0 c2485u0 = c2286m0.b;
        c2485u0.getClass();
        AppMetricaConfig.Builder builderNewConfigBuilder = AppMetricaConfig.newConfigBuilder("629a824d-c717-4ba5-bc0f-3f3968554d01");
        if (c2485u0.f6340a.b() && Intrinsics.areEqual(c2485u0.b.f6150a, Boolean.TRUE)) {
            builderNewConfigBuilder.handleFirstActivationAsUpdate(true);
        }
        Boolean bool2 = appMetricaLibraryAdapterConfig.advIdentifiersTracking;
        if (bool2 == null) {
            bool2 = Boolean.FALSE;
        }
        builderNewConfigBuilder.withAdvIdentifiersTracking(bool2.booleanValue());
        AppMetricaConfig appMetricaConfigBuild = builderNewConfigBuilder.build();
        AppMetricaConfig.Builder builderF = c2286m0.f6199a.f();
        if (builderF != null) {
            if (builderF.build().advIdentifiersTracking == null && (bool = appMetricaConfigBuild.advIdentifiersTracking) != null) {
                builderF.withAdvIdentifiersTracking(bool.booleanValue());
            }
            appMetricaConfigBuild = builderF.build();
        }
        PublicLogger mainPublicOrAnonymousLogger = LoggerStorage.getMainPublicOrAnonymousLogger();
        if (a(mainPublicOrAnonymousLogger, appMetricaConfigBuild, new C2610z0(this, appMetricaConfigBuild, mainPublicOrAnonymousLogger), false)) {
            ImportantLogger.INSTANCE.info("AppMetrica", "Activate AppMetrica in anonymous mode", new Object[0]);
        }
    }

    @Override // io.appmetrica.analytics.impl.Ja
    public final void b(AppMetricaConfig appMetricaConfig) {
        boolean z;
        PublicLogger orCreateMainPublicLogger = LoggerStorage.getOrCreateMainPublicLogger(appMetricaConfig.apiKey);
        boolean zA = a(orCreateMainPublicLogger, appMetricaConfig, new C2585y0(this, appMetricaConfig, orCreateMainPublicLogger), true);
        if (zA || this.m) {
            z = false;
        } else {
            a(orCreateMainPublicLogger, appMetricaConfig, true);
            z = true;
        }
        if (zA || z) {
            this.c.a(appMetricaConfig);
        } else {
            orCreateMainPublicLogger.warning("AppMetrica SDK already has been activated", new Object[0]);
        }
        if (zA) {
            ImportantLogger.INSTANCE.info("AppMetrica", "Activate AppMetrica with APIKey " + ApiKeyUtils.createPartialApiKey(appMetricaConfig.apiKey), new Object[0]);
        }
        if (z) {
            ImportantLogger.INSTANCE.info("AppMetrica", "Upgrade AppMetrica anonymous mode to normal with APIKey " + ApiKeyUtils.createPartialApiKey(appMetricaConfig.apiKey), new Object[0]);
        }
        this.m = true;
    }

    @Override // io.appmetrica.analytics.impl.Ja, io.appmetrica.analytics.impl.H6
    public final void a(int i, Bundle bundle) {
        this.d.b(bundle, null);
    }

    @Override // io.appmetrica.analytics.impl.Ja
    public final void a(DeferredDeeplinkParametersListener deferredDeeplinkParametersListener) {
        this.e.a(deferredDeeplinkParametersListener);
    }

    @Override // io.appmetrica.analytics.impl.Ja
    public final void a(DeferredDeeplinkListener deferredDeeplinkListener) {
        this.e.a(deferredDeeplinkListener);
    }

    @Override // io.appmetrica.analytics.impl.Ja
    public final void a(ReporterConfig reporterConfig) {
        this.g.a(reporterConfig);
    }

    @Override // io.appmetrica.analytics.impl.Ja
    public final void a(StartupParamsCallback startupParamsCallback, List<String> list) {
        this.d.a(startupParamsCallback, list, AbstractC2322nb.c(this.f.f5692a.getAsString("PROCESS_CFG_CLIDS")));
    }

    public final boolean a(PublicLogger publicLogger, AppMetricaConfig appMetricaConfig, Dc dc, boolean z) {
        if (this.k == null) {
            a(publicLogger, appMetricaConfig, z);
            this.e.a();
            C2348oc c2348ocA = dc.a();
            G7 g7 = new G7(c2348ocA);
            C2398qc c2398qc = new C2398qc(c2348ocA, g7);
            this.b.c().a(g7);
            this.k = c2398qc;
            C2465t5 c2465t5 = this.j.b;
            synchronized (c2465t5) {
                c2465t5.f6326a = c2348ocA;
                Iterator it = c2465t5.b.iterator();
                while (it.hasNext()) {
                    ((InterfaceC2172he) it.next()).consume(c2348ocA);
                }
                c2465t5.b.clear();
            }
            return true;
        }
        dc.a();
        return false;
    }

    public final void a(PublicLogger publicLogger, AppMetricaConfig appMetricaConfig, boolean z) {
        Boolean bool = appMetricaConfig.logs;
        Boolean bool2 = Boolean.TRUE;
        if (bool2.equals(bool)) {
            publicLogger.setEnabled(true);
            PublicLogger.INSTANCE.getAnonymousInstance().setEnabled(true);
        } else {
            publicLogger.setEnabled(false);
            PublicLogger.INSTANCE.getAnonymousInstance().setEnabled(false);
        }
        if (((Boolean) WrapUtils.getOrDefault(appMetricaConfig.crashReporting, bool2)).booleanValue()) {
            this.b.d().a(this.f5587a, appMetricaConfig, this);
            this.b.d().b();
            publicLogger.info("Register application crash handler", new Object[0]);
        } else {
            this.b.d().a();
            publicLogger.info("Disable all crash handlers", new Object[0]);
        }
        if (((Boolean) WrapUtils.getOrDefault(appMetricaConfig.sessionsAutoTrackingEnabled, bool2)).booleanValue()) {
            this.j.a();
        } else {
            C2024bl c2024bl = this.j;
            synchronized (c2024bl) {
                if (c2024bl.g) {
                    c2024bl.f6019a.unregisterListener(c2024bl.c, ActivityEvent.RESUMED);
                    c2024bl.f6019a.unregisterListener(c2024bl.d, ActivityEvent.PAUSED);
                    c2024bl.g = false;
                }
            }
        }
        this.f.d(appMetricaConfig);
        Sl sl = this.d;
        sl.e = publicLogger;
        sl.b(appMetricaConfig.customHosts);
        Sl sl2 = this.d;
        Object obj = appMetricaConfig.additionalConfig.get("YMM_clids");
        sl2.a(obj instanceof Map ? (Map) obj : null);
        String str = (String) appMetricaConfig.additionalConfig.get("YMM_distributionReferrer");
        this.d.a(str);
        if (str != null) {
            this.d.b("api");
        }
        this.h.a(appMetricaConfig.locationTracking, appMetricaConfig.dataSendingEnabled, appMetricaConfig.advIdentifiersTracking, Boolean.valueOf(z));
        this.d.i();
    }

    @Override // io.appmetrica.analytics.impl.Ja, io.appmetrica.analytics.impl.Oc
    public final void a(Location location) {
        j().a(location);
    }

    @Override // io.appmetrica.analytics.impl.Ja, io.appmetrica.analytics.impl.Oc
    public final void a(boolean z) {
        j().a(z);
    }

    @Override // io.appmetrica.analytics.impl.Ja, io.appmetrica.analytics.impl.Oc
    public final void a(boolean z, boolean z2) {
        j().a(z, z2);
    }

    @Override // io.appmetrica.analytics.impl.Ja, io.appmetrica.analytics.impl.Oc
    public final void a(String str, String str2) {
        j().a(str, str2);
    }

    @Override // io.appmetrica.analytics.impl.Ja, io.appmetrica.analytics.impl.Oc
    public final void a(String str) {
        j().a(str);
    }

    @Override // io.appmetrica.analytics.impl.Ja, io.appmetrica.analytics.impl.InterfaceC1988ab
    public final Za a() {
        return this.g;
    }
}
