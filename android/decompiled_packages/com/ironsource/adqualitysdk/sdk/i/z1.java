package com.ironsource.adqualitysdk.sdk.i;

import com.yandex.mobile.ads.rewarded.RewardedAd;
import com.yandex.mobile.ads.rewarded.RewardedAdEventListener;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes6.dex */
public final class z1 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C1 f583;

    public z1(C1 c1) {
        this.f583 = c1;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C1 c1 = this.f583;
        RewardedAd rewardedAd = (RewardedAd) arrayList.get(0);
        RewardedAdEventListener rewardedAdEventListener = (RewardedAdEventListener) arrayList.get(1);
        c1.getClass();
        rewardedAd.setAdEventListener(rewardedAdEventListener);
        return null;
    }
}
