package com.ironsource.adqualitysdk.sdk.i;

import com.ironsource.mediationsdk.IronSource;
import com.ironsource.mediationsdk.impressionData.ImpressionDataListener;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ﺯ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C1092 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C1001 f3880;

    public C1092(C1001 c1001) {
        this.f3880 = c1001;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C1001 c1001 = this.f3880;
        ImpressionDataListener impressionDataListener = (ImpressionDataListener) arrayList.get(0);
        c1001.getClass();
        IronSource.addImpressionDataListener(impressionDataListener);
        return null;
    }
}
