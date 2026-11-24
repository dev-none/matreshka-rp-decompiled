package io.appmetrica.analytics.impl;

/* JADX INFO: loaded from: classes7.dex */
public final class F2 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final E2 f5670a;
    public final Boolean b;

    public F2(E2 e2, Boolean bool) {
        this.f5670a = e2;
        this.b = bool;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj != null && F2.class == obj.getClass()) {
            F2 f2 = (F2) obj;
            if (this.f5670a != f2.f5670a) {
                return false;
            }
            Boolean bool = this.b;
            if (bool != null) {
                return bool.equals(f2.b);
            }
            if (f2.b == null) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        E2 e2 = this.f5670a;
        int iHashCode = (e2 != null ? e2.hashCode() : 0) * 31;
        Boolean bool = this.b;
        return iHashCode + (bool != null ? bool.hashCode() : 0);
    }

    public final String toString() {
        return "BackgroundRestrictionsState{mAppStandByBucket=" + this.f5670a + ", mBackgroundRestricted=" + this.b + '}';
    }
}
