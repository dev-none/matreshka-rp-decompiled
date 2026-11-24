package com.ironsource.adqualitysdk.sdk.i;

import io.bidmachine.interstitial.InterstitialAd;
import io.bidmachine.interstitial.InterstitialListener;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ت, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0450 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0334 f1713;

    public C0450(C0334 c0334) {
        this.f1713 = c0334;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C0334 c0334 = this.f1713;
        InterstitialAd interstitialAd = (InterstitialAd) arrayList.get(0);
        InterstitialListener interstitialListener = (InterstitialListener) arrayList.get(1);
        c0334.getClass();
        interstitialAd.setListener(interstitialListener);
        return null;
    }
}
