package com.ironsource.adqualitysdk.sdk.i;

import com.ironsource.mediationsdk.ads.nativead.LevelPlayNativeAd;
import com.ironsource.mediationsdk.ads.nativead.LevelPlayNativeAdListener;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.כּ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C1002 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C1001 f3618;

    public C1002(C1001 c1001) {
        this.f3618 = c1001;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C1001 c1001 = this.f3618;
        LevelPlayNativeAd levelPlayNativeAd = (LevelPlayNativeAd) arrayList.get(0);
        LevelPlayNativeAdListener levelPlayNativeAdListener = (LevelPlayNativeAdListener) arrayList.get(1);
        c1001.getClass();
        levelPlayNativeAd.setListener(levelPlayNativeAdListener);
        return null;
    }
}
