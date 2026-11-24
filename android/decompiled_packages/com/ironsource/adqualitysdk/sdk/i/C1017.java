package com.ironsource.adqualitysdk.sdk.i;

import com.moloco.sdk.publisher.Banner;
import com.moloco.sdk.publisher.BannerAdShowListener;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ﭙ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C1017 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0985 f3685;

    public C1017(C0985 c0985) {
        this.f3685 = c0985;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C0985 c0985 = this.f3685;
        Banner banner = (Banner) arrayList.get(0);
        BannerAdShowListener bannerAdShowListener = (BannerAdShowListener) arrayList.get(1);
        c0985.getClass();
        banner.setAdShowListener(bannerAdShowListener);
        return null;
    }
}
