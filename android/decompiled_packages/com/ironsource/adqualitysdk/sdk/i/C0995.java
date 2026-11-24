package com.ironsource.adqualitysdk.sdk.i;

import java.util.ArrayList;
import jp.maio.sdk.android.MaioAds;
import jp.maio.sdk.android.MaioAdsListenerInterface;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.דּ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0995 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0991 f3536;

    public C0995(C0991 c0991) {
        this.f3536 = c0991;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C0991 c0991 = this.f3536;
        MaioAdsListenerInterface maioAdsListenerInterface = (MaioAdsListenerInterface) arrayList.get(0);
        c0991.getClass();
        MaioAds.setMaioAdsListener(maioAdsListenerInterface);
        return null;
    }
}
