package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.Revenue;

/* JADX INFO: loaded from: classes7.dex */
public final class Bj implements Xa {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ Revenue f5615a;

    public Bj(Revenue revenue) {
        this.f5615a = revenue;
    }

    @Override // io.appmetrica.analytics.impl.Xa
    public final void a(Ya ya) {
        ya.reportRevenue(this.f5615a);
    }
}
