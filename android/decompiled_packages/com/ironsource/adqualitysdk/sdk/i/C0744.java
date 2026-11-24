package com.ironsource.adqualitysdk.sdk.i;

import com.smaato.sdk.video.vast.model.VastCompanionScenario;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ᖮ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0744 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0798 f2557;

    public C0744(C0798 c0798) {
        this.f2557 = c0798;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C0798 c0798 = this.f2557;
        VastCompanionScenario vastCompanionScenario = (VastCompanionScenario) arrayList.get(0);
        c0798.getClass();
        return vastCompanionScenario.resourceData;
    }
}
