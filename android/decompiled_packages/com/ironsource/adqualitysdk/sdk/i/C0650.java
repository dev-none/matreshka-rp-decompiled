package com.ironsource.adqualitysdk.sdk.i;

import com.applovin.sdk.AppLovinAd;
import com.applovin.sdk.AppLovinAdType;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ᒴ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0650 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0539 f2264;

    public C0650(C0539 c0539) {
        this.f2264 = c0539;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C0539 c0539 = this.f2264;
        boolean z = false;
        AppLovinAd appLovinAd = (AppLovinAd) arrayList.get(0);
        c0539.getClass();
        if (appLovinAd != null && appLovinAd.getType().equals(AppLovinAdType.INCENTIVIZED)) {
            z = true;
        }
        return Boolean.valueOf(z);
    }
}
