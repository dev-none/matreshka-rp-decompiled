package com.ironsource.adqualitysdk.sdk.i;

import com.unity3d.services.core.webview.WebViewApp;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes6.dex */
public final class O implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ Y f238;

    public O(Y y) {
        this.f238 = y;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        Y y = this.f238;
        Object obj = arrayList.get(0);
        y.getClass();
        WebViewApp.setCurrentApp((W) obj);
        return null;
    }
}
