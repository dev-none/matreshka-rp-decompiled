package io.appmetrica.analytics.impl;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.i0, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2184i0 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final String f6120a;
    public final long b;

    public C2184i0(String str, long j) {
        this.f6120a = str;
        this.b = j;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj != null && C2184i0.class == obj.getClass()) {
            C2184i0 c2184i0 = (C2184i0) obj;
            if (this.b != c2184i0.b) {
                return false;
            }
            String str = this.f6120a;
            String str2 = c2184i0.f6120a;
            if (str == null ? str2 == null : str.equals(str2)) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        String str = this.f6120a;
        int iHashCode = str != null ? str.hashCode() : 0;
        long j = this.b;
        return (iHashCode * 31) + ((int) (j ^ (j >>> 32)));
    }
}
