package com.ironsource.adqualitysdk.sdk.i;

import com.applovin.sdk.AppLovinAd;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ถ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0550 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0539 f1976;

    public C0550(C0539 c0539) {
        this.f1976 = c0539;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C0539 c0539 = this.f1976;
        AppLovinAd appLovinAd = (AppLovinAd) arrayList.get(0);
        c0539.getClass();
        return appLovinAd.getType();
    }
}
