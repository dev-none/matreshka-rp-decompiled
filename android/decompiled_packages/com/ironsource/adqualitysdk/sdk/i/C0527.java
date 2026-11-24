package com.ironsource.adqualitysdk.sdk.i;

import com.ironsource.adqualitysdk.sdk.StringFog;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.দ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0527 extends AbstractC0904 {

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final AbstractC0904 f1843;

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final C1748e0 f1844;

    public C0527(C1748e0 c1748e0, AbstractC0904 abstractC0904) {
        this.f1844 = c1748e0;
        this.f1843 = abstractC0904;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0904
    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!super.equals(obj)) {
            return false;
        }
        C0527 c0527 = (C0527) obj;
        C1748e0 c1748e0 = this.f1844;
        if (c1748e0 == null ? c0527.f1844 != null : !c1748e0.equals(c0527.f1844)) {
            return false;
        }
        AbstractC0904 abstractC0904 = this.f1843;
        AbstractC0904 abstractC0905 = c0527.f1843;
        if (abstractC0904 != null) {
            return abstractC0904.equals(abstractC0905);
        }
        return abstractC0905 == null;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0904
    public final int hashCode() {
        C1748e0 c1748e0 = this.f1844;
        int iHashCode = (c1748e0 != null ? c1748e0.hashCode() : 0) * 31;
        AbstractC0904 abstractC0904 = this.f1843;
        return iHashCode + (abstractC0904 != null ? abstractC0904.hashCode() : 0);
    }

    public final String toString() {
        return this.f1844 + StringFog.decrypt("i6/p\n", "q5LJxCqjs7s=\n") + this.f1843;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0904
    /* JADX INFO: renamed from: ﾒ */
    public final C0847 mo8347(C0704 c0704, C1013 c1013) {
        C0847 c0847M8777 = this.f1843.m8777(c0704, c1013);
        c0704.m8628(this.f1844.f369, c0847M8777.f3060);
        return c0847M8777;
    }
}
