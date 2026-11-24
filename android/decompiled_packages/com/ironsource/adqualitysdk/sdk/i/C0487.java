package com.ironsource.adqualitysdk.sdk.i;

import com.five_corp.ad.FiveAdInterface;
import com.five_corp.ad.FiveAdLoadListener;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ڙ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0487 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0379 f1780;

    public C0487(C0379 c0379) {
        this.f1780 = c0379;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C0379 c0379 = this.f1780;
        FiveAdInterface fiveAdInterface = (FiveAdInterface) arrayList.get(0);
        FiveAdLoadListener fiveAdLoadListener = (FiveAdLoadListener) arrayList.get(1);
        c0379.getClass();
        fiveAdInterface.setLoadListener(fiveAdLoadListener);
        return null;
    }
}
