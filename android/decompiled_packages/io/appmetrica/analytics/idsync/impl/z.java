package io.appmetrica.analytics.idsync.impl;

import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: loaded from: classes7.dex */
public final class z {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final String f5579a;
    public final long b;
    public final int c;

    public z(String str, long j, int i) {
        this.f5579a = str;
        this.b = j;
        this.c = i;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof z)) {
            return false;
        }
        z zVar = (z) obj;
        return Intrinsics.areEqual(this.f5579a, zVar.f5579a) && this.b == zVar.b && this.c == zVar.c;
    }

    public final int hashCode() {
        return v.a(this.c) + ((Long.hashCode(this.b) + (this.f5579a.hashCode() * 31)) * 31);
    }

    public final String toString() {
        return "RequestState(type=" + this.f5579a + ", lastAttempt=" + this.b + ", lastAttemptResult=" + u.b(this.c) + ')';
    }
}
