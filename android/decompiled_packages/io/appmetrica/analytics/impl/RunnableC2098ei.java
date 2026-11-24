package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreutils.internal.collection.CollectionUtils;
import java.util.List;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.ei, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class RunnableC2098ei implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ List f6064a;
    public final /* synthetic */ C2279li b;

    public RunnableC2098ei(C2279li c2279li, List list) {
        this.b = c2279li;
        this.f6064a = list;
    }

    @Override // java.lang.Runnable
    public final void run() {
        C2279li c2279li = this.b;
        C2279li.a(c2279li.f6193a, c2279li.d, c2279li.e).reportAnr(CollectionUtils.getMapFromList(this.f6064a));
    }
}
