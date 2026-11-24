package com.ironsource.adqualitysdk.sdk.i;

import com.fyber.fairbid.internal.Constants;
import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ᔃ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0696 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0624 f2415;

    public C0696(C0624 c0624) {
        this.f2415 = c0624;
    }

    /* JADX WARN: Code duplicated, block: B:23:0x0067  */
    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C0624 c0624 = this.f2415;
        byte b = 0;
        String str = (String) arrayList.get(0);
        c0624.getClass();
        int iHashCode = str.hashCode();
        if (iHashCode != -1372958932) {
            if (iHashCode != 433141802) {
                if (iHashCode != 543046670) {
                    if (iHashCode == 1951953708 && str.equals(StringFog.decrypt("aK4MmKyP\n", "Ku9C1undqIQ=\n"))) {
                        b = 1;
                    } else {
                        b = -1;
                    }
                } else if (str.equals(StringFog.decrypt("J3+XGfDAKqM=\n", "dTrAWKKEb+c=\n"))) {
                    b = 3;
                } else {
                    b = -1;
                }
            } else if (!str.equals(StringFog.decrypt("Vm12vw0cYw==\n", "AyM98UJLLbA=\n"))) {
                b = -1;
            }
        } else if (str.equals(StringFog.decrypt("3ywDvM1RgbvCKxa1\n", "lmJX+Z8C1fI=\n"))) {
            b = 2;
        } else {
            b = -1;
        }
        if (b == 0) {
            return Constants.AdType.UNKNOWN;
        }
        if (b == 1) {
            return Constants.AdType.BANNER;
        }
        if (b == 2) {
            return Constants.AdType.INTERSTITIAL;
        }
        if (b != 3) {
            return null;
        }
        return Constants.AdType.REWARDED;
    }
}
