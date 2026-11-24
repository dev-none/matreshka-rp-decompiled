package com.ironsource.adqualitysdk.sdk.i;

import com.google.android.libraries.ads.mobile.sdk.rewardedinterstitial.RewardedInterstitialAd;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ӟ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0399 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0370 f1494;

    public C0399(C0370 c0370) {
        this.f1494 = c0370;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        this.f1494.getClass();
        return ((RewardedInterstitialAd) AbstractC0912.m8788(arrayList, 0, RewardedInterstitialAd.class)).getRewardItem();
    }
}
