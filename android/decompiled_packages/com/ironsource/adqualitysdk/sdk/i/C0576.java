package com.ironsource.adqualitysdk.sdk.i;

import com.mbridge.msdk.foundation.entity.CampaignEx;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ເ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0576 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0199 f2060;

    public C0576(C0199 c0199) {
        this.f2060 = c0199;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C0199 c0199 = this.f2060;
        CampaignEx campaignEx = (CampaignEx) arrayList.get(0);
        c0199.getClass();
        return campaignEx.getPlacementId();
    }
}
