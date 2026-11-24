package com.ironsource.adqualitysdk.sdk.i;

import com.yandex.mobile.ads.rewarded.Reward;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes6.dex */
public final class x1 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C1 f572;

    public x1(C1 c1) {
        this.f572 = c1;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C1 c1 = this.f572;
        Reward reward = (Reward) arrayList.get(0);
        c1.getClass();
        return reward.getType();
    }
}
