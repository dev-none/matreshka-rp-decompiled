package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.ecommerce.ECommerceCartItem;
import java.math.BigDecimal;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.s3, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2438s3 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Mf f6304a;
    public final BigDecimal b;
    public final Ef c;
    public final Cg d;

    public C2438s3(ECommerceCartItem eCommerceCartItem) {
        this(new Mf(eCommerceCartItem.getProduct()), eCommerceCartItem.getQuantity(), new Ef(eCommerceCartItem.getRevenue()), eCommerceCartItem.getReferrer() == null ? null : new Cg(eCommerceCartItem.getReferrer()));
    }

    public final String toString() {
        return "CartItemWrapper{product=" + this.f6304a + ", quantity=" + this.b + ", revenue=" + this.c + ", referrer=" + this.d + '}';
    }

    public C2438s3(Mf mf, BigDecimal bigDecimal, Ef ef, Cg cg) {
        this.f6304a = mf;
        this.b = bigDecimal;
        this.c = ef;
        this.d = cg;
    }
}
