package com.ironsource.adqualitysdk.sdk.i;

import com.tapjoy.TJPlacement;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ˏ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0307 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0302 f1169;

    public C0307(C0302 c0302) {
        this.f1169 = c0302;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C0302 c0302 = this.f1169;
        TJPlacement tJPlacement = (TJPlacement) arrayList.get(0);
        c0302.getClass();
        return tJPlacement.getVideoListener();
    }
}
