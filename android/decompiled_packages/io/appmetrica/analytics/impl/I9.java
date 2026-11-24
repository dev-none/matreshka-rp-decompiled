package io.appmetrica.analytics.impl;

/* JADX INFO: loaded from: classes7.dex */
public final class I9 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final long f5724a;

    public I9(long j) {
        this.f5724a = j;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        return (obj instanceof I9) && this.f5724a == ((I9) obj).f5724a;
    }

    public final int hashCode() {
        return Long.hashCode(this.f5724a);
    }

    public final String toString() {
        return "ExternalAttributionConfig(collectingInterval=" + this.f5724a + ')';
    }
}
