package com.ironsource.adqualitysdk.sdk.i;

import com.ironsource.adqualitysdk.sdk.StringFog;

/* JADX INFO: loaded from: classes6.dex */
public final class j1 extends AbstractC0413 {

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final AbstractC0413 f421;

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final AbstractC0904 f422;

    public j1(AbstractC0904 abstractC0904, AbstractC0413 abstractC0413) {
        this.f422 = abstractC0904;
        this.f421 = abstractC0413;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0413
    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!super.equals(obj)) {
            return false;
        }
        j1 j1Var = (j1) obj;
        AbstractC0904 abstractC0904 = this.f422;
        if (abstractC0904 == null ? j1Var.f422 != null : !abstractC0904.equals(j1Var.f422)) {
            return false;
        }
        AbstractC0413 abstractC0413 = this.f421;
        AbstractC0413 abstractC0414 = j1Var.f421;
        if (abstractC0413 != null) {
            return abstractC0413.equals(abstractC0414);
        }
        return abstractC0414 == null;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0413
    public final int hashCode() {
        AbstractC0904 abstractC0904 = this.f422;
        int iHashCode = (abstractC0904 != null ? abstractC0904.hashCode() : 0) * 31;
        AbstractC0413 abstractC0413 = this.f421;
        return iHashCode + (abstractC0413 != null ? abstractC0413.hashCode() : 0);
    }

    public final String toString() {
        return StringFog.decrypt("cXt4DWKZ4Q==\n", "BhMRYQe5ySQ=\n") + this.f422 + StringFog.decrypt("zr4=\n", "554ZHoDqS04=\n") + this.f421;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0413
    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final int mo8374(C0704 c0704) {
        return 0;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0413
    /* JADX INFO: renamed from: ﾒ */
    public final C0847 mo8348(C0704 c0704, C1013 c1013) {
        while (this.f422.m8777(c0704, c1013).m8737()) {
            C0847 c0847M8515 = this.f421.m8515(c0704, c1013);
            if (c0847M8515.f3058) {
                break;
            }
            if (c0847M8515.f3059) {
                return c0847M8515;
            }
        }
        return new C0847(null);
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0413
    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final int mo8373() {
        return this.f421.mo8373();
    }
}
