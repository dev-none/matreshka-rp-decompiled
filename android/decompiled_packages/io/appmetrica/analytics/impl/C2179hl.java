package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.ecommerce.ECommerceEvent;
import io.appmetrica.analytics.ecommerce.ECommerceProduct;
import io.appmetrica.analytics.ecommerce.ECommerceReferrer;
import java.util.List;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.hl, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2179hl extends ECommerceEvent {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Mf f6116a;
    public final Cg b;
    public final InterfaceC2166h8 c;

    public C2179hl(ECommerceProduct eCommerceProduct, ECommerceReferrer eCommerceReferrer) {
        this(new Mf(eCommerceProduct), eCommerceReferrer == null ? null : new Cg(eCommerceReferrer), new C2204il());
    }

    public final InterfaceC2166h8 a() {
        return this.c;
    }

    @Override // io.appmetrica.analytics.ecommerce.ECommerceEvent
    public final String getPublicDescription() {
        return "shown product details info";
    }

    @Override // io.appmetrica.analytics.ecommerce.ECommerceEvent, io.appmetrica.analytics.impl.Pf
    public final List<Ii> toProto() {
        return (List) this.c.fromModel(this);
    }

    public final String toString() {
        return "ShownProductDetailInfoEvent{product=" + this.f6116a + ", referrer=" + this.b + ", converter=" + this.c + '}';
    }

    public C2179hl(Mf mf, Cg cg, InterfaceC2166h8 interfaceC2166h8) {
        this.f6116a = mf;
        this.b = cg;
        this.c = interfaceC2166h8;
    }
}
