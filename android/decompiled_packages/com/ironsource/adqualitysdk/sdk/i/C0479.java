package com.ironsource.adqualitysdk.sdk.i;

import com.google.android.gms.ads.MobileAds;
import com.google.android.gms.ads.VersionInfo;
import com.ironsource.adqualitysdk.sdk.StringFog;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ڑ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0479 extends C0443 {

    /* JADX INFO: renamed from: ﺟ, reason: contains not printable characters */
    public static final String f1761 = StringFog.decrypt("uA7L4CHT5NiADdY=\n", "7mu5k0i8ipE=\n");

    public C0479(String str) {
        super(str);
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.C0443, com.ironsource.adqualitysdk.sdk.i.AbstractC0349
    /* JADX INFO: renamed from: ﻛ */
    public final String mo8318() {
        return MobileAds.getVersion().toString();
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.C0443, com.ironsource.adqualitysdk.sdk.i.AbstractC0349
    /* JADX INFO: renamed from: ﾒ */
    public final Class mo8319(String str) {
        return (str.hashCode() == -1938329210 && str.equals(f1761)) ? VersionInfo.class : super.mo8319(str);
    }
}
