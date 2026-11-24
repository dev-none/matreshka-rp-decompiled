package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.ecommerce.ECommerceEvent;
import io.appmetrica.analytics.ecommerce.ECommerceProduct;
import io.appmetrica.analytics.ecommerce.ECommerceScreen;
import java.util.List;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.fl, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2127fl extends ECommerceEvent {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Mf f6081a;
    public final C2177hj b;
    public final InterfaceC2166h8 c;

    public C2127fl(ECommerceProduct eCommerceProduct, ECommerceScreen eCommerceScreen) {
        this(new Mf(eCommerceProduct), new C2177hj(eCommerceScreen), new C2153gl());
    }

    public final InterfaceC2166h8 a() {
        return this.c;
    }

    @Override // io.appmetrica.analytics.ecommerce.ECommerceEvent
    public final String getPublicDescription() {
        return "shown product card info";
    }

    @Override // io.appmetrica.analytics.ecommerce.ECommerceEvent, io.appmetrica.analytics.impl.Pf
    public final List<Ii> toProto() {
        return (List) this.c.fromModel(this);
    }

    public final String toString() {
        return "ShownProductCardInfoEvent{product=" + this.f6081a + ", screen=" + this.b + ", converter=" + this.c + '}';
    }

    public C2127fl(Mf mf, C2177hj c2177hj, InterfaceC2166h8 interfaceC2166h8) {
        this.f6081a = mf;
        this.b = c2177hj;
        this.c = interfaceC2166h8;
    }
}
