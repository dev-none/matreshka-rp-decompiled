package io.flutter.plugins.webviewflutter;

import android.webkit.JavascriptInterface;
import kotlin.Result;
import kotlin.Unit;
import kotlin.jvm.functions.Function1;

/* JADX INFO: loaded from: classes7.dex */
public class JavaScriptChannel {
    private final JavaScriptChannelProxyApi api;
    final String javaScriptChannelName;

    static /* synthetic */ Unit lambda$postMessage$0(Result result) {
        return null;
    }

    public JavaScriptChannel(String str, JavaScriptChannelProxyApi javaScriptChannelProxyApi) {
        this.javaScriptChannelName = str;
        this.api = javaScriptChannelProxyApi;
    }

    @JavascriptInterface
    public void postMessage(final String str) {
        this.api.getPigeonRegistrar().runOnMainThread(new Runnable() { // from class: io.flutter.plugins.webviewflutter.JavaScriptChannel$$ExternalSyntheticLambda1
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.m9629x6cafa204(str);
            }
        });
    }

    /* JADX INFO: renamed from: lambda$postMessage$1$io-flutter-plugins-webviewflutter-JavaScriptChannel, reason: not valid java name */
    /* synthetic */ void m9629x6cafa204(String str) {
        this.api.postMessage(this, str, new Function1() { // from class: io.flutter.plugins.webviewflutter.JavaScriptChannel$$ExternalSyntheticLambda0
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                return JavaScriptChannel.lambda$postMessage$0((Result) obj);
            }
        });
    }
}
