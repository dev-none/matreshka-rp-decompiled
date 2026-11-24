package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.ecommerce.ECommerceReferrer;

/* JADX INFO: loaded from: classes7.dex */
public final class Cg {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final String f5626a;
    public final String b;
    public final C2177hj c;

    public Cg(ECommerceReferrer eCommerceReferrer) {
        this(eCommerceReferrer.getType(), eCommerceReferrer.getIdentifier(), eCommerceReferrer.getScreen() == null ? null : new C2177hj(eCommerceReferrer.getScreen()));
    }

    public final String toString() {
        return "ReferrerWrapper{type='" + this.f5626a + "', identifier='" + this.b + "', screen=" + this.c + '}';
    }

    public Cg(String str, String str2, C2177hj c2177hj) {
        this.f5626a = str;
        this.b = str2;
        this.c = c2177hj;
    }
}
