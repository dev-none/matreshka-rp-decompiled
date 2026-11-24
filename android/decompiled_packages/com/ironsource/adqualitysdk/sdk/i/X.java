package com.ironsource.adqualitysdk.sdk.i;

import com.ironsource.adqualitysdk.sdk.StringFog;
import com.unity3d.ads.UnityAds;
import com.unity3d.services.ads.adunit.AdUnitActivity;
import com.unity3d.services.banners.BannerView;
import java.util.HashMap;

/* JADX INFO: loaded from: classes6.dex */
public final class X extends AbstractC0349 {

    /* JADX INFO: renamed from: סּ, reason: contains not printable characters */
    public static final String f277 = StringFog.decrypt("kWJti/iGTwOkb06M5Ys=\n", "0AY45ZHyDmA=\n");

    /* JADX INFO: renamed from: טּ, reason: contains not printable characters */
    public static final String f276 = StringFog.decrypt("ETNnhD93J04Lb26EOXw8TBs/b9lkeCpJXD1u3yRwOhQzOF/EI20PWQY1fMM+YA==\n", "clwKqkoZTjo=\n");

    /* JADX INFO: renamed from: ﬤ, reason: contains not printable characters */
    public static final String f275 = StringFog.decrypt("rF5U8AV3N/+LSA==\n", "7j86nmAFYZY=\n");

    /* JADX INFO: renamed from: 爫, reason: contains not printable characters */
    public static final String f274 = StringFog.decrypt("EmjDVCAx0PUINMpUJjrL9xhkywl7PdjvH2LcCXsd2O8fYtwsPDrO\n", "cQeuelVfuYE=\n");

    public X(String str) {
        super(str);
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0349
    /* JADX INFO: renamed from: ﻛ */
    public final String mo8318() {
        String version = UnityAds.getVersion();
        if (version != null) {
            return version.split(StringFog.decrypt("JA==\n", "CerrnJIddFI=\n"))[0];
        }
        return null;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0349
    /* JADX INFO: renamed from: ﾇ */
    public final HashMap mo8320() {
        return new HashMap();
    }

    /* JADX WARN: Code duplicated, block: B:23:0x0044  */
    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0349
    /* JADX INFO: renamed from: ﾒ */
    public final Class mo8319(String str) {
        byte b;
        int iHashCode = str.hashCode();
        if (iHashCode != 252148886) {
            if (iHashCode != 961844241) {
                if (iHashCode != 1067215379) {
                    if (iHashCode == 1531208100 && str.equals(f276)) {
                        b = 1;
                    } else {
                        b = -1;
                    }
                } else if (str.equals(f274)) {
                    b = 3;
                } else {
                    b = -1;
                }
            } else if (str.equals(f275)) {
                b = 2;
            } else {
                b = -1;
            }
        } else if (str.equals(f277)) {
            b = 0;
        } else {
            b = -1;
        }
        if (b == 0 || b == 1) {
            return AdUnitActivity.class;
        }
        if (b == 2 || b == 3) {
            return BannerView.class;
        }
        return null;
    }
}
