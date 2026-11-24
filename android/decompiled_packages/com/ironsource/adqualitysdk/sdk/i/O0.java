package com.ironsource.adqualitysdk.sdk.i;

import android.graphics.Rect;
import android.view.View;
import android.webkit.WebView;

/* JADX INFO: loaded from: classes6.dex */
public final class O0 extends M0 {
    @Override // com.ironsource.adqualitysdk.sdk.i.M0
    /* JADX INFO: renamed from: ﾇ */
    public final Object mo8336(WebView webView) {
        Rect rect = AbstractC1769o0.f470;
        View view = webView;
        while (view.getParent() instanceof View) {
            view = (View) view.getParent();
        }
        return view;
    }
}
