package com.ironsource.adqualitysdk.sdk.i;

import com.smaato.sdk.video.ad.VastParsingResult;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ᵓ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0828 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0798 f3035;

    public C0828(C0798 c0798) {
        this.f3035 = c0798;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C0798 c0798 = this.f3035;
        VastParsingResult vastParsingResult = (VastParsingResult) arrayList.get(0);
        c0798.getClass();
        return vastParsingResult.vastScenario;
    }
}
