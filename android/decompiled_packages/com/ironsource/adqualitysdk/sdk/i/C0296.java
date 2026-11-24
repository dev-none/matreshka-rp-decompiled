package com.ironsource.adqualitysdk.sdk.i;

import com.smaato.sdk.banner.widget.BannerView;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ˀ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0296 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0798 f1125;

    public C0296(C0798 c0798) {
        this.f1125 = c0798;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C0798 c0798 = this.f1125;
        BannerView bannerView = (BannerView) arrayList.get(0);
        BannerView.EventListener eventListener = (BannerView.EventListener) arrayList.get(1);
        c0798.getClass();
        bannerView.setEventListener(eventListener);
        return null;
    }
}
