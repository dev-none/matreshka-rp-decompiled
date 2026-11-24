package com.ironsource.adqualitysdk.sdk.i;

import com.bytedance.sdk.openadsdk.api.PangleAd;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.Ƴ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0226 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0178 f893;

    public C0226(C0178 c0178) {
        this.f893 = c0178;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C0178 c0178 = this.f893;
        PangleAd pangleAd = (PangleAd) arrayList.get(0);
        c0178.getClass();
        return pangleAd.getMediaExtraInfo();
    }
}
