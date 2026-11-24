package com.ironsource.adqualitysdk.sdk.i;

import com.smaato.sdk.core.mvvm.model.AdResponse;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ﹸ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C1061 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0798 f3817;

    public C1061(C0798 c0798) {
        this.f3817 = c0798;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C0798 c0798 = this.f3817;
        AdResponse adResponse = (AdResponse) arrayList.get(0);
        c0798.getClass();
        return adResponse.getImageUrl();
    }
}
