package com.ironsource.adqualitysdk.sdk.i;

import com.smaato.sdk.video.vast.model.VastScenarioCreativeData;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.Ꭵ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0585 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0798 f2082;

    public C0585(C0798 c0798) {
        this.f2082 = c0798;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C0798 c0798 = this.f2082;
        VastScenarioCreativeData vastScenarioCreativeData = (VastScenarioCreativeData) arrayList.get(0);
        c0798.getClass();
        return vastScenarioCreativeData.id;
    }
}
