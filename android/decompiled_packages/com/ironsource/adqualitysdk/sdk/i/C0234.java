package com.ironsource.adqualitysdk.sdk.i;

import io.presage.interstitial.optinvideo.PresageOptinVideo;
import io.presage.interstitial.optinvideo.PresageOptinVideoCallback;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.Ȋ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0234 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0230 f920;

    public C0234(C0230 c0230) {
        this.f920 = c0230;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C0230 c0230 = this.f920;
        PresageOptinVideo presageOptinVideo = (PresageOptinVideo) arrayList.get(0);
        PresageOptinVideoCallback presageOptinVideoCallback = (PresageOptinVideoCallback) arrayList.get(1);
        c0230.getClass();
        presageOptinVideo.setOptinVideoCallback(presageOptinVideoCallback);
        return null;
    }
}
