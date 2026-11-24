package io.appmetrica.analytics.impl;

import android.content.Context;
import io.appmetrica.analytics.ReporterConfig;
import io.appmetrica.analytics.coreapi.internal.backport.Provider;

/* JADX INFO: loaded from: classes7.dex */
public final class Vh implements Provider {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ C2560x0 f5934a;
    public final /* synthetic */ Context b;
    public final /* synthetic */ ReporterConfig c;

    public Vh(C2560x0 c2560x0, Context context, ReporterConfig reporterConfig) {
        this.f5934a = c2560x0;
        this.b = context;
        this.c = reporterConfig;
    }

    @Override // io.appmetrica.analytics.coreapi.internal.backport.Provider
    public final Object get() {
        C2560x0 c2560x0 = this.f5934a;
        Context context = this.b;
        ReporterConfig reporterConfig = this.c;
        c2560x0.getClass();
        return C2535w0.a(context).f().c(reporterConfig);
    }
}
