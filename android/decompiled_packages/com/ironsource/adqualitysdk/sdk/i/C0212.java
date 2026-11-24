package com.ironsource.adqualitysdk.sdk.i;

import com.bytedance.sdk.openadsdk.api.banner.PAGBannerAdWrapperListener;
import com.bytedance.sdk.openadsdk.core.bannerexpress.BannerExpressView;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.Ŷ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0212 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0178 f879;

    public C0212(C0178 c0178) {
        this.f879 = c0178;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C0178 c0178 = this.f879;
        BannerExpressView bannerExpressView = (BannerExpressView) arrayList.get(0);
        PAGBannerAdWrapperListener pAGBannerAdWrapperListener = (PAGBannerAdWrapperListener) arrayList.get(1);
        c0178.getClass();
        bannerExpressView.setExpressInteractionListener(pAGBannerAdWrapperListener);
        return null;
    }
}
