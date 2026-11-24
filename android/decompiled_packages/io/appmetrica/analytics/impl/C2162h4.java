package io.appmetrica.analytics.impl;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.h4, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2162h4 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final String f6104a;
    public final Integer b;
    public final String c;

    public C2162h4(String str, Integer num, String str2) {
        this.f6104a = str;
        this.b = num;
        this.c = str2;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj != null && C2162h4.class == obj.getClass()) {
            C2162h4 c2162h4 = (C2162h4) obj;
            if (!this.f6104a.equals(c2162h4.f6104a)) {
                return false;
            }
            Integer num = this.b;
            if (num == null ? c2162h4.b != null : !num.equals(c2162h4.b)) {
                return false;
            }
            String str = this.c;
            String str2 = c2162h4.c;
            if (str != null) {
                return str.equals(str2);
            }
            if (str2 == null) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        int iHashCode = this.f6104a.hashCode() * 31;
        Integer num = this.b;
        int iHashCode2 = (iHashCode + (num != null ? num.hashCode() : 0)) * 31;
        String str = this.c;
        return iHashCode2 + (str != null ? str.hashCode() : 0);
    }
}
