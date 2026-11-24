package io.appmetrica.analytics.impl;

import android.content.Context;
import android.location.Location;
import io.appmetrica.analytics.AdvIdentifiersResult;
import io.appmetrica.analytics.AppMetricaConfig;
import io.appmetrica.analytics.AppMetricaLibraryAdapterConfig;
import io.appmetrica.analytics.DeferredDeeplinkListener;
import io.appmetrica.analytics.DeferredDeeplinkParametersListener;
import io.appmetrica.analytics.ReporterConfig;
import io.appmetrica.analytics.StartupParamsCallback;
import io.appmetrica.analytics.coreapi.internal.executors.InterruptionSafeThread;
import java.util.List;
import java.util.Map;
import java.util.concurrent.Callable;
import java.util.concurrent.FutureTask;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.w0, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2535w0 implements InterfaceC1988ab {
    public static volatile C2535w0 e = null;
    public static volatile boolean f = false;
    public static volatile boolean g;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Context f6377a;
    public final C2410r0 b;
    public final FutureTask c;
    public final Ia d;

    public C2535w0(Context context) {
        this.f6377a = context;
        C2410r0 c2410r0C = C2213j4.l().c();
        this.b = c2410r0C;
        this.d = c2410r0C.a(context, C2213j4.l().g());
        this.c = new FutureTask(new Callable() { // from class: io.appmetrica.analytics.impl.w0$$ExternalSyntheticLambda1
            @Override // java.util.concurrent.Callable
            public final Object call() {
                return this.f$0.p();
            }
        });
    }

    public static C2535w0 a(Context context) {
        C2535w0 c2535w0;
        C2535w0 c2535w1 = e;
        if (c2535w1 != null) {
            return c2535w1;
        }
        synchronized (C2535w0.class) {
            c2535w0 = e;
            if (c2535w0 == null) {
                c2535w0 = new C2535w0(context);
                c2535w0.j();
                C2213j4.l().c.a().execute(new RunnableC2510v0(c2535w0));
                e = c2535w0;
            }
        }
        return c2535w0;
    }

    public static void b(boolean z) {
        c().a(z, true);
    }

    public static void clearAppEnvironment() {
        c().clearAppEnvironment();
    }

    public static synchronized boolean k() {
        return f;
    }

    public static boolean l() {
        return g;
    }

    public static synchronized boolean m() {
        C2535w0 c2535w0;
        c2535w0 = e;
        return (c2535w0 == null || !c2535w0.c.isDone() || c2535w0.f().i() == null) ? false : true;
    }

    public static synchronized void n() {
        e = null;
        f = false;
        g = false;
    }

    public static void putAppEnvironmentValue(String str, String str2) {
        c().putAppEnvironmentValue(str, str2);
    }

    public static synchronized void q() {
        f = true;
    }

    public static void r() {
        g = true;
    }

    public static C2535w0 s() {
        return e;
    }

    public static void setDataSendingEnabled(boolean z) {
        c().setDataSendingEnabled(z);
    }

    public static void setUserProfileID(String str) {
        c().setUserProfileID(str);
    }

    public final void c(AppMetricaConfig appMetricaConfig) {
        this.d.a(appMetricaConfig, this);
    }

    public final void d(AppMetricaConfig appMetricaConfig) {
        f().b(appMetricaConfig);
        C2213j4.l().c.a().execute(new RunnableC2511v1(this.f6377a));
    }

    public final String e() {
        return f().e();
    }

    public final Ja f() {
        try {
            return (Ja) this.c.get();
        } catch (Exception e2) {
            throw new RuntimeException(e2);
        }
    }

    public final Map<String, String> g() {
        return f().g();
    }

    public final AdvIdentifiersResult h() {
        return f().h();
    }

    public final C2398qc i() {
        return f().i();
    }

    public final void j() {
        Z3 z3 = C2213j4.l().c;
        Runnable runnable = new Runnable() { // from class: io.appmetrica.analytics.impl.w0$$ExternalSyntheticLambda0
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.o();
            }
        };
        z3.f5980a.getClass();
        new InterruptionSafeThread(runnable, "IAA-INIT_CORE-" + Gd.f5690a.incrementAndGet()).start();
    }

    public final void o() {
        C2213j4.l().r.a(this.f6377a);
        new C2059d4(this.f6377a).a(this.f6377a);
        C2213j4.l().a(this.f6377a).a();
        this.c.run();
    }

    public final Ja p() {
        Ja ja;
        C2410r0 c2410r0 = this.b;
        Context context = this.f6377a;
        Ia ia = this.d;
        synchronized (c2410r0) {
            if (c2410r0.d == null) {
                if (c2410r0.a(context)) {
                    c2410r0.d = new C0();
                } else {
                    c2410r0.d = new A0(context, ia);
                }
            }
            ja = c2410r0.d;
        }
        return ja;
    }

    public final void b(AppMetricaLibraryAdapterConfig appMetricaLibraryAdapterConfig) {
        f().a(appMetricaLibraryAdapterConfig);
        C2213j4.l().c.a().execute(new RunnableC2511v1(this.f6377a));
    }

    public final Ya c(ReporterConfig reporterConfig) {
        return f().c(reporterConfig);
    }

    public static Oc c() {
        if (m()) {
            return e.f();
        }
        return C2213j4.l().b;
    }

    public final C2090ea d() {
        return f().d();
    }

    public final C2265l4 b() {
        return this.d.a();
    }

    public static void a(Location location) {
        c().a(location);
    }

    public static void a(boolean z) {
        c().a(z);
    }

    public static void a(String str, String str2) {
        c().a(str, str2);
    }

    public static void a(String str) {
        c().a(str);
    }

    public final void a(DeferredDeeplinkParametersListener deferredDeeplinkParametersListener) {
        f().a(deferredDeeplinkParametersListener);
    }

    public final void a(DeferredDeeplinkListener deferredDeeplinkListener) {
        f().a(deferredDeeplinkListener);
    }

    public final void a(ReporterConfig reporterConfig) {
        f().a(reporterConfig);
    }

    public final void a(StartupParamsCallback startupParamsCallback, List<String> list) {
        f().a(startupParamsCallback, list);
    }

    public static synchronized void a(C2535w0 c2535w0) {
        e = c2535w0;
    }

    @Override // io.appmetrica.analytics.impl.InterfaceC1988ab
    public final Za a() {
        return f().a();
    }
}
