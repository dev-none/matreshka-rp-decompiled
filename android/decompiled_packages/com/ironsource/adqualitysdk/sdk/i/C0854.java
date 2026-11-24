package com.ironsource.adqualitysdk.sdk.i;

import com.facebook.ads.internal.adapters.AdAdapter;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ḭ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0854 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0785 f3069;

    public C0854(C0785 c0785) {
        this.f3069 = c0785;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C0785 c0785 = this.f3069;
        AdAdapter adAdapter = (AdAdapter) arrayList.get(0);
        c0785.getClass();
        return adAdapter.getPlacementType();
    }
}
