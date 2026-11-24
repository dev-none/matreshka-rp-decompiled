package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.AdRevenue;

/* JADX INFO: loaded from: classes7.dex */
public final class W0 implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ AdRevenue f5939a;
    public final /* synthetic */ C2436s1 b;

    public W0(C2436s1 c2436s1, AdRevenue adRevenue) {
        this.b = c2436s1;
        this.f5939a = adRevenue;
    }

    @Override // java.lang.Runnable
    public final void run() {
        C2436s1.a(this.b).reportAdRevenue(this.f5939a);
    }
}
