package com.ironsource.adqualitysdk.sdk.i;

import java.util.ArrayList;
import net.pubnative.lite.sdk.vpaid.VideoAd;
import net.pubnative.lite.sdk.vpaid.VideoAdListener;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.Ȉ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0232 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0824 f915;

    public C0232(C0824 c0824) {
        this.f915 = c0824;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C0824 c0824 = this.f915;
        VideoAd videoAd = (VideoAd) arrayList.get(0);
        VideoAdListener videoAdListener = (VideoAdListener) arrayList.get(1);
        c0824.getClass();
        videoAd.setAdListener(videoAdListener);
        return null;
    }
}
