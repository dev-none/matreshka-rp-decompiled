package com.ironsource.adqualitysdk.sdk.i;

import com.unity3d.ads.core.data.model.AdObject;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes6.dex */
public final class F implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ Y f166;

    public F(Y y) {
        this.f166 = y;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        Y y = this.f166;
        AdObject adObject = (AdObject) arrayList.get(0);
        y.getClass();
        return adObject.getPlacementId();
    }
}
