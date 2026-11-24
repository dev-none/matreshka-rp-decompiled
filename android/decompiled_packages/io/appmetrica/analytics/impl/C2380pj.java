package io.appmetrica.analytics.impl;

import android.content.Context;
import io.appmetrica.analytics.internal.CounterConfigurationReporterType;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.pj, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2380pj {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final String f6258a;
    public final Context b;
    public final CounterConfigurationReporterType c;
    public final C2454sj d;

    public C2380pj(String str, Context context, CounterConfigurationReporterType counterConfigurationReporterType, C2454sj c2454sj) {
        this.f6258a = str;
        this.b = context;
        int i = AbstractC2355oj.f6243a[counterConfigurationReporterType.ordinal()];
        if (i == 1) {
            this.c = CounterConfigurationReporterType.SELF_DIAGNOSTIC_MAIN;
        } else if (i != 2) {
            this.c = null;
        } else {
            this.c = CounterConfigurationReporterType.SELF_DIAGNOSTIC_MANUAL;
        }
        this.d = c2454sj;
    }
}
