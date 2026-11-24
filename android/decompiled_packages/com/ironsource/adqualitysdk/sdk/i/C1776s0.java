package com.ironsource.adqualitysdk.sdk.i;

import com.vungle.warren.model.Advertisement;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.s0, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes6.dex */
public final class C1776s0 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C1782v0 f507;

    public C1776s0(C1782v0 c1782v0) {
        this.f507 = c1782v0;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C1782v0 c1782v0 = this.f507;
        Advertisement advertisement = (Advertisement) arrayList.get(0);
        c1782v0.getClass();
        return advertisement.getAdMarketId();
    }
}
