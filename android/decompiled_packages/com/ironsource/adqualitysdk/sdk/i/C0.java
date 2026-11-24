package com.ironsource.adqualitysdk.sdk.i;

import com.vungle.ads.internal.model.AdPayload;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes6.dex */
public final class C0 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ G0 f127;

    public C0(G0 g0) {
        this.f127 = g0;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        G0 g0 = this.f127;
        AdPayload.AdUnit adUnit = (AdPayload.AdUnit) arrayList.get(0);
        g0.getClass();
        return adUnit.getCampaign();
    }
}
