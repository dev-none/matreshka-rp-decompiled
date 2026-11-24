package com.ironsource.adqualitysdk.sdk.i;

import com.google.android.gms.ads.MobileAds;
import com.ironsource.adqualitysdk.sdk.StringFog;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.У, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0362 extends AbstractC0265 {
    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0265
    /* JADX INFO: renamed from: ﻐ */
    public final String mo8321() {
        if (AbstractC0702.m8622(new C0368())) {
            return null;
        }
        return StringFog.decrypt("LGBEonnMSvMjagftcMdX+yZrB+tz0Av1K3wHwXHBTPgqTk3/\n", "Tw8pjB6jJZQ=\n");
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0265
    /* JADX INFO: renamed from: ﻛ */
    public final Class mo8322() throws ClassNotFoundException {
        if (AbstractC0702.m8622(new C0368())) {
            throw new ClassNotFoundException();
        }
        return MobileAds.class;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0265
    /* JADX INFO: renamed from: ｋ */
    public final String mo8324() {
        return StringFog.decrypt("w2OKCOE=\n", "ogfnZ4Pohrg=\n");
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0265
    /* JADX INFO: renamed from: ﾒ */
    public final AbstractC0349 mo8323() {
        try {
            if (Prode.class.getName().equals("com.ironsource.adqualitysdk.sdk.i.Prode")) {
                Class.forName(StringFog.decrypt("8eBwlW738bL+6jPaZ/zsuvvrM9xk67C09vwz7Wzq7bz94VTVb/c=\n", "ko8duwmYntU=\n"));
            }
            return new C0479(StringFog.decrypt("w2OKCOE=\n", "ogfnZ4Pohrg=\n"));
        } catch (Throwable unused) {
            return new C0443(StringFog.decrypt("w2OKCOE=\n", "ogfnZ4Pohrg=\n"));
        }
    }
}
