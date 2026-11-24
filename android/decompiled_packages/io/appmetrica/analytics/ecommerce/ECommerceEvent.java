package io.appmetrica.analytics.ecommerce;

import io.appmetrica.analytics.impl.C2127fl;
import io.appmetrica.analytics.impl.C2179hl;
import io.appmetrica.analytics.impl.C2230jl;
import io.appmetrica.analytics.impl.C2364p3;
import io.appmetrica.analytics.impl.C2499ue;
import io.appmetrica.analytics.impl.Pf;
import java.util.List;

/* JADX INFO: loaded from: classes7.dex */
public abstract class ECommerceEvent implements Pf {
    protected ECommerceEvent() {
    }

    public static ECommerceEvent addCartItemEvent(ECommerceCartItem eCommerceCartItem) {
        return new C2364p3(4, eCommerceCartItem);
    }

    public static ECommerceEvent beginCheckoutEvent(ECommerceOrder eCommerceOrder) {
        return new C2499ue(6, eCommerceOrder);
    }

    public static ECommerceEvent purchaseEvent(ECommerceOrder eCommerceOrder) {
        return new C2499ue(7, eCommerceOrder);
    }

    public static ECommerceEvent removeCartItemEvent(ECommerceCartItem eCommerceCartItem) {
        return new C2364p3(5, eCommerceCartItem);
    }

    public static ECommerceEvent showProductCardEvent(ECommerceProduct eCommerceProduct, ECommerceScreen eCommerceScreen) {
        return new C2127fl(eCommerceProduct, eCommerceScreen);
    }

    public static ECommerceEvent showProductDetailsEvent(ECommerceProduct eCommerceProduct, ECommerceReferrer eCommerceReferrer) {
        return new C2179hl(eCommerceProduct, eCommerceReferrer);
    }

    public static ECommerceEvent showScreenEvent(ECommerceScreen eCommerceScreen) {
        return new C2230jl(eCommerceScreen);
    }

    public String getPublicDescription() {
        return "E-commerce base event";
    }

    @Override // io.appmetrica.analytics.impl.Pf
    public abstract /* synthetic */ List toProto();
}
