package com.ironsource.adqualitysdk.sdk.i;

import com.google.android.gms.ads.reward.RewardedVideoAd;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ᖭ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0743 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0443 f2556;

    public C0743(C0443 c0443) {
        this.f2556 = c0443;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        this.f2556.getClass();
        return ((RewardedVideoAd) AbstractC0912.m8788(arrayList, 0, RewardedVideoAd.class)).getRewardedVideoAdListener();
    }
}
