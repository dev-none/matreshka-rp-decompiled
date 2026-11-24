package com.ironsource.adqualitysdk.sdk.i;

import com.ironsource.mediationsdk.impressionData.ImpressionData;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ﻣ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C1103 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C1001 f3932;

    public C1103(C1001 c1001) {
        this.f3932 = c1001;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C1001 c1001 = this.f3932;
        ImpressionData impressionData = (ImpressionData) arrayList.get(0);
        c1001.getClass();
        return impressionData.getAllData();
    }
}
