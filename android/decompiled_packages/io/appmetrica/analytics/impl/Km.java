package io.appmetrica.analytics.impl;

/* JADX INFO: loaded from: classes7.dex */
public final class Km {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final long f5764a;

    public Km(long j) {
        this.f5764a = j;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        return obj != null && Km.class == obj.getClass() && this.f5764a == ((Km) obj).f5764a;
    }

    public final int hashCode() {
        long j = this.f5764a;
        return (int) (j ^ (j >>> 32));
    }

    public final String toString() {
        return "StatSending{disabledReportingInterval=" + this.f5764a + '}';
    }
}
