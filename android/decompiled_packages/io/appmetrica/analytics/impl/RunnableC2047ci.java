package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.AdRevenue;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.ci, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class RunnableC2047ci implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ AdRevenue f6032a;
    public final /* synthetic */ boolean b;
    public final /* synthetic */ C2279li c;

    public RunnableC2047ci(C2279li c2279li, AdRevenue adRevenue, boolean z) {
        this.c = c2279li;
        this.f6032a = adRevenue;
        this.b = z;
    }

    @Override // java.lang.Runnable
    public final void run() {
        C2279li c2279li = this.c;
        C2279li.a(c2279li.f6193a, c2279li.d, c2279li.e).reportAdRevenue(this.f6032a, this.b);
    }
}
