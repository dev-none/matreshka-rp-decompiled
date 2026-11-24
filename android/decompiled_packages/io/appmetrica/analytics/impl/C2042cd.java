package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreapi.internal.event.CounterReportApi;
import io.appmetrica.analytics.modulesapi.internal.service.event.ModuleEventServiceHandlerReporter;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.cd, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2042cd implements ModuleEventServiceHandlerReporter {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final boolean f6028a;
    public final C2419r9 b;
    public final W5 c;

    public C2042cd(boolean z, C2419r9 c2419r9, W5 w5) {
        this.f6028a = z;
        this.b = c2419r9;
        this.c = w5;
    }

    @Override // io.appmetrica.analytics.modulesapi.internal.service.event.ModuleEventServiceHandlerReporter
    public final boolean isMain() {
        return this.f6028a;
    }

    @Override // io.appmetrica.analytics.modulesapi.internal.service.event.ModuleEventServiceHandlerReporter
    public final void report(CounterReportApi counterReportApi) {
        W5 w5D = W5.d(this.c);
        w5D.d = counterReportApi.getType();
        w5D.e = counterReportApi.getCustomType();
        w5D.setName(counterReportApi.getName());
        String value = counterReportApi.getValue();
        if (value != null) {
            w5D.setValue(value);
        }
        byte[] valueBytes = counterReportApi.getValueBytes();
        if (valueBytes != null) {
            w5D.setValueBytes(valueBytes);
        }
        w5D.g = counterReportApi.getBytesTruncated();
        C2419r9 c2419r9 = this.b;
        c2419r9.a(w5D, Wk.a(c2419r9.c.b(w5D), w5D.i));
    }
}
