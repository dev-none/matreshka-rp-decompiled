package com.ironsource.adqualitysdk.sdk.i;

import com.yandex.mobile.ads.common.VideoController;
import com.yandex.mobile.ads.common.VideoEventListener;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes6.dex */
public final class u1 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C1 f519;

    public u1(C1 c1) {
        this.f519 = c1;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C1 c1 = this.f519;
        VideoController videoController = (VideoController) arrayList.get(0);
        VideoEventListener videoEventListener = (VideoEventListener) arrayList.get(1);
        c1.getClass();
        videoController.setVideoEventListener(videoEventListener);
        return null;
    }
}
