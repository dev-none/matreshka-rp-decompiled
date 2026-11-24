package io.appmetrica.analytics.impl;

import android.content.Context;
import io.appmetrica.analytics.ReporterConfig;

/* JADX INFO: loaded from: classes7.dex */
public final class Zh implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ ReporterConfig f5989a;
    public final /* synthetic */ C2279li b;

    public Zh(C2279li c2279li, ReporterConfig reporterConfig) {
        this.b = c2279li;
        this.f5989a = reporterConfig;
    }

    @Override // java.lang.Runnable
    public final void run() {
        C2279li c2279li = this.b;
        ReporterConfig reporterConfig = this.f5989a;
        C2560x0 c2560x0 = c2279li.f6193a;
        Context context = c2279li.d;
        c2560x0.getClass();
        C2535w0.a(context).f().a(reporterConfig);
    }
}
