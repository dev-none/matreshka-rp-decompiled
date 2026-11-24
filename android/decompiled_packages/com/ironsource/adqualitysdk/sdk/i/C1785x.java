package com.ironsource.adqualitysdk.sdk.i;

import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.Arrays;
import java.util.HashMap;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.x, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes6.dex */
public final class C1785x extends AbstractC0413 {

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final C1748e0 f569;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final C0767 f570;

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final C0767 f571;

    public C1785x(C0767 c0767, C0767 c0768, C1748e0 c1748e0) {
        this.f571 = c0767;
        this.f570 = c0768;
        this.f569 = c1748e0;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0413
    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!super.equals(obj)) {
            return false;
        }
        C1785x c1785x = (C1785x) obj;
        C0767 c0767 = this.f571;
        if (c0767 == null ? c1785x.f571 != null : !c0767.equals(c1785x.f571)) {
            return false;
        }
        C0767 c0768 = this.f570;
        if (c0768 == null ? c1785x.f570 != null : !c0768.equals(c1785x.f570)) {
            return false;
        }
        C1748e0 c1748e0 = this.f569;
        C1748e0 c1748e1 = c1785x.f569;
        if (c1748e0 != null) {
            return c1748e0.equals(c1748e1);
        }
        return c1748e1 == null;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0413
    public final int hashCode() {
        C0767 c0767 = this.f571;
        int iHashCode = (c0767 != null ? Arrays.hashCode(c0767.f2622) : 0) * 31;
        C0767 c0768 = this.f570;
        int iHashCode2 = (iHashCode + (c0768 != null ? Arrays.hashCode(c0768.f2622) : 0)) * 31;
        C1748e0 c1748e0 = this.f569;
        return iHashCode2 + (c1748e0 != null ? c1748e0.hashCode() : 0);
    }

    public final String toString() {
        return StringFog.decrypt("Ljaazw==\n", "WkTj7+64Ka8=\n") + this.f571 + StringFog.decrypt("TkxpWNRwMlQ=\n", "bi8ILLcYEnw=\n") + this.f569 + StringFog.decrypt("fyM=\n", "VgOPQs7uD9c=\n") + this.f570;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0413
    /* JADX INFO: renamed from: ﾒ */
    public final C0847 mo8348(C0704 c0704, C1013 c1013) {
        try {
            C0767 c0767 = this.f571;
            if (c0767 != null) {
                return c0767.m8515(new C0704(new HashMap(), c0704, false), c1013);
            }
        } catch (Throwable th) {
            if (this.f570 != null) {
                c0704.f2429.add(this);
                HashMap map = new HashMap();
                C1748e0 c1748e0 = this.f569;
                if (c1748e0 != null) {
                    map.put(AbstractC0289.m8467(c1748e0.f369), th);
                }
                return this.f570.m8515(new C0704(map, c0704, false), c1013);
            }
        }
        return new C0847(null);
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0413
    /* JADX INFO: renamed from: ﾒ */
    public final int mo8373() {
        return (this.f570.mo8373() + this.f571.mo8373()) - 1;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0413
    /* JADX INFO: renamed from: ﾒ */
    public final int mo8374(C0704 c0704) {
        if (c0704.f2429.contains(this)) {
            return this.f571.mo8373() - 1;
        }
        return 0;
    }
}
