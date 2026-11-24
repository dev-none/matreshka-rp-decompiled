package com.ironsource.adqualitysdk.sdk.i;

import io.bidmachine.AdRequestParameters;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ړ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0481 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0334 f1764;

    public C0481(C0334 c0334) {
        this.f1764 = c0334;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C0334 c0334 = this.f1764;
        AdRequestParameters adRequestParameters = (AdRequestParameters) arrayList.get(0);
        c0334.getClass();
        return adRequestParameters.getPlacementId();
    }
}
