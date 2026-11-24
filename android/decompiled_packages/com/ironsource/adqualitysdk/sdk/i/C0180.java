package com.ironsource.adqualitysdk.sdk.i;

import com.bytedance.sdk.openadsdk.api.banner.PAGBannerAd;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.č, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0180 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0178 f754;

    public C0180(C0178 c0178) {
        this.f754 = c0178;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C0178 c0178 = this.f754;
        PAGBannerAd pAGBannerAd = (PAGBannerAd) arrayList.get(0);
        c0178.getClass();
        return pAGBannerAd.getBannerView();
    }
}
