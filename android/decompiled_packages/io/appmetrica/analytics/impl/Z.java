package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.ecommerce.ECommerceAmount;
import java.math.BigDecimal;

/* JADX INFO: loaded from: classes7.dex */
public final class Z {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final BigDecimal f5977a;
    public final String b;

    public Z(ECommerceAmount eCommerceAmount) {
        this(eCommerceAmount.getAmount(), eCommerceAmount.getUnit());
    }

    public final String toString() {
        return "AmountWrapper{amount=" + this.f5977a + ", unit='" + this.b + "'}";
    }

    public Z(BigDecimal bigDecimal, String str) {
        this.f5977a = bigDecimal;
        this.b = str;
    }
}
