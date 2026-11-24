package com.ironsource.adqualitysdk.sdk.i;

import com.unity3d.ads.IUnityAdsListener;
import com.unity3d.ads.UnityAds;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes6.dex */
public final class U implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ Y f259;

    public U(Y y) {
        this.f259 = y;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        Y y = this.f259;
        IUnityAdsListener iUnityAdsListener = (IUnityAdsListener) arrayList.get(0);
        y.getClass();
        UnityAds.removeListener(iUnityAdsListener);
        return null;
    }
}
