package com.ironsource.adqualitysdk.sdk.i;

import com.ironsource.mediationsdk.adunit.adapter.utility.AdData;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ｧ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C1131 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C1001 f3978;

    public C1131(C1001 c1001) {
        this.f3978 = c1001;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C1001 c1001 = this.f3978;
        AdData adData = (AdData) arrayList.get(0);
        c1001.getClass();
        return adData.getServerData();
    }
}
