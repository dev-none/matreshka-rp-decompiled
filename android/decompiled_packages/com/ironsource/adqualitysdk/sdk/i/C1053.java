package com.ironsource.adqualitysdk.sdk.i;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ﱢ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C1053 extends AbstractC0904 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final C1748e0 f3801;

    public C1053(C1748e0 c1748e0) {
        this.f3801 = c1748e0;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0904
    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!super.equals(obj)) {
            return false;
        }
        C1748e0 c1748e0 = this.f3801;
        C1748e0 c1748e1 = ((C1053) obj).f3801;
        if (c1748e0 != null) {
            return c1748e0.equals(c1748e1);
        }
        return c1748e1 == null;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0904
    public final int hashCode() {
        int iHashCode = C1053.class.hashCode() * 31;
        C1748e0 c1748e0 = this.f3801;
        return iHashCode + (c1748e0 != null ? c1748e0.hashCode() : 0);
    }

    public final String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append(this.f3801.f369);
        return AbstractC0970.m8850("9+4=\n", "3MW0O1Olm/k=\n", sb);
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0904
    /* JADX INFO: renamed from: ﾒ */
    public final C0847 mo8347(C0704 c0704, C1013 c1013) {
        C0847 c0847M8777 = this.f3801.m8777(c0704, c1013);
        c0704.m8628(this.f3801.f369, Integer.valueOf(c0847M8777.m8736().intValue() + 1));
        return c0847M8777;
    }
}
