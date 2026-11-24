package com.ironsource.adqualitysdk.sdk.i;

import com.explorestack.protobuf.Any;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.չ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0416 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0334 f1518;

    public C0416(C0334 c0334) {
        this.f1518 = c0334;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C0334 c0334 = this.f1518;
        Any any = (Any) arrayList.get(0);
        c0334.getClass();
        return any.getValue();
    }
}
