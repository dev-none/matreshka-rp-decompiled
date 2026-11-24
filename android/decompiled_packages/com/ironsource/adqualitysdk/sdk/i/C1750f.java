package com.ironsource.adqualitysdk.sdk.i;

import com.qq.e.ads.rewardvideo.RewardVideoAD;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.f, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes6.dex */
public final class C1750f implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C1756i f371;

    public C1750f(C1756i c1756i) {
        this.f371 = c1756i;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C1756i c1756i = this.f371;
        RewardVideoAD rewardVideoAD = (RewardVideoAD) arrayList.get(0);
        c1756i.getClass();
        return Integer.valueOf(rewardVideoAD.getRewardAdType());
    }
}
