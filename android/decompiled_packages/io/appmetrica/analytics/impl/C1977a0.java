package io.appmetrica.analytics.impl;

import android.content.Context;
import io.appmetrica.analytics.AppMetricaLibraryAdapterConfig;
import io.appmetrica.analytics.coreutils.internal.executors.SafeRunnable;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.a0, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C1977a0 extends SafeRunnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ C2003b0 f5992a;
    public final /* synthetic */ Context b;

    public C1977a0(C2003b0 c2003b0, Context context) {
        this.f5992a = c2003b0;
        this.b = context;
    }

    @Override // io.appmetrica.analytics.coreutils.internal.executors.SafeRunnable
    public final void runSafety() {
        C2003b0 c2003b0 = this.f5992a;
        Context context = this.b;
        c2003b0.getClass();
        c2003b0.a(context, AppMetricaLibraryAdapterConfig.newConfigBuilder().build());
    }
}
