package com.ironsource.adqualitysdk.sdk.i;

import io.presage.interstitial.PresageInterstitial;
import io.presage.interstitial.PresageInterstitialCallback;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ʅ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0264 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0230 f954;

    public C0264(C0230 c0230) {
        this.f954 = c0230;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C0230 c0230 = this.f954;
        PresageInterstitial presageInterstitial = (PresageInterstitial) arrayList.get(0);
        PresageInterstitialCallback presageInterstitialCallback = (PresageInterstitialCallback) arrayList.get(1);
        c0230.getClass();
        presageInterstitial.setInterstitialCallback(presageInterstitialCallback);
        return null;
    }
}
