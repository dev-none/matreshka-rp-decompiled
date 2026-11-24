package com.ironsource.adqualitysdk.sdk.i;

import com.unity3d.services.banners.BannerView;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes6.dex */
public final class C implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ Y f126;

    public C(Y y) {
        this.f126 = y;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        Y y = this.f126;
        BannerView bannerView = (BannerView) arrayList.get(0);
        y.getClass();
        return bannerView.getListener();
    }
}
