package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.AppMetricaConfig;
import io.appmetrica.analytics.internal.CounterConfiguration;
import io.appmetrica.analytics.internal.CounterConfigurationReporterType;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.t6, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2466t6 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Bi f6327a;
    public final Kh b;

    public C2466t6(Gf gf, I8 i8, Bi bi, AppMetricaConfig appMetricaConfig) {
        this.f6327a = bi;
        this.b = new Kh(gf, new CounterConfiguration(appMetricaConfig, CounterConfigurationReporterType.CRASH), i8, appMetricaConfig.userProfileID);
    }

    public final Kh a() {
        return this.b;
    }
}
