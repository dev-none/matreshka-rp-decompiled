package io.appmetrica.analytics.impl;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.l3, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2264l3 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final long f6182a;

    public C2264l3(long j) {
        this.f6182a = j;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        return obj != null && C2264l3.class == obj.getClass() && this.f6182a == ((C2264l3) obj).f6182a;
    }

    public final int hashCode() {
        long j = this.f6182a;
        return (int) (j ^ (j >>> 32));
    }

    public final String toString() {
        return "CacheControl{lastKnownLocationTtl=" + this.f6182a + '}';
    }
}
