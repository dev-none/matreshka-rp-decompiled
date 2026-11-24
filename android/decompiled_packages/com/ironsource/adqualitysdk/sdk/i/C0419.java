package com.ironsource.adqualitysdk.sdk.i;

import com.five_corp.ad.FiveAdInterface;
import com.five_corp.ad.FiveAdListener;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.օ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0419 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0379 f1536;

    public C0419(C0379 c0379) {
        this.f1536 = c0379;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C0379 c0379 = this.f1536;
        FiveAdInterface fiveAdInterface = (FiveAdInterface) arrayList.get(0);
        FiveAdListener fiveAdListener = (FiveAdListener) arrayList.get(1);
        c0379.getClass();
        fiveAdInterface.setListener(fiveAdListener);
        return null;
    }
}
