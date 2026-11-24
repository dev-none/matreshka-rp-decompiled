package com.ironsource.adqualitysdk.sdk.i;

import com.mbridge.msdk.out.BannerAdListener;
import com.mbridge.msdk.out.MBBannerView;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ɔ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0243 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0199 f931;

    public C0243(C0199 c0199) {
        this.f931 = c0199;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C0199 c0199 = this.f931;
        MBBannerView mBBannerView = (MBBannerView) arrayList.get(0);
        BannerAdListener bannerAdListener = (BannerAdListener) arrayList.get(1);
        c0199.getClass();
        mBBannerView.setBannerAdListener(bannerAdListener);
        return null;
    }
}
