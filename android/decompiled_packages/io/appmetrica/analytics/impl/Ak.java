package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreapi.internal.servicecomponents.ServiceComponentModuleConfig;
import io.appmetrica.analytics.coreapi.internal.servicecomponents.ServiceComponentModuleReporter;
import io.appmetrica.analytics.coreapi.internal.servicecomponents.ServiceModuleReporterComponentContext;

/* JADX INFO: loaded from: classes7.dex */
public final class Ak implements ServiceModuleReporterComponentContext {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final C2126fk f5599a;
    public final C2100ek b;

    /* JADX WARN: Multi-variable type inference failed */
    public Ak(C2085e5 c2085e5, C2514v4 c2514v4) {
        this.f5599a = new C2126fk(c2085e5, null, 2, 0 == true ? 1 : 0);
        this.b = new C2100ek(c2514v4);
    }

    public final C2100ek a() {
        return this.b;
    }

    public final C2126fk b() {
        return this.f5599a;
    }

    @Override // io.appmetrica.analytics.coreapi.internal.servicecomponents.ServiceModuleReporterComponentContext
    public final ServiceComponentModuleConfig getConfig() {
        return this.b;
    }

    @Override // io.appmetrica.analytics.coreapi.internal.servicecomponents.ServiceModuleReporterComponentContext
    public final ServiceComponentModuleReporter getReporter() {
        return this.f5599a;
    }
}
