package com.ironsource.adqualitysdk.sdk.i;

import java.util.ArrayList;
import net.pubnative.lite.sdk.models.AdData;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ᵅ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0814 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0824 f2892;

    public C0814(C0824 c0824) {
        this.f2892 = c0824;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C0824 c0824 = this.f2892;
        AdData adData = (AdData) arrayList.get(0);
        c0824.getClass();
        return adData.getJS();
    }
}
