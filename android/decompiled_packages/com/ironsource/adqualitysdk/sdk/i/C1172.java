package com.ironsource.adqualitysdk.sdk.i;

import com.inmobi.ads.AdContainer;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ﾝ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C1172 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C1100 f4105;

    public C1172(C1100 c1100) {
        this.f4105 = c1100;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C1100 c1100 = this.f4105;
        AdContainer adContainer = (AdContainer) arrayList.get(0);
        c1100.getClass();
        return adContainer.getDataModel();
    }
}
