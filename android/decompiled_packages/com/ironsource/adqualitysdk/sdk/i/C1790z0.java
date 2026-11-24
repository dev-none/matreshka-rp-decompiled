package com.ironsource.adqualitysdk.sdk.i;

import com.vungle.ads.internal.model.AdPayload;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.z0, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes6.dex */
public final class C1790z0 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ G0 f582;

    public C1790z0(G0 g0) {
        this.f582 = g0;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        G0 g0 = this.f582;
        AdPayload adPayload = (AdPayload) arrayList.get(0);
        g0.getClass();
        return adPayload.adUnit();
    }
}
