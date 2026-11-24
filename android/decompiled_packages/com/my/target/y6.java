package com.my.target;

import android.net.http.SslError;
import android.webkit.SslErrorHandler;
import android.webkit.WebView;
import android.webkit.WebViewClient;
import io.github.mytargetsdk.CertData;
import io.github.mytargetsdk.SslErrorVerifier;

/* JADX INFO: loaded from: classes6.dex */
public abstract class y6 extends WebViewClient {
    @Override // android.webkit.WebViewClient
    public void onReceivedSslError(WebView webView, SslErrorHandler sslErrorHandler, SslError sslError) {
        CertData certDataA = v1.a();
        if (certDataA == null) {
            gb.a("MyTargetWebViewClient: can't verify ssl Error – certData is null");
            sslErrorHandler.cancel();
        } else if (SslErrorVerifier.verifySslError(sslError, certDataA.trustManagerFactory)) {
            sslErrorHandler.proceed();
        } else {
            gb.a("MyTargetWebViewClient: ssl error not verified");
            sslErrorHandler.cancel();
        }
    }
}
