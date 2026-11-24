package com.ironsource.adqualitysdk.sdk.i;

import com.fyber.fairbid.internal.Constants;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ᓺ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0687 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0624 f2405;

    public C0687(C0624 c0624) {
        this.f2405 = c0624;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C0624 c0624 = this.f2405;
        Constants.AdType adType = (Constants.AdType) arrayList.get(0);
        c0624.getClass();
        return adType.getPlacementType();
    }
}
