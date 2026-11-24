package com.ironsource.adqualitysdk.sdk.i;

import com.unity3d.services.core.webview.WebViewApp;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes6.dex */
public final class N implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ Y f237;

    public N(Y y) {
        this.f237 = y;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        Y y = this.f237;
        Object obj = arrayList.get(0);
        y.getClass();
        return new W(y, (WebViewApp) obj, c0566);
    }
}
