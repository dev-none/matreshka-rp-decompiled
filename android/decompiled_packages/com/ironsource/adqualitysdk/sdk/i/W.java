package com.ironsource.adqualitysdk.sdk.i;

import com.ironsource.adqualitysdk.sdk.StringFog;
import com.unity3d.services.core.configuration.Configuration;
import com.unity3d.services.core.configuration.ErrorState;
import com.unity3d.services.core.webview.WebView;
import com.unity3d.services.core.webview.WebViewApp;
import com.unity3d.services.core.webview.bridge.Invocation;
import com.unity3d.services.core.webview.bridge.NativeCallback;
import java.lang.reflect.Method;
import java.util.Arrays;

/* JADX INFO: loaded from: classes6.dex */
public final class W extends WebViewApp implements InterfaceC0486 {

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final /* synthetic */ Y f267;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final C0566 f268;

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final WebViewApp f269;

    public W(Y y, WebViewApp webViewApp, C0566 c0566) {
        this.f267 = y;
        this.f269 = webViewApp;
        this.f268 = c0566;
    }

    public final void addCallback(NativeCallback nativeCallback) {
        this.f267.m8501(this, this.f268, StringFog.decrypt("2YZQ3GdVKun+kxzralQeyeKPUOttWw==\n", "juMyig4wXag=\n"), nativeCallback);
        WebViewApp webViewApp = this.f269;
        if (webViewApp != null) {
            webViewApp.addCallback(nativeCallback);
        }
    }

    public final NativeCallback getCallback(String str) {
        this.f267.m8501(this, this.f268, StringFog.decrypt("j2VI5eryfCCocATU5uNIALRsSNLg/A==\n", "2AAqs4OXC2E=\n"), str);
        WebViewApp webViewApp = this.f269;
        if (webViewApp != null) {
            return webViewApp.getCallback(str);
        }
        return null;
    }

    public final Configuration getConfiguration() {
        this.f267.m8501(this, this.f268, StringFog.decrypt("ZtOzDCUahERBxv89KQuwal/QuD05DZJxWNm/\n", "MbbRWkx/8wU=\n"), new Object[0]);
        WebViewApp webViewApp = this.f269;
        if (webViewApp != null) {
            return webViewApp.getConfiguration();
        }
        return null;
    }

    public final ErrorState getErrorStateFromWebAppCode() {
        this.f267.m8501(this, this.f268, StringFog.decrypt("SWqmqTHTOdFuf+qYPcIL4mxgtqws1zr1WH2rkg/TLNFuf4eQPNM=\n", "Hg/E/1i2TpA=\n"), new Object[0]);
        WebViewApp webViewApp = this.f269;
        if (webViewApp != null) {
            return webViewApp.getErrorStateFromWebAppCode();
        }
        return null;
    }

    public final int getWebAppFailureCode() {
        this.f267.m8501(this, this.f268, StringFog.decrypt("jyFZVKYJwdGoNBVlqhjh9boFS3KJDd/8rTZeQaAI0w==\n", "2EQ7As9stpA=\n"), new Object[0]);
        WebViewApp webViewApp = this.f269;
        if (webViewApp != null) {
            return webViewApp.getWebAppFailureCode();
        }
        return 0;
    }

    public final String getWebAppFailureMessage() {
        this.f267.m8501(this, this.f268, StringFog.decrypt("92rgyeMsmDbQf6z47z24EsJO8u/MKIYb1X3n0u86nBbHag==\n", "oA+Cn4pJ73c=\n"), new Object[0]);
        WebViewApp webViewApp = this.f269;
        if (webViewApp != null) {
            return webViewApp.getWebAppFailureMessage();
        }
        return null;
    }

    public final WebView getWebView() {
        this.f267.m8501(this, this.f268, StringFog.decrypt("rLcmQwOepaWLompyD4+FgZmELXAd\n", "+9JEFWr70uQ=\n"), new Object[0]);
        WebViewApp webViewApp = this.f269;
        if (webViewApp != null) {
            return webViewApp.getWebView();
        }
        return null;
    }

    public final boolean invokeCallback(Invocation invocation) {
        this.f267.m8501(this, this.f268, StringFog.decrypt("tz2tNOsgW2qQKOEL7DNDQIUbrg7uJ01Iiw==\n", "4FjPYoJFLCs=\n"), invocation);
        WebViewApp webViewApp = this.f269;
        if (webViewApp != null) {
            return webViewApp.invokeCallback(invocation);
        }
        return false;
    }

    public final boolean invokeMethod(String str, String str2, Method method, Object... objArr) {
        this.f267.m8501(this, this.f268, StringFog.decrypt("W3q7bQVwtkV8b/dSAmOub2lSvE8EeqU=\n", "DB/ZO2wVwQQ=\n"), str, str2, method, Arrays.asList(objArr));
        WebViewApp webViewApp = this.f269;
        if (webViewApp != null) {
            return webViewApp.invokeMethod(str, str2, method, objArr);
        }
        return false;
    }

    public final boolean isWebAppInitialized() {
        this.f267.m8501(this, this.f268, StringFog.decrypt("FwV0LZFQvX0wEDgSi2KvXgEQZjKWXL5VIQx/AZ1R\n", "QGAWe/g1yjw=\n"), new Object[0]);
        WebViewApp webViewApp = this.f269;
        if (webViewApp != null) {
            return webViewApp.isWebAppInitialized();
        }
        return false;
    }

    public final boolean isWebAppLoaded() {
        this.f267.m8501(this, this.f268, StringFog.decrypt("dIGWvhJ1N/RTlNqBCEcl12KUhKQUcSTQRw==\n", "I+T06HsQQLU=\n"), new Object[0]);
        WebViewApp webViewApp = this.f269;
        if (webViewApp != null) {
            return webViewApp.isWebAppLoaded();
        }
        return false;
    }

    public final void removeCallback(NativeCallback nativeCallback) {
        this.f267.m8501(this, this.f268, StringFog.decrypt("zerzjjlKWzvq/7+qNUJDDP/M8LQ8TU0Z8Q==\n", "mo+R2FAvLHo=\n"), nativeCallback);
        WebViewApp webViewApp = this.f269;
        if (webViewApp != null) {
            webViewApp.removeCallback(nativeCallback);
        }
    }

    public final void resetWebViewAppInitialization() {
        this.f267.m8501(this, this.f268, StringFog.decrypt("T3dJzqAlfFFoYgXqrDNuZE93Sc6gJXxRaGJi9qA0YnF0e1H5vSlkfg==\n", "GBIrmMlACxA=\n"), new Object[0]);
        WebViewApp webViewApp = this.f269;
        if (webViewApp != null) {
            webViewApp.resetWebViewAppInitialization();
        }
    }

    public final boolean sendEvent(Enum r5, Enum r6, Object... objArr) {
        this.f267.m8501(this, this.f268, StringFog.decrypt("nzO3kDC23aC4Jvu1PL3OpL4zu7I=\n", "yFbVxlnTquE=\n"), r5, r6, Arrays.asList(objArr));
        WebViewApp webViewApp = this.f269;
        if (webViewApp != null) {
            return webViewApp.sendEvent(r5, r6, objArr);
        }
        return false;
    }

    public final void setConfiguration(Configuration configuration) {
        this.f267.m8501(this, this.f268, StringFog.decrypt("zKU7gKHbEfHrsHelrcol3/WmMLG9zAfE8q83\n", "m8BZ1si+ZrA=\n"), configuration);
        WebViewApp webViewApp = this.f269;
        if (webViewApp != null) {
            webViewApp.setConfiguration(configuration);
        }
    }

    public final void setWebAppFailureCode(int i) {
        this.f267.m8501(this, this.f268, StringFog.decrypt("z/pI1HWs2xzo7wTxeb37OPreWvJaqMUx7e1PwXOtyQ==\n", "mJ8qghzJrF0=\n"), Integer.valueOf(i));
        WebViewApp webViewApp = this.f269;
        if (webViewApp != null) {
            webViewApp.setWebAppFailureCode(i);
        }
    }

    public final void setWebAppFailureMessage(String str) {
        this.f267.m8501(this, this.f268, StringFog.decrypt("d+t8EoaizOtQ/jA3irPsz0LPbjSpptLGVfx7CYq0yMtH6w==\n", "II4eRO/Hu6o=\n"), str);
        WebViewApp webViewApp = this.f269;
        if (webViewApp != null) {
            webViewApp.setWebAppFailureMessage(str);
        }
    }

    public final void setWebAppInitialized(boolean z) {
        this.f267.m8501(this, this.f268, StringFog.decrypt("9A4oQkBK7sXTG2RnTFvO4cEqOmRgQfDwygomfVNK/Q==\n", "o2tKFCkvmYQ=\n"), Boolean.valueOf(z));
        WebViewApp webViewApp = this.f269;
        if (webViewApp != null) {
            webViewApp.setWebAppInitialized(z);
        }
    }

    public final void setWebAppLoaded(boolean z) {
        this.f267.m8501(this, this.f268, StringFog.decrypt("CwRWp9CvdLYsERqC3L5Ukj4gRIH1pWKTOQU=\n", "XGE08bnKA/c=\n"), Boolean.valueOf(z));
        WebViewApp webViewApp = this.f269;
        if (webViewApp != null) {
            webViewApp.setWebAppLoaded(z);
        }
    }

    public final void setWebView(WebView webView) {
        this.f267.m8501(this, this.f268, StringFog.decrypt("8I6pOxMUpT/Xm+UeHwWFG8W9oggN\n", "p+vLbXpx0n4=\n"), webView);
        WebViewApp webViewApp = this.f269;
        if (webViewApp != null) {
            webViewApp.setWebView(webView);
        }
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0486
    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final Object mo8342() {
        return this.f269;
    }
}
