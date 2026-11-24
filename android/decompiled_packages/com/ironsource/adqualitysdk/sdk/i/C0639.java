package com.ironsource.adqualitysdk.sdk.i;

import com.hyprmx.android.sdk.placement.PlacementType;
import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ᒩ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0639 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0559 f2243;

    public C0639(C0559 c0559) {
        this.f2243 = c0559;
    }

    /* JADX WARN: Code duplicated, block: B:23:0x0067  */
    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C0559 c0559 = this.f2243;
        byte b = 0;
        String str = (String) arrayList.get(0);
        c0559.getClass();
        int iHashCode = str.hashCode();
        if (iHashCode != -1617199657) {
            if (iHashCode != -1372958932) {
                if (iHashCode != -65580248) {
                    if (iHashCode != 543046670 || !str.equals(StringFog.decrypt("o/pP4vlY/qQ=\n", "8b8Yo6scu+A=\n"))) {
                        b = -1;
                    }
                } else if (str.equals(StringFog.decrypt("JxW73r6J/zQgG6PIrYLy\n", "aVrvgffHtmA=\n"))) {
                    b = 3;
                } else {
                    b = -1;
                }
            } else if (str.equals(StringFog.decrypt("SZ1t5WtBNYJUmnjs\n", "ANM5oDkSYcs=\n"))) {
                b = 1;
            } else {
                b = -1;
            }
        } else if (str.equals(StringFog.decrypt("37J7MwESLw==\n", "lvwtck1ba20=\n"))) {
            b = 2;
        } else {
            b = -1;
        }
        if (b == 0) {
            return PlacementType.REWARDED;
        }
        if (b == 1) {
            return PlacementType.INTERSTITIAL;
        }
        if (b == 2) {
            return PlacementType.INVALID;
        }
        if (b != 3) {
            return null;
        }
        return PlacementType.NOT_INITIALIZED;
    }
}
