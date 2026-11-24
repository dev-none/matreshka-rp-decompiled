package com.ironsource.adqualitysdk.sdk.i;

import com.smaato.sdk.core.mvvm.model.AdResponse;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ﹴ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C1058 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0798 f3812;

    public C1058(C0798 c0798) {
        this.f3812 = c0798;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C0798 c0798 = this.f3812;
        AdResponse adResponse = (AdResponse) arrayList.get(0);
        c0798.getClass();
        return adResponse.getVastObject();
    }
}
