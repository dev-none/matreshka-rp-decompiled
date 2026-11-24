package com.ironsource.adqualitysdk.sdk.i;

import com.smaato.sdk.ng.models.Ad;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ﹶ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C1059 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0798 f3813;

    public C1059(C0798 c0798) {
        this.f3813 = c0798;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C0798 c0798 = this.f3813;
        Ad ad = (Ad) arrayList.get(0);
        String str = (String) arrayList.get(1);
        c0798.getClass();
        return ad.getAssetHtml(str);
    }
}
