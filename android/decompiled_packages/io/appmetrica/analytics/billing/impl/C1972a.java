package io.appmetrica.analytics.billing.impl;

import java.util.List;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: renamed from: io.appmetrica.analytics.billing.impl.a, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C1972a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final List f5407a;
    public final boolean b;

    public C1972a(List list, boolean z) {
        this.f5407a = list;
        this.b = z;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof C1972a)) {
            return false;
        }
        C1972a c1972a = (C1972a) obj;
        return Intrinsics.areEqual(this.f5407a, c1972a.f5407a) && this.b == c1972a.b;
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r0v3, types: [int] */
    /* JADX WARN: Type inference failed for: r1v1, types: [int] */
    /* JADX WARN: Type inference failed for: r1v2 */
    /* JADX WARN: Type inference failed for: r1v3 */
    public final int hashCode() {
        int iHashCode = this.f5407a.hashCode() * 31;
        boolean z = this.b;
        ?? r1 = z;
        if (z) {
            r1 = 1;
        }
        return iHashCode + r1;
    }

    public final String toString() {
        return "AutoInappCollectingInfo(billingInfos=" + this.f5407a + ", firstInappCheckOccurred=" + this.b + ')';
    }
}
