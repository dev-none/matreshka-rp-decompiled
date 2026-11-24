package com.ironsource.adqualitysdk.sdk.i;

import com.five_corp.ad.FiveAdConfig;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ٱ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0461 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0379 f1730;

    public C0461(C0379 c0379) {
        this.f1730 = c0379;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C0379 c0379 = this.f1730;
        FiveAdConfig fiveAdConfig = (FiveAdConfig) arrayList.get(0);
        c0379.getClass();
        return fiveAdConfig.appId;
    }
}
