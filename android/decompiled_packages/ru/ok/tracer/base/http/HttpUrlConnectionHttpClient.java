package ru.ok.tracer.base.http;

import android.content.Context;
import android.net.TrafficStats;
import com.google.firebase.perf.network.FirebasePerfUrlConnection;
import com.tekartik.sqflite.Constant;
import io.sentry.SentryBaseEvent;
import java.io.BufferedInputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;
import java.net.HttpURLConnection;
import java.net.URL;
import java.net.URLConnection;
import java.net.UnknownHostException;
import java.util.List;
import javax.net.ssl.HttpsURLConnection;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.collections.CollectionsKt;
import kotlin.io.ByteStreamsKt;
import kotlin.io.CloseableKt;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.StringsKt;
import ru.ok.tracer.base.cert.TrustManagerUtils;

/* JADX INFO: compiled from: HttpUrlConnectionHttpClient.kt */
/* JADX INFO: loaded from: classes8.dex */
@Metadata(d1 = {"\u00008\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\b\n\u0002\b\u0004\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\b\u0000\u0018\u0000 \u00152\u00020\u0001:\u0001\u0015B7\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\n\b\u0002\u0010\u0004\u001a\u0004\u0018\u00010\u0005\u0012\b\b\u0002\u0010\u0006\u001a\u00020\u0007\u0012\b\b\u0002\u0010\b\u001a\u00020\u0007\u0012\b\b\u0002\u0010\t\u001a\u00020\u0007¢\u0006\u0002\u0010\nJ(\u0010\u000b\u001a\u00020\f2\u0006\u0010\r\u001a\u00020\u000e2\u0006\u0010\u0006\u001a\u00020\u00072\u0006\u0010\b\u001a\u00020\u00072\u0006\u0010\t\u001a\u00020\u0007H\u0002J\u0010\u0010\u000f\u001a\u00020\u00102\u0006\u0010\u0011\u001a\u00020\u0012H\u0016J\u0010\u0010\u0013\u001a\u00020\u00072\u0006\u0010\u0014\u001a\u00020\u000eH\u0002R\u000e\u0010\b\u001a\u00020\u0007X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\t\u001a\u00020\u0007X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0007X\u0082\u0004¢\u0006\u0002\n\u0000R\u0010\u0010\u0004\u001a\u0004\u0018\u00010\u0005X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u0016"}, d2 = {"Lru/ok/tracer/base/http/HttpUrlConnectionHttpClient;", "Lru/ok/tracer/base/http/HttpClient;", "context", "Landroid/content/Context;", "userAgent", "", "trafficStatsTag", "", "connectTimeout", "readTimeout", "(Landroid/content/Context;Ljava/lang/String;III)V", "connect", "", "conn", "Ljava/net/HttpURLConnection;", Constant.METHOD_EXECUTE, "Lru/ok/tracer/base/http/HttpResponse;", SentryBaseEvent.JsonKeys.REQUEST, "Lru/ok/tracer/base/http/HttpRequest;", "getResponseCode", "connection", "Companion", "tracer-base_release"}, k = 1, mv = {1, 7, 1}, xi = 48)
public final class HttpUrlConnectionHttpClient implements HttpClient {
    public static final int NO_TRAFFIC_STATS_TAG = -1;
    private final int connectTimeout;
    private final Context context;
    private final int readTimeout;
    private final int trafficStatsTag;
    private final String userAgent;

    public HttpUrlConnectionHttpClient(Context context, String str, int i, int i2, int i3) {
        Intrinsics.checkNotNullParameter(context, "context");
        this.context = context;
        this.userAgent = str;
        this.trafficStatsTag = i;
        this.connectTimeout = i2;
        this.readTimeout = i3;
    }

    public /* synthetic */ HttpUrlConnectionHttpClient(Context context, String str, int i, int i2, int i3, int i4, DefaultConstructorMarker defaultConstructorMarker) {
        this(context, (i4 & 2) != 0 ? null : str, (i4 & 4) != 0 ? -1 : i, (i4 & 8) != 0 ? 0 : i2, (i4 & 16) != 0 ? 0 : i3);
    }

    private final int getResponseCode(HttpURLConnection connection) throws IOException {
        try {
            return connection.getResponseCode();
        } catch (ArrayIndexOutOfBoundsException e) {
            throw new IOException(e);
        } catch (NullPointerException e2) {
            String message = e2.getMessage();
            if (message != null && StringsKt.startsWith$default(message, "Attempt to read from field 'int com.android.okhttp.okio.Segment.limit'", false, 2, (Object) null)) {
                throw new IOException(e2);
            }
            throw e2;
        }
    }

    @Override // ru.ok.tracer.base.http.HttpClient
    public HttpResponse execute(HttpRequest request) throws IOException {
        String str;
        byte[] bytes;
        Intrinsics.checkNotNullParameter(request, "request");
        String method = request.getMethod();
        String url = request.getUrl();
        HttpRequestBody body = request.getBody();
        URLConnection uRLConnection = (URLConnection) FirebasePerfUrlConnection.instrument(new URL(url).openConnection());
        Intrinsics.checkNotNull(uRLConnection, "null cannot be cast to non-null type java.net.HttpURLConnection");
        HttpURLConnection httpURLConnection = (HttpURLConnection) uRLConnection;
        if (httpURLConnection instanceof HttpsURLConnection) {
            ((HttpsURLConnection) httpURLConnection).setSSLSocketFactory(TrustManagerUtils.createSSLSocketFactory(TrustManagerUtils.createTracerTrustManager(this.context)));
        }
        try {
            httpURLConnection.setRequestMethod(method);
            String str2 = this.userAgent;
            if (str2 != null) {
                httpURLConnection.setRequestProperty("User-Agent", str2);
            }
            if (body != null) {
                httpURLConnection.setRequestProperty("Content-Type", body.getContentType());
                httpURLConnection.setDoOutput(true);
                if (body.getContentLength() >= 0) {
                    httpURLConnection.setFixedLengthStreamingMode(body.getContentLength());
                } else {
                    httpURLConnection.setChunkedStreamingMode(4096);
                }
            }
            connect(httpURLConnection, this.trafficStatsTag, this.connectTimeout, this.readTimeout);
            if (body != null) {
                OutputStream outputStream = httpURLConnection.getOutputStream();
                try {
                    OutputStream it = outputStream;
                    Intrinsics.checkNotNullExpressionValue(it, "it");
                    body.writeTo(it);
                    Unit unit = Unit.INSTANCE;
                    CloseableKt.closeFinally(outputStream, null);
                } catch (Throwable th) {
                    try {
                        throw th;
                    } catch (Throwable th2) {
                        CloseableKt.closeFinally(outputStream, th);
                        throw th2;
                    }
                }
            }
            int responseCode = getResponseCode(httpURLConnection);
            String responseMessage = httpURLConnection.getResponseMessage();
            List<String> list = httpURLConnection.getHeaderFields().get("Content-Type");
            if (list == null || (str = (String) CollectionsKt.firstOrNull((List) list)) == null) {
                str = "application/octet-stream";
            }
            if (responseCode < 400) {
                InputStream inputStream = httpURLConnection.getInputStream();
                Intrinsics.checkNotNullExpressionValue(inputStream, "conn.inputStream");
                BufferedInputStream bufferedInputStream = inputStream instanceof BufferedInputStream ? (BufferedInputStream) inputStream : new BufferedInputStream(inputStream, 8192);
                try {
                    bytes = ByteStreamsKt.readBytes(bufferedInputStream);
                    CloseableKt.closeFinally(bufferedInputStream, null);
                } catch (Throwable th3) {
                    try {
                        throw th3;
                    } catch (Throwable th4) {
                        CloseableKt.closeFinally(bufferedInputStream, th3);
                        throw th4;
                    }
                }
            } else {
                InputStream errorStream = httpURLConnection.getErrorStream();
                Intrinsics.checkNotNullExpressionValue(errorStream, "conn.errorStream");
                BufferedInputStream bufferedInputStream2 = errorStream instanceof BufferedInputStream ? (BufferedInputStream) errorStream : new BufferedInputStream(errorStream, 8192);
                try {
                    bytes = ByteStreamsKt.readBytes(bufferedInputStream2);
                    CloseableKt.closeFinally(bufferedInputStream2, null);
                } catch (Throwable th5) {
                    try {
                        throw th5;
                    } catch (Throwable th6) {
                        CloseableKt.closeFinally(bufferedInputStream2, th5);
                        throw th6;
                    }
                }
            }
            Intrinsics.checkNotNullExpressionValue(responseMessage, "responseMessage");
            return new HttpResponse(responseCode, responseMessage, new HttpByteArrayBody(str, bytes));
        } catch (IOException e) {
            httpURLConnection.disconnect();
            throw e;
        }
    }

    private final void connect(HttpURLConnection conn, int trafficStatsTag, int connectTimeout, int readTimeout) throws IOException {
        int threadStatsTag;
        if (trafficStatsTag != -1) {
            threadStatsTag = TrafficStats.getThreadStatsTag();
            TrafficStats.setThreadStatsTag(trafficStatsTag);
        } else {
            threadStatsTag = -1;
        }
        try {
            if (connectTimeout > 0) {
                try {
                    try {
                        try {
                            conn.setConnectTimeout(connectTimeout);
                        } catch (SecurityException e) {
                            Throwable cause = e.getCause();
                            if (cause == null) {
                                throw e;
                            }
                            String name = cause.getClass().getName();
                            if (!Intrinsics.areEqual(name, "libcore.io.GaiException") && !Intrinsics.areEqual(name, "android.system.GaiException")) {
                                throw e;
                            }
                            throw new UnknownHostException();
                        }
                    } catch (NullPointerException e2) {
                        throw e2;
                    }
                } catch (IllegalArgumentException e3) {
                    throw e3;
                }
            }
            if (readTimeout > 0) {
                conn.setReadTimeout(readTimeout);
            }
            conn.connect();
            if (threadStatsTag != -1) {
                TrafficStats.setThreadStatsTag(threadStatsTag);
            }
        } catch (Throwable th) {
            if (threadStatsTag != -1) {
                TrafficStats.setThreadStatsTag(threadStatsTag);
            }
            throw th;
        }
    }
}
