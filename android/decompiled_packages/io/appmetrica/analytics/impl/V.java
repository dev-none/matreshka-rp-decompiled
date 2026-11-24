package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreutils.internal.collection.CollectionUtils;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

/* JADX INFO: loaded from: classes7.dex */
public final class V {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final C2608yn f5925a;
    public final List b;
    public final String c;

    public V(C2608yn c2608yn, ArrayList arrayList, String str) {
        this.f5925a = c2608yn;
        this.b = arrayList == null ? Collections.EMPTY_LIST : CollectionUtils.unmodifiableListCopy(arrayList);
        this.c = str;
    }
}
