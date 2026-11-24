package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.AppMetricaConfig;
import io.appmetrica.analytics.logger.appmetrica.internal.PublicLogger;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.z0, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2610z0 implements Dc {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ A0 f6422a;
    public final /* synthetic */ AppMetricaConfig b;
    public final /* synthetic */ PublicLogger c;

    public C2610z0(A0 a0, AppMetricaConfig appMetricaConfig, PublicLogger publicLogger) {
        this.f6422a = a0;
        this.b = appMetricaConfig;
        this.c = publicLogger;
    }

    @Override // io.appmetrica.analytics.impl.Dc
    public final C2348oc a() {
        A0 a0 = this.f6422a;
        C2354oi c2354oi = a0.g;
        AppMetricaConfig appMetricaConfig = this.b;
        PublicLogger publicLogger = this.c;
        L7 l7 = a0.i;
        return c2354oi.b(appMetricaConfig, publicLogger, new C2261l0(l7.j, l7.h));
    }
}
