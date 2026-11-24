package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreutils.internal.collection.CollectionUtils;
import java.util.Collections;
import java.util.List;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.yn, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2608yn {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final String f6419a;
    public final int b;
    public final long c;
    public final String d;
    public final Integer e;
    public final List f;

    public C2608yn(String str, int i, long j, String str2, Integer num, List list) {
        this.f6419a = str;
        this.b = i;
        this.c = j;
        this.d = str2;
        this.e = num;
        this.f = list == null ? Collections.EMPTY_LIST : CollectionUtils.unmodifiableListCopy(list);
    }
}
