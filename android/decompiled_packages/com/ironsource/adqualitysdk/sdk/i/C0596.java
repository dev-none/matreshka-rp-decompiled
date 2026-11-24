package com.ironsource.adqualitysdk.sdk.i;

import com.tapjoy.TJPlacement;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ᐝ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0596 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0302 f2104;

    public C0596(C0302 c0302) {
        this.f2104 = c0302;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C0302 c0302 = this.f2104;
        TJPlacement tJPlacement = (TJPlacement) arrayList.get(0);
        c0302.getClass();
        return tJPlacement.getListener();
    }
}
