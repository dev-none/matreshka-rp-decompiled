package com.ironsource.adqualitysdk.sdk.i;

import com.inmobi.ads.AdUnit;
import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ﾅ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C1155 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C1100 f4056;

    public C1155(C1100 c1100) {
        this.f4056 = c1100;
    }

    /* JADX WARN: Code duplicated, block: B:18:0x0054  */
    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C1100 c1100 = this.f4056;
        byte b = 0;
        String str = (String) arrayList.get(0);
        c1100.getClass();
        int iHashCode = str.hashCode();
        if (iHashCode != -2102692847) {
            if (iHashCode != -1357644918) {
                if (iHashCode != 235669401 || !str.equals(StringFog.decrypt("+Wy0uwREtszxfq6nAlin3ed9pbMYTqDW\n", "uCjr+FYB95g=\n"))) {
                    b = -1;
                }
            } else if (str.equals(StringFog.decrypt("5x94N+4pSdLvDWIr6DVYw/kNbjD5Iw==\n", "plsndLxsCIY=\n"))) {
                b = 1;
            } else {
                b = -1;
            }
        } else if (str.equals(StringFog.decrypt("9x8ic3/Bhqv/DThved2XuukfNGN9yIam\n", "tlt9MC2Ex/8=\n"))) {
            b = 2;
        } else {
            b = -1;
        }
        if (b == 0) {
            return AdUnit.AdCreativeType.AD_CREATIVE_TYPE_UNSUPPORTED_OR_UNKNOWN;
        }
        if (b == 1) {
            return AdUnit.AdCreativeType.AD_CREATIVE_TYPE_VIDEO;
        }
        if (b != 2) {
            return null;
        }
        return AdUnit.AdCreativeType.AD_CREATIVE_TYPE_DISPLAY;
    }
}
