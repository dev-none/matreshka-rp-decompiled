package com.ironsource.adqualitysdk.sdk.i;

import android.webkit.WebView;
import com.ironsource.adqualitysdk.sdk.StringFog;
import java.lang.ref.WeakReference;
import java.util.HashSet;
import java.util.WeakHashMap;

/* JADX INFO: loaded from: classes6.dex */
public final class Y0 implements InterfaceC0252 {

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public static final WeakHashMap f345;

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final HashSet f346 = new HashSet();

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final R0 f347;

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final String f348;

    static {
        StringFog.decrypt("pSa+YHVGM2KbMKhTckY2\n", "8kPcNhwjRC4=\n");
        f345 = new WeakHashMap();
    }

    public Y0(WebView webView, String str) {
        this.f348 = str;
        R0 r0 = new R0(webView);
        this.f347 = r0;
        m8343();
        new X0(this);
        WebView webView2 = (WebView) r0.f249.get();
        if (webView2 != null) {
            try {
                i1.m8367(webView2);
            } catch (Exception e) {
                AbstractC1104.m8887(R0.f246, StringFog.decrypt("swNO5y4T7ZiCBVXmOxPdmJQyVPozXu++mhhZ5ig=\n", "9nE8iFwziv0=\n"), (Throwable) e, false);
            }
        }
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final void m8343() {
        R0 r0 = this.f347;
        W0 w0 = new W0(this);
        WebView webView = (WebView) r0.f249.get();
        if (webView != null) {
            try {
                P0 p0 = new P0(i1.m8366(webView), w0);
                r0.f248 = new WeakReference(p0);
                webView.setWebViewClient(p0);
                r0.f247 = true;
                return;
            } catch (Exception e) {
                AbstractC1104.m8887(R0.f246, StringFog.decrypt("XudYGOr1Cy9v4UMZ//U7L3nDQxLvlgAjfvte\n", "G5Uqd5jVbEo=\n"), (Throwable) e, false);
            }
        }
        r0.f247 = false;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0252
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8328(WebView webView) {
        for (InterfaceC0252 interfaceC0252 : new HashSet(this.f346)) {
            if (interfaceC0252 != null) {
                interfaceC0252.mo8328(webView);
            }
        }
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0252
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8330(WebView webView, String str, String str2) {
        for (InterfaceC0252 interfaceC0252 : new HashSet(this.f346)) {
            if (interfaceC0252 != null) {
                interfaceC0252.mo8330(webView, str, str2);
            }
        }
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0252
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8331(WebView webView, String str, boolean z) {
        for (InterfaceC0252 interfaceC0252 : new HashSet(this.f346)) {
            if (interfaceC0252 != null) {
                interfaceC0252.mo8331(webView, str, z);
            }
        }
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0252
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8329(WebView webView, String str) {
        for (InterfaceC0252 interfaceC0252 : new HashSet(this.f346)) {
            if (interfaceC0252 != null) {
                interfaceC0252.mo8329(webView, str);
            }
        }
    }
}
