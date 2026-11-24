package com.ironsource.adqualitysdk.sdk.i;

import com.smaato.sdk.video.vast.model.VastScenario;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ᵌ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0821 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0798 f2901;

    public C0821(C0798 c0798) {
        this.f2901 = c0798;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C0798 c0798 = this.f2901;
        VastScenario vastScenario = (VastScenario) arrayList.get(0);
        c0798.getClass();
        return vastScenario.vastCompanionScenario;
    }
}
