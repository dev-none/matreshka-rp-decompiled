package com.ironsource.adqualitysdk.sdk.i;

import com.ogury.ad.OguryRewardedAd;
import com.ogury.ad.OguryRewardedAdListener;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ſ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0215 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0206 f883;

    public C0215(C0206 c0206) {
        this.f883 = c0206;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C0206 c0206 = this.f883;
        OguryRewardedAd oguryRewardedAd = (OguryRewardedAd) arrayList.get(0);
        OguryRewardedAdListener oguryRewardedAdListener = (OguryRewardedAdListener) arrayList.get(1);
        c0206.getClass();
        oguryRewardedAd.setListener(oguryRewardedAdListener);
        return null;
    }
}
