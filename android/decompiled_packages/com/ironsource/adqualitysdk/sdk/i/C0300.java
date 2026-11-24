package com.ironsource.adqualitysdk.sdk.i;

import java.util.ArrayList;
import tv.superawesome.sdk.publisher.SABannerAd;
import tv.superawesome.sdk.publisher.SAInterface;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ˈ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0300 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0295 f1129;

    public C0300(C0295 c0295) {
        this.f1129 = c0295;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C0295 c0295 = this.f1129;
        SABannerAd sABannerAd = (SABannerAd) arrayList.get(0);
        SAInterface sAInterface = (SAInterface) arrayList.get(1);
        c0295.getClass();
        sABannerAd.setListener(sAInterface);
        return null;
    }
}
