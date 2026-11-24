package ru.rustore.sdk.metrics.internal;

import kotlin.jvm.internal.Intrinsics;
import ru.rustore.sdk.metrics.MetricsEvent;

/* JADX INFO: compiled from: r8-map-id-4892bc8aaa9cdd837b26b2f72aee5e335c1d677d3c7dc49a4dd01deea16fe0e8 */
/* JADX INFO: loaded from: classes8.dex */
public final class u0 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final String f6673a;
    public final String b;
    public final String c;
    public final String d;
    public final MetricsEvent e;

    public u0(String packageName, String uuid, String userId, String str, MetricsEvent metricsEvent) {
        Intrinsics.checkNotNullParameter(packageName, "packageName");
        Intrinsics.checkNotNullParameter(uuid, "uuid");
        Intrinsics.checkNotNullParameter(userId, "userId");
        Intrinsics.checkNotNullParameter(metricsEvent, "metricsEvent");
        this.f6673a = packageName;
        this.b = uuid;
        this.c = userId;
        this.d = str;
        this.e = metricsEvent;
    }

    /* JADX WARN: Code duplicated, block: B:25:0x004a  */
    public final boolean equals(Object obj) {
        boolean zAreEqual;
        if (this == obj) {
            return true;
        }
        if (!Intrinsics.areEqual(u0.class, obj != null ? obj.getClass() : null)) {
            return false;
        }
        Intrinsics.checkNotNull(obj, "null cannot be cast to non-null type ru.rustore.sdk.metrics.internal.data.dto.RemoteMetricsEventDto");
        u0 u0Var = (u0) obj;
        if (!Intrinsics.areEqual(this.f6673a, u0Var.f6673a) || !Intrinsics.areEqual(this.b, u0Var.b) || !Intrinsics.areEqual(this.c, u0Var.c)) {
            return false;
        }
        String str = this.d;
        String str2 = u0Var.d;
        if (str == null) {
            if (str2 == null) {
                zAreEqual = true;
            } else {
                zAreEqual = false;
            }
        } else if (str2 == null) {
            zAreEqual = false;
        } else {
            zAreEqual = Intrinsics.areEqual(str, str2);
        }
        return zAreEqual && Intrinsics.areEqual(this.e, u0Var.e);
    }

    public final int hashCode() {
        int iHashCode = (this.c.hashCode() + ((this.b.hashCode() + (this.f6673a.hashCode() * 31)) * 31)) * 31;
        String str = this.d;
        j1 j1Var = str != null ? new j1(str) : null;
        return this.e.hashCode() + ((iHashCode + (j1Var != null ? j1Var.f6641a.hashCode() : 0)) * 31);
    }
}
