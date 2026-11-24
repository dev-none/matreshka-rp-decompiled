package com.ironsource.adqualitysdk.sdk.i;

import com.applovin.adview.AdViewController;
import com.applovin.sdk.AppLovinAdDisplayListener;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ภ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0556 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0539 f1983;

    public C0556(C0539 c0539) {
        this.f1983 = c0539;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C0539 c0539 = this.f1983;
        AdViewController adViewController = (AdViewController) arrayList.get(0);
        AppLovinAdDisplayListener appLovinAdDisplayListener = (AppLovinAdDisplayListener) arrayList.get(1);
        c0539.getClass();
        adViewController.setAdDisplayListener(appLovinAdDisplayListener);
        return null;
    }
}
