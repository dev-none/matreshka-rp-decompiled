package com.ironsource.adqualitysdk.sdk.i;

import com.google.android.libraries.ads.mobile.sdk.interstitial.InterstitialAd;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.Ҭ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0391 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0370 f1459;

    public C0391(C0370 c0370) {
        this.f1459 = c0370;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        this.f1459.getClass();
        return ((InterstitialAd) AbstractC0912.m8788(arrayList, 0, InterstitialAd.class)).getResponseInfo();
    }
}
