package com.ironsource.adqualitysdk.sdk.i;

import com.yandex.mobile.ads.video.playback.model.MediaFile;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes6.dex */
public final class o1 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C1 f471;

    public o1(C1 c1) {
        this.f471 = c1;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C1 c1 = this.f471;
        MediaFile mediaFile = (MediaFile) arrayList.get(0);
        c1.getClass();
        return mediaFile.getUrl();
    }
}
