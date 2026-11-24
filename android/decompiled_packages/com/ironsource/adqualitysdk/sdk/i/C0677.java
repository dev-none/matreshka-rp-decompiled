package com.ironsource.adqualitysdk.sdk.i;

import com.mbridge.msdk.foundation.entity.CampaignEx;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ᓰ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0677 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0199 f2337;

    public C0677(C0199 c0199) {
        this.f2337 = c0199;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C0199 c0199 = this.f2337;
        CampaignEx campaignEx = (CampaignEx) arrayList.get(0);
        c0199.getClass();
        return campaignEx.getCampaignUnitId();
    }
}
