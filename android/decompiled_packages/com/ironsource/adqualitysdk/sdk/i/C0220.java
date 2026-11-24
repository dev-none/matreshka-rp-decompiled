package com.ironsource.adqualitysdk.sdk.i;

import com.ogury.ad.OguryInterstitialAd;
import com.ogury.ad.OguryInterstitialAdListener;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.Ɨ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0220 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0206 f888;

    public C0220(C0206 c0206) {
        this.f888 = c0206;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C0206 c0206 = this.f888;
        OguryInterstitialAd oguryInterstitialAd = (OguryInterstitialAd) arrayList.get(0);
        OguryInterstitialAdListener oguryInterstitialAdListener = (OguryInterstitialAdListener) arrayList.get(1);
        c0206.getClass();
        oguryInterstitialAd.setListener(oguryInterstitialAdListener);
        return null;
    }
}
