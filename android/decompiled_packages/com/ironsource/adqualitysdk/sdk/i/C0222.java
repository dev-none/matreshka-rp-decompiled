package com.ironsource.adqualitysdk.sdk.i;

import com.bytedance.sdk.openadsdk.api.reward.PAGRewardItem;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ƨ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0222 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0178 f889;

    public C0222(C0178 c0178) {
        this.f889 = c0178;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C0178 c0178 = this.f889;
        PAGRewardItem pAGRewardItem = (PAGRewardItem) arrayList.get(0);
        c0178.getClass();
        return pAGRewardItem.getRewardName();
    }
}
