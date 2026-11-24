package com.ironsource.adqualitysdk.sdk.i;

import android.webkit.WebView;
import com.ironsource.adqualitysdk.sdk.StringFog;

/* JADX INFO: loaded from: classes6.dex */
public final class T0 extends AbstractRunnableC0910 {

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final /* synthetic */ U0 f257;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ String f258;

    public T0(U0 u0, String str) {
        this.f257 = u0;
        this.f258 = str;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractRunnableC0910
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8327() {
        WebView webView = this.f257.f261;
        String str = this.f258;
        String str2 = i1.f418;
        if (webView != null) {
            if (webView.getHandler() == null && webView.getRootView() == null) {
                return;
            }
            StringBuilder sbM8559 = AbstractC0502.m8559("uLgBrUdCHPyirU2pQkACvbOtGK4cAw==\n", "0tl3zDQhbpU=\n", new StringBuilder(), str);
            sbM8559.append(StringFog.decrypt("8FMVyA==\n", "0no882UbnT8=\n"));
            webView.loadUrl(sbM8559.toString());
        }
    }
}
