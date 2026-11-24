package com.ironsource.adqualitysdk.sdk.i;

import com.smaato.sdk.ng.models.Ad;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ᐡ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0600 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0798 f2121;

    public C0600(C0798 c0798) {
        this.f2121 = c0798;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C0798 c0798 = this.f2121;
        Ad ad = (Ad) arrayList.get(0);
        c0798.getClass();
        return ad.getFullScreenClickability();
    }
}
