package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreutils.internal.collection.CollectionUtils;
import java.util.List;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.c9, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2038c9 extends AbstractC2064d9 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final List f6026a;

    public C2038c9(List<Object> list) {
        this.f6026a = CollectionUtils.unmodifiableListCopy(list);
    }

    public final List<Object> a() {
        return this.f6026a;
    }
}
