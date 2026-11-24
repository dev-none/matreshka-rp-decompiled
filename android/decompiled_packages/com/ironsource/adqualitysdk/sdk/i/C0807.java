package com.ironsource.adqualitysdk.sdk.i;

import java.util.ArrayList;
import net.pubnative.lite.sdk.vpaid.VideoAdListener;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ᴾ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0807 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0824 f2879;

    public C0807(C0824 c0824) {
        this.f2879 = c0824;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C0824 c0824 = this.f2879;
        VideoAdListener videoAdListener = (VideoAdListener) arrayList.get(0);
        c0824.getClass();
        return new C0945(c0824, videoAdListener, c0566);
    }
}
