package com.ironsource.adqualitysdk.sdk.i;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ﾘ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C1169 extends AbstractC0904 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final C1748e0 f4099;

    public C1169(C1748e0 c1748e0) {
        this.f4099 = c1748e0;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0904
    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!super.equals(obj)) {
            return false;
        }
        C1748e0 c1748e0 = this.f4099;
        C1748e0 c1748e1 = ((C1169) obj).f4099;
        if (c1748e0 != null) {
            return c1748e0.equals(c1748e1);
        }
        return c1748e1 == null;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0904
    public final int hashCode() {
        int iHashCode = C1169.class.hashCode() * 31;
        C1748e0 c1748e0 = this.f4099;
        return iHashCode + (c1748e0 != null ? c1748e0.hashCode() : 0);
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0904
    /* JADX INFO: renamed from: ﾒ */
    public final C0847 mo8347(C0704 c0704, C1013 c1013) {
        C0847 c0847M8777 = this.f4099.m8777(c0704, c1013);
        c0704.m8628(this.f4099.f369, Integer.valueOf(c0847M8777.m8736().intValue() - 1));
        return c0847M8777;
    }
}
