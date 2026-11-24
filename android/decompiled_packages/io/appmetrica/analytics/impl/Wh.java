package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.ecommerce.ECommerceEvent;

/* JADX INFO: loaded from: classes7.dex */
public final class Wh implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ ECommerceEvent f5945a;
    public final /* synthetic */ C2279li b;

    public Wh(C2279li c2279li, ECommerceEvent eCommerceEvent) {
        this.b = c2279li;
        this.f5945a = eCommerceEvent;
    }

    @Override // java.lang.Runnable
    public final void run() {
        C2279li c2279li = this.b;
        C2279li.a(c2279li.f6193a, c2279li.d, c2279li.e).reportECommerce(this.f5945a);
    }
}
