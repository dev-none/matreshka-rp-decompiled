package com.ironsource.adqualitysdk.sdk.i;

import java.util.ArrayList;
import net.pubnative.lite.sdk.models.AdData;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ᵉ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0818 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0824 f2898;

    public C0818(C0824 c0824) {
        this.f2898 = c0824;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C0824 c0824 = this.f2898;
        AdData adData = (AdData) arrayList.get(0);
        c0824.getClass();
        return adData.getHtml();
    }
}
