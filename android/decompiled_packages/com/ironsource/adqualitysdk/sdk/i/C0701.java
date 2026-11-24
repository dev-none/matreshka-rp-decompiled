package com.ironsource.adqualitysdk.sdk.i;

import com.smaato.sdk.ng.models.Ad;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ᔈ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0701 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0798 f2424;

    public C0701(C0798 c0798) {
        this.f2424 = c0798;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C0798 c0798 = this.f2424;
        Ad ad = (Ad) arrayList.get(0);
        c0798.getClass();
        return ad.getContentInfoClickUrl();
    }
}
