package com.ironsource.adqualitysdk.sdk.i;

import com.google.android.libraries.ads.mobile.sdk.banner.AdView;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ո, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0415 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0370 f1517;

    public C0415(C0370 c0370) {
        this.f1517 = c0370;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        this.f1517.getClass();
        return ((AdView) AbstractC0912.m8788(arrayList, 0, AdView.class)).getBannerAd();
    }
}
