package com.ironsource.adqualitysdk.sdk.i;

import com.inmobi.media.ads.network.common.model.Ad;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ﻩ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C1108 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C1100 f3935;

    public C1108(C1100 c1100) {
        this.f3935 = c1100;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C1100 c1100 = this.f3935;
        Ad ad = (Ad) arrayList.get(0);
        c1100.getClass();
        return ad.getContextData();
    }
}
