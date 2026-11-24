package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.AdRevenue;

/* JADX INFO: loaded from: classes7.dex */
public final class Mj implements Xa {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ AdRevenue f5795a;
    public final /* synthetic */ boolean b;

    public Mj(AdRevenue adRevenue, boolean z) {
        this.f5795a = adRevenue;
        this.b = z;
    }

    @Override // io.appmetrica.analytics.impl.Xa
    public final void a(Ya ya) {
        ya.reportAdRevenue(this.f5795a, this.b);
    }
}
