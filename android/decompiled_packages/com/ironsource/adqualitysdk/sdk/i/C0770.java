package com.ironsource.adqualitysdk.sdk.i;

import com.mintegral.msdk.base.entity.CampaignEx;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ᴄ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0770 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0682 f2624;

    public C0770(C0682 c0682) {
        this.f2624 = c0682;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C0682 c0682 = this.f2624;
        CampaignEx campaignEx = (CampaignEx) arrayList.get(0);
        c0682.getClass();
        return campaignEx.getIconUrl();
    }
}
