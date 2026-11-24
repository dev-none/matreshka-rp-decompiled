package com.ironsource.adqualitysdk.sdk.i;

import com.amazon.device.ads.DTBAdResponse;
import com.amazon.device.ads.DTBAdSize;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ﾊ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C1159 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0982 f4060;

    public C1159(C0982 c0982) {
        this.f4060 = c0982;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C0982 c0982 = this.f4060;
        DTBAdResponse dTBAdResponse = (DTBAdResponse) arrayList.get(0);
        DTBAdSize dTBAdSize = (DTBAdSize) arrayList.get(1);
        c0982.getClass();
        return dTBAdResponse.getPricePoints(dTBAdSize);
    }
}
