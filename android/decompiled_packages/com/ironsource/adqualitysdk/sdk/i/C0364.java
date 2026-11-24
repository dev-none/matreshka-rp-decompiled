package com.ironsource.adqualitysdk.sdk.i;

import java.util.ArrayList;
import net.pubnative.lite.sdk.vpaid.VideoAd;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.г, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0364 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0824 f1363;

    public C0364(C0824 c0824) {
        this.f1363 = c0824;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C0824 c0824 = this.f1363;
        VideoAd videoAd = (VideoAd) arrayList.get(0);
        c0824.getClass();
        return Boolean.valueOf(videoAd.isRewarded());
    }
}
