package com.ironsource.adqualitysdk.sdk.i;

import com.applovin.adview.AppLovinInterstitialAdDialog;
import com.applovin.sdk.AppLovinAdClickListener;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ไ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0571 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0539 f2051;

    public C0571(C0539 c0539) {
        this.f2051 = c0539;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C0539 c0539 = this.f2051;
        AppLovinInterstitialAdDialog appLovinInterstitialAdDialog = (AppLovinInterstitialAdDialog) arrayList.get(0);
        AppLovinAdClickListener appLovinAdClickListener = (AppLovinAdClickListener) arrayList.get(1);
        c0539.getClass();
        appLovinInterstitialAdDialog.setAdClickListener(appLovinAdClickListener);
        return null;
    }
}
