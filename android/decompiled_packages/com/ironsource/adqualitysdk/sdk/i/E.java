package com.ironsource.adqualitysdk.sdk.i;

import com.unity3d.ads.core.data.model.AdObject;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes6.dex */
public final class E implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ Y f164;

    public E(Y y) {
        this.f164 = y;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        Y y = this.f164;
        AdObject adObject = (AdObject) arrayList.get(0);
        y.getClass();
        return adObject.getOpportunityId();
    }
}
