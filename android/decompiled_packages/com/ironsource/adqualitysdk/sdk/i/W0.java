package com.ironsource.adqualitysdk.sdk.i;

import android.graphics.Bitmap;
import android.webkit.WebResourceRequest;
import android.webkit.WebView;
import android.webkit.WebViewClient;

/* JADX INFO: loaded from: classes6.dex */
public final class W0 extends WebViewClient {

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final /* synthetic */ Y0 f270;

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public boolean f273 = false;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public boolean f272 = false;

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public String f271 = null;

    public W0(Y0 y0) {
        this.f270 = y0;
    }

    @Override // android.webkit.WebViewClient
    public final void onPageFinished(WebView webView, String str) {
        this.f270.mo8328(webView);
        this.f273 = false;
        this.f272 = true;
        if (this.f271 == null) {
            this.f271 = webView.getOriginalUrl();
        }
    }

    @Override // android.webkit.WebViewClient
    public final void onPageStarted(WebView webView, String str, Bitmap bitmap) {
        this.f270.mo8328(webView);
        this.f273 = true;
    }

    @Override // android.webkit.WebViewClient
    public final boolean shouldOverrideUrlLoading(WebView webView, WebResourceRequest webResourceRequest) {
        return shouldOverrideUrlLoading(webView, webResourceRequest.getUrl().toString());
    }

    @Override // android.webkit.WebViewClient
    public final boolean shouldOverrideUrlLoading(WebView webView, String str) {
        if (str.startsWith(this.f270.f348)) {
            this.f271 = webView.getOriginalUrl();
            String strSubstring = str.substring(this.f270.f348.length());
            Y0 y0 = this.f270;
            y0.mo8330(webView, y0.f348, strSubstring);
            return true;
        }
        if (this.f271 == null) {
            this.f271 = webView.getOriginalUrl();
        }
        this.f270.mo8331(webView, str, (this.f273 && this.f272) || !(webView.getOriginalUrl() == null || this.f271 == null || webView.getOriginalUrl().equals(this.f271)));
        this.f272 = true;
        this.f273 = false;
        return false;
    }
}
