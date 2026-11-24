package io.appmetrica.analytics.impl;

import android.app.Activity;
import android.content.Context;
import android.location.Location;
import io.appmetrica.analytics.AnrListener;
import io.appmetrica.analytics.AppMetricaConfig;
import io.appmetrica.analytics.ExternalAttribution;
import io.appmetrica.analytics.coreapi.internal.backport.Consumer;
import io.appmetrica.analytics.coreutils.internal.WrapUtils;
import io.appmetrica.analytics.coreutils.internal.collection.CollectionUtils;
import io.appmetrica.analytics.coreutils.internal.io.FileUtils;
import io.appmetrica.analytics.internal.CounterConfigurationReporterType;
import io.appmetrica.analytics.logger.appmetrica.internal.PublicLogger;
import io.appmetrica.analytics.ndkcrashesapi.internal.NativeCrashClientConfig;
import io.appmetrica.analytics.ndkcrashesapi.internal.NativeCrashClientModule;
import java.io.File;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.Set;
import java.util.concurrent.TimeUnit;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.oc, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2348oc extends Q2 implements Pa {
    public static final Long s = Long.valueOf(TimeUnit.SECONDS.toMillis(1));
    public final Gn p;
    public final C2622zc q;
    public final C2373pc r;

    public C2348oc(C2622zc c2622zc) {
        super(c2622zc.b(), c2622zc.i(), c2622zc.h(), c2622zc.d(), c2622zc.f(), c2622zc.j(), c2622zc.g(), c2622zc.c(), c2622zc.a(), c2622zc.e());
        this.p = new Gn(new C2146ge("Referral url"));
        this.q = c2622zc;
        this.r = new C2373pc(this);
        l();
    }

    public final void a(AppMetricaConfig appMetricaConfig, C2261l0 c2261l0) {
        if (c2261l0.b) {
            clearAppEnvironment();
        }
        List<String> list = c2261l0.f6180a;
        if (!CollectionUtils.isNullOrEmpty(list)) {
            this.b.b.addAutoCollectedDataSubscribers(list);
        }
        a(appMetricaConfig.appEnvironment);
        b(appMetricaConfig.errorEnvironment);
        Boolean bool = (Boolean) WrapUtils.getOrDefault(appMetricaConfig.nativeCrashReporting, Boolean.TRUE);
        boolean zBooleanValue = bool.booleanValue();
        this.c.info("native crash reporting enabled: %b", bool);
        if (zBooleanValue) {
            Id id = this.q.c;
            Context context = this.f5845a;
            id.d = new F0(this.b.b.getApiKey(), id.f5727a.f5692a.getAsString("PROCESS_CFG_PACKAGE_NAME"), CounterConfigurationReporterType.MAIN, id.f5727a.f5692a.getAsInteger("PROCESS_CFG_PROCESS_ID").intValue(), id.f5727a.f5692a.getAsString("PROCESS_CFG_PROCESS_SESSION_ID"), this.b.d());
            File nativeCrashDirectory = FileUtils.getNativeCrashDirectory(context);
            F0 f0 = null;
            String absolutePath = nativeCrashDirectory != null ? nativeCrashDirectory.getAbsolutePath() : null;
            if (absolutePath != null) {
                NativeCrashClientModule nativeCrashClientModule = id.b;
                G0 g0 = id.c;
                F0 f1 = id.d;
                if (f1 == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("nativeCrashMetadata");
                } else {
                    f0 = f1;
                }
                g0.getClass();
                nativeCrashClientModule.initHandling(context, new NativeCrashClientConfig(absolutePath, G0.a(f0)));
            }
        }
        C2373pc c2373pc = this.r;
        synchronized (c2373pc) {
            Integer num = appMetricaConfig.anrMonitoringTimeout;
            c2373pc.f6256a = num != null ? num.intValue() : 5;
            Boolean bool2 = appMetricaConfig.anrMonitoring;
            if (bool2 == null) {
                bool2 = Boolean.FALSE;
            }
            if (bool2.booleanValue()) {
                c2373pc.b.a(c2373pc.f6256a);
            } else {
                c2373pc.b.b();
            }
        }
    }

    @Override // io.appmetrica.analytics.impl.Pa
    public final void b(Activity activity) {
        if (this.q.i.a(activity, EnumC2360p.PAUSED)) {
            this.c.info("Pause session", new Object[0]);
            d(activity != null ? activity.getClass().getSimpleName() : null);
            C2313n2 c2313n2 = this.q.g;
            synchronized (c2313n2) {
                c2313n2.getClass();
                for (C2288m2 c2288m2 : c2313n2.f6218a) {
                    if (!c2288m2.d) {
                        c2288m2.d = true;
                        c2288m2.b.executeDelayed(c2288m2.e, c2288m2.c);
                    }
                }
            }
        }
    }

    @Override // io.appmetrica.analytics.impl.Pa
    public final void c() {
        C2373pc c2373pc = this.r;
        synchronized (c2373pc) {
            c2373pc.b.a(c2373pc.f6256a);
        }
    }

    @Override // io.appmetrica.analytics.impl.Pa
    public final List<String> f() {
        return this.b.f5829a.b();
    }

    @Override // io.appmetrica.analytics.impl.Q2
    public final String j() {
        return "[MainReporter]";
    }

    @Override // io.appmetrica.analytics.impl.Q2
    public final void k() {
        super.k();
        C2213j4.l().m().c();
    }

    public final void l() {
        Bi bi = this.h;
        bi.c.a(this.b.f5829a);
        C2313n2 c2313n2 = this.q.g;
        C2323nc c2323nc = new C2323nc(this);
        long jLongValue = s.longValue();
        synchronized (c2313n2) {
            c2313n2.a(c2323nc, jLongValue);
        }
    }

    @Override // io.appmetrica.analytics.impl.Pa
    public final void c(String str) {
        this.p.a(str);
        Bi bi = this.h;
        PublicLogger publicLogger = this.c;
        Set set = D9.f5638a;
        HashMap map = new HashMap();
        map.put("type", "referral");
        map.put("link", str);
        map.put("auto", Boolean.FALSE);
        String strB = AbstractC2322nb.b(map);
        EnumC2195ib enumC2195ib = EnumC2195ib.EVENT_TYPE_UNDEFINED;
        U3 u3 = new U3(strB, "", 8208, 0, publicLogger);
        Kh kh = this.b;
        bi.getClass();
        bi.a(Bi.a(u3, kh), kh, 1, (Map) null);
        this.c.info("Referral URL received: " + WrapUtils.wrapToTag(str), new Object[0]);
    }

    @Override // io.appmetrica.analytics.impl.Pa
    public final void a(String str, boolean z) {
        this.c.info("App opened via deeplink: " + WrapUtils.wrapToTag(str), new Object[0]);
        Bi bi = this.h;
        PublicLogger publicLogger = this.c;
        Set set = D9.f5638a;
        HashMap map = new HashMap();
        map.put("type", "open");
        map.put("link", str);
        map.put("auto", Boolean.valueOf(z));
        String strB = AbstractC2322nb.b(map);
        EnumC2195ib enumC2195ib = EnumC2195ib.EVENT_TYPE_UNDEFINED;
        U3 u3 = new U3(strB, "", 8208, 0, publicLogger);
        Kh kh = this.b;
        bi.getClass();
        bi.a(Bi.a(u3, kh), kh, 1, (Map) null);
    }

    @Override // io.appmetrica.analytics.impl.Pa
    public final void a(EnumC2310n enumC2310n) {
        if (enumC2310n == EnumC2310n.b) {
            this.c.info("Enable activity auto tracking", new Object[0]);
            return;
        }
        this.c.warning("Could not enable activity auto tracking. " + enumC2310n.f6215a, new Object[0]);
    }

    @Override // io.appmetrica.analytics.impl.Pa
    public final void a(Activity activity) {
        if (this.q.i.a(activity, EnumC2360p.RESUMED)) {
            this.c.info("Resume session", new Object[0]);
            e(activity != null ? activity.getClass().getSimpleName() : null);
            C2313n2 c2313n2 = this.q.g;
            synchronized (c2313n2) {
                c2313n2.getClass();
                for (C2288m2 c2288m2 : c2313n2.f6218a) {
                    if (c2288m2.d) {
                        c2288m2.d = false;
                        c2288m2.b.remove(c2288m2.e);
                        C2348oc c2348oc = c2288m2.f6201a.f6224a;
                        c2348oc.h.c.b(c2348oc.b.f5829a);
                    }
                }
            }
        }
    }

    @Override // io.appmetrica.analytics.impl.Pa, io.appmetrica.analytics.impl.Oc
    public final void a(Location location) {
        this.b.b.setManualLocation(location);
        this.c.info("Set location: %s", location);
    }

    @Override // io.appmetrica.analytics.impl.Pa, io.appmetrica.analytics.impl.Oc
    public final void a(boolean z) {
        this.b.b.setLocationTracking(z);
    }

    @Override // io.appmetrica.analytics.impl.Pa, io.appmetrica.analytics.impl.Oc
    public final void a(boolean z, boolean z2) {
        this.c.info("Set advIdentifiersTracking to %s", Boolean.valueOf(z));
        this.b.b.setAdvIdentifiersTracking(z, z2);
    }

    @Override // io.appmetrica.analytics.impl.Pa
    public final void a(Io io2) {
        PublicLogger publicLogger = this.c;
        synchronized (io2) {
            io2.b = publicLogger;
        }
        Iterator it = io2.f5735a.iterator();
        while (it.hasNext()) {
            ((Consumer) it.next()).consume(publicLogger);
        }
        io2.f5735a.clear();
    }

    @Override // io.appmetrica.analytics.impl.Pa
    public final void a(AnrListener anrListener) {
        this.r.a(anrListener);
    }

    @Override // io.appmetrica.analytics.impl.Pa
    public final void a(ExternalAttribution externalAttribution) {
        this.c.info("External attribution received: %s", externalAttribution);
        Bi bi = this.h;
        byte[] bytes = externalAttribution.toBytes();
        PublicLogger publicLogger = this.c;
        Set set = D9.f5638a;
        EnumC2195ib enumC2195ib = EnumC2195ib.EVENT_TYPE_UNDEFINED;
        U3 u3 = new U3(bytes, "", 42, publicLogger);
        Kh kh = this.b;
        bi.getClass();
        bi.a(Bi.a(u3, kh), kh, 1, (Map) null);
    }

    @Override // io.appmetrica.analytics.impl.Q2, io.appmetrica.analytics.impl.Pa, io.appmetrica.analytics.impl.Oc
    public final void a(String str, String str2) {
        super.a(str, str2);
        Id id = this.q.c;
        String strD = this.b.d();
        F0 f0 = id.d;
        if (f0 != null) {
            F0 f1 = new F0(f0.f5668a, f0.b, f0.c, f0.d, f0.e, strD);
            id.d = f1;
            NativeCrashClientModule nativeCrashClientModule = id.b;
            id.c.getClass();
            nativeCrashClientModule.updateAppMetricaMetadata(G0.a(f1));
        }
    }

    @Override // io.appmetrica.analytics.impl.Pa, io.appmetrica.analytics.impl.Oc
    public final void a(String str) {
        this.c.info("Add auto collected data subscriber: %s", str);
        this.b.b.addAutoCollectedDataSubscriber(str);
    }
}
