package com.ironsource.adqualitysdk.sdk.i;

import com.vungle.warren.model.Placement;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.r0, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes6.dex */
public final class C1774r0 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C1782v0 f493;

    public C1774r0(C1782v0 c1782v0) {
        this.f493 = c1782v0;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C1782v0 c1782v0 = this.f493;
        Placement placement = (Placement) arrayList.get(0);
        c1782v0.getClass();
        return Boolean.valueOf(placement.isIncentivized());
    }
}
