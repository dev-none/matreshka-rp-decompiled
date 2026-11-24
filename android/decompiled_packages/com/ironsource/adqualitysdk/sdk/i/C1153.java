package com.ironsource.adqualitysdk.sdk.i;

import com.inmobi.media.ads.network.common.model.AdResponse;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ﾃ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C1153 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C1100 f4054;

    public C1153(C1100 c1100) {
        this.f4054 = c1100;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C1100 c1100 = this.f4054;
        AdResponse adResponse = (AdResponse) arrayList.get(0);
        c1100.getClass();
        return Long.valueOf(adResponse.getPlacementId());
    }
}
