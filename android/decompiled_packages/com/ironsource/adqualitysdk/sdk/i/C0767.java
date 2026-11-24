package com.ironsource.adqualitysdk.sdk.i;

import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ᚁ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0767 extends AbstractC1051 {

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final AbstractC0413[] f2622;

    public C0767(ArrayList arrayList, byte b) {
        super(b);
        AbstractC0413[] abstractC0413Arr = new AbstractC0413[arrayList.size()];
        this.f2622 = abstractC0413Arr;
        arrayList.toArray(abstractC0413Arr);
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0413
    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (super.equals(obj)) {
            return Arrays.equals(this.f2622, ((C0767) obj).f2622);
        }
        return false;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0413
    public final int hashCode() {
        return Arrays.hashCode(this.f2622);
    }

    public final String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append(StringFog.decrypt("4VE=\n", "mlvg8aV8m18=\n"));
        for (AbstractC0413 abstractC0413 : this.f2622) {
            byte b = this.f3798;
            for (int i = 0; i < b; i++) {
                sb.append("  ");
            }
            sb.append(abstractC0413.toString());
            sb.append("\n");
        }
        int i2 = this.f3798 - 1;
        for (int i3 = 0; i3 < i2; i3++) {
            sb.append("  ");
        }
        sb.append(StringFog.decrypt("Hw==\n", "Ypn8tWgxoUg=\n"));
        return sb.toString();
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0413
    /* JADX INFO: renamed from: ﾒ */
    public final C0847 mo8348(C0704 c0704, C1013 c1013) {
        C0847 c0847 = new C0847(null);
        C0704 c0705 = new C0704(new HashMap(), c0704, false);
        int i = c0704.f2428;
        c0704.f2428 = 0;
        for (AbstractC0413 abstractC0413 : this.f2622) {
            c0847 = abstractC0413.m8515(c0705, c1013);
            if (c0847.f3059 || c0847.f3058 || c0847.f3057) {
                c0704.f2428 = i;
                return c0847;
            }
            c0704.f2428++;
        }
        c0704.f2428 = i;
        return c0847;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0413
    /* JADX INFO: renamed from: ﾒ */
    public final int mo8373() {
        int iMo8373 = 2;
        for (AbstractC0413 abstractC0413 : this.f2622) {
            iMo8373 += abstractC0413.mo8373();
        }
        return iMo8373;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0413
    /* JADX INFO: renamed from: ﾒ */
    public final int mo8374(C0704 c0704) {
        int iMo8373 = 1;
        for (int i = 0; i < c0704.f2428; i++) {
            iMo8373 += this.f2622[i].mo8373();
        }
        return iMo8373;
    }
}
