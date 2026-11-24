package com.ironsource.adqualitysdk.sdk.i;

import java.util.List;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ᐞ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0597 {

    /* JADX INFO: renamed from: ﭴ, reason: contains not printable characters */
    public C0944 f2105;

    /* JADX INFO: renamed from: ﻐ, reason: contains not printable characters */
    public int f2114;

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public List f2115;

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public Class f2116;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public Class f2117;

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public Class f2118;

    /* JADX INFO: renamed from: ﻏ, reason: contains not printable characters */
    public int f2113 = -1;

    /* JADX INFO: renamed from: ﺙ, reason: contains not printable characters */
    public int f2112 = -1;

    /* JADX INFO: renamed from: ﱡ, reason: contains not printable characters */
    public int f2111 = -1;

    /* JADX INFO: renamed from: ﱟ, reason: contains not printable characters */
    public int f2110 = -1;

    /* JADX INFO: renamed from: ﮐ, reason: contains not printable characters */
    public int f2109 = Integer.MAX_VALUE;

    /* JADX INFO: renamed from: ﮌ, reason: contains not printable characters */
    public int f2108 = Integer.MAX_VALUE;

    /* JADX INFO: renamed from: ﮉ, reason: contains not printable characters */
    public int f2107 = Integer.MAX_VALUE;

    /* JADX INFO: renamed from: ﭸ, reason: contains not printable characters */
    public boolean f2106 = true;

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj != null && C0597.class == obj.getClass()) {
            C0597 c0597 = (C0597) obj;
            if (this.f2114 != c0597.f2114 || this.f2113 != c0597.f2113 || this.f2112 != c0597.f2112 || this.f2111 != c0597.f2111 || this.f2110 != c0597.f2110 || this.f2109 != c0597.f2109 || this.f2108 != c0597.f2108 || this.f2107 != c0597.f2107 || this.f2106 != c0597.f2106) {
                return false;
            }
            Class cls = this.f2118;
            if (cls == null ? c0597.f2118 != null : !cls.equals(c0597.f2118)) {
                return false;
            }
            Class cls2 = this.f2117;
            if (cls2 == null ? c0597.f2117 != null : !cls2.equals(c0597.f2117)) {
                return false;
            }
            Class cls3 = this.f2116;
            if (cls3 == null ? c0597.f2116 != null : !cls3.equals(c0597.f2116)) {
                return false;
            }
            List list = this.f2115;
            if (list == null ? c0597.f2115 != null : !list.equals(c0597.f2115)) {
                return false;
            }
            C0944 c0944 = this.f2105;
            C0944 c0945 = c0597.f2105;
            if (c0944 != null) {
                return c0944.equals(c0945);
            }
            if (c0945 == null) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        Class cls = this.f2118;
        int iHashCode = (cls != null ? cls.hashCode() : 0) * 31;
        Class cls2 = this.f2117;
        int iHashCode2 = (iHashCode + (cls2 != null ? cls2.hashCode() : 0)) * 31;
        Class cls3 = this.f2116;
        int iHashCode3 = (iHashCode2 + (cls3 != null ? cls3.hashCode() : 0)) * 31;
        List list = this.f2115;
        int iHashCode4 = (((((((((((((((((((iHashCode3 + (list != null ? list.hashCode() : 0)) * 31) + this.f2114) * 31) + this.f2113) * 31) + this.f2112) * 31) + this.f2111) * 31) + this.f2110) * 31) + this.f2109) * 31) + this.f2108) * 31) + this.f2107) * 31) + (this.f2106 ? 1 : 0)) * 31;
        C0944 c0944 = this.f2105;
        return iHashCode4 + (c0944 != null ? c0944.hashCode() : 0);
    }
}
