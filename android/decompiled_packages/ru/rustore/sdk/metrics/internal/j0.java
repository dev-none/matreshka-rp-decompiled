package ru.rustore.sdk.metrics.internal;

import kotlin.jvm.internal.Intrinsics;
import ru.rustore.sdk.metrics.MetricsEvent;

/* JADX INFO: compiled from: r8-map-id-4892bc8aaa9cdd837b26b2f72aee5e335c1d677d3c7dc49a4dd01deea16fe0e8 */
/* JADX INFO: loaded from: classes8.dex */
public final class j0 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final String f6640a;
    public final MetricsEvent b;

    public j0(String uuid, MetricsEvent metricsEvent) {
        Intrinsics.checkNotNullParameter(uuid, "uuid");
        Intrinsics.checkNotNullParameter(metricsEvent, "metricsEvent");
        this.f6640a = uuid;
        this.b = metricsEvent;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!Intrinsics.areEqual(j0.class, obj != null ? obj.getClass() : null)) {
            return false;
        }
        Intrinsics.checkNotNull(obj, "null cannot be cast to non-null type ru.rustore.sdk.metrics.internal.domain.model.PersistentMetricsEvent");
        j0 j0Var = (j0) obj;
        return Intrinsics.areEqual(this.f6640a, j0Var.f6640a) && Intrinsics.areEqual(this.b, j0Var.b);
    }

    public final int hashCode() {
        return this.b.hashCode() + (this.f6640a.hashCode() * 31);
    }
}
