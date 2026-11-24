package com.ironsource.adqualitysdk.sdk.i;

import com.mintegral.msdk.reward.player.MTGRewardVideoActivity;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ᵑ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0826 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0682 f3031;

    public C0826(C0682 c0682) {
        this.f3031 = c0682;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C0682 c0682 = this.f3031;
        MTGRewardVideoActivity mTGRewardVideoActivity = (MTGRewardVideoActivity) arrayList.get(0);
        c0682.getClass();
        return mTGRewardVideoActivity.getCampaignEx();
    }
}
