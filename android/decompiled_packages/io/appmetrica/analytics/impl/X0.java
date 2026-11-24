package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.ecommerce.ECommerceEvent;

/* JADX INFO: loaded from: classes7.dex */
public final class X0 implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ ECommerceEvent f5948a;
    public final /* synthetic */ C2436s1 b;

    public X0(C2436s1 c2436s1, ECommerceEvent eCommerceEvent) {
        this.b = c2436s1;
        this.f5948a = eCommerceEvent;
    }

    @Override // java.lang.Runnable
    public final void run() {
        C2436s1.a(this.b).reportECommerce(this.f5948a);
    }
}
