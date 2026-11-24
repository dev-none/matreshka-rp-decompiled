package com.ironsource.adqualitysdk.sdk.i;

import com.explorestack.protobuf.adcom.Ad;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ӧ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0400 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0334 f1495;

    public C0400(C0334 c0334) {
        this.f1495 = c0334;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C0334 c0334 = this.f1495;
        Ad ad = (Ad) arrayList.get(0);
        c0334.getClass();
        return ad.getDisplay();
    }
}
