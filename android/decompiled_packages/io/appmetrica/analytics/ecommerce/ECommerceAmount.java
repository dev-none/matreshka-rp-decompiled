package io.appmetrica.analytics.ecommerce;

import io.appmetrica.analytics.impl.no;
import java.math.BigDecimal;

/* JADX INFO: loaded from: classes7.dex */
public class ECommerceAmount {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final BigDecimal f5530a;
    private final String b;

    public ECommerceAmount(long j, String str) {
        this(no.a(j), str);
    }

    public BigDecimal getAmount() {
        return this.f5530a;
    }

    public String getUnit() {
        return this.b;
    }

    public String toString() {
        return "ECommerceAmount{amount=" + this.f5530a + ", unit='" + this.b + "'}";
    }

    public ECommerceAmount(double d, String str) {
        this(new BigDecimal(no.a(d)), str);
    }

    public ECommerceAmount(BigDecimal bigDecimal, String str) {
        this.f5530a = bigDecimal;
        this.b = str;
    }
}
