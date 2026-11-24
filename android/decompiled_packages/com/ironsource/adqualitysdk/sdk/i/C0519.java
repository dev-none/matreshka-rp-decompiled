package com.ironsource.adqualitysdk.sdk.i;

import com.google.android.gms.ads.nativead.NativeAdView;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.এ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0519 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0443 f1830;

    public C0519(C0443 c0443) {
        this.f1830 = c0443;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        this.f1830.getClass();
        return ((NativeAdView) AbstractC0912.m8788(arrayList, 0, NativeAdView.class)).getStoreView();
    }
}
