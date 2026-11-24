package com.ironsource.adqualitysdk.sdk.i;

import com.ironsource.adqualitysdk.sdk.StringFog;
import com.yandex.mobile.ads.common.YandexAds;

/* JADX INFO: loaded from: classes6.dex */
public final class B1 extends C1 {

    /* JADX INFO: renamed from: ᖅ, reason: contains not printable characters */
    public static final String f125 = StringFog.decrypt("alO6GVQT/IZA\n", "MzLUfTFrveI=\n");

    public B1(String str) {
        super(str);
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.C1, com.ironsource.adqualitysdk.sdk.i.AbstractC0349
    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final String mo8318() {
        return YandexAds.getLibraryVersion();
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.C1, com.ironsource.adqualitysdk.sdk.i.AbstractC0349
    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final Class mo8319(String str) {
        return (str.hashCode() == 1400209119 && str.equals(f125)) ? YandexAds.class : super.mo8319(str);
    }
}
