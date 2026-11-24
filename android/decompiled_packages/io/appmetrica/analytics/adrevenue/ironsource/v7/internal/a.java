package io.appmetrica.analytics.adrevenue.ironsource.v7.internal;

import io.appmetrica.analytics.modulesapi.internal.client.adrevenue.AdRevenueCollector;

/* JADX INFO: loaded from: classes7.dex */
public final class a implements AdRevenueCollector {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ IronSourceClientModuleEntryPoint f5402a;

    public a(IronSourceClientModuleEntryPoint ironSourceClientModuleEntryPoint) {
        this.f5402a = ironSourceClientModuleEntryPoint;
    }

    @Override // io.appmetrica.analytics.modulesapi.internal.client.adrevenue.AdRevenueCollector
    public final boolean getEnabled() {
        return this.f5402a.b.get();
    }

    @Override // io.appmetrica.analytics.modulesapi.internal.client.adrevenue.AdRevenueCollector
    public final String getSourceIdentifier() {
        return "ironsource";
    }
}
