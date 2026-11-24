package com.ironsource.adqualitysdk.sdk.i;

import com.fyber.fairbid.ads.Rewarded;
import com.fyber.fairbid.ads.rewarded.RewardedListener;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ᓾ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0691 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0624 f2412;

    public C0691(C0624 c0624) {
        this.f2412 = c0624;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C0624 c0624 = this.f2412;
        RewardedListener rewardedListener = (RewardedListener) arrayList.get(0);
        c0624.getClass();
        Rewarded.setRewardedListener(rewardedListener);
        return null;
    }
}
