package com.ironsource.adqualitysdk.sdk.i;

import com.chartboost.sdk.Chartboost;
import com.chartboost.sdk.ChartboostDelegate;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ℓ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0931 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0869 f3287;

    public C0931(C0869 c0869) {
        this.f3287 = c0869;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C0869 c0869 = this.f3287;
        ChartboostDelegate chartboostDelegate = (ChartboostDelegate) arrayList.get(0);
        c0869.getClass();
        Chartboost.setDelegate(chartboostDelegate);
        return null;
    }
}
