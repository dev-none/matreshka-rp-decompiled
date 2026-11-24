package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.AppMetricaConfig;
import io.appmetrica.analytics.ReporterConfig;
import io.appmetrica.analytics.logger.appmetrica.internal.PublicLogger;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.pi, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2379pi implements Za {
    @Override // io.appmetrica.analytics.impl.Za, io.appmetrica.analytics.impl.InterfaceC1988ab
    public final Za a() {
        return this;
    }

    @Override // io.appmetrica.analytics.impl.Za
    public final void a(ReporterConfig reporterConfig) {
    }

    @Override // io.appmetrica.analytics.impl.Za
    public final Pa b(AppMetricaConfig appMetricaConfig, PublicLogger publicLogger, C2261l0 c2261l0) {
        return new Ec();
    }

    @Override // io.appmetrica.analytics.impl.Za
    public final Ya b(ReporterConfig reporterConfig) {
        return new C2304mi();
    }

    @Override // io.appmetrica.analytics.impl.Za
    public final Pa a(AppMetricaConfig appMetricaConfig, PublicLogger publicLogger, C2261l0 c2261l0) {
        return new Ec();
    }

    @Override // io.appmetrica.analytics.impl.Za
    public final InterfaceC2014bb a(AppMetricaConfig appMetricaConfig) {
        return new C2304mi();
    }
}
