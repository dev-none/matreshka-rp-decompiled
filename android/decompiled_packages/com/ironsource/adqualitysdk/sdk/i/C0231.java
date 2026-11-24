package com.ironsource.adqualitysdk.sdk.i;

import com.ironsource.adqualitysdk.sdk.StringFog;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ǰ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0231 extends AbstractC1051 {

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final AbstractC0413 f912;

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final AbstractC0413 f913;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final AbstractC0904 f914;

    public C0231(AbstractC0904 abstractC0904, AbstractC0413 abstractC0413, AbstractC0413 abstractC0414, byte b) {
        super(b);
        this.f914 = abstractC0904;
        this.f913 = abstractC0413;
        this.f912 = abstractC0414;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0413
    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!super.equals(obj)) {
            return false;
        }
        C0231 c0231 = (C0231) obj;
        AbstractC0904 abstractC0904 = this.f914;
        if (abstractC0904 == null ? c0231.f914 != null : !abstractC0904.equals(c0231.f914)) {
            return false;
        }
        AbstractC0413 abstractC0413 = this.f913;
        if (abstractC0413 == null ? c0231.f913 != null : !abstractC0413.equals(c0231.f913)) {
            return false;
        }
        AbstractC0413 abstractC0414 = this.f912;
        AbstractC0413 abstractC0415 = c0231.f912;
        if (abstractC0414 != null) {
            return abstractC0414.equals(abstractC0415);
        }
        return abstractC0415 == null;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0413
    public final int hashCode() {
        AbstractC0904 abstractC0904 = this.f914;
        int iHashCode = (abstractC0904 != null ? abstractC0904.hashCode() : 0) * 31;
        AbstractC0413 abstractC0413 = this.f913;
        int iHashCode2 = (iHashCode + (abstractC0413 != null ? abstractC0413.hashCode() : 0)) * 31;
        AbstractC0413 abstractC0414 = this.f912;
        return iHashCode2 + (abstractC0414 != null ? abstractC0414.hashCode() : 0);
    }

    public final String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append(StringFog.decrypt("dG+xfw==\n", "HQmRVwoWUrg=\n"));
        sb.append(this.f914);
        sb.append(StringFog.decrypt("SEw=\n", "YWxfK+8iNN4=\n"));
        sb.append(this.f913);
        if (this.f912 != null) {
            if (this.f913 instanceof C0767) {
                sb.append(" ");
            } else {
                sb.append("\n");
                byte b = this.f3798;
                for (int i = 0; i < b; i++) {
                    sb.append("  ");
                }
            }
            sb.append(StringFog.decrypt("LyHjW0o=\n", "Sk2QPmpFvNw=\n"));
            sb.append(this.f912);
        }
        return sb.toString();
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0413
    /* JADX INFO: renamed from: ﾒ */
    public final C0847 mo8348(C0704 c0704, C1013 c1013) {
        if (this.f914.m8777(c0704, c1013).m8737()) {
            return this.f913.m8515(c0704, c1013);
        }
        if (this.f912 == null) {
            return new C0847(Boolean.FALSE);
        }
        c0704.f2429.add(this);
        return this.f912.m8515(c0704, c1013);
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0413
    /* JADX INFO: renamed from: ﾒ */
    public final int mo8373() {
        int iMo8373 = this.f913.mo8373();
        AbstractC0413 abstractC0413 = this.f912;
        if (abstractC0413 == null) {
            return iMo8373;
        }
        int iMo8374 = abstractC0413.mo8373() + iMo8373;
        return this.f913 instanceof C0767 ? iMo8374 - 1 : iMo8374;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0413
    /* JADX INFO: renamed from: ﾒ */
    public final int mo8374(C0704 c0704) {
        if (!c0704.f2429.contains(this)) {
            return 0;
        }
        int iMo8373 = this.f913.mo8373();
        return this.f913 instanceof C0767 ? iMo8373 - 1 : iMo8373;
    }
}
