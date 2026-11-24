package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.Revenue;

/* JADX INFO: loaded from: classes7.dex */
public final class Th implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ Revenue f5907a;
    public final /* synthetic */ C2279li b;

    public Th(C2279li c2279li, Revenue revenue) {
        this.b = c2279li;
        this.f5907a = revenue;
    }

    @Override // java.lang.Runnable
    public final void run() {
        C2279li c2279li = this.b;
        C2279li.a(c2279li.f6193a, c2279li.d, c2279li.e).reportRevenue(this.f5907a);
    }
}
