package com.ironsource.adqualitysdk.sdk.i;

import com.smaato.sdk.banner.widget.BannerView;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ᵗ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0832 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0798 f3039;

    public C0832(C0798 c0798) {
        this.f3039 = c0798;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C0798 c0798 = this.f3039;
        BannerView bannerView = (BannerView) arrayList.get(0);
        c0798.getClass();
        return bannerView.getCreativeId();
    }
}
