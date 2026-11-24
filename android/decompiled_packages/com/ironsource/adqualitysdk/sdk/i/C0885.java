package com.ironsource.adqualitysdk.sdk.i;

import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.Ị, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0885 {

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final String f3141;

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final String f3142;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final List f3143;

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final boolean f3144;

    public C0885(boolean z, List list, String str, String str2) {
        this.f3144 = z;
        this.f3143 = Collections.unmodifiableList(new ArrayList(list));
        this.f3142 = str;
        this.f3141 = str2;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj != null && C0885.class == obj.getClass()) {
            C0885 c0885 = (C0885) obj;
            if (this.f3144 != c0885.f3144 || !this.f3143.equals(c0885.f3143)) {
                return false;
            }
            String str = this.f3142;
            if (str == null ? c0885.f3142 != null : !str.equals(c0885.f3142)) {
                return false;
            }
            String str2 = this.f3141;
            String str3 = c0885.f3141;
            if (str2 != null) {
                return str2.equals(str3);
            }
            if (str3 == null) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        int iHashCode = (this.f3143.hashCode() + ((this.f3144 ? 1 : 0) * 31)) * 31;
        String str = this.f3142;
        int iHashCode2 = (iHashCode + (str != null ? str.hashCode() : 0)) * 31;
        String str2 = this.f3141;
        return iHashCode2 + (str2 != null ? str2.hashCode() : 0);
    }

    public final String toString() {
        return StringFog.decrypt("kwuHjrJVcYmRHJuNt0VviLYai52oQik=\n", "w3no+NsxFPs=\n") + this.f3144 + StringFog.decrypt("t0HfVJax94boXA==\n", "m2GsPfHfluo=\n") + this.f3143 + StringFog.decrypt("jVzotY0NakuG\n", "oXyc2uZoBHY=\n") + this.f3142 + '\'' + StringFog.decrypt("x/Q35ena3jfM\n", "69RSl5u1rAo=\n") + this.f3141 + "'}";
    }
}
