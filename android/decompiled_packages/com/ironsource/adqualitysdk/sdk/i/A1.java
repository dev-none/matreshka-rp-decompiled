package com.ironsource.adqualitysdk.sdk.i;

import com.yandex.mobile.ads.interstitial.InterstitialAd;
import com.yandex.mobile.ads.interstitial.InterstitialAdEventListener;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes6.dex */
public final class A1 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C1 f122;

    public A1(C1 c1) {
        this.f122 = c1;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C1 c1 = this.f122;
        InterstitialAd interstitialAd = (InterstitialAd) arrayList.get(0);
        InterstitialAdEventListener interstitialAdEventListener = (InterstitialAdEventListener) arrayList.get(1);
        c1.getClass();
        interstitialAd.setAdEventListener(interstitialAdEventListener);
        return null;
    }
}
