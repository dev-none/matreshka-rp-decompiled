package com.ironsource.adqualitysdk.sdk.i;

import com.ironsource.adqualitysdk.sdk.StringFog;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.у, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0373 extends AbstractC0413 {

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final AbstractC0413 f1407;

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final AbstractC0904 f1408;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final AbstractC0904 f1409;

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final AbstractC0904 f1410;

    public C0373(AbstractC0904 abstractC0904, AbstractC0904 abstractC0905, AbstractC0904 abstractC0906, AbstractC0413 abstractC0413) {
        this.f1410 = abstractC0904;
        this.f1409 = abstractC0905;
        this.f1408 = abstractC0906;
        this.f1407 = abstractC0413;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0413
    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!super.equals(obj)) {
            return false;
        }
        C0373 c0373 = (C0373) obj;
        AbstractC0904 abstractC0904 = this.f1410;
        if (abstractC0904 == null ? c0373.f1410 != null : !abstractC0904.equals(c0373.f1410)) {
            return false;
        }
        AbstractC0904 abstractC0905 = this.f1409;
        if (abstractC0905 == null ? c0373.f1409 != null : !abstractC0905.equals(c0373.f1409)) {
            return false;
        }
        AbstractC0904 abstractC0906 = this.f1408;
        if (abstractC0906 == null ? c0373.f1408 != null : !abstractC0906.equals(c0373.f1408)) {
            return false;
        }
        AbstractC0413 abstractC0413 = this.f1407;
        AbstractC0413 abstractC0414 = c0373.f1407;
        if (abstractC0413 != null) {
            return abstractC0413.equals(abstractC0414);
        }
        return abstractC0414 == null;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0413
    public final int hashCode() {
        AbstractC0904 abstractC0904 = this.f1410;
        int iHashCode = (abstractC0904 != null ? abstractC0904.hashCode() : 0) * 31;
        AbstractC0904 abstractC0905 = this.f1409;
        int iHashCode2 = (iHashCode + (abstractC0905 != null ? abstractC0905.hashCode() : 0)) * 31;
        AbstractC0904 abstractC0906 = this.f1408;
        int iHashCode3 = (iHashCode2 + (abstractC0906 != null ? abstractC0906.hashCode() : 0)) * 31;
        AbstractC0413 abstractC0413 = this.f1407;
        return iHashCode3 + (abstractC0413 != null ? abstractC0413.hashCode() : 0);
    }

    public final String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append(StringFog.decrypt("OhTi7RE=\n", "XHuQzTmqqkk=\n"));
        AbstractC0904 abstractC0904 = this.f1410;
        if (abstractC0904 != null) {
            sb.append(abstractC0904);
        }
        sb.append(StringFog.decrypt("B/Y=\n", "PNYB+L3OmfA=\n"));
        sb.append(this.f1409);
        sb.append(StringFog.decrypt("gYE=\n", "uqEaEE72UsI=\n"));
        AbstractC0904 abstractC0905 = this.f1408;
        if (abstractC0905 != null) {
            sb.append(abstractC0905);
        }
        sb.append(StringFog.decrypt("oy8=\n", "ig+Q2MI/gjY=\n"));
        sb.append(this.f1407);
        return sb.toString();
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0413
    /* JADX INFO: renamed from: ﾒ */
    public final int mo8374(C0704 c0704) {
        return 0;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0413
    /* JADX INFO: renamed from: ﾒ */
    public final C0847 mo8348(C0704 c0704, C1013 c1013) {
        AbstractC0904 abstractC0904 = this.f1410;
        if (abstractC0904 != null) {
            abstractC0904.m8777(c0704, c1013);
        }
        while (this.f1409.m8777(c0704, c1013).m8737()) {
            C0847 c0847M8515 = this.f1407.m8515(c0704, c1013);
            if (c0847M8515.f3058) {
                break;
            }
            if (c0847M8515.f3059) {
                return c0847M8515;
            }
            AbstractC0904 abstractC0905 = this.f1408;
            if (abstractC0905 != null) {
                abstractC0905.m8777(c0704, c1013);
            }
        }
        return new C0847(null);
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0413
    /* JADX INFO: renamed from: ﾒ */
    public final int mo8373() {
        return this.f1407.mo8373();
    }
}
