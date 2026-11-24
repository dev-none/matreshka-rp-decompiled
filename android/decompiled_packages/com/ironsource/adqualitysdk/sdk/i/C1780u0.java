package com.ironsource.adqualitysdk.sdk.i;

import com.vungle.warren.model.Advertisement;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.u0, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes6.dex */
public final class C1780u0 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C1782v0 f518;

    public C1780u0(C1782v0 c1782v0) {
        this.f518 = c1782v0;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C1782v0 c1782v0 = this.f518;
        Advertisement advertisement = (Advertisement) arrayList.get(0);
        c1782v0.getClass();
        return advertisement.getDownloadableUrls();
    }
}
