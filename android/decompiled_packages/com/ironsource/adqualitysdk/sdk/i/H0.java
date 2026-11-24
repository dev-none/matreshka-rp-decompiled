package com.ironsource.adqualitysdk.sdk.i;

import android.graphics.Bitmap;
import android.os.Message;
import android.view.View;
import android.webkit.ConsoleMessage;
import android.webkit.GeolocationPermissions;
import android.webkit.JsPromptResult;
import android.webkit.JsResult;
import android.webkit.PermissionRequest;
import android.webkit.ValueCallback;
import android.webkit.WebChromeClient;
import android.webkit.WebStorage;
import android.webkit.WebView;
import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes6.dex */
public final class H0 extends WebChromeClient implements InterfaceC0462 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final WebChromeClient f210;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public static final String f209 = StringFog.decrypt("s2oNHEgfCSmBTAM2RQMSAIFsAC1BGQk2\n", "5A9vXyBtZkQ=\n");

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public static final String f208 = StringFog.decrypt("N1D9bb4BI4o1Ud5friM7iD9Y7HmgCTaUJA==\n", "UDWJOsxgU/o=\n");

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public static final String f207 = StringFog.decrypt("l4C61Epkha2zjbzvRVajo5mAoPQ=\n", "8OXOgCgz4M8=\n");

    public H0(WebChromeClient webChromeClient) {
        this.f210 = webChromeClient;
    }

    @Override // android.webkit.WebChromeClient
    public final Bitmap getDefaultVideoPoster() {
        try {
            this.f210.getDefaultVideoPoster();
        } catch (Throwable th) {
            AbstractC1104.m8887(f209, StringFog.decrypt("6oH0cZ3EHJqPntJ8o40GgMqd42zPgxCA65bgf5qIAaLGl+Nxv4sGgMqB\n", "r/OGHu/kdfQ=\n"), th, false);
        }
        return super.getDefaultVideoPoster();
    }

    @Override // android.webkit.WebChromeClient
    public final View getVideoLoadingProgressView() {
        try {
            this.f210.getVideoLoadingProgressView();
        } catch (Throwable th) {
            AbstractC1104.m8887(f209, StringFog.decrypt("aU4k1NDfGjgMUQLZ7pYAIklSM8mCmBYielUy3s2zHDdIVTjc8o0cMV5ZJcj0lhYh\n", "LDxWu6L/c1Y=\n"), th, false);
        }
        return super.getVideoLoadingProgressView();
    }

    @Override // android.webkit.WebChromeClient
    public final void getVisitedHistory(ValueCallback valueCallback) {
        try {
            this.f210.getVisitedHistory(valueCallback);
        } catch (Throwable th) {
            AbstractC1104.m8887(f209, StringFog.decrypt("e3ofQy5PsqEeZTlOEAaou1tmCF58CL67aGEeRSgKv4dXexlDLhY=\n", "PghtLFxv288=\n"), th, false);
        }
        super.getVisitedHistory(valueCallback);
    }

    @Override // android.webkit.WebChromeClient
    public final void onCloseWindow(WebView webView) {
        try {
            this.f210.onCloseWindow(webView);
        } catch (Throwable th) {
            AbstractC1104.m8887(f209, StringFog.decrypt("BRq6LOlZjtdgBZwh1xCUzSUGrTG7Fon6LAe7JswQid0vHw==\n", "QGjIQ5t557k=\n"), th, false);
        }
        super.onCloseWindow(webView);
    }

    @Override // android.webkit.WebChromeClient
    public final void onConsoleMessage(String str, int i, String str2) {
        try {
            this.f210.onConsoleMessage(str, i, str2);
        } catch (Throwable th) {
            AbstractC1104.m8887(f209, StringFog.decrypt("R5V3O1E/VQ0iilE2b3ZPF2eJYCYDcFIgbYl2O096cQZxlGQzRg==\n", "AucFVCMfPGM=\n"), th, false);
        }
        super.onConsoleMessage(str, i, str2);
    }

    @Override // android.webkit.WebChromeClient
    public final boolean onCreateWindow(WebView webView, boolean z, boolean z2, Message message) {
        try {
            this.f210.onCreateWindow(webView, z, z2, message);
        } catch (Throwable th) {
            AbstractC1104.m8887(f209, StringFog.decrypt("wH6BomFz7yWlYaevXzr1P+Bilr8zPOgI92mSuXYE7yXhY4Q=\n", "hQzzzRNThks=\n"), th, false);
        }
        return super.onCreateWindow(webView, z, z2, message);
    }

    @Override // android.webkit.WebChromeClient
    public final void onExceededDatabaseQuota(String str, String str2, long j, long j2, long j3, WebStorage.QuotaUpdater quotaUpdater) {
        try {
            this.f210.onExceededDatabaseQuota(str, str2, j, j2, j3, quotaUpdater);
        } catch (Throwable th) {
            AbstractC1104.m8887(f209, StringFog.decrypt("JPihVV9yTy1B54dYYTtVNwTktkgNPUgGGem2X0k3QgcA/rJYTCFDEhTlp1s=\n", "YYrTOi1SJkM=\n"), th, false);
        }
        super.onExceededDatabaseQuota(str, str2, j, j2, j3, quotaUpdater);
    }

    @Override // android.webkit.WebChromeClient
    public final void onGeolocationPermissionsHidePrompt() {
        try {
            this.f210.onGeolocationPermissionsHidePrompt();
        } catch (Throwable th) {
            AbstractC1104.m8887(f209, StringFog.decrypt("wcZ+5TrpIbCk2VjoBKA7quHaafhopiaZ4dtg5SuoPLfr2lzvOqQhrffdY+Q7gSG64eR+5SW5PA==\n", "hLQMikjJSN4=\n"), th, false);
        }
        super.onGeolocationPermissionsHidePrompt();
    }

    @Override // android.webkit.WebChromeClient
    public final void onGeolocationPermissionsShowPrompt(String str, GeolocationPermissions.Callback callback) {
        try {
            this.f210.onGeolocationPermissionsShowPrompt(str, callback);
        } catch (Throwable th) {
            AbstractC1104.m8887(f209, StringFog.decrypt("SJ/bMq0A2AAtgP0/k0nCGmiDzC//T98paILFMrxBxQdig/k4rU3YHX6ExjOsc9kBer3bMrJQxQ==\n", "De2pXd8gsW4=\n"), th, false);
        }
        super.onGeolocationPermissionsShowPrompt(str, callback);
    }

    @Override // android.webkit.WebChromeClient
    public final void onHideCustomView() {
        try {
            this.f210.onHideCustomView();
        } catch (Throwable th) {
            AbstractC1104.m8887(f209, StringFog.decrypt("Z7sqmC9FdMUCpAyVEQxu30enPYV9CnPjS609tCgWacRPnzGSKg==\n", "IslY911lHas=\n"), th, false);
        }
        super.onHideCustomView();
    }

    @Override // android.webkit.WebChromeClient
    public final boolean onJsAlert(WebView webView, String str, String str2, JsResult jsResult) {
        try {
            this.f210.onJsAlert(webView, str, str2, jsResult);
        } catch (Throwable th) {
            AbstractC1104.m8887(f209, StringFog.decrypt("PoQv0ACYSSJbmwndPtFTOB6YOM1S104GCLcx2gDM\n", "e/Zdv3K4IEw=\n"), th, false);
        }
        return super.onJsAlert(webView, str, str2, jsResult);
    }

    @Override // android.webkit.WebChromeClient
    public final boolean onJsBeforeUnload(WebView webView, String str, String str2, JsResult jsResult) {
        try {
            this.f210.onJsBeforeUnload(webView, str, str2, jsResult);
        } catch (Throwable th) {
            AbstractC1104.m8887(f209, StringFog.decrypt("a59zyZOCXMcOgFXErctG3UuDZNTBzVvjXa9kwI7QUPxAgW7HhQ==\n", "Lu0BpuGiNak=\n"), th, false);
        }
        return super.onJsBeforeUnload(webView, str, str2, jsResult);
    }

    @Override // android.webkit.WebChromeClient
    public final boolean onJsConfirm(WebView webView, String str, String str2, JsResult jsResult) {
        try {
            this.f210.onJsConfirm(webView, str, str2, jsResult);
        } catch (Throwable th) {
            AbstractC1104.m8887(f209, StringFog.decrypt("77Qw0MqiANmKqxbd9Osaw8+oJ82Y7Qf92YUt0d7rG9o=\n", "qsZCv7iCabc=\n"), th, false);
        }
        return super.onJsConfirm(webView, str, str2, jsResult);
    }

    @Override // android.webkit.WebChromeClient
    public final boolean onJsPrompt(WebView webView, String str, String str2, String str3, JsPromptResult jsPromptResult) {
        try {
            try {
                this.f210.onJsPrompt(webView, str, str2, str3, jsPromptResult);
                webView = webView;
                str = str;
                str2 = str2;
                str3 = str3;
                jsPromptResult = jsPromptResult;
            } catch (Throwable th) {
                th = th;
                webView = webView;
                str = str;
                str2 = str2;
                str3 = str3;
                jsPromptResult = jsPromptResult;
                AbstractC1104.m8887(f209, StringFog.decrypt("Io0X4ewy1ZtHkjHs0nvPgQKRAPy+fdK/FK8X4fNiyA==\n", "Z/9ljp4SvPU=\n"), th, false);
            }
        } catch (Throwable th2) {
            th = th2;
        }
        return super.onJsPrompt(webView, str, str2, str3, jsPromptResult);
    }

    @Override // android.webkit.WebChromeClient
    public final boolean onJsTimeout() {
        try {
            this.f210.onJsTimeout();
        } catch (Throwable th) {
            AbstractC1104.m8887(f209, StringFog.decrypt("4+iepIkN6rWG97ipt0Twr8P0ibnbQu2R1c6Fpp5C9q8=\n", "pprsy/stg9s=\n"), th, false);
        }
        return super.onJsTimeout();
    }

    @Override // android.webkit.WebChromeClient
    public final void onProgressChanged(WebView webView, int i) {
        try {
            this.f210.onProgressChanged(webView, i);
        } catch (Throwable th) {
            AbstractC1104.m8887(f209, StringFog.decrypt("fttgCuJwK0EbxEYH3DkxW17HdxewPyx/ScZ1F/UjMWxTyHwC9TQ=\n", "O6kSZZBQQi8=\n"), th, false);
        }
        super.onProgressChanged(webView, i);
    }

    @Override // android.webkit.WebChromeClient
    public final void onReceivedIcon(WebView webView, Bitmap bitmap) {
        try {
            this.f210.onReceivedIcon(webView, bitmap);
        } catch (Throwable th) {
            AbstractC1104.m8887(f209, StringFog.decrypt("m1rwr84pP77+Rdai8GAlpLtG57KcZjiCu0vnqcpsMpm9R+w=\n", "3iiCwLwJVtA=\n"), th, false);
        }
        super.onReceivedIcon(webView, bitmap);
    }

    @Override // android.webkit.WebChromeClient
    public final void onReceivedTitle(WebView webView, String str) {
        try {
            this.f210.onReceivedTitle(webView, str);
        } catch (Throwable th) {
            AbstractC1104.m8887(f209, StringFog.decrypt("p+fiGTdrX1HC+MQUCSJFS4f79QRlJFhth/b1HzMuUmuL4fwT\n", "4pWQdkVLNj8=\n"), th, false);
        }
        super.onReceivedTitle(webView, str);
    }

    @Override // android.webkit.WebChromeClient
    public final void onReceivedTouchIconUrl(WebView webView, String str, boolean z) {
        try {
            this.f210.onReceivedTouchIconUrl(webView, str, z);
        } catch (Throwable th) {
            AbstractC1104.m8887(f209, StringFog.decrypt("GEjY8RJinRV9V/78LCuHDzhUz+xALZopOFnP9xYnkC8yT8n2KSGbFQhIxg==\n", "XTqqnmBC9Hs=\n"), th, false);
        }
        super.onReceivedTouchIconUrl(webView, str, z);
    }

    @Override // android.webkit.WebChromeClient
    public final void onRequestFocus(WebView webView) {
        try {
            this.f210.onRequestFocus(webView);
        } catch (Throwable th) {
            AbstractC1104.m8887(f209, StringFog.decrypt("7d43iwqQfwyIwRGGNNllFs3CIJZY33gwzd0wgQvEUA3L2TY=\n", "qKxF5HiwFmI=\n"), th, false);
        }
        super.onRequestFocus(webView);
    }

    @Override // android.webkit.WebChromeClient
    public final void onShowCustomView(View view, WebChromeClient.CustomViewCallback customViewCallback) {
        try {
            this.f210.onShowCustomView(view, customViewCallback);
        } catch (Throwable th) {
            AbstractC1104.m8887(f209, StringFog.decrypt("YN19Gx4z8wUFwlsWIHrpH0DBagZMfPQ4TcB4Nxlg7gRI+WYRGw==\n", "Ja8PdGwTmms=\n"), th, false);
        }
        super.onShowCustomView(view, customViewCallback);
    }

    /* JADX WARN: Code duplicated, block: B:14:0x0025  */
    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0462
    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final Object mo8326(C1013 c1013, String str, ArrayList arrayList, C0566 c0566, C0704 c0704) {
        byte b;
        try {
            int iHashCode = str.hashCode();
            if (iHashCode != 1395849045) {
                if (iHashCode == 1442029578 && str.equals(f208)) {
                    b = 0;
                } else {
                    b = -1;
                }
            } else if (str.equals(f207)) {
                b = 1;
            } else {
                b = -1;
            }
            if (b == 0) {
                return null;
            }
            if (b == 1) {
                return this.f210;
            }
            new C1742c0(c1013, c0704, f209, str).m8596(c1013.m8859());
            return null;
        } catch (Exception e) {
            AbstractC0728.m8662(c1013.m8859(), AbstractC0970.m8850("8Q==\n", "1kLwncvJONc=\n", AbstractC0502.m8559("4Sunc81PVVPNNbA82hdHWNEtvHLYT3Vexhq9btACR3jIMLByyytHWMsrtGjQHQJVxS28atpPT17Q\nMbp4n0g=\n", "pFnVHL9vIjs=\n", new StringBuilder(), str)), e, null);
        }
    }

    @Override // android.webkit.WebChromeClient
    public final void onPermissionRequest(PermissionRequest permissionRequest) {
        try {
            this.f210.onPermissionRequest(permissionRequest);
        } catch (Throwable th) {
            AbstractC1104.m8887(f209, StringFog.decrypt("hD2ORPVeXXThIqhJyxdHbqQhmVmnEVpKpD2RQvQNXXWvHZla8htHbg==\n", "wU/8K4d+NBo=\n"), th, false);
        }
        try {
            super.onPermissionRequest(permissionRequest);
        } catch (Throwable th2) {
            AbstractC1104.m8887(f209, StringFog.decrypt("z/1gBObQVvGq7HMH+JlR+KrgYALzmVG/5eFCDuadVuz55n0FxpVO6u/8Zg==\n", "io8Sa5TwP58=\n"), th2, false);
        }
    }

    @Override // android.webkit.WebChromeClient
    public final void onPermissionRequestCanceled(PermissionRequest permissionRequest) {
        try {
            this.f210.onPermissionRequestCanceled(permissionRequest);
        } catch (Throwable th) {
            AbstractC1104.m8887(f209, StringFog.decrypt("4XLkqqcoGX2EbcKnmWEDZ8Fu87f1Zx5DwXL7rKZ7GXzKUvO0oG0DZ+dh+KawZBV3\n", "pACWxdUIcBM=\n"), th, false);
        }
        try {
            super.onPermissionRequestCanceled(permissionRequest);
        } catch (Throwable th2) {
            AbstractC1104.m8887(f209, StringFog.decrypt("I8RLnvUpttZG1Vid62Cx30bZS5jgYLGYCdhplPVktssV31af1WyuzQPFTbLmZ7zdCtNd\n", "ZrY58YcJ37g=\n"), th2, false);
        }
    }

    @Override // android.webkit.WebChromeClient
    public final boolean onShowFileChooser(WebView webView, ValueCallback valueCallback, WebChromeClient.FileChooserParams fileChooserParams) {
        try {
            this.f210.onShowFileChooser(webView, valueCallback, fileChooserParams);
        } catch (Throwable th) {
            AbstractC1104.m8887(f209, StringFog.decrypt("nmCuu1JZ7yX7f4i2bBD1P758uaYAFugYs32rkkkV4wizfbOnRQs=\n", "2xLc1CB5hks=\n"), th, false);
        }
        return super.onShowFileChooser(webView, valueCallback, fileChooserParams);
    }

    @Override // android.webkit.WebChromeClient
    public final boolean onConsoleMessage(ConsoleMessage consoleMessage) {
        try {
            this.f210.onConsoleMessage(consoleMessage);
        } catch (Throwable th) {
            AbstractC1104.m8887(f209, StringFog.decrypt("7k0e5iSDNZ+LUjjrGsovhc5RCft2zDKyxFEf5jrGEZTYTA3uMw==\n", "qz9siVajXPE=\n"), th, false);
        }
        return super.onConsoleMessage(consoleMessage);
    }

    @Override // android.webkit.WebChromeClient
    public final void onShowCustomView(View view, int i, WebChromeClient.CustomViewCallback customViewCallback) {
        try {
            this.f210.onShowCustomView(view, i, customViewCallback);
        } catch (Throwable th) {
            AbstractC1104.m8887(f209, StringFog.decrypt("Jsg70nSBXltD1x3fSshEQQbULM8mzllmC9U+/nPSQ1oO7CDYcQ==\n", "Y7pJvQahNzU=\n"), th, false);
        }
        super.onShowCustomView(view, i, customViewCallback);
    }
}
