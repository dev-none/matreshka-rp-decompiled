package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreutils.internal.collection.CollectionUtils;
import io.appmetrica.analytics.ecommerce.ECommerceScreen;
import java.util.List;
import java.util.Map;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.hj, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2177hj {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final String f6114a;
    public final List b;
    public final String c;
    public final Map d;

    public C2177hj(ECommerceScreen eCommerceScreen) {
        this(eCommerceScreen.getName(), eCommerceScreen.getSearchQuery(), CollectionUtils.arrayListCopyOfNullableCollection(eCommerceScreen.getCategoriesPath()), CollectionUtils.mapCopyOfNullableMap(eCommerceScreen.getPayload()));
    }

    public final String toString() {
        return "ScreenWrapper{name='" + this.f6114a + "', categoriesPath=" + this.b + ", searchQuery='" + this.c + "', payload=" + this.d + '}';
    }

    public C2177hj(String str, String str2, List list, Map map) {
        this.f6114a = str;
        this.b = list;
        this.c = str2;
        this.d = map;
    }
}
