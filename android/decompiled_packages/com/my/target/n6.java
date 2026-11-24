package com.my.target;

import android.graphics.Rect;
import android.net.Uri;
import android.text.TextUtils;
import android.webkit.ConsoleMessage;
import android.webkit.JsResult;
import android.webkit.WebChromeClient;
import android.webkit.WebResourceRequest;
import android.webkit.WebSettings;
import android.webkit.WebView;
import android.webkit.WebViewClient;
import androidx.core.app.NotificationCompat;
import com.google.common.base.Ascii;
import com.my.tracker.ads.AdFormat;
import io.appmetrica.analytics.coreutils.internal.StringUtils;
import java.net.URI;
import java.util.ArrayList;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes6.dex */
public class n6 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final String f4722a;
    public final WebViewClient b = new b();
    public a c;
    public s6 d;
    public boolean e;
    public boolean f;

    public interface a {
        void a();

        void a(Uri uri);

        void a(n6 n6Var, WebView webView);

        void a(boolean z);

        boolean a(float f, float f2);

        boolean a(int i, int i2, int i3, int i4, boolean z, int i5);

        boolean a(ConsoleMessage consoleMessage, n6 n6Var);

        boolean a(String str);

        boolean a(String str, JsResult jsResult);

        boolean a(boolean z, p6 p6Var);

        void b();

        boolean b(Uri uri);

        void c();

        boolean d();
    }

    public static class c {
        /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
        /* JADX WARN: Code duplicated, block: B:29:0x005b  */
        public static int a(String str) {
            byte b;
            if (str == null) {
                return 53;
            }
            switch (str) {
                case "center":
                    b = 1;
                    break;
                case "top-right":
                    b = 6;
                    break;
                case "top-left":
                    b = 0;
                    break;
                case "bottom-left":
                    b = 2;
                    break;
                case "bottom-right":
                    b = 3;
                    break;
                case "bottom-center":
                    b = 5;
                    break;
                case "top-center":
                    b = 4;
                    break;
                default:
                    b = -1;
                    break;
            }
            if (b == 0) {
                return 51;
            }
            if (b == 1) {
                return 17;
            }
            if (b == 2) {
                return 83;
            }
            if (b == 3) {
                return 85;
            }
            if (b != 4) {
                return b != 5 ? 53 : 81;
            }
            return 49;
        }
    }

    public class d extends WebChromeClient {
        public d() {
        }

        @Override // android.webkit.WebChromeClient
        public boolean onConsoleMessage(ConsoleMessage consoleMessage) {
            gb.a("MraidBridge: JS console message - " + consoleMessage.message() + " - at line " + consoleMessage.lineNumber());
            n6 n6Var = n6.this;
            a aVar = n6Var.c;
            return aVar != null ? aVar.a(consoleMessage, n6Var) : super.onConsoleMessage(consoleMessage);
        }

        @Override // android.webkit.WebChromeClient
        public boolean onJsAlert(WebView webView, String str, String str2, JsResult jsResult) {
            a aVar = n6.this.c;
            return aVar != null ? aVar.a(str2, jsResult) : super.onJsAlert(webView, str, str2, jsResult);
        }
    }

    public n6(String str) {
        this.f4722a = str;
    }

    public static n6 b(String str) {
        return new n6(str);
    }

    public void a(r6 r6Var) {
        a("mraidbridge.setScreenSize(" + b(r6Var.d()) + ");window.mraidbridge.setMaxSize(" + b(r6Var.c()) + ");window.mraidbridge.setCurrentPosition(" + a(r6Var.a()) + ");window.mraidbridge.setDefaultPosition(" + a(r6Var.b()) + ")");
        StringBuilder sb = new StringBuilder("mraidbridge.fireSizeChangeEvent(");
        sb.append(b(r6Var.a()));
        sb.append(")");
        a(sb.toString());
    }

    public boolean c() {
        s6 s6Var = this.d;
        return s6Var != null && s6Var.h();
    }

    public void d(String str) {
        a("mraidbridge.setPlacementType(" + JSONObject.quote(str) + ")");
    }

    public void e(String str) {
        a("mraidbridge.setState(" + JSONObject.quote(str) + ")");
    }

    public void f(String str) {
        s6 s6Var = this.d;
        if (s6Var == null) {
            gb.a("MraidBridge: MRAID bridge called setContentHtml before WebView was attached");
        } else {
            this.e = false;
            s6Var.a("https://ad.mail.ru/", str, "text/html", "UTF-8", null);
        }
    }

    public class b extends y6 {
        public b() {
        }

        @Override // android.webkit.WebViewClient
        public void onPageFinished(WebView webView, String str) {
            n6.this.b();
        }

        @Override // android.webkit.WebViewClient
        public void onReceivedError(WebView webView, int i, String str, String str2) {
            gb.a("MraidBridge: Error - " + str);
            super.onReceivedError(webView, i, str, str2);
        }

        @Override // android.webkit.WebViewClient
        public boolean shouldOverrideUrlLoading(WebView webView, String str) {
            n6.this.a(Uri.parse(str));
            return true;
        }

        @Override // android.webkit.WebViewClient
        public boolean shouldOverrideUrlLoading(WebView webView, WebResourceRequest webResourceRequest) {
            n6.this.a(webResourceRequest.getUrl());
            return true;
        }
    }

    public final void b() {
        s6 s6Var;
        if (this.e || (s6Var = this.d) == null) {
            return;
        }
        this.e = true;
        a aVar = this.c;
        if (aVar != null) {
            aVar.a(this, s6Var.getWebView());
        }
    }

    public final void c(String str) {
        a("mraidbridge.nativeComplete(" + JSONObject.quote(str) + ")");
    }

    public void d() {
        a("mraidbridge.fireReadyEvent()");
    }

    public class e implements s6.a {
        public e() {
        }

        @Override // com.my.target.s6.a
        public void a(boolean z) {
            a aVar = n6.this.c;
            if (aVar != null) {
                aVar.a(z);
            }
        }

        @Override // com.my.target.s6.a
        public void a() {
            a aVar = n6.this.c;
            if (aVar != null) {
                aVar.a();
            }
        }
    }

    public void a(ArrayList arrayList) {
        a("mraidbridge.setSupports(" + TextUtils.join(StringUtils.COMMA, arrayList) + ")");
    }

    public void a(a aVar) {
        this.c = aVar;
    }

    public final String b(Rect rect) {
        return rect.width() + StringUtils.COMMA + rect.height();
    }

    public void a(s6 s6Var) {
        this.d = s6Var;
        WebSettings settings = s6Var.getSettings();
        if (settings != null) {
            settings.setJavaScriptEnabled(true);
            if (AdFormat.INTERSTITIAL.equals(this.f4722a)) {
                settings.setMediaPlaybackRequiresUserGesture(false);
            }
        }
        this.d.setScrollContainer(false);
        this.d.setVerticalScrollBarEnabled(false);
        this.d.setHorizontalScrollBarEnabled(false);
        this.d.setWebViewClient(this.b);
        this.d.setWebChromeClient(new d());
        this.d.setVisibilityChangedListener(new e());
    }

    public void a() {
        this.d = null;
    }

    public void a(boolean z) {
        if (z != this.f) {
            a("mraidbridge.setIsViewable(" + z + ")");
        }
        this.f = z;
    }

    public void a(String str, String str2) {
        a("mraidbridge.fireErrorEvent(" + JSONObject.quote(str2) + ", " + JSONObject.quote(str) + ")");
    }

    /* JADX WARN: Code duplicated, block: B:21:0x0096  */
    public void a(Uri uri) {
        a aVar;
        JSONObject jSONObject;
        String scheme = uri.getScheme();
        String host = uri.getHost();
        if ("mytarget".equals(scheme)) {
            if ("onloadmraidjs".equals(host)) {
                gb.a("MraidBridge: JS call onLoad");
            }
            gb.a("MraidBridge: Got mytarget scheme - " + uri);
            return;
        }
        if ("mraid".equals(scheme)) {
            if (host.contains(StringUtils.COMMA)) {
                host = host.substring(0, host.indexOf(StringUtils.COMMA)).trim();
            }
            gb.a("MraidBridge: Got mraid command - " + uri);
            String string = uri.toString();
            o6 o6Var = new o6(host, this.f4722a);
            c(o6Var.toString());
            int iIndexOf = string.indexOf("{");
            int iLastIndexOf = string.lastIndexOf("}") + 1;
            if (iIndexOf < 0 || iLastIndexOf <= 0 || iIndexOf >= iLastIndexOf) {
                jSONObject = null;
            } else {
                try {
                    if (iLastIndexOf <= string.length()) {
                        jSONObject = new JSONObject(string.substring(iIndexOf, iLastIndexOf));
                    } else {
                        jSONObject = null;
                    }
                } catch (Throwable th) {
                    a(o6Var.toString(), th.getMessage());
                    return;
                }
            }
            a(o6Var, jSONObject);
            return;
        }
        try {
            new URI(uri.toString());
            s6 s6Var = this.d;
            if (s6Var == null || !s6Var.g() || (aVar = this.c) == null) {
                return;
            }
            aVar.a(uri);
        } catch (Throwable unused) {
            gb.a("MraidBridge: Invalid MRAID URL - " + uri);
            a("", "Mraid command sent an invalid URL");
        }
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    public boolean a(o6 o6Var, JSONObject jSONObject) throws JSONException {
        s6 s6Var;
        String string = o6Var.toString();
        if (o6Var.f4757a && (s6Var = this.d) != null && !s6Var.g()) {
            a(string, "Cannot execute this command unless the user clicks");
            return false;
        }
        if (this.c == null) {
            a(string, "Invalid state to execute this command");
            return false;
        }
        if (this.d == null) {
            a(string, "The current WebView is being destroyed");
            return false;
        }
        string.getClass();
        string.hashCode();
        byte b2 = -1;
        switch (string.hashCode()) {
            case -1910759310:
                if (string.equals("vpaidInit")) {
                    b2 = 0;
                }
                break;
            case -1886160473:
                if (string.equals("playVideo")) {
                    b2 = 1;
                }
                break;
            case -1289167206:
                if (string.equals("expand")) {
                    b2 = 2;
                }
                break;
            case -934437708:
                if (string.equals("resize")) {
                    b2 = 3;
                }
                break;
            case -733616544:
                if (string.equals("createCalendarEvent")) {
                    b2 = 4;
                }
                break;
            case 0:
                if (string.equals("")) {
                    b2 = 5;
                }
                break;
            case 3417674:
                if (string.equals("open")) {
                    b2 = 6;
                }
                break;
            case 94756344:
                if (string.equals("close")) {
                    b2 = 7;
                }
                break;
            case 133423073:
                if (string.equals("setOrientationProperties")) {
                    b2 = 8;
                }
                break;
            case 459238621:
                if (string.equals("storePicture")) {
                    b2 = 9;
                }
                break;
            case 624734601:
                if (string.equals("setResizeProperties")) {
                    b2 = 10;
                }
                break;
            case 892543864:
                if (string.equals("vpaidEvent")) {
                    b2 = Ascii.VT;
                }
                break;
            case 1797992422:
                if (string.equals("playheadEvent")) {
                    b2 = Ascii.FF;
                }
                break;
        }
        switch (b2) {
            case 0:
                this.c.c();
                return true;
            case 1:
                gb.a("MraidBridge: playVideo is currently unsupported");
                return false;
            case 2:
                return this.c.b(jSONObject != null ? Uri.parse(jSONObject.getString("url")) : null);
            case 3:
                return this.c.d();
            case 4:
                gb.a("MraidBridge: createCalendarEvent is currently unsupported");
                return false;
            case 5:
                a(string, "Unspecified MRAID Javascript command");
                return false;
            case 6:
                if (jSONObject == null) {
                    a(string, "open params cannot be null");
                    return false;
                }
                this.c.a(Uri.parse(jSONObject.getString("url")));
                return true;
            case 7:
                this.c.b();
                return true;
            case 8:
                if (jSONObject == null) {
                    a(string, "setOrientationProperties params cannot be null");
                    return false;
                }
                boolean z = jSONObject.getBoolean("allowOrientationChange");
                String string2 = jSONObject.getString("forceOrientation");
                p6 p6VarA = p6.a(string2);
                if (p6VarA == null) {
                    a(string, "wrong orientation " + string2);
                    return false;
                }
                return this.c.a(z, p6VarA);
            case 9:
                gb.a("MraidBridge: storePicture is currently unsupported");
                return false;
            case 10:
                if (jSONObject == null) {
                    a(string, "setResizeProperties params cannot be null");
                    return false;
                }
                return this.c.a(jSONObject.getInt("width"), jSONObject.getInt("height"), jSONObject.getInt("offsetX"), jSONObject.getInt("offsetY"), jSONObject.optBoolean("allowOffscreen", false), c.a(jSONObject.optString("customClosePosition")));
            case 11:
                if (jSONObject == null) {
                    a(string, "vpaidEvent params cannot be null");
                    return false;
                }
                return this.c.a(jSONObject.getString(NotificationCompat.CATEGORY_EVENT));
            case 12:
                if (jSONObject == null) {
                    a(string, "playheadEvent params cannot be null");
                    return false;
                }
                return this.c.a((float) jSONObject.getDouble("remain"), (float) jSONObject.getDouble("duration"));
            default:
                return true;
        }
    }

    public final void a(String str) {
        if (this.d == null) {
            gb.a("MraidBridge: Attempted to inject Javascript into MRAID WebView while was not attached - \n\t" + str);
            return;
        }
        String str2 = "javascript:window." + str + ";";
        gb.a("MraidBridge: Injecting Javascript into MRAID WebView " + hashCode() + " - " + str2);
        this.d.a(str2);
    }

    public final String a(Rect rect) {
        return rect.left + StringUtils.COMMA + rect.top + StringUtils.COMMA + rect.width() + StringUtils.COMMA + rect.height();
    }
}
