package com.ironsource.adqualitysdk.sdk.i;

import com.moloco.sdk.publisher.Banner;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ﮂ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C1029 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0985 f3700;

    public C1029(C0985 c0985) {
        this.f3700 = c0985;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C0985 c0985 = this.f3700;
        Banner banner = (Banner) arrayList.get(0);
        c0985.getClass();
        return banner.getAdShowListener();
    }
}
