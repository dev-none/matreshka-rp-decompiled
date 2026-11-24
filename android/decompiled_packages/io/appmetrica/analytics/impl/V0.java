package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.Revenue;

/* JADX INFO: loaded from: classes7.dex */
public final class V0 implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ Revenue f5926a;
    public final /* synthetic */ C2436s1 b;

    public V0(C2436s1 c2436s1, Revenue revenue) {
        this.b = c2436s1;
        this.f5926a = revenue;
    }

    @Override // java.lang.Runnable
    public final void run() {
        C2436s1.a(this.b).reportRevenue(this.f5926a);
    }
}
