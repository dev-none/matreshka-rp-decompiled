package com.ironsource.adqualitysdk.sdk.i;

import com.unity3d.ads.UnityAdsLoadOptions;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes6.dex */
public final class H implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ Y f206;

    public H(Y y) {
        this.f206 = y;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        Y y = this.f206;
        UnityAdsLoadOptions unityAdsLoadOptions = (UnityAdsLoadOptions) arrayList.get(0);
        y.getClass();
        return unityAdsLoadOptions.getData();
    }
}
