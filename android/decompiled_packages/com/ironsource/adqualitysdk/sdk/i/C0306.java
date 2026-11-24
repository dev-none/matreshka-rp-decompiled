package com.ironsource.adqualitysdk.sdk.i;

import com.tapjoy.TJPlacement;
import com.tapjoy.TJPlacementVideoListener;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ˎ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0306 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0302 f1168;

    public C0306(C0302 c0302) {
        this.f1168 = c0302;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C0302 c0302 = this.f1168;
        TJPlacement tJPlacement = (TJPlacement) arrayList.get(0);
        TJPlacementVideoListener tJPlacementVideoListener = (TJPlacementVideoListener) arrayList.get(1);
        c0302.getClass();
        tJPlacement.setVideoListener(tJPlacementVideoListener);
        return null;
    }
}
