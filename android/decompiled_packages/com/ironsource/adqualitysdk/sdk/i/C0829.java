package com.ironsource.adqualitysdk.sdk.i;

import com.smaato.sdk.video.vast.model.VastCompanionScenario;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ᵔ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0829 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0798 f3036;

    public C0829(C0798 c0798) {
        this.f3036 = c0798;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C0798 c0798 = this.f3036;
        VastCompanionScenario vastCompanionScenario = (VastCompanionScenario) arrayList.get(0);
        c0798.getClass();
        return vastCompanionScenario.companionClickThrough;
    }
}
