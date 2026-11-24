package com.ironsource.adqualitysdk.sdk.i;

import com.yandex.mobile.ads.video.playback.model.VideoAd;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes6.dex */
public final class p1 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C1 f479;

    public p1(C1 c1) {
        this.f479 = c1;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C1 c1 = this.f479;
        VideoAd videoAd = (VideoAd) arrayList.get(0);
        c1.getClass();
        return videoAd.getMediaFile();
    }
}
