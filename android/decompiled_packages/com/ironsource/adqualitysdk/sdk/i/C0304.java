package com.ironsource.adqualitysdk.sdk.i;

import java.util.ArrayList;
import tv.superawesome.lib.samodelspace.saad.SAAd;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ˌ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0304 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0295 f1166;

    public C0304(C0295 c0295) {
        this.f1166 = c0295;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C0295 c0295 = this.f1166;
        SAAd sAAd = (SAAd) arrayList.get(0);
        c0295.getClass();
        return sAAd.writeToJson();
    }
}
