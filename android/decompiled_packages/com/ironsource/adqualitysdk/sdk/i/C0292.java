package com.ironsource.adqualitysdk.sdk.i;

import com.tapjoy.TJPlacementData;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ʼ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0292 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0302 f1084;

    public C0292(C0302 c0302) {
        this.f1084 = c0302;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C0302 c0302 = this.f1084;
        TJPlacementData tJPlacementData = (TJPlacementData) arrayList.get(0);
        c0302.getClass();
        return tJPlacementData.getHttpResponse();
    }
}
