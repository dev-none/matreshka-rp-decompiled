package com.ironsource.adqualitysdk.sdk.i;

import com.mintegral.msdk.out.BannerAdListener;
import com.mintegral.msdk.out.MTGBannerView;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.Ἰ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0899 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0682 f3210;

    public C0899(C0682 c0682) {
        this.f3210 = c0682;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C0682 c0682 = this.f3210;
        MTGBannerView mTGBannerView = (MTGBannerView) arrayList.get(0);
        BannerAdListener bannerAdListener = (BannerAdListener) arrayList.get(1);
        c0682.getClass();
        mTGBannerView.setBannerAdListener(bannerAdListener);
        return null;
    }
}
