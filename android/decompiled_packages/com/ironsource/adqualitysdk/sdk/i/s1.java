package com.ironsource.adqualitysdk.sdk.i;

import com.yandex.mobile.ads.common.AdInfo;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes6.dex */
public final class s1 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C1 f508;

    public s1(C1 c1) {
        this.f508 = c1;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C1 c1 = this.f508;
        AdInfo adInfo = (AdInfo) arrayList.get(0);
        c1.getClass();
        return adInfo.getAdUnitId();
    }
}
