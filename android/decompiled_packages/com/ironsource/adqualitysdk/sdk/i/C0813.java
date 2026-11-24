package com.ironsource.adqualitysdk.sdk.i;

import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ᵄ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0813 {

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final List f2889;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final boolean f2890;

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final boolean f2891;

    public C0813(boolean z, boolean z2, ArrayList arrayList) {
        this.f2891 = z;
        this.f2890 = z2;
        this.f2889 = Collections.unmodifiableList(new ArrayList(arrayList));
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj == null || C0813.class != obj.getClass()) {
            return false;
        }
        C0813 c0813 = (C0813) obj;
        if (this.f2891 == c0813.f2891 && this.f2890 == c0813.f2890) {
            return this.f2889.equals(c0813.f2889);
        }
        return false;
    }

    public final int hashCode() {
        return this.f2889.hashCode() + ((((this.f2891 ? 1 : 0) * 31) + (this.f2890 ? 1 : 0)) * 31);
    }

    public final String toString() {
        return StringFog.decrypt("kxJhLO9D//KiCWc3xXTu5LQReiPCVdn4rglrPJY=\n", "wX0OWKsmi5c=\n") + this.f2891 + StringFog.decrypt("ojQCgq4VlTPvYASD1g==\n", "jhRr8et44F8=\n") + this.f2890 + StringFog.decrypt("xEIyyhj94sSbXw==\n", "6GJBo3+Tg6g=\n") + this.f2889 + '}';
    }
}
