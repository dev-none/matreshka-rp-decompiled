package com.ironsource.adqualitysdk.sdk.i;

import com.fyber.fairbid.ads.ImpressionData;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ᓕ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0665 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0624 f2295;

    public C0665(C0624 c0624) {
        this.f2295 = c0624;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C0624 c0624 = this.f2295;
        ImpressionData impressionData = (ImpressionData) arrayList.get(0);
        c0624.getClass();
        return impressionData.getRenderingSdkVersion();
    }
}
