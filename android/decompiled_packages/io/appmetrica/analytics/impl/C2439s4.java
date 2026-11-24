package io.appmetrica.analytics.impl;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.s4, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2439s4 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final boolean f6305a;
    public final boolean b;
    public final boolean c;
    public final boolean d;
    public final boolean e;
    public final Boolean f;

    public C2439s4(C2390q4 c2390q4) {
        this.f6305a = c2390q4.f6265a;
        this.b = c2390q4.b;
        this.c = c2390q4.c;
        this.d = c2390q4.d;
        this.e = c2390q4.e;
        this.f = c2390q4.f;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj != null && C2439s4.class == obj.getClass()) {
            C2439s4 c2439s4 = (C2439s4) obj;
            if (this.f6305a != c2439s4.f6305a || this.b != c2439s4.b || this.c != c2439s4.c || this.d != c2439s4.d || this.e != c2439s4.e) {
                return false;
            }
            Boolean bool = this.f;
            Boolean bool2 = c2439s4.f;
            if (bool != null) {
                return bool.equals(bool2);
            }
            if (bool2 == null) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        int i = (((((((((this.f6305a ? 1 : 0) * 31) + (this.b ? 1 : 0)) * 31) + (this.c ? 1 : 0)) * 31) + (this.d ? 1 : 0)) * 31) + (this.e ? 1 : 0)) * 31;
        Boolean bool = this.f;
        return i + (bool != null ? bool.hashCode() : 0);
    }

    public final String toString() {
        return "CollectingFlags{permissionsCollectingEnabled=" + this.f6305a + ", featuresCollectingEnabled=" + this.b + ", googleAid=" + this.c + ", simInfo=" + this.d + ", huaweiOaid=" + this.e + ", sslPinning=" + this.f + '}';
    }
}
