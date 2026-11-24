package com.my.target;

import android.content.Context;
import android.view.View;
import android.webkit.JavascriptInterface;
import android.webkit.WebChromeClient;
import android.webkit.WebSettings;
import android.webkit.WebView;
import android.webkit.WebViewClient;
import android.widget.FrameLayout;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

/* JADX INFO: loaded from: classes6.dex */
public class m0 extends FrameLayout implements fc {
    public static String c = "vkAdsWebInterface";

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public WebView f4703a;
    public List b;

    public m0(Context context) {
        super(context);
        try {
            WebView webView = new WebView(a(context));
            this.f4703a = webView;
            webView.clearCache(true);
            this.f4703a.addJavascriptInterface(this, c);
            addView(this.f4703a);
            this.b = new ArrayList();
        } catch (Throwable th) {
            gb.b("BaseWebView: Webview cannot be initialized, ad will not work properly - " + th.getMessage());
            th.printStackTrace();
        }
    }

    public static Context a(Context context) {
        return context;
    }

    public void b() {
        WebView webView = this.f4703a;
        if (webView == null) {
            return;
        }
        try {
            webView.goBack();
        } catch (Throwable th) {
            a(th);
        }
    }

    public final /* synthetic */ void c() {
        WebView webView = this.f4703a;
        if (webView == null) {
            return;
        }
        try {
            webView.destroy();
        } catch (Throwable th) {
            a(th);
        }
    }

    public void d() {
        WebView webView = this.f4703a;
        if (webView == null) {
            return;
        }
        try {
            webView.onPause();
        } catch (Throwable th) {
            a(th);
        }
    }

    public void e() {
        WebView webView = this.f4703a;
        if (webView == null) {
            return;
        }
        try {
            webView.onResume();
        } catch (Throwable th) {
            a(th);
        }
    }

    public void f() {
        WebView webView = this.f4703a;
        if (webView == null) {
            return;
        }
        try {
            webView.stopLoading();
        } catch (Throwable th) {
            a(th);
        }
    }

    public WebSettings getSettings() {
        try {
            WebView webView = this.f4703a;
            if (webView == null) {
                return null;
            }
            return webView.getSettings();
        } catch (Throwable th) {
            a(th);
            return null;
        }
    }

    public String getUrl() {
        try {
            WebView webView = this.f4703a;
            if (webView == null) {
                return null;
            }
            return webView.getUrl();
        } catch (Throwable th) {
            a(th);
            return null;
        }
    }

    public WebView getWebView() {
        return this.f4703a;
    }

    @Override // android.widget.FrameLayout, android.view.ViewGroup, android.view.View
    public void onLayout(boolean z, int i, int i2, int i3, int i4) {
        WebView webView = this.f4703a;
        if (webView == null) {
            return;
        }
        webView.layout(0, 0, i3 - i, i4 - i2);
    }

    @Override // android.widget.FrameLayout, android.view.View
    public void onMeasure(int i, int i2) {
        WebView webView = this.f4703a;
        if (webView == null) {
            setMeasuredDimension(0, 0);
        } else {
            webView.measure(i, i2);
            setMeasuredDimension(this.f4703a.getMeasuredWidth(), this.f4703a.getMeasuredHeight());
        }
    }

    @Override // com.my.target.fc
    @JavascriptInterface
    public void sendMessage(String str, String str2, String str3) {
        gb.a("BaseWebView: sendMessage " + str + " " + str2 + " " + str3);
        r8 r8VarA = new t8().a(str, str2, str3);
        if (r8VarA == null) {
            return;
        }
        Iterator it = this.b.iterator();
        while (it.hasNext()) {
            ((s8) it.next()).a(r8VarA);
        }
    }

    @Override // android.view.View
    public void setHorizontalScrollBarEnabled(boolean z) {
        WebView webView = this.f4703a;
        if (webView == null) {
            return;
        }
        webView.setHorizontalScrollBarEnabled(z);
    }

    @Override // android.view.View
    public void setOnTouchListener(View.OnTouchListener onTouchListener) {
        WebView webView = this.f4703a;
        if (webView == null) {
            return;
        }
        webView.setOnTouchListener(onTouchListener);
    }

    @Override // android.view.View
    public void setScrollContainer(boolean z) {
        WebView webView = this.f4703a;
        if (webView == null) {
            return;
        }
        webView.setScrollContainer(z);
    }

    @Override // android.view.View
    public void setVerticalScrollBarEnabled(boolean z) {
        WebView webView = this.f4703a;
        if (webView == null) {
            return;
        }
        webView.setVerticalScrollBarEnabled(z);
    }

    public void setWebChromeClient(WebChromeClient webChromeClient) {
        WebView webView = this.f4703a;
        if (webView == null) {
            return;
        }
        try {
            webView.setWebChromeClient(webChromeClient);
        } catch (Throwable th) {
            a(th);
        }
    }

    public void setWebViewBackgroundColor(int i) {
        WebView webView = this.f4703a;
        if (webView == null) {
            return;
        }
        webView.setBackgroundColor(i);
    }

    public void setWebViewClient(WebViewClient webViewClient) {
        WebView webView = this.f4703a;
        if (webView == null) {
            return;
        }
        try {
            webView.setWebViewClient(webViewClient);
        } catch (Throwable th) {
            a(th);
        }
    }

    public static void a(Throwable th) {
        gb.b("BaseWebView: WebView fail - " + th.getMessage());
    }

    public boolean a() {
        try {
            WebView webView = this.f4703a;
            return webView != null && webView.canGoBack();
        } catch (Throwable th) {
            a(th);
            return false;
        }
    }

    public void a(int i) {
        WebView webView = this.f4703a;
        if (webView == null) {
            return;
        }
        if (i <= 0) {
            try {
                webView.destroy();
                return;
            } catch (Throwable th) {
                a(th);
                return;
            }
        }
        f0.a(new Runnable() { // from class: com.my.target.m0$$ExternalSyntheticLambda0
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.c();
            }
        }, i);
    }

    public void a(String str) {
        WebView webView = this.f4703a;
        if (webView == null) {
            return;
        }
        try {
            webView.loadUrl(str);
        } catch (Throwable th) {
            a(th);
        }
    }

    public void a(String str, String str2, String str3, String str4, String str5) {
        WebView webView = this.f4703a;
        if (webView == null) {
            return;
        }
        try {
            webView.loadDataWithBaseURL(str, str2, str3, str4, str5);
        } catch (Throwable th) {
            a(th);
        }
    }

    public void a(s8 s8Var) {
        this.b.add(s8Var);
    }
}
