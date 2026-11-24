package ru.rustore.sdk.metrics.internal;

import java.util.Map;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: r8-map-id-4892bc8aaa9cdd837b26b2f72aee5e335c1d677d3c7dc49a4dd01deea16fe0e8 */
/* JADX INFO: loaded from: classes8.dex */
public final class e0 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final String f6626a;
    public final String b;
    public final Map<String, String> c;
    public final long d;

    public e0(String uuid, String eventName, Map eventData, long j) {
        Intrinsics.checkNotNullParameter(uuid, "uuid");
        Intrinsics.checkNotNullParameter(eventName, "eventName");
        Intrinsics.checkNotNullParameter(eventData, "eventData");
        this.f6626a = uuid;
        this.b = eventName;
        this.c = eventData;
        this.d = j;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof e0)) {
            return false;
        }
        e0 e0Var = (e0) obj;
        return Intrinsics.areEqual(this.f6626a, e0Var.f6626a) && Intrinsics.areEqual(this.b, e0Var.b) && Intrinsics.areEqual(this.c, e0Var.c) && this.d == e0Var.d;
    }

    public final int hashCode() {
        return Long.hashCode(this.d) + ((this.c.hashCode() + ((this.b.hashCode() + (this.f6626a.hashCode() * 31)) * 31)) * 31);
    }

    public final String toString() {
        return "MigrationDtoVer2(uuid=" + ((Object) a0.a(this.f6626a)) + ", eventName=" + this.b + ", eventData=" + this.c + ", eventTimeStamp=" + this.d + ')';
    }
}
