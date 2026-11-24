package com.ironsource.adqualitysdk.sdk.i;

import com.fyber.inneractive.sdk.external.InneractiveAdRequest;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ᵐ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0825 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0735 f3030;

    public C0825(C0735 c0735) {
        this.f3030 = c0735;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C0735 c0735 = this.f3030;
        InneractiveAdRequest inneractiveAdRequest = (InneractiveAdRequest) arrayList.get(0);
        c0735.getClass();
        return inneractiveAdRequest.getSpotId();
    }
}
