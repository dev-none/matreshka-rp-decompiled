package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreapi.internal.servicecomponents.ServiceComponentModuleReporter;
import io.appmetrica.analytics.coreapi.internal.servicecomponents.ServiceModuleCounterReport;
import kotlin.jvm.internal.DefaultConstructorMarker;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.fk, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2126fk implements ServiceComponentModuleReporter {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final C2085e5 f6080a;
    public final C2605yk b;

    public C2126fk(C2085e5 c2085e5, C2605yk c2605yk) {
        this.f6080a = c2085e5;
        this.b = c2605yk;
    }

    @Override // io.appmetrica.analytics.coreapi.internal.servicecomponents.ServiceComponentModuleReporter
    public final void handleReport(ServiceModuleCounterReport serviceModuleCounterReport) {
        this.b.getClass();
        this.f6080a.a(C2605yk.a(serviceModuleCounterReport));
    }

    public /* synthetic */ C2126fk(C2085e5 c2085e5, C2605yk c2605yk, int i, DefaultConstructorMarker defaultConstructorMarker) {
        this(c2085e5, (i & 2) != 0 ? new C2605yk() : c2605yk);
    }
}
