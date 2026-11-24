package io.appmetrica.analytics.impl;

import java.util.List;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.l0, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2261l0 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final List f6180a;
    public final boolean b;

    public C2261l0(List list, boolean z) {
        this.f6180a = list;
        this.b = z;
    }

    public final String toString() {
        return "AppMetricaConfigExtension(autoCollectedDataSubscribers=" + this.f6180a + ", needClearEnvironment=" + this.b + ')';
    }
}
