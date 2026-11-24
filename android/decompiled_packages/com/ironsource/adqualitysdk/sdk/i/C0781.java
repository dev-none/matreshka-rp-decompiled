package com.ironsource.adqualitysdk.sdk.i;

import com.mintegral.msdk.base.entity.CampaignEx;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ᴛ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0781 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0682 f2637;

    public C0781(C0682 c0682) {
        this.f2637 = c0682;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C0682 c0682 = this.f2637;
        CampaignEx campaignEx = (CampaignEx) arrayList.get(0);
        c0682.getClass();
        return Integer.valueOf(campaignEx.getLinkType());
    }
}
