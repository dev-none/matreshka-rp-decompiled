package com.ironsource.adqualitysdk.sdk.i;

import android.webkit.JsPromptResult;
import android.webkit.WebChromeClient;
import android.webkit.WebView;

/* JADX INFO: loaded from: classes6.dex */
public final class X0 extends WebChromeClient {

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ Y0 f278;

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public boolean f279 = false;

    public X0(Y0 y0) {
        this.f278 = y0;
    }

    @Override // android.webkit.WebChromeClient
    public final boolean onJsPrompt(WebView webView, String str, String str2, String str3, JsPromptResult jsPromptResult) {
        this.f278.mo8329(webView, str2);
        return false;
    }

    @Override // android.webkit.WebChromeClient
    public final void onProgressChanged(WebView webView, int i) {
        if (i != 100 || this.f279) {
            return;
        }
        this.f279 = true;
        this.f278.mo8328(webView);
    }
}
