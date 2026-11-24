package io.appmetrica.analytics.impl;

import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.id, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2197id {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final String f6133a;
    public final boolean b;

    public C2197id(String str, boolean z) {
        this.f6133a = str;
        this.b = z;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof C2197id)) {
            return false;
        }
        C2197id c2197id = (C2197id) obj;
        return Intrinsics.areEqual(this.f6133a, c2197id.f6133a) && this.b == c2197id.b;
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r0v3, types: [int] */
    /* JADX WARN: Type inference failed for: r1v1, types: [int] */
    /* JADX WARN: Type inference failed for: r1v2 */
    /* JADX WARN: Type inference failed for: r1v3 */
    public final int hashCode() {
        int iHashCode = this.f6133a.hashCode() * 31;
        boolean z = this.b;
        ?? r1 = z;
        if (z) {
            r1 = 1;
        }
        return iHashCode + r1;
    }

    public final String toString() {
        return "ModuleStatus(moduleName=" + this.f6133a + ", loaded=" + this.b + ')';
    }
}
