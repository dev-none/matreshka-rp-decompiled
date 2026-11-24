package com.pushwoosh.n;

import android.content.ActivityNotFoundException;
import android.content.Context;
import android.content.Intent;
import android.graphics.Bitmap;
import android.net.Uri;
import android.os.Handler;
import android.os.Looper;
import android.webkit.WebResourceError;
import android.webkit.WebResourceRequest;
import android.webkit.WebResourceResponse;
import android.webkit.WebView;
import android.webkit.WebViewClient;
import androidx.media3.exoplayer.upstream.CmcdData;
import androidx.webkit.WebViewAssetLoader;
import com.pushwoosh.PushwooshPlatform;
import com.pushwoosh.inapp.network.model.Resource;
import com.pushwoosh.internal.event.EventBus;
import com.pushwoosh.internal.utils.PWLog;
import com.pushwoosh.repository.RepositoryModule;
import java.io.ByteArrayInputStream;
import java.io.File;
import java.util.Map;
import java.util.Objects;
import java.util.logging.Logger;

/* JADX INFO: loaded from: classes6.dex */
public final class m extends WebViewClient implements com.pushwoosh.o.a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final d f5269a;
    public com.pushwoosh.o.c c;
    public volatile Resource e;
    public WebViewAssetLoader f;
    public boolean g;
    public boolean h;
    public boolean i;
    public final Handler d = new Handler(Looper.getMainLooper());
    public final Map b = PushwooshPlatform.getInstance().pushwooshInApp().getJavascriptInterfaces();

    public m(d dVar, Resource resource) {
        this.f5269a = dVar;
        this.e = resource;
    }

    public final WebResourceResponse a(WebView webView, Uri uri) {
        WebViewAssetLoader webViewAssetLoader;
        WebResourceResponse webResourceResponse = (WebViewAssetLoader.DEFAULT_DOMAIN.equals(uri.getHost()) && "/favicon.ico".equals(uri.getPath())) ? new WebResourceResponse("image/x-icon", null, new ByteArrayInputStream(new byte[0])) : null;
        if (webResourceResponse != null) {
            return webResourceResponse;
        }
        Context context = webView.getContext();
        synchronized (this) {
            if (this.g) {
                webViewAssetLoader = this.f;
            } else {
                String code = this.e.getCode();
                File fileA = com.pushwoosh.e.b.f5061a.a(code);
                if (fileA == null) {
                    PWLog.warn("[InApp]WebClient", "InApp folder is null for code " + code + "; serving without asset interception");
                    webViewAssetLoader = null;
                } else {
                    this.g = true;
                    try {
                        this.f = new WebViewAssetLoader.Builder().setDomain(WebViewAssetLoader.DEFAULT_DOMAIN).addPathHandler("/pushwoosh_richmedia/" + code + "/", new WebViewAssetLoader.InternalStoragePathHandler(context, fileA)).build();
                    } catch (RuntimeException e) {
                        PWLog.warn("[InApp]WebClient", "Failed to build rich media asset loader for code " + code + "; serving without interception", e);
                        this.f = null;
                    }
                    webViewAssetLoader = this.f;
                }
            }
        }
        if (webViewAssetLoader == null) {
            return null;
        }
        return webViewAssetLoader.shouldInterceptRequest(uri);
    }

    @Override // android.webkit.WebViewClient
    public final void onPageCommitVisible(WebView webView, String str) {
        super.onPageCommitVisible(webView, str);
        PWLog.noise("[InApp]WebClient", "onPageCommitVisible(url: " + str + ")");
        if (this.h || this.i) {
            return;
        }
        this.i = true;
        this.f5269a.d();
        EventBus.sendEvent(new com.pushwoosh.f.e(this.e));
    }

    @Override // android.webkit.WebViewClient
    public final void onPageFinished(WebView webView, String str) {
        super.onPageFinished(webView, str);
        PWLog.noise("[InApp]WebClient", "onPageFinished(url: " + str + ")");
        if (this.h) {
            return;
        }
        this.c.onPageFinished(webView, this.e);
        if (this.i) {
            return;
        }
        this.i = true;
        this.f5269a.d();
        EventBus.sendEvent(new com.pushwoosh.f.e(this.e));
    }

    @Override // android.webkit.WebViewClient
    public final void onPageStarted(WebView webView, String str, Bitmap bitmap) {
        super.onPageStarted(webView, str, bitmap);
        PWLog.noise("[InApp]WebClient", "onPageStarted(url: " + str + ")");
        if (this.h) {
            return;
        }
        this.c.onPageStarted(webView, this.e);
    }

    @Override // android.webkit.WebViewClient
    public final void onReceivedError(WebView webView, WebResourceRequest webResourceRequest, WebResourceError webResourceError) {
        super.onReceivedError(webView, webResourceRequest, webResourceError);
        PWLog.error("[InApp]WebClient", String.format("onReceivedError(url: %s, code: %d, description: %s)", webResourceRequest.getUrl(), Integer.valueOf(webResourceError.getErrorCode()), webResourceError.getDescription()));
    }

    @Override // android.webkit.WebViewClient
    public final WebResourceResponse shouldInterceptRequest(WebView webView, WebResourceRequest webResourceRequest) {
        return a(webView, webResourceRequest.getUrl());
    }

    @Override // android.webkit.WebViewClient
    public final boolean shouldOverrideUrlLoading(WebView webView, String str) {
        PWLog.noise("[InApp]WebClient", "shouldOverrideUrlLoading(url: " + str + ")");
        return a(webView.getContext(), Uri.parse(str));
    }

    @Override // android.webkit.WebViewClient
    public final WebResourceResponse shouldInterceptRequest(WebView webView, String str) {
        return a(webView, Uri.parse(str));
    }

    @Override // android.webkit.WebViewClient
    public final boolean shouldOverrideUrlLoading(WebView webView, WebResourceRequest webResourceRequest) {
        PWLog.noise("[InApp]WebClient", String.format("shouldOverrideUrlLoading(request: %s)", webResourceRequest.getUrl()));
        return a(webView.getContext(), webResourceRequest.getUrl());
    }

    public final boolean a(Context context, Uri uri) {
        PWLog.noise("[InApp]WebClient", String.format("handleUri(uri: %s)", uri));
        if (uri.getScheme() == null) {
            PWLog.warn("[InApp]WebClient", "Ignoring navigation to schemeless uri: " + uri);
            return true;
        }
        if (uri.getScheme().equals("pushwoosh")) {
            if (uri.getHost() != null) {
                String host = uri.getHost();
                if (host.equalsIgnoreCase("close")) {
                    this.f5269a.close();
                } else if (host.equalsIgnoreCase("open")) {
                    if ((this.f5269a.c() & 1) != 0) {
                        try {
                            Intent launchIntentForPackage = context.getPackageManager().getLaunchIntentForPackage(context.getPackageName());
                            if (launchIntentForPackage == null) {
                                PWLog.warn("No launcher activity declared in manifest, skipping default launch.");
                            } else {
                                launchIntentForPackage.addCategory("android.intent.category.LAUNCHER");
                                launchIntentForPackage.setFlags(872415232);
                                context.startActivity(launchIntentForPackage);
                            }
                        } catch (ActivityNotFoundException unused) {
                            Logger.getLogger(CmcdData.OBJECT_TYPE_MANIFEST).severe("Failed to start default launch activity.");
                        }
                        this.f5269a.close();
                    }
                } else {
                    PWLog.error("[InApp]WebClient", "Unrecognized pushwoosh method: ".concat(host));
                }
                return true;
            }
            PWLog.error("[InApp]WebClient", "Wrong url format: " + uri);
            return true;
        }
        if (!WebViewAssetLoader.DEFAULT_DOMAIN.equals(uri.getHost()) && !uri.getScheme().startsWith("file")) {
            if ((this.f5269a.c() & 1) != 0) {
                ((com.pushwoosh.m0.m) RepositoryModule.getLockScreenMediaStorage()).a(uri);
            } else {
                Intent intent = new Intent("android.intent.action.VIEW", uri);
                intent.addFlags(268435456);
                try {
                    context.startActivity(intent);
                } catch (ActivityNotFoundException e) {
                    PWLog.error("Can't open remote url: " + uri, e);
                }
            }
            this.f5269a.close();
        }
        return true;
    }

    public final void a() {
        Handler handler = this.d;
        final d dVar = this.f5269a;
        Objects.requireNonNull(dVar);
        handler.post(new Runnable() { // from class: com.pushwoosh.n.m$$ExternalSyntheticLambda0
            @Override // java.lang.Runnable
            public final void run() {
                dVar.close();
            }
        });
    }
}
