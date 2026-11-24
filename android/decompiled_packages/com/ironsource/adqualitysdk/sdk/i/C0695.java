package com.ironsource.adqualitysdk.sdk.i;

import com.fyber.fairbid.ads.Interstitial;
import com.fyber.fairbid.ads.interstitial.InterstitialListener;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ᔂ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0695 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0624 f2414;

    public C0695(C0624 c0624) {
        this.f2414 = c0624;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C0624 c0624 = this.f2414;
        InterstitialListener interstitialListener = (InterstitialListener) arrayList.get(0);
        c0624.getClass();
        Interstitial.setInterstitialListener(interstitialListener);
        return null;
    }
}
