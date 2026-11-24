package io.appmetrica.analytics.impl;

import android.os.Handler;
import io.appmetrica.analytics.AppMetricaConfig;
import io.appmetrica.analytics.coreapi.internal.executors.ICommonExecutor;
import io.appmetrica.analytics.coreapi.internal.executors.IHandlerExecutor;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.t0, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2460t0 implements Ia {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Handler f6321a;
    public final IHandlerExecutor b;
    public final C2265l4 c;

    public C2460t0() {
        IHandlerExecutor iHandlerExecutorA = C2213j4.l().g().a();
        this.b = iHandlerExecutorA;
        this.f6321a = iHandlerExecutorA.getHandler();
        this.c = new C2265l4();
    }

    @Override // io.appmetrica.analytics.impl.Ia
    public final void a(AppMetricaConfig appMetricaConfig, InterfaceC1988ab interfaceC1988ab) {
    }

    @Override // io.appmetrica.analytics.impl.Ia
    public final Handler b() {
        return this.f6321a;
    }

    @Override // io.appmetrica.analytics.impl.Ia
    public final C2005b2 c() {
        return new C2005b2();
    }

    @Override // io.appmetrica.analytics.impl.Ia
    public final C2421rb d() {
        return new C2421rb();
    }

    @Override // io.appmetrica.analytics.impl.Ia
    public final ICommonExecutor getDefaultExecutor() {
        return this.b;
    }

    @Override // io.appmetrica.analytics.impl.Ia
    public final C2265l4 a() {
        return this.c;
    }
}
