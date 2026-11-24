package com.ironsource.adqualitysdk.sdk.i;

import com.fyber.fairbid.ads.ImpressionData;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ᒍ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0627 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0624 f2217;

    public C0627(C0624 c0624) {
        this.f2217 = c0624;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C0624 c0624 = this.f2217;
        ImpressionData impressionData = (ImpressionData) arrayList.get(0);
        c0624.getClass();
        return Double.valueOf(impressionData.getNetPayout());
    }
}
