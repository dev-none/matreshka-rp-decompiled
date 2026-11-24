package io.appmetrica.analytics.impl;

import android.content.Context;
import android.os.Handler;
import io.appmetrica.analytics.AppMetrica;
import io.appmetrica.analytics.AppMetricaConfig;
import io.appmetrica.analytics.coreapi.internal.executors.ICommonExecutor;
import io.appmetrica.analytics.coreapi.internal.executors.IHandlerExecutor;
import io.appmetrica.analytics.coreutils.internal.StringUtils;
import io.appmetrica.analytics.logger.appmetrica.internal.ImportantLogger;
import io.appmetrica.analytics.logger.common.BaseReleaseLogger;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.q0, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2386q0 implements Ia {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Context f6262a;
    public final IHandlerExecutor b;
    public final C2265l4 c = new C2265l4();
    public final Handler d = f().getHandler();
    public final C2005b2 e = new C2005b2();
    public final C2421rb f = new C2421rb();

    public C2386q0(Context context, Z3 z3) {
        this.f6262a = context;
        this.b = z3.a();
        BaseReleaseLogger.init(context);
        f().execute(new Runnable() { // from class: io.appmetrica.analytics.impl.q0$$ExternalSyntheticLambda0
            @Override // java.lang.Runnable
            public final void run() {
                C2386q0.e();
            }
        });
        a().a();
        N3.a().onCreate();
    }

    public static final void e() {
        ImportantLogger.INSTANCE.info("AppMetrica", "Initializing of AppMetrica, " + StringUtils.capitalize("release") + " type, Version 7.13.0, API Level " + AppMetrica.getLibraryApiLevel() + ", Dated 17.10.2025.", new Object[0]);
    }

    @Override // io.appmetrica.analytics.impl.Ia
    public final C2265l4 a() {
        return this.c;
    }

    @Override // io.appmetrica.analytics.impl.Ia
    public final Handler b() {
        return this.d;
    }

    @Override // io.appmetrica.analytics.impl.Ia
    public final C2005b2 c() {
        return this.e;
    }

    @Override // io.appmetrica.analytics.impl.Ia
    public final C2421rb d() {
        return this.f;
    }

    public final IHandlerExecutor f() {
        return this.b;
    }

    @Override // io.appmetrica.analytics.impl.Ia
    public final ICommonExecutor getDefaultExecutor() {
        return this.b;
    }

    /* JADX WARN: Code duplicated, block: B:14:0x001c A[Catch: all -> 0x0052, TryCatch #0 {, blocks: (B:3:0x0001, B:6:0x0007, B:8:0x000b, B:10:0x000f, B:13:0x0016, B:18:0x0031, B:20:0x0035, B:22:0x0039, B:25:0x0040, B:28:0x004d, B:26:0x0046, B:14:0x001c, B:16:0x0028), top: B:34:0x0001 }] */
    /* JADX WARN: Code duplicated, block: B:16:0x0028 A[Catch: all -> 0x0052, TryCatch #0 {, blocks: (B:3:0x0001, B:6:0x0007, B:8:0x000b, B:10:0x000f, B:13:0x0016, B:18:0x0031, B:20:0x0035, B:22:0x0039, B:25:0x0040, B:28:0x004d, B:26:0x0046, B:14:0x001c, B:16:0x0028), top: B:34:0x0001 }] */
    /* JADX WARN: Code duplicated, block: B:26:0x0046 A[Catch: all -> 0x0052, TryCatch #0 {, blocks: (B:3:0x0001, B:6:0x0007, B:8:0x000b, B:10:0x000f, B:13:0x0016, B:18:0x0031, B:20:0x0035, B:22:0x0039, B:25:0x0040, B:28:0x004d, B:26:0x0046, B:14:0x001c, B:16:0x0028), top: B:34:0x0001 }] */
    @Override // io.appmetrica.analytics.impl.Ia
    public final synchronized void a(AppMetricaConfig appMetricaConfig, InterfaceC1988ab interfaceC1988ab) {
        if (!C2535w0.g) {
            if (appMetricaConfig == null) {
                this.f.c();
                this.f.b();
                if (appMetricaConfig != null) {
                    this.f.a(this.f6262a, appMetricaConfig, interfaceC1988ab);
                }
            } else {
                Boolean bool = appMetricaConfig.crashReporting;
                if (bool == null) {
                    bool = Boolean.TRUE;
                }
                if (bool == null || bool.booleanValue()) {
                    this.f.c();
                    this.f.b();
                    if (appMetricaConfig != null) {
                        this.f.a(this.f6262a, appMetricaConfig, interfaceC1988ab);
                    }
                } else {
                    this.f.a();
                }
            }
            if (appMetricaConfig == null) {
                this.e.b();
            } else {
                Boolean bool2 = appMetricaConfig.appOpenTrackingEnabled;
                if (bool2 == null) {
                    bool2 = Boolean.TRUE;
                }
                if (bool2 == null || bool2.booleanValue()) {
                    this.e.b();
                } else {
                    this.e.c();
                }
            }
            if (appMetricaConfig != null) {
                C2535w0.g = true;
            }
        }
    }
}
