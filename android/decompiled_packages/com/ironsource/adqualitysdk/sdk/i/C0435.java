package com.ironsource.adqualitysdk.sdk.i;

import io.bidmachine.banner.BannerListener;
import io.bidmachine.banner.BannerView;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ס, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0435 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0334 f1573;

    public C0435(C0334 c0334) {
        this.f1573 = c0334;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C0334 c0334 = this.f1573;
        BannerView bannerView = (BannerView) arrayList.get(0);
        BannerListener bannerListener = (BannerListener) arrayList.get(1);
        c0334.getClass();
        bannerView.setListener(bannerListener);
        return null;
    }
}
