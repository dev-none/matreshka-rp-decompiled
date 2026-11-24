package com.ironsource.adqualitysdk.sdk.i;

import com.ironsource.mediationsdk.model.Placement;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.Ｌ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C1115 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C1001 f3945;

    public C1115(C1001 c1001) {
        this.f3945 = c1001;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C1001 c1001 = this.f3945;
        Placement placement = (Placement) arrayList.get(0);
        c1001.getClass();
        if (placement != null) {
            return placement.getPlacementName();
        }
        return null;
    }
}
