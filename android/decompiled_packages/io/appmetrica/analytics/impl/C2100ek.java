package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreapi.internal.servicecomponents.ServiceComponentModuleConfig;
import io.appmetrica.analytics.coreutils.internal.WrapUtils;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.ek, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2100ek implements ServiceComponentModuleConfig {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final C2514v4 f6065a;

    public C2100ek(C2514v4 c2514v4) {
        this.f6065a = c2514v4;
    }

    @Override // io.appmetrica.analytics.coreapi.internal.servicecomponents.ServiceComponentModuleConfig
    public final boolean isRevenueAutoTrackingEnabled() {
        return ((Boolean) WrapUtils.getOrDefault(this.f6065a.m, Boolean.TRUE)).booleanValue();
    }
}
