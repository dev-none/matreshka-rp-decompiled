package ru.rustore.sdk.metrics.internal;

import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: r8-map-id-4892bc8aaa9cdd837b26b2f72aee5e335c1d677d3c7dc49a4dd01deea16fe0e8 */
/* JADX INFO: loaded from: classes8.dex */
public final class s0 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final k0 f6669a;
    public final p0 b;
    public final q0 c;
    public final k d;

    public s0(k0 persistentMetricsEventDataSource, p0 persistentMetricsEventDtoFactory, q0 persistentMetricsEventMapper, k logger) {
        Intrinsics.checkNotNullParameter(persistentMetricsEventDataSource, "persistentMetricsEventDataSource");
        Intrinsics.checkNotNullParameter(persistentMetricsEventDtoFactory, "persistentMetricsEventDtoFactory");
        Intrinsics.checkNotNullParameter(persistentMetricsEventMapper, "persistentMetricsEventMapper");
        Intrinsics.checkNotNullParameter(logger, "logger");
        this.f6669a = persistentMetricsEventDataSource;
        this.b = persistentMetricsEventDtoFactory;
        this.c = persistentMetricsEventMapper;
        this.d = logger;
    }

    public final void a(List<j0> persistentMetricsEvents) {
        Intrinsics.checkNotNullParameter(persistentMetricsEvents, "persistentMetricsEvents");
        k0 k0Var = this.f6669a;
        q0 q0Var = this.c;
        ArrayList arrayList = new ArrayList(CollectionsKt.collectionSizeOrDefault(persistentMetricsEvents, 10));
        Iterator<T> it = persistentMetricsEvents.iterator();
        while (it.hasNext()) {
            arrayList.add(q0Var.a((j0) it.next()));
        }
        k0Var.a(arrayList);
    }
}
