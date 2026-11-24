package com.ironsource.adqualitysdk.sdk.i;

import com.facebook.ads.Ad;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.Ἳ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0902 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0785 f3213;

    public C0902(C0785 c0785) {
        this.f3213 = c0785;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C0785 c0785 = this.f3213;
        Ad ad = (Ad) arrayList.get(0);
        c0785.getClass();
        return ad.getPlacementId();
    }
}
