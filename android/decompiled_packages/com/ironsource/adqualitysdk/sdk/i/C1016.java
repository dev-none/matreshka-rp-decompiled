package com.ironsource.adqualitysdk.sdk.i;

import java.util.ArrayList;
import net.pubnative.lite.sdk.models.Ad;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ﭘ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C1016 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0824 f3684;

    public C1016(C0824 c0824) {
        this.f3684 = c0824;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C0824 c0824 = this.f3684;
        Ad ad = (Ad) arrayList.get(0);
        String str = (String) arrayList.get(1);
        c0824.getClass();
        return ad.getAsset(str);
    }
}
