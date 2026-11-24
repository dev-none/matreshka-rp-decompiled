package com.ironsource.adqualitysdk.sdk.i;

import com.five_corp.ad.FiveAdInterface;
import com.five_corp.ad.FiveAdViewEventListener;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ڈ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0470 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0379 f1740;

    public C0470(C0379 c0379) {
        this.f1740 = c0379;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C0379 c0379 = this.f1740;
        FiveAdInterface fiveAdInterface = (FiveAdInterface) arrayList.get(0);
        FiveAdViewEventListener fiveAdViewEventListener = (FiveAdViewEventListener) arrayList.get(1);
        c0379.getClass();
        fiveAdInterface.setViewEventListener(fiveAdViewEventListener);
        return null;
    }
}
