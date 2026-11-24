package com.ironsource.adqualitysdk.sdk.i;

import com.five_corp.ad.FiveAdCustomLayout;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ӵ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0404 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0379 f1499;

    public C0404(C0379 c0379) {
        this.f1499 = c0379;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C0379 c0379 = this.f1499;
        FiveAdCustomLayout fiveAdCustomLayout = (FiveAdCustomLayout) arrayList.get(0);
        c0379.getClass();
        return fiveAdCustomLayout.getAdvertiserName();
    }
}
