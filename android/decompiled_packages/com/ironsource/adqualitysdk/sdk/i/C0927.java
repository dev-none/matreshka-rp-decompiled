package com.ironsource.adqualitysdk.sdk.i;

import com.my.target.ads.Reward;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.⁔, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0927 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0926 f3276;

    public C0927(C0926 c0926) {
        this.f3276 = c0926;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C0926 c0926 = this.f3276;
        Reward reward = (Reward) arrayList.get(0);
        c0926.getClass();
        return reward.type;
    }
}
