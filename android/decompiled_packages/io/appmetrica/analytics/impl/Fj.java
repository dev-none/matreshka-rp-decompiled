package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.AdRevenue;

/* JADX INFO: loaded from: classes7.dex */
public final class Fj implements Xa {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ AdRevenue f5677a;

    public Fj(AdRevenue adRevenue) {
        this.f5677a = adRevenue;
    }

    @Override // io.appmetrica.analytics.impl.Xa
    public final void a(Ya ya) {
        ya.reportAdRevenue(this.f5677a);
    }
}
