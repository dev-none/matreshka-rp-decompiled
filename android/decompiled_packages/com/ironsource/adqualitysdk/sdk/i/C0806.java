package com.ironsource.adqualitysdk.sdk.i;

import android.app.Activity;
import android.os.Handler;
import android.os.Looper;
import android.view.MotionEvent;
import android.view.ViewGroup;
import android.view.ViewParent;
import android.view.WindowManager;
import android.widget.TextView;
import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.WeakHashMap;
import org.json.JSONObject;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ᴽ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0806 {

    /* JADX INFO: renamed from: ﻐ, reason: contains not printable characters */
    public static C0806 f2874;

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public static final String f2875 = StringFog.decrypt("Hv+rUyqvQNss8Kx9IrBg0Tf2tmIusWLdOvY=\n", "WZPEMUvDFLQ=\n");

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public C0893 f2878;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final WeakHashMap f2877 = new WeakHashMap();

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public C1783w f2876 = new C1783w(-1, -1, -1, -1);

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static void m8727(C0806 c0806, ViewGroup viewGroup, ViewOnLayoutChangeListenerC0875 viewOnLayoutChangeListenerC0875) {
        JSONObject jSONObject;
        c0806.getClass();
        if (viewGroup != null) {
            try {
                if (viewGroup.getChildCount() != 0) {
                    for (int i = 0; i < viewGroup.getChildCount(); i++) {
                        if (viewGroup.getChildAt(i) instanceof TextView) {
                        }
                    }
                    return;
                }
            } catch (Throwable th) {
                String str = f2875;
                AbstractC0323.m8479(str, str, StringFog.decrypt("LxPjbVTTWyAPAvprSJQYIQxBx2tDhH86BRThIkWcVjwLCP9xBpxWJBNBxWdeh24hDxbi\n", "amGRAibzOEg=\n"), th, null, false);
            }
            C0896 c0896 = (C0896) AbstractC0895.m8747();
            synchronized (c0896) {
                jSONObject = c0896.f2592;
            }
            if (jSONObject.optBoolean(StringFog.decrypt("bunM\n", "HYa79E74CtQ=\n"), false)) {
                ViewGroup.LayoutParams layoutParams = viewGroup.getLayoutParams();
                if (layoutParams instanceof WindowManager.LayoutParams) {
                    WindowManager.LayoutParams layoutParams2 = (WindowManager.LayoutParams) layoutParams;
                    int i2 = layoutParams2.type;
                    if ((layoutParams2.flags & 16) != 0 || i2 == 2005 || i2 == 2003 || i2 == 2038) {
                        return;
                    }
                }
            }
            Activity activityM8403 = AbstractC1769o0.m8403(viewGroup);
            if (C1781v.m8425().m8428(activityM8403)) {
                if (viewGroup.findViewById(160766228) == null) {
                    c0806.m8731(viewGroup, viewOnLayoutChangeListenerC0875);
                }
            } else if (C1781v.m8425().m8426(activityM8403)) {
                new Handler(Looper.getMainLooper()).post(new C0857(c0806, viewGroup, new C0860(c0806), viewOnLayoutChangeListenerC0875));
            }
        }
    }

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final synchronized void m8728() {
        if (this.f2878 != null) {
            for (ViewGroup viewGroup : this.f2877.keySet()) {
                ViewParent parent = viewGroup.getParent();
                if (parent instanceof ViewGroup) {
                    ((ViewGroup) parent).removeView(viewGroup);
                }
            }
            this.f2877.clear();
            C0697.m8619().m8620(this.f2878);
            this.f2878 = null;
        }
    }

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final synchronized void m8729() {
        if (this.f2878 == null) {
            this.f2878 = new C0893(this);
            C0697.m8619().m8621(this.f2878);
        }
    }

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final synchronized C1783w m8730() {
        return this.f2876;
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static void m8726(C0806 c0806, MotionEvent motionEvent) {
        c0806.getClass();
        try {
            AbstractC1766n.m8385(new C0852(c0806, MotionEvent.obtain(motionEvent)));
        } catch (Throwable th) {
            AbstractC1104.m8887(f2875, StringFog.decrypt("zCWUHfaVSqT9I48c45VZrvw0jlL21FqZqTiUUvbUWpg=\n", "iVfmcoS1LcE=\n"), th, false);
        }
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static synchronized C0806 m8725() {
        if (f2874 == null) {
            f2874 = new C0806();
        }
        return f2874;
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final void m8731(ViewGroup viewGroup, ViewOnLayoutChangeListenerC0875 viewOnLayoutChangeListenerC0875) {
        C0867 c0867 = new C0867(this, viewGroup.getContext(), AbstractC0895.m8747().mo8753());
        c0867.setAlpha(0.0f);
        synchronized (this) {
            this.f2877.put(c0867, new Object());
        }
        c0867.setId(160766228);
        new Handler(Looper.getMainLooper()).post(new C0864(viewGroup, c0867, viewOnLayoutChangeListenerC0875));
    }
}
