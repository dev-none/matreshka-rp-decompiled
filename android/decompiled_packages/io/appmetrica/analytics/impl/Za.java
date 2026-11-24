package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.AppMetricaConfig;
import io.appmetrica.analytics.ReporterConfig;
import io.appmetrica.analytics.logger.appmetrica.internal.PublicLogger;

/* JADX INFO: loaded from: classes7.dex */
public interface Za extends InterfaceC1988ab {
    Pa a(AppMetricaConfig appMetricaConfig, PublicLogger publicLogger, C2261l0 c2261l0);

    @Override // io.appmetrica.analytics.impl.InterfaceC1988ab
    /* synthetic */ Za a();

    InterfaceC2014bb a(AppMetricaConfig appMetricaConfig);

    void a(ReporterConfig reporterConfig);

    Pa b(AppMetricaConfig appMetricaConfig, PublicLogger publicLogger, C2261l0 c2261l0);

    Ya b(ReporterConfig reporterConfig);
}
