package com.ironsource.adqualitysdk.sdk.i;

import android.graphics.Bitmap;
import android.net.http.SslError;
import android.os.Message;
import android.view.KeyEvent;
import android.webkit.ClientCertRequest;
import android.webkit.HttpAuthHandler;
import android.webkit.RenderProcessGoneDetail;
import android.webkit.SslErrorHandler;
import android.webkit.WebResourceError;
import android.webkit.WebResourceRequest;
import android.webkit.WebResourceResponse;
import android.webkit.WebView;
import android.webkit.WebViewClient;
import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes6.dex */
public final class P0 extends WebViewClient implements Q0, InterfaceC0462 {

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final WebViewClient f243;

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final WebViewClient f244;

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public static final String f242 = StringFog.decrypt("JjgHS7kRb3IdNABzpDB9Uh4vBGm/Bg==\n", "cV1lHdB0GDE=\n");

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public static final String f241 = StringFog.decrypt("jw+cKtvLubuNDr8Yy/ygrp8phBTMxL0=\n", "6Grofamqycs=\n");

    /* JADX INFO: renamed from: ﻐ, reason: contains not printable characters */
    public static final String f240 = StringFog.decrypt("0qry8WYJP+jjpuPSRzIz79u7\n", "tc+GpQReWoo=\n");

    public P0(WebViewClient webViewClient, WebViewClient webViewClient2) {
        this.f244 = webViewClient;
        this.f243 = webViewClient2;
    }

    @Override // android.webkit.WebViewClient
    public final void doUpdateVisitedHistory(WebView webView, String str, boolean z) {
        try {
            this.f243.doUpdateVisitedHistory(webView, str, z);
        } catch (Throwable th) {
            AbstractC1104.m8887(f242, StringFog.decrypt("Hjis8zC9ck17J4r+DvRoVz4ku+5i+XR2Ky6/6CfLclAyPrv4CvRoVzQ4pw==\n", "W0renEKdGyM=\n"), th, false);
        }
        WebViewClient webViewClient = this.f244;
        if (webViewClient != null) {
            webViewClient.doUpdateVisitedHistory(webView, str, z);
        } else {
            super.doUpdateVisitedHistory(webView, str, z);
        }
    }

    @Override // android.webkit.WebViewClient
    public final void onFormResubmission(WebView webView, Message message, Message message2) {
        try {
            this.f243.onFormResubmission(webView, message, message2);
        } catch (Throwable th) {
            AbstractC1104.m8887(f242, StringFog.decrypt("3AWDeq60X825GqV3kP1F1/wZlGf8+1jl9gWcR7nnQ8H0HoJmtftY\n", "mXfxFdyUNqM=\n"), th, false);
        }
        try {
            WebViewClient webViewClient = this.f244;
            if (webViewClient != null) {
                webViewClient.onFormResubmission(webView, message, message2);
            } else {
                super.onFormResubmission(webView, message, message2);
            }
        } catch (Error e) {
            AbstractC1104.m8887(f242, StringFog.decrypt("Z0NITzevqUgCXlRmKv2tdEdCT0Io5rNVS15U\n", "IjE6IEWPwCY=\n"), (Throwable) e, false);
        }
    }

    @Override // android.webkit.WebViewClient
    public final void onLoadResource(WebView webView, String str) {
        try {
            this.f243.onLoadResource(webView, str);
        } catch (Throwable th) {
            AbstractC1104.m8887(f242, StringFog.decrypt("yIpA5m2PfPetlWbrU8Zm7eiWV/s/wHvV4plW23rceuz/m1c=\n", "jfgyiR+vFZk=\n"), th, false);
        }
        WebViewClient webViewClient = this.f244;
        if (webViewClient != null) {
            webViewClient.onLoadResource(webView, str);
        } else {
            super.onLoadResource(webView, str);
        }
    }

    @Override // android.webkit.WebViewClient
    public final void onPageCommitVisible(WebView webView, String str) {
        try {
            this.f243.onPageCommitVisible(webView, str);
        } catch (Throwable th) {
            AbstractC1104.m8887(f242, StringFog.decrypt("t0hOc3BcQavSV2h+ThVbsZdUWW4iE0aVk11ZT3YdWrGXXg==\n", "8jo8HAJ8KMU=\n"), th, false);
        }
        WebViewClient webViewClient = this.f244;
        if (webViewClient != null) {
            webViewClient.onPageCommitVisible(webView, str);
        } else {
            super.onPageCommitVisible(webView, str);
        }
    }

    @Override // android.webkit.WebViewClient
    public final void onPageFinished(WebView webView, String str) {
        try {
            this.f243.onPageFinished(webView, str);
        } catch (Throwable th) {
            AbstractC1104.m8887(f242, StringFog.decrypt("huK8xmQWmwrj/ZrLWl+BEKb+q9s2WZw0over739Ymxer9ao=\n", "w5DOqRY28mQ=\n"), th, false);
        }
        WebViewClient webViewClient = this.f244;
        if (webViewClient != null) {
            webViewClient.onPageFinished(webView, str);
        } else {
            super.onPageFinished(webView, str);
        }
    }

    @Override // android.webkit.WebViewClient
    public final void onPageStarted(WebView webView, String str, Bitmap bitmap) {
        try {
            this.f243.onPageStarted(webView, str, bitmap);
        } catch (Throwable th) {
            AbstractC1104.m8887(f242, StringFog.decrypt("r7jGcfHPirzKp+B8z4aQpo+k0WyjgI2Ci63RTfeOkaaPrg==\n", "6sq0HoPv49I=\n"), th, false);
        }
        WebViewClient webViewClient = this.f244;
        if (webViewClient != null) {
            webViewClient.onPageStarted(webView, str, bitmap);
        } else {
            super.onPageStarted(webView, str, bitmap);
        }
    }

    @Override // android.webkit.WebViewClient
    public final void onReceivedClientCertRequest(WebView webView, ClientCertRequest clientCertRequest) {
        try {
            this.f243.onReceivedClientCertRequest(webView, clientCertRequest);
        } catch (Throwable th) {
            AbstractC1104.m8887(f242, StringFog.decrypt("br6qLCDEblkLoYwhHo10Q06ivTFyi2llTq+9KiSBY3RHpb0tJqdiRV+evTIngXRD\n", "K8zYQ1LkBzc=\n"), th, false);
        }
        try {
            WebViewClient webViewClient = this.f244;
            if (webViewClient != null) {
                webViewClient.onReceivedClientCertRequest(webView, clientCertRequest);
            } else {
                super.onReceivedClientCertRequest(webView, clientCertRequest);
            }
        } catch (Throwable th2) {
            AbstractC1104.m8887(f242, StringFog.decrypt("0dvqg6y3Wq20yvmAsv5dpLTG6oW5/l3j+8fKib3yWrXxzduAt/Jdt9fM6piM8kK28drs\n", "lKmY7N6XM8M=\n"), th2, false);
        }
    }

    @Override // android.webkit.WebViewClient
    public final void onReceivedError(WebView webView, int i, String str, String str2) {
        try {
            this.f243.onReceivedError(webView, i, str, str2);
        } catch (Throwable th) {
            AbstractC1104.m8887(f242, StringFog.decrypt("cetL87i0YpQU9G3+hv14jlH3XO7q+2WoUfpc9bzxb79G61bu\n", "NJk5nMqUC/o=\n"), th, false);
        }
        WebViewClient webViewClient = this.f244;
        if (webViewClient != null) {
            webViewClient.onReceivedError(webView, i, str, str2);
        } else {
            super.onReceivedError(webView, i, str, str2);
        }
    }

    @Override // android.webkit.WebViewClient
    public final void onReceivedHttpAuthRequest(WebView webView, HttpAuthHandler httpAuthHandler, String str, String str2) {
        try {
            this.f243.onReceivedHttpAuthRequest(webView, httpAuthHandler, str, str2);
        } catch (Throwable th) {
            AbstractC1104.m8887(f242, StringFog.decrypt("IxYwgIaKXPdGCRaNuMNG7QMKJ53UxVvLAwcnhoLPUdESEDKugd5dywMVN4qH3g==\n", "ZmRC7/SqNZk=\n"), th, false);
        }
        WebViewClient webViewClient = this.f244;
        if (webViewClient != null) {
            webViewClient.onReceivedHttpAuthRequest(webView, httpAuthHandler, str, str2);
        } else {
            super.onReceivedHttpAuthRequest(webView, httpAuthHandler, str, str2);
        }
    }

    @Override // android.webkit.WebViewClient
    public final void onReceivedHttpError(WebView webView, WebResourceRequest webResourceRequest, WebResourceResponse webResourceResponse) {
        try {
            this.f243.onReceivedHttpError(webView, webResourceRequest, webResourceResponse);
        } catch (Throwable th) {
            AbstractC1104.m8887(f242, StringFog.decrypt("624xjoLKyl6OcReDvIPQRMtyJpPQhc1iy38miIaPx3jaaDOkgpjMQg==\n", "rhxD4fDqozA=\n"), th, false);
        }
        WebViewClient webViewClient = this.f244;
        if (webViewClient != null) {
            webViewClient.onReceivedHttpError(webView, webResourceRequest, webResourceResponse);
        } else {
            super.onReceivedHttpError(webView, webResourceRequest, webResourceResponse);
        }
    }

    @Override // android.webkit.WebViewClient
    public final void onReceivedLoginRequest(WebView webView, String str, String str2, String str3) {
        try {
            this.f243.onReceivedLoginRequest(webView, str, str2, str3);
        } catch (Throwable th) {
            AbstractC1104.m8887(f242, StringFog.decrypt("HJ0xk/U0CrV5gheey30QrzyBJo6new2JPIwmlfFxB5c2iCqS1XESrjycNw==\n", "We9D/IcUY9s=\n"), th, false);
        }
        WebViewClient webViewClient = this.f244;
        if (webViewClient != null) {
            webViewClient.onReceivedLoginRequest(webView, str, str2, str3);
        } else {
            super.onReceivedLoginRequest(webView, str, str2, str3);
        }
    }

    @Override // android.webkit.WebViewClient
    public final void onReceivedSslError(WebView webView, SslErrorHandler sslErrorHandler, SslError sslError) {
        try {
            this.f243.onReceivedSslError(webView, sslErrorHandler, sslError);
        } catch (Throwable th) {
            AbstractC1104.m8887(f242, StringFog.decrypt("6/8Z2SQO7MqO4D/UGkf20MvjDsR2Qev2y+4O3yBL4ffd4S7EJEH3\n", "ro1rtlYuhaQ=\n"), th, false);
        }
        WebViewClient webViewClient = this.f244;
        if (webViewClient != null) {
            webViewClient.onReceivedSslError(webView, sslErrorHandler, sslError);
        } else {
            super.onReceivedSslError(webView, sslErrorHandler, sslError);
        }
    }

    @Override // android.webkit.WebViewClient
    public final boolean onRenderProcessGone(WebView webView, RenderProcessGoneDetail renderProcessGoneDetail) {
        try {
            this.f243.onRenderProcessGone(webView, renderProcessGoneDetail);
        } catch (Throwable th) {
            AbstractC1104.m8887(f242, StringFog.decrypt("Zv8zfgQl3FYD4BVzOmzGTEbjJGNWattqRuMldARVx1dA6DJiMWrbXQ==\n", "I41BEXYFtTg=\n"), th, false);
        }
        WebViewClient webViewClient = this.f244;
        if (webViewClient != null) {
            return webViewClient.onRenderProcessGone(webView, renderProcessGoneDetail);
        }
        return true;
    }

    @Override // android.webkit.WebViewClient
    public final void onScaleChanged(WebView webView, float f, float f2) {
        try {
            this.f243.onScaleChanged(webView, f, f2);
        } catch (Throwable th) {
            AbstractC1104.m8887(f242, StringFog.decrypt("XHA9SX2EthQ5bxtEQ82sDnxsKlQvy7EpemMjQ0zMvhR+Zys=\n", "GQJPJg+k33o=\n"), th, false);
        }
        WebViewClient webViewClient = this.f244;
        if (webViewClient != null) {
            webViewClient.onScaleChanged(webView, f, f2);
        } else {
            super.onScaleChanged(webView, f, f2);
        }
    }

    @Override // android.webkit.WebViewClient
    public final void onTooManyRedirects(WebView webView, Message message, Message message2) {
        try {
            this.f243.onTooManyRedirects(webView, message, message2);
        } catch (Throwable th) {
            AbstractC1104.m8887(f242, StringFog.decrypt("iD1CDk+CoBftImQDccu6DaghVRMdzactoiB9AFPbmxypJkIEXta6\n", "zU8wYT2iyXk=\n"), th, false);
        }
        WebViewClient webViewClient = this.f244;
        if (webViewClient != null) {
            webViewClient.onTooManyRedirects(webView, message, message2);
        } else {
            super.onTooManyRedirects(webView, message, message2);
        }
    }

    @Override // android.webkit.WebViewClient
    public final void onUnhandledKeyEvent(WebView webView, KeyEvent keyEvent) {
        try {
            this.f243.onUnhandledKeyEvent(webView, keyEvent);
        } catch (Throwable th) {
            AbstractC1104.m8887(f242, StringFog.decrypt("FU6LyTcyA4FwUa3ECXsZmzVSnNRlfQS6PlSYyCF+D4sbWYDjM3cEmw==\n", "UDz5pkUSau8=\n"), th, false);
        }
        WebViewClient webViewClient = this.f244;
        if (webViewClient != null) {
            webViewClient.onUnhandledKeyEvent(webView, keyEvent);
        } else {
            super.onUnhandledKeyEvent(webView, keyEvent);
        }
    }

    @Override // android.webkit.WebViewClient
    public final WebResourceResponse shouldInterceptRequest(WebView webView, String str) {
        try {
            this.f243.shouldInterceptRequest(webView, str);
        } catch (Throwable th) {
            AbstractC1104.m8887(f242, StringFog.decrypt("LFXjFNW4TDBJSsUZ6/FWKgxJ9AmH600xHEv1MsnsQCwKQuEP9f1UKwxU5Q==\n", "aSeRe6eYJV4=\n"), th, false);
        }
        WebViewClient webViewClient = this.f244;
        return webViewClient != null ? webViewClient.shouldInterceptRequest(webView, str) : super.shouldInterceptRequest(webView, str);
    }

    @Override // android.webkit.WebViewClient
    public final boolean shouldOverrideKeyEvent(WebView webView, KeyEvent keyEvent) {
        try {
            this.f243.shouldOverrideKeyEvent(webView, keyEvent);
        } catch (Throwable th) {
            AbstractC1104.m8887(f242, StringFog.decrypt("y1ezdXLf6yyuSJV4TJbxNutLpGggjOot+0mlVXaa8DDnQaRRZYbHNOtLtQ==\n", "jiXBGgD/gkI=\n"), th, false);
        }
        WebViewClient webViewClient = this.f244;
        return webViewClient != null ? webViewClient.shouldOverrideKeyEvent(webView, keyEvent) : super.shouldOverrideKeyEvent(webView, keyEvent);
    }

    @Override // android.webkit.WebViewClient
    public final boolean shouldOverrideUrlLoading(WebView webView, String str) {
        return m8341(webView, str, false);
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final boolean m8341(WebView webView, String str, boolean z) {
        try {
            if (this.f243.shouldOverrideUrlLoading(webView, str) || z) {
                WebViewClient webViewClient = this.f244;
                if (webViewClient instanceof P0) {
                    ((P0) webViewClient).m8341(webView, str, true);
                }
                return true;
            }
        } catch (Throwable th) {
            AbstractC1104.m8887(f242, StringFog.decrypt("VmW4Ya5fT/Izep5skBZV6HZ5r3z8DE7zZnuuQaoaVO56c69brhNq83Jzo2C7V1Pufz4=\n", "ExfKDtx/Jpw=\n"), th, false);
        }
        WebViewClient webViewClient2 = this.f244;
        if (webViewClient2 != null && !webViewClient2.getClass().equals(WebViewClient.class)) {
            try {
                return this.f244.shouldOverrideUrlLoading(webView, str);
            } catch (Throwable th2) {
                AbstractC1104.m8887(f242, StringFog.decrypt("129kOamSuWaycFkkstW5ZtFxfzO1xvB7+nJjOr/9pm3gb38yvueiZN5ydzKy3Lcg5296fw==\n", "kh0WVtuy0Ag=\n"), th2, false);
            }
        }
        return super.shouldOverrideUrlLoading(webView, str);
    }

    @Override // android.webkit.WebViewClient
    public final boolean shouldOverrideUrlLoading(WebView webView, WebResourceRequest webResourceRequest) {
        return m8340(webView, webResourceRequest, false);
    }

    @Override // android.webkit.WebViewClient
    public final void onReceivedError(WebView webView, WebResourceRequest webResourceRequest, WebResourceError webResourceError) {
        try {
            this.f243.onReceivedError(webView, webResourceRequest, webResourceError);
        } catch (Throwable th) {
            AbstractC1104.m8887(f242, StringFog.decrypt("QIHtWYoxbZQlnstUtHh3jmCd+kTYfmqoYJD6X450YL93gfBE\n", "BfOfNvgRBPo=\n"), th, false);
        }
        WebViewClient webViewClient = this.f244;
        if (webViewClient != null) {
            webViewClient.onReceivedError(webView, webResourceRequest, webResourceError);
        } else {
            super.onReceivedError(webView, webResourceRequest, webResourceError);
        }
    }

    @Override // android.webkit.WebViewClient
    public final WebResourceResponse shouldInterceptRequest(WebView webView, WebResourceRequest webResourceRequest) {
        try {
            this.f243.shouldInterceptRequest(webView, webResourceRequest);
        } catch (Throwable th) {
            AbstractC1104.m8887(f242, StringFog.decrypt("qN89p4Tf0UTNwBuqupbLXojDKrrWjNBFmMErgZiL3ViOyD+8pJrJX4jeOw==\n", "7a1PyPb/uCo=\n"), th, false);
        }
        WebViewClient webViewClient = this.f244;
        if (webViewClient != null) {
            return webViewClient.shouldInterceptRequest(webView, webResourceRequest);
        }
        return super.shouldInterceptRequest(webView, webResourceRequest);
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final boolean m8340(WebView webView, WebResourceRequest webResourceRequest, boolean z) {
        try {
            if (this.f243.shouldOverrideUrlLoading(webView, webResourceRequest) || z) {
                WebViewClient webViewClient = this.f244;
                if (webViewClient instanceof P0) {
                    ((P0) webViewClient).m8340(webView, webResourceRequest, true);
                }
                return true;
            }
        } catch (Throwable th) {
            AbstractC1104.m8887(f242, StringFog.decrypt("RFyEkY+gUB0hQ6KcselKB2RAk4zd81EcdEKSsYvlSwFoSpOrj+x1HGBKn5CaqEsWcFuTjYmp\n", "AS72/v2AOXM=\n"), th, false);
        }
        WebViewClient webViewClient2 = this.f244;
        if (webViewClient2 != null) {
            try {
                return webViewClient2.shouldOverrideUrlLoading(webView, webResourceRequest);
            } catch (Throwable th2) {
                AbstractC1104.m8887(f242, StringFog.decrypt("3Rl04eQ5zhW4Bkn8/37OFdsHb+v4bYcI8ARz4vJW0R7qGW/q80zVF9QEZ+r/d8BT6g53+/Nq01I=\n", "mGsGjpYZp3s=\n"), th2, false);
            }
        }
        return super.shouldOverrideUrlLoading(webView, webResourceRequest);
    }

    /* JADX WARN: Code duplicated, block: B:14:0x0025  */
    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0462
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8326(C1013 c1013, String str, ArrayList arrayList, C0566 c0566, C0704 c0704) {
        byte b;
        try {
            int iHashCode = str.hashCode();
            if (iHashCode != 368095040) {
                if (iHashCode == 381550901 && str.equals(f241)) {
                    b = 0;
                } else {
                    b = -1;
                }
            } else if (str.equals(f240)) {
                b = 1;
            } else {
                b = -1;
            }
            if (b == 0) {
                return this.f244;
            }
            if (b != 1) {
                new C1742c0(c1013, c0704, f242, str).m8596(c1013.m8859());
                return null;
            }
            return this.f243;
        } catch (Exception e) {
            AbstractC0728.m8662(c1013.m8859(), AbstractC0970.m8850("Mg==\n", "FfPs3a1DRCY=\n", AbstractC0502.m8559("ztqjqw+o2VbixLTkGPDLXf7cuKoaqPlb6f64oQrLwlfuxqWAGOvBTOrcvrZd5s9K4t605BDt2lbk\nzPHj\n", "i6jRxH2Irj4=\n", new StringBuilder(), str)), e, null);
        }
    }
}
