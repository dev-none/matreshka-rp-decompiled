package io.appmetrica.analytics.ecommerce;

import java.util.List;
import java.util.Map;

/* JADX INFO: loaded from: classes7.dex */
public class ECommerceOrder {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final String f5532a;
    private final List b;
    private Map c;

    public ECommerceOrder(String str, List<ECommerceCartItem> list) {
        this.f5532a = str;
        this.b = list;
    }

    public List<ECommerceCartItem> getCartItems() {
        return this.b;
    }

    public String getIdentifier() {
        return this.f5532a;
    }

    public Map<String, String> getPayload() {
        return this.c;
    }

    public ECommerceOrder setPayload(Map<String, String> map) {
        this.c = map;
        return this;
    }

    public String toString() {
        return "ECommerceOrder{identifier='" + this.f5532a + "', cartItems=" + this.b + ", payload=" + this.c + '}';
    }
}
