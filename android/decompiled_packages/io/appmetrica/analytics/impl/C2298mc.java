package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.AppMetricaConfig;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.mc, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2298mc extends Yn {
    public final AppMetricaConfig b;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public C2298mc(InterfaceC1988ab interfaceC1988ab, AppMetricaConfig appMetricaConfig) {
        super(interfaceC1988ab);
        String str = appMetricaConfig.apiKey;
        this.b = appMetricaConfig;
    }

    public final InterfaceC2014bb a() {
        return this.f5976a.a().a(this.b);
    }
}
