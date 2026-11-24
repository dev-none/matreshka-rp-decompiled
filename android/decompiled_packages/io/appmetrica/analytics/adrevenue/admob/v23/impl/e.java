package io.appmetrica.analytics.adrevenue.admob.v23.impl;

import io.appmetrica.analytics.coreutils.internal.logger.LoggerStorage;
import io.appmetrica.analytics.modulesapi.internal.client.ClientContext;
import io.appmetrica.analytics.modulesapi.internal.client.adrevenue.ModuleAdRevenue;
import io.appmetrica.analytics.modulesapi.internal.client.adrevenue.ModuleAdRevenueProcessor;

/* JADX INFO: loaded from: classes7.dex */
public abstract class e implements ModuleAdRevenueProcessor {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    protected final b f5395a;
    public final ClientContext b;

    public e(b bVar, ClientContext clientContext) {
        this.f5395a = bVar;
        this.b = clientContext;
    }

    public final void a(ModuleAdRevenue moduleAdRevenue) {
        this.b.getInternalClientModuleFacade().reportAdRevenue(moduleAdRevenue);
        LoggerStorage.getMainPublicOrAnonymousLogger().info("Ad Revenue from AdMob was reported", new Object[0]);
    }

    @Override // io.appmetrica.analytics.modulesapi.internal.client.adrevenue.ModuleAdRevenueProcessor
    public final String getDescription() {
        return "AdMob";
    }
}
