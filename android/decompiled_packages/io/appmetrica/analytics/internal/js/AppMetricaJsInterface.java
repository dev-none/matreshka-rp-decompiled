package io.appmetrica.analytics.internal.js;

import android.webkit.JavascriptInterface;
import io.appmetrica.analytics.impl.C2436s1;

/* JADX INFO: loaded from: classes7.dex */
public class AppMetricaJsInterface {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final C2436s1 f6445a;

    public AppMetricaJsInterface(C2436s1 c2436s1) {
        this.f6445a = c2436s1;
    }

    @JavascriptInterface
    public void reportEvent(String str, String str2) {
        this.f6445a.d(str, str2);
    }
}
