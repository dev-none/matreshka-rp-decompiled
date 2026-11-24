package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.AdRevenue;

/* JADX INFO: loaded from: classes7.dex */
public final class Uh implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ AdRevenue f5920a;
    public final /* synthetic */ C2279li b;

    public Uh(C2279li c2279li, AdRevenue adRevenue) {
        this.b = c2279li;
        this.f5920a = adRevenue;
    }

    @Override // java.lang.Runnable
    public final void run() {
        C2279li c2279li = this.b;
        C2279li.a(c2279li.f6193a, c2279li.d, c2279li.e).reportAdRevenue(this.f5920a);
    }
}
