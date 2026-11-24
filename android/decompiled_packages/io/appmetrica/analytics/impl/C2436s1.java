package io.appmetrica.analytics.impl;

import android.app.Activity;
import android.app.Application;
import android.content.Context;
import android.content.Intent;
import android.location.Location;
import android.webkit.WebView;
import io.appmetrica.analytics.AdRevenue;
import io.appmetrica.analytics.AnrListener;
import io.appmetrica.analytics.AppMetricaConfig;
import io.appmetrica.analytics.DeferredDeeplinkListener;
import io.appmetrica.analytics.DeferredDeeplinkParametersListener;
import io.appmetrica.analytics.ExternalAttribution;
import io.appmetrica.analytics.ReporterConfig;
import io.appmetrica.analytics.Revenue;
import io.appmetrica.analytics.StartupParamsCallback;
import io.appmetrica.analytics.coreapi.internal.executors.IHandlerExecutor;
import io.appmetrica.analytics.coreutils.internal.WrapUtils;
import io.appmetrica.analytics.coreutils.internal.collection.CollectionUtils;
import io.appmetrica.analytics.coreutils.internal.logger.LoggerStorage;
import io.appmetrica.analytics.ecommerce.ECommerceEvent;
import io.appmetrica.analytics.internal.IdentifiersResult;
import io.appmetrica.analytics.internal.js.AppMetricaInitializerJsInterface;
import io.appmetrica.analytics.internal.js.AppMetricaJsInterface;
import io.appmetrica.analytics.logger.appmetrica.internal.PublicLogger;
import io.appmetrica.analytics.modulesapi.internal.client.adrevenue.ModuleAdRevenueProcessor;
import io.appmetrica.analytics.profile.UserProfile;
import java.util.List;
import java.util.Map;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.s1, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2436s1 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final C2560x0 f6303a;
    public final Io b;
    public final C2478ti c;
    public final L7 d;
    public final C2282ll e;
    public final I2 f;
    public final C2232jn g;
    public final C2024bl h;

    public C2436s1(C2560x0 c2560x0, I2 i2, C2282ll c2282ll, Io io2, C2232jn c2232jn, C2478ti c2478ti, L7 l7, C2024bl c2024bl) {
        this.f6303a = c2560x0;
        this.b = io2;
        this.c = c2478ti;
        this.d = l7;
        this.f = i2;
        this.g = c2232jn;
        this.e = c2282ll;
        this.h = c2024bl;
    }

    public static IHandlerExecutor c() {
        return C2213j4.l().c.a();
    }

    public final void a(final Context context, final AppMetricaConfig appMetricaConfig) {
        I2 i2 = this.f;
        i2.f.a(context);
        i2.b.a(appMetricaConfig);
        C2232jn c2232jn = this.g;
        Context applicationContext = context.getApplicationContext();
        c2232jn.e.a(applicationContext);
        PublicLogger orCreatePublicLogger = LoggerStorage.getOrCreatePublicLogger(appMetricaConfig.apiKey);
        if (((Boolean) WrapUtils.getOrDefault(appMetricaConfig.sessionsAutoTrackingEnabled, Boolean.TRUE)).booleanValue()) {
            orCreatePublicLogger.info("Session auto tracking enabled", new Object[0]);
            c2232jn.d.a();
        } else {
            orCreatePublicLogger.info("Session auto tracking disabled", new Object[0]);
        }
        c2232jn.f6160a.getClass();
        C2535w0 c2535w0A = C2535w0.a(applicationContext);
        c2535w0A.d.a(appMetricaConfig, c2535w0A);
        IHandlerExecutor iHandlerExecutorC = c();
        ((G9) iHandlerExecutorC).b.post(new Runnable() { // from class: io.appmetrica.analytics.impl.s1$$ExternalSyntheticLambda2
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.b(context, appMetricaConfig);
            }
        });
        this.f6303a.getClass();
        C2560x0.b();
    }

    public final String b() {
        this.f6303a.getClass();
        C2535w0 c2535w0 = C2535w0.e;
        if (c2535w0 == null) {
            return null;
        }
        return c2535w0.f().e();
    }

    public final C2398qc d() {
        this.f6303a.getClass();
        return C2535w0.e.f().i();
    }

    public final void e() {
        d().f6272a.a(this.h.a());
    }

    public final void f() {
        this.f.f5718a.a(null);
        this.g.getClass();
        IHandlerExecutor iHandlerExecutorC = c();
        ((G9) iHandlerExecutorC).b.post(new U0(this));
    }

    public final void c(Activity activity) {
        this.f.f5718a.a(null);
        this.g.getClass();
        IHandlerExecutor iHandlerExecutorC = c();
        ((G9) iHandlerExecutorC).b.post(new RunnableC2107f1(this, activity));
    }

    public final void b(Context context, AppMetricaConfig appMetricaConfig) {
        C2560x0 c2560x0 = this.f6303a;
        Context applicationContext = context.getApplicationContext();
        c2560x0.getClass();
        C2535w0 c2535w0A = C2535w0.a(applicationContext);
        c2535w0A.f().b(this.d.a(appMetricaConfig));
        Context context2 = c2535w0A.f6377a;
        ((G9) C2213j4.l().c.a()).execute(new RunnableC2511v1(context2));
    }

    public final void e(String str) {
        this.f.getClass();
        this.g.getClass();
        IHandlerExecutor iHandlerExecutorC = c();
        ((G9) iHandlerExecutorC).b.post(new S0(this, str));
    }

    public final void d(String str) {
        I2 i2 = this.f;
        i2.f5718a.a(null);
        i2.j.a(str);
        this.g.getClass();
        IHandlerExecutor iHandlerExecutorC = c();
        ((G9) iHandlerExecutorC).b.post(new N0(this, str));
    }

    public C2436s1() {
        this(C2213j4.l().d(), new Io());
    }

    public final void c(String str, String str2) {
        I2 i2 = this.f;
        i2.f5718a.a(null);
        i2.s.a(str);
        this.g.getClass();
        IHandlerExecutor iHandlerExecutorC = c();
        ((G9) iHandlerExecutorC).b.post(new RunnableC2312n1(this, str, str2));
    }

    public C2436s1(C2560x0 c2560x0, Io io2) {
        this(c2560x0, new I2(c2560x0), new C2282ll(c2560x0), io2, new C2232jn(c2560x0, io2), C2478ti.a(), C2213j4.l().j(), C2213j4.l().o());
    }

    public final void d(String str, String str2) {
        I2 i2 = this.f;
        i2.f5718a.a(null);
        if (i2.o.a(str).f6320a) {
            this.g.getClass();
            IHandlerExecutor iHandlerExecutorC = c();
            ((G9) iHandlerExecutorC).b.post(new RunnableC2030c1(this, str, str2));
        }
    }

    public final void b(String str) {
        I2 i2 = this.f;
        i2.f5718a.a(null);
        i2.s.a(str);
        this.g.getClass();
        IHandlerExecutor iHandlerExecutorC = c();
        ((G9) iHandlerExecutorC).b.post(new RunnableC2287m1(this, str));
    }

    public final void c(boolean z) {
        this.f.getClass();
        this.g.getClass();
        IHandlerExecutor iHandlerExecutorC = c();
        ((G9) iHandlerExecutorC).b.post(new P0(this, z));
    }

    public final void b(Activity activity) {
        I2 i2 = this.f;
        i2.f5718a.a(null);
        i2.c.a(activity);
        this.g.getClass();
        Intent intentA = C2232jn.a(activity);
        IHandlerExecutor iHandlerExecutorC = c();
        ((G9) iHandlerExecutorC).b.post(new K0(this, intentA));
    }

    public final void c(String str) {
        if (this.e.a((Void) null).f6320a && this.f.n.a(str).f6320a) {
            this.g.getClass();
            IHandlerExecutor iHandlerExecutorC = c();
            ((G9) iHandlerExecutorC).b.post(new RunnableC2056d1(this, str));
        }
    }

    public final void a(Activity activity) {
        this.f.f5718a.a(null);
        this.g.getClass();
        IHandlerExecutor iHandlerExecutorC = c();
        ((G9) iHandlerExecutorC).b.post(new RunnableC2262l1(this, activity));
    }

    public final void b(boolean z) {
        this.f.getClass();
        this.g.getClass();
        IHandlerExecutor iHandlerExecutorC = c();
        ((G9) iHandlerExecutorC).b.post(new R0(this, z));
    }

    public final void b(String str, String str2) {
        this.f.l.a(str);
        this.g.getClass();
        IHandlerExecutor iHandlerExecutorC = c();
        ((G9) iHandlerExecutorC).b.post(new RunnableC1978a1(this, str, str2));
    }

    public final void a(Application application) {
        this.f.e.a(application);
        this.g.c.a(application);
        IHandlerExecutor iHandlerExecutorC = c();
        ((G9) iHandlerExecutorC).b.post(new Runnable() { // from class: io.appmetrica.analytics.impl.s1$$ExternalSyntheticLambda0
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.e();
            }
        });
    }

    public final void b(final Object... objArr) {
        this.f.f5718a.a(null);
        this.g.getClass();
        IHandlerExecutor iHandlerExecutorC = c();
        ((G9) iHandlerExecutorC).b.post(new Runnable() { // from class: io.appmetrica.analytics.impl.s1$$ExternalSyntheticLambda1
            @Override // java.lang.Runnable
            public final void run() {
                C2436s1.a(objArr);
            }
        });
    }

    public final void a(String str, Map<String, Object> map) {
        I2 i2 = this.f;
        i2.f5718a.a(null);
        i2.s.a(str);
        this.g.getClass();
        List listFromMap = CollectionUtils.getListFromMap(map);
        IHandlerExecutor iHandlerExecutorC = c();
        ((G9) iHandlerExecutorC).b.post(new RunnableC2337o1(this, str, listFromMap));
    }

    public final void b(Context context) {
        this.f.f.a(context);
        this.g.e.a(context);
        this.f6303a.getClass();
        C2535w0.a(context);
    }

    public final void a(String str, Throwable th) {
        I2 i2 = this.f;
        i2.f5718a.a(null);
        i2.t.a(str);
        this.g.getClass();
        if (th == null) {
            th = new W1();
            th.fillInStackTrace();
        }
        IHandlerExecutor iHandlerExecutorC = c();
        ((G9) iHandlerExecutorC).b.post(new RunnableC2362p1(this, str, th));
    }

    public final void a(String str, String str2, Throwable th) {
        I2 i2 = this.f;
        i2.f5718a.a(null);
        i2.u.a(str);
        this.g.getClass();
        IHandlerExecutor iHandlerExecutorC = c();
        ((G9) iHandlerExecutorC).b.post(new RunnableC2387q1(this, str, str2, th));
    }

    public final void a(Throwable th) {
        I2 i2 = this.f;
        i2.f5718a.a(null);
        i2.v.a(th);
        this.g.getClass();
        IHandlerExecutor iHandlerExecutorC = c();
        ((G9) iHandlerExecutorC).b.post(new RunnableC2411r1(this, th));
    }

    public final void a(String str) {
        I2 i2 = this.f;
        i2.f5718a.a(null);
        i2.i.a(str);
        this.g.getClass();
        IHandlerExecutor iHandlerExecutorC = c();
        ((G9) iHandlerExecutorC).b.post(new L0(this, str));
    }

    public final void a(Intent intent) {
        I2 i2 = this.f;
        i2.f5718a.a(null);
        i2.d.a(intent);
        this.g.getClass();
        IHandlerExecutor iHandlerExecutorC = c();
        ((G9) iHandlerExecutorC).b.post(new M0(this, intent));
    }

    public final void a(Location location) {
        this.f.getClass();
        this.g.getClass();
        IHandlerExecutor iHandlerExecutorC = c();
        ((G9) iHandlerExecutorC).b.post(new O0(this, location));
    }

    public final void a(boolean z) {
        this.f.getClass();
        this.g.getClass();
        IHandlerExecutor iHandlerExecutorC = c();
        ((G9) iHandlerExecutorC).b.post(new Q0(this, z));
    }

    public final void a(UserProfile userProfile) {
        I2 i2 = this.f;
        i2.f5718a.a(null);
        i2.w.a(userProfile);
        this.g.getClass();
        IHandlerExecutor iHandlerExecutorC = c();
        ((G9) iHandlerExecutorC).b.post(new T0(this, userProfile));
    }

    public final void a(Revenue revenue) {
        I2 i2 = this.f;
        i2.f5718a.a(null);
        i2.x.a(revenue);
        this.g.getClass();
        IHandlerExecutor iHandlerExecutorC = c();
        ((G9) iHandlerExecutorC).b.post(new V0(this, revenue));
    }

    public final void a(AdRevenue adRevenue) {
        I2 i2 = this.f;
        i2.f5718a.a(null);
        i2.y.a(adRevenue);
        this.g.getClass();
        IHandlerExecutor iHandlerExecutorC = c();
        ((G9) iHandlerExecutorC).b.post(new W0(this, adRevenue));
    }

    public final void a(ECommerceEvent eCommerceEvent) {
        I2 i2 = this.f;
        i2.f5718a.a(null);
        i2.z.a(eCommerceEvent);
        this.g.getClass();
        IHandlerExecutor iHandlerExecutorC = c();
        ((G9) iHandlerExecutorC).b.post(new X0(this, eCommerceEvent));
    }

    public final void a(DeferredDeeplinkParametersListener deferredDeeplinkParametersListener) {
        I2 i2 = this.f;
        i2.f5718a.a(null);
        i2.g.a(deferredDeeplinkParametersListener);
        this.g.getClass();
        IHandlerExecutor iHandlerExecutorC = c();
        ((G9) iHandlerExecutorC).b.post(new Y0(this, deferredDeeplinkParametersListener));
    }

    public final void a(DeferredDeeplinkListener deferredDeeplinkListener) {
        I2 i2 = this.f;
        i2.f5718a.a(null);
        i2.g.a(deferredDeeplinkListener);
        this.g.getClass();
        IHandlerExecutor iHandlerExecutorC = c();
        ((G9) iHandlerExecutorC).b.post(new Z0(this, deferredDeeplinkListener));
    }

    public final Ya a(Context context, String str) {
        I2 i2 = this.f;
        i2.f.a(context);
        i2.k.a(str);
        C2232jn c2232jn = this.g;
        c2232jn.e.a(context.getApplicationContext());
        return this.c.a(context.getApplicationContext(), str);
    }

    public final void a(Context context, ReporterConfig reporterConfig) {
        I2 i2 = this.f;
        i2.f.a(context);
        i2.h.a(reporterConfig);
        C2232jn c2232jn = this.g;
        c2232jn.e.a(context.getApplicationContext());
        C2478ti c2478ti = this.c;
        Context applicationContext = context.getApplicationContext();
        if (((C2279li) c2478ti.f6335a.get(reporterConfig.apiKey)) == null) {
            synchronized (c2478ti.f6335a) {
                if (((C2279li) c2478ti.f6335a.get(reporterConfig.apiKey)) == null) {
                    String str = reporterConfig.apiKey;
                    IHandlerExecutor iHandlerExecutorA = C2213j4.l().c.a();
                    c2478ti.b.getClass();
                    if (C2535w0.e == null) {
                        ((G9) iHandlerExecutorA).b.post(new RunnableC2428ri(c2478ti, applicationContext));
                    }
                    C2279li c2279li = new C2279li(applicationContext.getApplicationContext(), str, new C2560x0());
                    c2478ti.f6335a.put(str, c2279li);
                    c2279li.a(reporterConfig);
                }
            }
        }
    }

    public final void a(WebView webView) {
        I2 i2 = this.f;
        i2.f5718a.a(null);
        i2.m.a(webView);
        Io io2 = this.g.b;
        io2.getClass();
        try {
            if (webView.getSettings().getJavaScriptEnabled()) {
                webView.addJavascriptInterface(new AppMetricaJsInterface(this), "AppMetrica");
                webView.addJavascriptInterface(new AppMetricaInitializerJsInterface(this), "AppMetricaInitializer");
                Fo fo = new Fo();
                synchronized (io2) {
                    PublicLogger publicLogger = io2.b;
                    if (publicLogger == null) {
                        io2.f5735a.add(fo);
                    } else {
                        fo.consume(publicLogger);
                    }
                }
            } else {
                io2.a(new Go());
            }
        } catch (Throwable th) {
            io2.a(new Ho(th));
        }
        IHandlerExecutor iHandlerExecutorC = c();
        ((G9) iHandlerExecutorC).b.post(new RunnableC2004b1(this));
    }

    public final IdentifiersResult a(Context context) {
        this.f.f.a(context);
        C2232jn c2232jn = this.g;
        Context applicationContext = context.getApplicationContext();
        c2232jn.e.a(applicationContext);
        c2232jn.f.a(applicationContext);
        return C2213j4.l().a(context.getApplicationContext()).a();
    }

    public final void a(String str, String str2) {
        this.f.getClass();
        this.g.getClass();
        IHandlerExecutor iHandlerExecutorC = c();
        ((G9) iHandlerExecutorC).b.post(new RunnableC2081e1(this, str, str2));
    }

    public final void a() {
        this.f.getClass();
        this.g.getClass();
        IHandlerExecutor iHandlerExecutorC = c();
        ((G9) iHandlerExecutorC).b.post(new RunnableC2133g1(this));
    }

    public final void a(Context context, StartupParamsCallback startupParamsCallback, List<String> list) {
        I2 i2 = this.f;
        i2.f.a(context);
        i2.p.a(startupParamsCallback);
        C2232jn c2232jn = this.g;
        c2232jn.e.a(context.getApplicationContext());
        IHandlerExecutor iHandlerExecutorC = c();
        ((G9) iHandlerExecutorC).b.post(new RunnableC2159h1(this, context, startupParamsCallback, list));
    }

    public final void a(AnrListener anrListener) {
        I2 i2 = this.f;
        i2.f5718a.a(null);
        i2.q.a(anrListener);
        this.g.getClass();
        IHandlerExecutor iHandlerExecutorC = c();
        ((G9) iHandlerExecutorC).b.post(new RunnableC2185i1(this, anrListener));
    }

    public final void a(ExternalAttribution externalAttribution) {
        I2 i2 = this.f;
        i2.f5718a.a(null);
        i2.r.a(externalAttribution);
        this.g.getClass();
        IHandlerExecutor iHandlerExecutorC = c();
        ((G9) iHandlerExecutorC).b.post(new RunnableC2210j1(this, externalAttribution));
    }

    public static /* synthetic */ void a(Object[] objArr) {
        ModuleAdRevenueProcessor moduleAdRevenueProcessorB = C2213j4.l().m().b();
        if (moduleAdRevenueProcessorB != null) {
            moduleAdRevenueProcessorB.process(objArr);
        }
    }

    public final void a(Map<Thread, StackTraceElement[]> map) {
        this.f.A.a(map);
        this.g.getClass();
        List listFromMap = CollectionUtils.getListFromMap(map);
        IHandlerExecutor iHandlerExecutorC = c();
        ((G9) iHandlerExecutorC).b.post(new RunnableC2236k1(this, listFromMap));
    }

    public static Pa a(C2436s1 c2436s1) {
        return c2436s1.d().f6272a;
    }
}
