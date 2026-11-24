package com.ironsource.adqualitysdk.sdk.i;

import com.applovin.adview.AppLovinAdView;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ผ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0555 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0539 f1982;

    public C0555(C0539 c0539) {
        this.f1982 = c0539;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C0539 c0539 = this.f1982;
        AppLovinAdView appLovinAdView = (AppLovinAdView) arrayList.get(0);
        c0539.getClass();
        return appLovinAdView.getAdViewController();
    }
}
