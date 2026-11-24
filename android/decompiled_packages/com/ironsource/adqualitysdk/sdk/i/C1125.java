package com.ironsource.adqualitysdk.sdk.i;

import com.amazon.aps.ads.ApsAd;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ｓ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C1125 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0982 f3966;

    public C1125(C0982 c0982) {
        this.f3966 = c0982;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C0982 c0982 = this.f3966;
        ApsAd apsAd = (ApsAd) arrayList.get(0);
        c0982.getClass();
        return apsAd.getBidInfo();
    }
}
