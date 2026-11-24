package com.ironsource.adqualitysdk.sdk.i;

import com.hyprmx.android.sdk.api.data.WebTrafficObject;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ᓸ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0685 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0559 f2401;

    public C0685(C0559 c0559) {
        this.f2401 = c0559;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C0559 c0559 = this.f2401;
        WebTrafficObject webTrafficObject = (WebTrafficObject) arrayList.get(0);
        c0559.getClass();
        return webTrafficObject.urls;
    }
}
