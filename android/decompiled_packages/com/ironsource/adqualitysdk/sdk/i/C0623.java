package com.ironsource.adqualitysdk.sdk.i;

import java.util.ArrayList;
import net.pubnative.lite.sdk.vpaid.response.AdParams;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ᒄ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0623 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0824 f2169;

    public C0623(C0824 c0824) {
        this.f2169 = c0824;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C0824 c0824 = this.f2169;
        AdParams adParams = (AdParams) arrayList.get(0);
        c0824.getClass();
        return adParams.getVideoFileUrlsList();
    }
}
