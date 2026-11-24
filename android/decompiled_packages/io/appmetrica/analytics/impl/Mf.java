package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreutils.internal.collection.CollectionUtils;
import io.appmetrica.analytics.ecommerce.ECommerceProduct;
import java.util.List;
import java.util.Map;

/* JADX INFO: loaded from: classes7.dex */
public final class Mf {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final String f5792a;
    public final String b;
    public final List c;
    public final Map d;
    public final Ef e;
    public final Ef f;
    public final List g;

    public Mf(ECommerceProduct eCommerceProduct) {
        this(eCommerceProduct.getSku(), eCommerceProduct.getName(), CollectionUtils.arrayListCopyOfNullableCollection(eCommerceProduct.getCategoriesPath()), CollectionUtils.mapCopyOfNullableMap(eCommerceProduct.getPayload()), eCommerceProduct.getActualPrice() == null ? null : new Ef(eCommerceProduct.getActualPrice()), eCommerceProduct.getOriginalPrice() != null ? new Ef(eCommerceProduct.getOriginalPrice()) : null, CollectionUtils.arrayListCopyOfNullableCollection(eCommerceProduct.getPromocodes()));
    }

    public final String toString() {
        return "ProductWrapper{sku='" + this.f5792a + "', name='" + this.b + "', categoriesPath=" + this.c + ", payload=" + this.d + ", actualPrice=" + this.e + ", originalPrice=" + this.f + ", promocodes=" + this.g + '}';
    }

    public Mf(String str, String str2, List list, Map map, Ef ef, Ef ef2, List list2) {
        this.f5792a = str;
        this.b = str2;
        this.c = list;
        this.d = map;
        this.e = ef;
        this.f = ef2;
        this.g = list2;
    }
}
