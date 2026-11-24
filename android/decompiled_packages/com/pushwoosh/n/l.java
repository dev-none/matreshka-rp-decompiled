package com.pushwoosh.n;

import android.R;
import android.animation.ArgbEvaluator;
import android.animation.ObjectAnimator;
import android.app.Activity;
import android.app.Application;
import android.content.Context;
import android.graphics.Color;
import android.os.Build;
import android.os.Handler;
import android.text.TextUtils;
import android.view.ContextThemeWrapper;
import android.view.View;
import android.view.ViewGroup;
import android.webkit.WebView;
import android.widget.FrameLayout;
import androidx.media3.extractor.text.ttml.TtmlNode;
import com.pushwoosh.PushwooshPlatform;
import com.pushwoosh.inapp.view.WebActivity;
import com.pushwoosh.internal.utils.PWLog;
import com.pushwoosh.repository.RepositoryModule;
import com.pushwoosh.richmedia.RichMediaColorSchemeResolver;
import com.pushwoosh.richmedia.RichMediaStyle;
import com.pushwoosh.richmedia.animation.RichMediaAnimation;
import java.util.Map;

/* JADX INFO: loaded from: classes6.dex */
public final class l extends FrameLayout {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public com.pushwoosh.l.a f5268a;
    public FrameLayout b;
    public View c;
    public WebView d;
    public m e;
    public boolean f;
    public boolean g;
    public Runnable h;
    public RichMediaAnimation i;
    public Handler j;
    public int k;
    public final boolean l;

    public l(Activity activity, com.pushwoosh.l.a aVar) {
        super(activity);
        this.f5268a = com.pushwoosh.l.a.c;
        this.g = false;
        a(aVar, PushwooshPlatform.getInstance().getRichMediaController().e, activity);
    }

    private void setWebViewDataDirectorySuffixIfNeeded(Context context) {
        try {
            if (Build.VERSION.SDK_INT >= 28 && !TextUtils.equals(context.getPackageName(), Application.getProcessName())) {
                WebView.setDataDirectorySuffix(Application.getProcessName());
            }
        } catch (Throwable th) {
            PWLog.error("Error occurred when tried to set Webview data directory suffix", th);
        }
    }

    public final void a(com.pushwoosh.l.a aVar, RichMediaStyle richMediaStyle, Activity activity) {
        this.f5268a = aVar;
        this.i = richMediaStyle.getRichMediaAnimation();
        int backgroundColor = richMediaStyle.getBackgroundColor();
        this.k = backgroundColor;
        if (backgroundColor == 0) {
            this.k = Color.parseColor("#40000000");
        }
        this.b = new FrameLayout(getContext());
        if (aVar == com.pushwoosh.l.a.b) {
            setLayoutParams(new ViewGroup.LayoutParams(-1, -1));
        } else {
            setLayoutParams(new ViewGroup.LayoutParams(-2, -2));
        }
        this.b.setLayoutParams(a(aVar, 0));
        this.b.setBackgroundColor(0);
        setWebViewDataDirectorySuffixIfNeeded(activity);
        WebView webView = new WebView(RichMediaColorSchemeResolver.wrapForCurrentScheme(getContext()));
        this.d = webView;
        webView.getSettings().setJavaScriptEnabled(true);
        this.d.getSettings().setMixedContentMode(2);
        if (Build.VERSION.SDK_INT >= 29) {
            this.d.getSettings().setForceDark(0);
            this.d.setForceDarkAllowed(false);
        }
        this.d.setLayoutParams(a(this.f5268a, getStatusBarHeight()));
        this.d.setBackgroundColor(0);
        this.d.setLongClickable(false);
        this.d.setHapticFeedbackEnabled(false);
        richMediaStyle.getLoadingViewCreator();
        Context context = getContext();
        int i = context.getApplicationInfo().theme;
        if (i == 0) {
            i = R.style.Theme.Material;
        }
        View viewInflate = View.inflate(new ContextThemeWrapper(context, i), com.pushwoosh.R.layout.pw_default_loading_view, null);
        FrameLayout.LayoutParams layoutParams = new FrameLayout.LayoutParams(-2, -2);
        layoutParams.gravity = 17;
        viewInflate.setLayoutParams(layoutParams);
        this.c = viewInflate;
        viewInflate.setVisibility(8);
        this.b.addView(this.d);
        this.b.addView(this.c);
        addView(this.b);
    }

    public final /* synthetic */ void b() {
        this.c.setAlpha(0.0f);
        this.c.setVisibility(0);
        this.c.animate().alpha(1.0f).setDuration(300L).start();
    }

    public final void c() {
        if (this.g) {
            return;
        }
        this.g = true;
        Handler handler = new Handler();
        this.j = handler;
        Runnable runnable = new Runnable() { // from class: com.pushwoosh.n.l$$ExternalSyntheticLambda1
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.b();
            }
        };
        this.h = runnable;
        handler.postDelayed(runnable, 500L);
        this.d.setVisibility(4);
    }

    public int getStatusBarHeight() {
        int identifier = getResources().getIdentifier("status_bar_height", "dimen", "android");
        if (identifier > 0) {
            return getResources().getDimensionPixelSize(identifier);
        }
        return 0;
    }

    public void setWebViewClient(m mVar) {
        this.e = mVar;
        WebView webView = this.d;
        mVar.getClass();
        mVar.c = new com.pushwoosh.o.c(mVar, webView, null, RepositoryModule.getNotificationPreferences().customData().get(), RepositoryModule.getNotificationPreferences().messageHash().get());
        RepositoryModule.getNotificationPreferences().customData().set(null);
        webView.setWebViewClient(mVar);
        webView.addJavascriptInterface(new com.pushwoosh.o.b(webView, mVar), "pushManager");
        webView.addJavascriptInterface(mVar.c, "pushwooshImpl");
        for (Map.Entry entry : mVar.b.entrySet()) {
            webView.addJavascriptInterface(entry.getValue(), (String) entry.getKey());
        }
    }

    public l(WebActivity webActivity, com.pushwoosh.l.a aVar, RichMediaStyle richMediaStyle, boolean z) {
        super(webActivity);
        this.f5268a = com.pushwoosh.l.a.c;
        this.g = false;
        this.l = z;
        a(aVar, richMediaStyle, webActivity);
    }

    public final FrameLayout.LayoutParams a(com.pushwoosh.l.a aVar, int i) {
        int iOrdinal = aVar.ordinal();
        if (iOrdinal == 0) {
            FrameLayout.LayoutParams layoutParams = new FrameLayout.LayoutParams(-1, -1);
            layoutParams.gravity = 17;
            return layoutParams;
        }
        if (iOrdinal == 1) {
            FrameLayout.LayoutParams layoutParams2 = new FrameLayout.LayoutParams(-1, -2);
            layoutParams2.gravity = 17;
            return layoutParams2;
        }
        if (iOrdinal != 2) {
            if (iOrdinal != 3) {
                throw new IllegalArgumentException("Unrecognized mode: " + aVar.toString());
            }
            FrameLayout.LayoutParams layoutParams3 = new FrameLayout.LayoutParams(-1, -2);
            layoutParams3.gravity = 80;
            return layoutParams3;
        }
        FrameLayout.LayoutParams layoutParams4 = new FrameLayout.LayoutParams(-1, -1);
        layoutParams4.gravity = 48;
        if (!this.l) {
            if (RepositoryModule.getNotificationPreferences().showFullscreenRichMedia().get()) {
                i = 0;
            }
            layoutParams4.topMargin = i;
        }
        return layoutParams4;
    }

    public final void a() {
        if (this.g) {
            this.g = false;
            Handler handler = this.j;
            if (handler != null) {
                Runnable runnable = this.h;
                if (runnable != null) {
                    handler.removeCallbacks(runnable);
                    this.h = null;
                }
                this.j = null;
            }
            this.c.animate().alpha(0.0f).setDuration(300L).start();
            this.d.setVisibility(0);
        }
    }

    public static void a(FrameLayout frameLayout, int i, int i2) {
        ObjectAnimator objectAnimatorOfInt = ObjectAnimator.ofInt(frameLayout, TtmlNode.ATTR_TTS_BACKGROUND_COLOR, i, i2);
        objectAnimatorOfInt.setEvaluator(new ArgbEvaluator());
        objectAnimatorOfInt.setDuration(300L);
        objectAnimatorOfInt.start();
    }

    public final void a(String str, String str2) {
        PWLog.noise("[InApp]ResourceWebView", "Loading HTML data with baseUrl: " + str);
        this.d.getSettings().setAllowFileAccess(false);
        this.d.loadDataWithBaseURL(str, str2, "text/html", "UTF-8", null);
    }
}
