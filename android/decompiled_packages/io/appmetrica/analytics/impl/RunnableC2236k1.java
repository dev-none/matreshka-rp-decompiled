package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreutils.internal.collection.CollectionUtils;
import java.util.List;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.k1, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class RunnableC2236k1 implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ List f6164a;
    public final /* synthetic */ C2436s1 b;

    public RunnableC2236k1(C2436s1 c2436s1, List list) {
        this.b = c2436s1;
        this.f6164a = list;
    }

    @Override // java.lang.Runnable
    public final void run() {
        C2436s1.a(this.b).reportAnr(CollectionUtils.getMapFromList(this.f6164a));
    }
}
