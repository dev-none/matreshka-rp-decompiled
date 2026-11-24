package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.AdRevenue;
import io.appmetrica.analytics.coreutils.internal.executors.SafeRunnable;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.od, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2349od extends SafeRunnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ C2498ud f6239a;
    public final /* synthetic */ AdRevenue b;
    public final /* synthetic */ boolean c;

    public C2349od(C2498ud c2498ud, AdRevenue adRevenue, boolean z) {
        this.f6239a = c2498ud;
        this.b = adRevenue;
        this.c = z;
    }

    @Override // io.appmetrica.analytics.coreutils.internal.executors.SafeRunnable
    public final void runSafety() {
        C2498ud.a(this.f6239a).reportAdRevenue(this.b, this.c);
    }
}
