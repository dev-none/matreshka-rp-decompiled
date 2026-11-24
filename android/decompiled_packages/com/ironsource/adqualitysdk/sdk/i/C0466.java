package com.ironsource.adqualitysdk.sdk.i;

import io.bidmachine.protobuf.RequestExtension;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ٺ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0466 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0334 f1732;

    public C0466(C0334 c0334) {
        this.f1732 = c0334;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C0334 c0334 = this.f1732;
        RequestExtension requestExtension = (RequestExtension) arrayList.get(0);
        c0334.getClass();
        return requestExtension.getSellerId();
    }
}
