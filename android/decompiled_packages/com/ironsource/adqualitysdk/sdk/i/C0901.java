package com.ironsource.adqualitysdk.sdk.i;

import com.facebook.ads.AdListener;
import com.facebook.ads.AdView;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.Ἲ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0901 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0785 f3212;

    public C0901(C0785 c0785) {
        this.f3212 = c0785;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C0785 c0785 = this.f3212;
        AdView adView = (AdView) arrayList.get(0);
        AdListener adListener = (AdListener) arrayList.get(1);
        c0785.getClass();
        adView.setAdListener(adListener);
        return null;
    }
}
