package ru.rustore.sdk.metrics.internal;

import androidx.core.view.accessibility.AccessibilityNodeInfoCompat;
import com.google.firebase.perf.network.FirebasePerfUrlConnection;
import com.google.firebase.remoteconfig.RemoteConfigConstants;
import io.sentry.SentryLockReason;
import io.sentry.TraceContext;
import io.sentry.protocol.Message;
import java.io.OutputStream;
import java.net.HttpURLConnection;
import java.net.ProtocolException;
import java.net.URL;
import java.net.URLConnection;
import java.util.ArrayList;
import java.util.Map;
import java.util.Set;
import javax.net.ssl.HostnameVerifier;
import javax.net.ssl.HttpsURLConnection;
import javax.net.ssl.SSLSession;
import javax.net.ssl.SSLSocketFactory;
import kotlin.Unit;
import kotlin.collections.SetsKt;
import kotlin.io.CloseableKt;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.Charsets;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;
import ru.rustore.sdk.metrics.MetricsException;

/* JADX INFO: compiled from: r8-map-id-4892bc8aaa9cdd837b26b2f72aee5e335c1d677d3c7dc49a4dd01deea16fe0e8 */
/* JADX INFO: loaded from: classes8.dex */
public final class y {
    public static final Set<Integer> d = SetsKt.setOf((Object[]) new Integer[]{400, 413});

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final e f6679a;
    public final k b;
    public final SSLSocketFactory c;

    public y(e endpointProvider, v0 remoteMetricsEventDtoSerializer, k logger, SSLSocketFactory internalSslSocketFactory) {
        Intrinsics.checkNotNullParameter(endpointProvider, "endpointProvider");
        Intrinsics.checkNotNullParameter(remoteMetricsEventDtoSerializer, "remoteMetricsEventDtoSerializer");
        Intrinsics.checkNotNullParameter(logger, "logger");
        Intrinsics.checkNotNullParameter(internalSslSocketFactory, "internalSslSocketFactory");
        this.f6679a = endpointProvider;
        this.b = logger;
        this.c = internalSslSocketFactory;
    }

    public static void a(int i) throws l {
        if (d.contains(Integer.valueOf(i))) {
            throw new l(i);
        }
        if (200 > i || i >= 300) {
            throw new IllegalStateException(("Metrics backend returned HTTP " + i).toString());
        }
    }

    public final void b(ArrayList values) {
        Intrinsics.checkNotNullParameter(values, "values");
        HttpURLConnection httpURLConnection = null;
        try {
            try {
                String strA = a(values);
                HttpsURLConnection httpsURLConnectionB = b(new URL(this.f6679a.a()));
                OutputStream outputStream = httpsURLConnectionB.getOutputStream();
                try {
                    byte[] bytes = strA.getBytes(Charsets.UTF_8);
                    Intrinsics.checkNotNullExpressionValue(bytes, "this as java.lang.String).getBytes(charset)");
                    outputStream.write(bytes);
                    outputStream.flush();
                    Unit unit = Unit.INSTANCE;
                    CloseableKt.closeFinally(outputStream, null);
                    try {
                        URL url = httpsURLConnectionB.getURL();
                        int responseCode = httpsURLConnectionB.getResponseCode();
                        this.b.a(new v(url, responseCode, strA, httpsURLConnectionB.getRequestProperty("X-Metrics-Request-Time")));
                        a(responseCode);
                        httpsURLConnectionB.disconnect();
                    } catch (l e) {
                        e = e;
                        this.b.a(new w(e));
                        throw e;
                    } catch (Throwable th) {
                        th = th;
                        this.b.a(new x(th));
                        throw new MetricsException.NetworkError("Http request was failed", th);
                    }
                } catch (Throwable th2) {
                    try {
                        throw th2;
                    } catch (Throwable th3) {
                        CloseableKt.closeFinally(outputStream, th2);
                        throw th3;
                    }
                }
            } catch (Throwable th4) {
                if (0 != 0) {
                    httpURLConnection.disconnect();
                }
                throw th4;
            }
        } catch (l e2) {
            e = e2;
        } catch (Throwable th5) {
            th = th5;
        }
    }

    public final String a(ArrayList arrayList) throws JSONException {
        JSONObject jSONObject = new JSONObject();
        JSONArray jSONArray = new JSONArray();
        int size = arrayList.size();
        int i = 0;
        while (i < size) {
            Object obj = arrayList.get(i);
            i++;
            u0 remoteMetricsEventDto = (u0) obj;
            Intrinsics.checkNotNullParameter(remoteMetricsEventDto, "remoteMetricsEventDto");
            JSONObject jSONObject2 = new JSONObject();
            jSONObject2.put("event_name", remoteMetricsEventDto.e.getEventName());
            jSONObject2.put(TraceContext.JsonKeys.USER_ID, remoteMetricsEventDto.c);
            JSONObject jSONObject3 = new JSONObject();
            jSONObject3.put(SentryLockReason.JsonKeys.PACKAGE_NAME, remoteMetricsEventDto.f6673a);
            String str = remoteMetricsEventDto.d;
            if (str == null) {
                str = null;
            }
            jSONObject3.put(RemoteConfigConstants.RequestFieldKey.APP_VERSION, str);
            jSONObject3.put("userIdSdk", remoteMetricsEventDto.c);
            jSONObject3.put("time", String.valueOf(remoteMetricsEventDto.e.getEventTime()));
            for (Map.Entry<String, String> entry : remoteMetricsEventDto.e.getEventData().entrySet()) {
                jSONObject3.put(entry.getKey(), entry.getValue());
            }
            jSONObject2.put(Message.JsonKeys.PARAMS, jSONObject3);
            String string = jSONObject2.toString();
            Intrinsics.checkNotNullExpressionValue(string, "jsonObject.toString()");
            jSONArray.put(new JSONObject(string));
        }
        jSONObject.put("events", jSONArray);
        String string2 = jSONObject.toString();
        Intrinsics.checkNotNullExpressionValue(string2, "jsonObject.toString()");
        return string2;
    }

    public final HttpsURLConnection b(URL url) throws ProtocolException {
        URLConnection uRLConnection = (URLConnection) FirebasePerfUrlConnection.instrument(url.openConnection());
        Intrinsics.checkNotNull(uRLConnection, "null cannot be cast to non-null type javax.net.ssl.HttpsURLConnection");
        HttpsURLConnection httpsURLConnection = (HttpsURLConnection) uRLConnection;
        httpsURLConnection.setSSLSocketFactory(this.c);
        httpsURLConnection.setHostnameVerifier(a(url));
        httpsURLConnection.setRequestMethod("POST");
        httpsURLConnection.setInstanceFollowRedirects(false);
        httpsURLConnection.setRequestProperty("content-type", "application/json");
        httpsURLConnection.setRequestProperty("X-Metrics-Request-Time", String.valueOf(System.currentTimeMillis()));
        httpsURLConnection.setConnectTimeout(AccessibilityNodeInfoCompat.EXTRA_DATA_TEXT_CHARACTER_LOCATION_ARG_MAX_LENGTH);
        httpsURLConnection.setReadTimeout(AccessibilityNodeInfoCompat.EXTRA_DATA_TEXT_CHARACTER_LOCATION_ARG_MAX_LENGTH);
        httpsURLConnection.setDoOutput(true);
        return httpsURLConnection;
    }

    public static HostnameVerifier a(final URL url) {
        return new HostnameVerifier() { // from class: ru.rustore.sdk.metrics.internal.y$$ExternalSyntheticLambda0
            @Override // javax.net.ssl.HostnameVerifier
            public final boolean verify(String str, SSLSession sSLSession) {
                return y.a(url, str, sSLSession);
            }
        };
    }

    public static final boolean a(URL url, String str, SSLSession sSLSession) {
        return str.equals(url.getHost());
    }
}
