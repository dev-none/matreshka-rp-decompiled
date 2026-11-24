package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.modulesapi.internal.client.adrevenue.ModuleAdRevenueProcessorsHolder;

/* JADX INFO: loaded from: classes7.dex */
public final class R5 implements Q5 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final C2366p5 f5860a;

    public R5(C2366p5 c2366p5) {
        this.f5860a = c2366p5;
    }

    @Override // io.appmetrica.analytics.impl.Q5, io.appmetrica.analytics.modulesapi.internal.client.adrevenue.ModuleAdRevenueContext
    public final C2366p5 getAdRevenueProcessorsHolder() {
        return this.f5860a;
    }

    @Override // io.appmetrica.analytics.modulesapi.internal.client.adrevenue.ModuleAdRevenueContext
    public final ModuleAdRevenueProcessorsHolder getAdRevenueProcessorsHolder() {
        return this.f5860a;
    }
}
