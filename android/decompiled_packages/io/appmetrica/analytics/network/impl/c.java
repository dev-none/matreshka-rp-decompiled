package io.appmetrica.analytics.network.impl;

import com.google.firebase.perf.network.FirebasePerfUrlConnection;
import io.appmetrica.analytics.network.internal.Call;
import io.appmetrica.analytics.network.internal.NetworkClient;
import io.appmetrica.analytics.network.internal.Request;
import io.appmetrica.analytics.network.internal.Response;
import java.io.OutputStream;
import java.net.ProtocolException;
import java.net.URL;
import java.net.URLConnection;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import javax.net.ssl.HttpsURLConnection;
import javax.net.ssl.SSLSocketFactory;
import kotlin.Unit;
import kotlin.io.CloseableKt;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: loaded from: classes7.dex */
public final class c implements Call {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final NetworkClient f6484a;
    public final Request b;
    public final d c;

    public c(NetworkClient networkClient, Request request, d dVar) {
        this.f6484a = networkClient;
        this.b = request;
        this.c = dVar;
    }

    public final void a(HttpsURLConnection httpsURLConnection) throws ProtocolException {
        Iterator<T> it = this.b.getHeaders().entrySet().iterator();
        while (it.hasNext()) {
            Map.Entry entry = (Map.Entry) it.next();
            httpsURLConnection.addRequestProperty((String) entry.getKey(), (String) entry.getValue());
        }
        Integer readTimeout = this.f6484a.getReadTimeout();
        if (readTimeout != null) {
            httpsURLConnection.setReadTimeout(readTimeout.intValue());
        }
        Integer connectTimeout = this.f6484a.getConnectTimeout();
        if (connectTimeout != null) {
            httpsURLConnection.setConnectTimeout(connectTimeout.intValue());
        }
        Boolean useCaches = this.f6484a.getUseCaches();
        if (useCaches != null) {
            httpsURLConnection.setUseCaches(useCaches.booleanValue());
        }
        Boolean instanceFollowRedirects = this.f6484a.getInstanceFollowRedirects();
        if (instanceFollowRedirects != null) {
            httpsURLConnection.setInstanceFollowRedirects(instanceFollowRedirects.booleanValue());
        }
        httpsURLConnection.setRequestMethod(this.b.getMethod());
        SSLSocketFactory sslSocketFactory = this.f6484a.getSslSocketFactory();
        if (sslSocketFactory != null) {
            httpsURLConnection.setSSLSocketFactory(sslSocketFactory);
        }
    }

    @Override // io.appmetrica.analytics.network.internal.Call
    public final Response execute() {
        Map<String, List<String>> headerFields;
        int responseCode;
        Throwable th;
        String string;
        boolean z;
        try {
            d dVar = this.c;
            String url = this.b.getUrl();
            dVar.getClass();
            URLConnection uRLConnection = (URLConnection) FirebasePerfUrlConnection.instrument(new URL(url).openConnection());
            HttpsURLConnection httpsURLConnection = uRLConnection instanceof HttpsURLConnection ? (HttpsURLConnection) uRLConnection : null;
            if (httpsURLConnection == null) {
                return new Response(new IllegalArgumentException("Connection created for " + this.b.getUrl() + " does not represent https connection"));
            }
            byte[] bArrA = new byte[0];
            byte[] bArrA2 = new byte[0];
            try {
                try {
                    a(httpsURLConnection);
                    if (Intrinsics.areEqual(this.b.getMethod(), "POST")) {
                        httpsURLConnection.setDoOutput(true);
                        OutputStream outputStream = httpsURLConnection.getOutputStream();
                        if (outputStream != null) {
                            try {
                                outputStream.write(this.b.getBody());
                                outputStream.flush();
                                Unit unit = Unit.INSTANCE;
                                CloseableKt.closeFinally(outputStream, null);
                            } catch (Throwable th2) {
                                try {
                                    throw th2;
                                } catch (Throwable th3) {
                                    CloseableKt.closeFinally(outputStream, th2);
                                    throw th3;
                                }
                            }
                        }
                    }
                    responseCode = httpsURLConnection.getResponseCode();
                    try {
                        headerFields = httpsURLConnection.getHeaderFields();
                        try {
                            bArrA = e.a(this.f6484a.getMaxResponseSize(), new a(httpsURLConnection));
                            bArrA2 = e.a(this.f6484a.getMaxResponseSize(), new b(httpsURLConnection));
                            string = httpsURLConnection.getURL().toString();
                            th = null;
                            z = true;
                        } catch (Throwable th4) {
                            th = th4;
                            th = th;
                            string = null;
                            z = false;
                        }
                    } catch (Throwable th5) {
                        th = th5;
                        headerFields = null;
                    }
                } catch (Throwable th6) {
                    th = th6;
                    headerFields = null;
                    responseCode = 0;
                    th = th;
                    string = null;
                    z = false;
                    byte[] bArr = bArrA;
                    byte[] bArr2 = bArrA2;
                    int i = responseCode;
                    Map<String, List<String>> map = headerFields;
                    httpsURLConnection.disconnect();
                    return new Response(z, i, bArr, bArr2, map, th, string);
                }
                httpsURLConnection.disconnect();
            } catch (Throwable unused) {
            }
            byte[] bArr3 = bArrA;
            byte[] bArr4 = bArrA2;
            int i2 = responseCode;
            Map<String, List<String>> map2 = headerFields;
            return new Response(z, i2, bArr3, bArr4, map2, th, string);
        } catch (Throwable th7) {
            return new Response(th7);
        }
    }

    public c(NetworkClient networkClient, Request request) {
        this(networkClient, request, new d());
    }
}
