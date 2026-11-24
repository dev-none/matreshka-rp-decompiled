package com.ironsource.adqualitysdk.sdk.i;

import com.inmobi.media.ads.network.common.model.Ad;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.Ļ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0196 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C1100 f798;

    public C0196(C1100 c1100) {
        this.f798 = c1100;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C1100 c1100 = this.f798;
        Ad ad = (Ad) arrayList.get(0);
        c1100.getClass();
        return ad.getCreativeId();
    }
}
