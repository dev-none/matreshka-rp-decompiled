package com.ironsource.adqualitysdk.sdk.i;

import android.content.Context;
import com.ironsource.adqualitysdk.sdk.IronSourceAdQuality;
import com.ironsource.adqualitysdk.sdk.StringFog;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ᒻ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0657 {

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final Object f2285 = new Object();

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public volatile C1787y f2286;

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public static final String f2284 = StringFog.decrypt("yEYK+doXVjDLQVj+30pXZMkTDK6PRAYwyEMK8otCAWDOEAyu3URXZ8tBWPyPEQQ8m0cK+txDC2fN\nEAyp3kpWZM4WCqnaRAU9zhAAqI9KBGfMFAGqj0sDZMhKDKrWQVE8yRRdqdhEVjDNE1//2hFXYc5B\nXK6MS1FhnkEMqtwTCzbBRA==\n", "+HI5y+5yMwU=\n");

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public static final C0657 f2283 = new C0657();

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final void m8611(Context context, String str) {
        synchronized (this.f2285) {
            if (this.f2286 != null) {
                return;
            }
            C1787y c1787y = new C1787y(new C0698(IronSourceAdQuality.getSDKVersion(), AbstractC0607.m8588(str)));
            c1787y.f578.f3081.put(1, C0868.m8740(f2284));
            c1787y.m8432(context);
            this.f2286 = c1787y;
        }
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final void m8610() {
        synchronized (this.f2285) {
            this.f2286 = null;
            C0526.f1839.m8567();
        }
    }
}
