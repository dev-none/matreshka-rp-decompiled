package io.appmetrica.analytics.ecommerce;

import java.util.List;

/* JADX INFO: loaded from: classes7.dex */
public class ECommercePrice {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final ECommerceAmount f5533a;
    private List b;

    public ECommercePrice(ECommerceAmount eCommerceAmount) {
        this.f5533a = eCommerceAmount;
    }

    public ECommerceAmount getFiat() {
        return this.f5533a;
    }

    public List<ECommerceAmount> getInternalComponents() {
        return this.b;
    }

    public ECommercePrice setInternalComponents(List<ECommerceAmount> list) {
        this.b = list;
        return this;
    }

    public String toString() {
        return "ECommercePrice{fiat=" + this.f5533a + ", internalComponents=" + this.b + '}';
    }
}
