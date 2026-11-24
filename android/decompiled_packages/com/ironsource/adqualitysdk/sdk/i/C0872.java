package com.ironsource.adqualitysdk.sdk.i;

import com.facebook.ads.InterstitialAd;
import com.facebook.ads.InterstitialAdListener;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ṭ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0872 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0785 f3126;

    public C0872(C0785 c0785) {
        this.f3126 = c0785;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C0785 c0785 = this.f3126;
        InterstitialAd interstitialAd = (InterstitialAd) arrayList.get(0);
        InterstitialAdListener interstitialAdListener = (InterstitialAdListener) arrayList.get(1);
        c0785.getClass();
        interstitialAd.setAdListener(interstitialAdListener);
        return null;
    }
}
