package ru.rustore.sdk.metrics.internal;

import java.util.Arrays;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: r8-map-id-4892bc8aaa9cdd837b26b2f72aee5e335c1d677d3c7dc49a4dd01deea16fe0e8 */
/* JADX INFO: loaded from: classes8.dex */
public final class o0 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final String f6657a;
    public final byte[] b;

    public o0(String uuid, byte[] serializedMetricsEvent) {
        Intrinsics.checkNotNullParameter(uuid, "uuid");
        Intrinsics.checkNotNullParameter(serializedMetricsEvent, "serializedMetricsEvent");
        this.f6657a = uuid;
        this.b = serializedMetricsEvent;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!Intrinsics.areEqual(o0.class, obj != null ? obj.getClass() : null)) {
            return false;
        }
        Intrinsics.checkNotNull(obj, "null cannot be cast to non-null type ru.rustore.sdk.metrics.internal.data.dto.PersistentMetricsEventDto");
        o0 o0Var = (o0) obj;
        return Intrinsics.areEqual(this.f6657a, o0Var.f6657a) && Arrays.equals(this.b, o0Var.b);
    }

    public final int hashCode() {
        return Arrays.hashCode(this.b) + (this.f6657a.hashCode() * 31);
    }
}
