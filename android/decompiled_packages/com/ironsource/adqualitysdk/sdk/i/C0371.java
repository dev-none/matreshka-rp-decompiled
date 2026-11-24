package com.ironsource.adqualitysdk.sdk.i;

import com.mbridge.msdk.out.RewardInfo;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.с, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0371 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0199 f1405;

    public C0371(C0199 c0199) {
        this.f1405 = c0199;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C0199 c0199 = this.f1405;
        RewardInfo rewardInfo = (RewardInfo) arrayList.get(0);
        c0199.getClass();
        return Boolean.valueOf(rewardInfo.isCompleteView());
    }
}
