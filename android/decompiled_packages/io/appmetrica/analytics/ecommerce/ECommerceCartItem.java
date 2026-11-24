package io.appmetrica.analytics.ecommerce;

import io.appmetrica.analytics.impl.no;
import java.math.BigDecimal;

/* JADX INFO: loaded from: classes7.dex */
public class ECommerceCartItem {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final ECommerceProduct f5531a;
    private final BigDecimal b;
    private final ECommercePrice c;
    private ECommerceReferrer d;

    public ECommerceCartItem(ECommerceProduct eCommerceProduct, ECommercePrice eCommercePrice, long j) {
        this(eCommerceProduct, eCommercePrice, no.a(j));
    }

    public ECommerceProduct getProduct() {
        return this.f5531a;
    }

    public BigDecimal getQuantity() {
        return this.b;
    }

    public ECommerceReferrer getReferrer() {
        return this.d;
    }

    public ECommercePrice getRevenue() {
        return this.c;
    }

    public ECommerceCartItem setReferrer(ECommerceReferrer eCommerceReferrer) {
        this.d = eCommerceReferrer;
        return this;
    }

    public String toString() {
        return "ECommerceCartItem{product=" + this.f5531a + ", quantity=" + this.b + ", revenue=" + this.c + ", referrer=" + this.d + '}';
    }

    public ECommerceCartItem(ECommerceProduct eCommerceProduct, ECommercePrice eCommercePrice, double d) {
        this(eCommerceProduct, eCommercePrice, new BigDecimal(no.a(d)));
    }

    public ECommerceCartItem(ECommerceProduct eCommerceProduct, ECommercePrice eCommercePrice, BigDecimal bigDecimal) {
        this.f5531a = eCommerceProduct;
        this.b = bigDecimal;
        this.c = eCommercePrice;
    }
}
