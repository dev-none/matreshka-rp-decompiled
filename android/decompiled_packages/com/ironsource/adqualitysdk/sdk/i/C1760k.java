package com.ironsource.adqualitysdk.sdk.i;

import com.ironsource.adqualitysdk.sdk.StringFog;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.k, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes6.dex */
public final class C1760k extends AbstractC0904 {

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final AbstractC0904 f423;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final AbstractC0904 f424;

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final AbstractC0904 f425;

    public C1760k(AbstractC0904 abstractC0904, AbstractC0904 abstractC0905, AbstractC0904 abstractC0906) {
        this.f425 = abstractC0904;
        this.f424 = abstractC0905;
        this.f423 = abstractC0906;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0904
    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!super.equals(obj)) {
            return false;
        }
        C1760k c1760k = (C1760k) obj;
        AbstractC0904 abstractC0904 = this.f425;
        if (abstractC0904 == null ? c1760k.f425 != null : !abstractC0904.equals(c1760k.f425)) {
            return false;
        }
        AbstractC0904 abstractC0905 = this.f424;
        if (abstractC0905 == null ? c1760k.f424 != null : !abstractC0905.equals(c1760k.f424)) {
            return false;
        }
        AbstractC0904 abstractC0906 = this.f423;
        AbstractC0904 abstractC0907 = c1760k.f423;
        if (abstractC0906 != null) {
            return abstractC0906.equals(abstractC0907);
        }
        return abstractC0907 == null;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0904
    public final int hashCode() {
        AbstractC0904 abstractC0904 = this.f425;
        int iHashCode = (abstractC0904 != null ? abstractC0904.hashCode() : 0) * 31;
        AbstractC0904 abstractC0905 = this.f424;
        int iHashCode2 = (iHashCode + (abstractC0905 != null ? abstractC0905.hashCode() : 0)) * 31;
        AbstractC0904 abstractC0906 = this.f423;
        return iHashCode2 + (abstractC0906 != null ? abstractC0906.hashCode() : 0);
    }

    public final String toString() {
        return this.f425 + StringFog.decrypt("qWSa\n", "iVu6G/AvyqY=\n") + this.f424 + StringFog.decrypt("kDIC\n", "sAgiuFm+ebw=\n") + this.f423;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0904
    /* JADX INFO: renamed from: ﾒ */
    public final C0847 mo8347(C0704 c0704, C1013 c1013) {
        return this.f425.m8777(c0704, c1013).m8737() ? this.f424.m8777(c0704, c1013) : this.f423.m8777(c0704, c1013);
    }
}
