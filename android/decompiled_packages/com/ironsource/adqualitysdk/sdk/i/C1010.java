package com.ironsource.adqualitysdk.sdk.i;

import com.amazon.device.ads.DTBAdResponse;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.בֿ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C1010 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0982 f3650;

    public C1010(C0982 c0982) {
        this.f3650 = c0982;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C0982 c0982 = this.f3650;
        DTBAdResponse dTBAdResponse = (DTBAdResponse) arrayList.get(0);
        c0982.getClass();
        return dTBAdResponse.getDTBAds();
    }
}
