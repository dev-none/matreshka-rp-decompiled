package io.appmetrica.analytics.internal.js;

import android.webkit.JavascriptInterface;
import io.appmetrica.analytics.impl.C2436s1;

/* JADX INFO: loaded from: classes7.dex */
public class AppMetricaInitializerJsInterface {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final C2436s1 f6444a;

    public AppMetricaInitializerJsInterface(C2436s1 c2436s1) {
        this.f6444a = c2436s1;
    }

    @JavascriptInterface
    public void init(String str) {
        this.f6444a.c(str);
    }
}
