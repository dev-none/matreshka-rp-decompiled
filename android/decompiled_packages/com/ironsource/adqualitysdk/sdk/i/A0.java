package com.ironsource.adqualitysdk.sdk.i;

import com.vungle.ads.internal.model.AppNode;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes6.dex */
public final class A0 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ G0 f121;

    public A0(G0 g0) {
        this.f121 = g0;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        G0 g0 = this.f121;
        AppNode appNode = (AppNode) arrayList.get(0);
        g0.getClass();
        return appNode.getAppId();
    }
}
