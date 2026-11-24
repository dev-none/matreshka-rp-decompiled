package com.ironsource.adqualitysdk.sdk.i;

import io.bidmachine.rewarded.RewardedAd;
import io.bidmachine.rewarded.RewardedListener;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ף, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0437 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0334 f1575;

    public C0437(C0334 c0334) {
        this.f1575 = c0334;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C0334 c0334 = this.f1575;
        RewardedAd rewardedAd = (RewardedAd) arrayList.get(0);
        RewardedListener rewardedListener = (RewardedListener) arrayList.get(1);
        c0334.getClass();
        rewardedAd.setListener(rewardedListener);
        return null;
    }
}
