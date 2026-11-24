package com.ironsource.adqualitysdk.sdk.i;

import com.chartboost.sdk.Chartboost;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.忄, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0983 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0869 f3490;

    public C0983(C0869 c0869) {
        this.f3490 = c0869;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C0869 c0869 = this.f3490;
        c0869.getClass();
        Chartboost.setDelegate(new C0888(c0869, Chartboost.getDelegate(), c0566));
        return null;
    }
}
