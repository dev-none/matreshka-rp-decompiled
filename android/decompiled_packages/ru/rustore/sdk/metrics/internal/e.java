package ru.rustore.sdk.metrics.internal;

import androidx.core.view.accessibility.AccessibilityNodeInfoCompat;
import com.google.common.net.HttpHeaders;
import com.google.firebase.perf.network.FirebasePerfUrlConnection;
import io.sentry.TraceContext;
import java.net.MalformedURLException;
import java.net.URI;
import java.net.URL;
import java.net.URLConnection;
import javax.net.ssl.HttpsURLConnection;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.StringsKt;
import ru.rustore.sdk.metrics.BuildConfig;

/* JADX INFO: compiled from: r8-map-id-4892bc8aaa9cdd837b26b2f72aee5e335c1d677d3c7dc49a4dd01deea16fe0e8 */
/* JADX INFO: loaded from: classes8.dex */
public final class e {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final d f6625a;

    public e(d endpointConfigClient) {
        Intrinsics.checkNotNullParameter(endpointConfigClient, "endpointConfigClient");
        this.f6625a = endpointConfigClient;
    }

    /* JADX WARN: Code duplicated, block: B:29:0x0097  */
    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r1v11 */
    /* JADX WARN: Type inference failed for: r1v12 */
    /* JADX WARN: Type inference failed for: r1v13 */
    /* JADX WARN: Type inference failed for: r1v14 */
    /* JADX WARN: Type inference failed for: r1v2, types: [java.lang.String] */
    /* JADX WARN: Type inference failed for: r1v4 */
    /* JADX WARN: Type inference failed for: r1v6, types: [java.net.HttpURLConnection] */
    /* JADX WARN: Type inference failed for: r3v1, types: [java.net.HttpURLConnection] */
    /* JADX WARN: Type inference failed for: r3v2 */
    /* JADX WARN: Type inference failed for: r3v8 */
    public final String a() throws Throwable {
        HttpsURLConnection httpsURLConnection;
        d dVar = this.f6625a;
        String str = null;
        str = null;
        str = null;
        str = null;
        str = null;
        str = null;
        ?? r3 = 0;
        str = null;
        if (!StringsKt.isBlank("")) {
            try {
                URL configUrl = new URL("");
                ?? r1 = "configUrl";
                Intrinsics.checkNotNullParameter(configUrl, "configUrl");
                try {
                    try {
                        URLConnection uRLConnection = (URLConnection) FirebasePerfUrlConnection.instrument(configUrl.openConnection());
                        Intrinsics.checkNotNull(uRLConnection, "null cannot be cast to non-null type javax.net.ssl.HttpsURLConnection");
                        httpsURLConnection = (HttpsURLConnection) uRLConnection;
                        try {
                            httpsURLConnection.setSSLSocketFactory(dVar.f6624a);
                            httpsURLConnection.setHostnameVerifier(d.a(configUrl));
                            httpsURLConnection.setRequestMethod("GET");
                            httpsURLConnection.setInstanceFollowRedirects(false);
                            httpsURLConnection.setUseCaches(false);
                            httpsURLConnection.setConnectTimeout(AccessibilityNodeInfoCompat.EXTRA_DATA_TEXT_CHARACTER_LOCATION_ARG_MAX_LENGTH);
                            httpsURLConnection.setReadTimeout(AccessibilityNodeInfoCompat.EXTRA_DATA_TEXT_CHARACTER_LOCATION_ARG_MAX_LENGTH);
                            httpsURLConnection.setRequestProperty("Cache-Control", "no-cache, no-store");
                            httpsURLConnection.setRequestProperty(HttpHeaders.PRAGMA, "no-cache");
                            httpsURLConnection.setRequestProperty(TraceContext.JsonKeys.USER_ID, dVar.c.a());
                            if (httpsURLConnection.getResponseCode() != 301) {
                                httpsURLConnection.disconnect();
                            } else {
                                String headerField = httpsURLConnection.getHeaderField("Location");
                                if (headerField != null && d.a(headerField)) {
                                    r1 = httpsURLConnection;
                                    r1 = httpsURLConnection;
                                    str = headerField;
                                    r1 = httpsURLConnection;
                                }
                                r1 = httpsURLConnection;
                                r1 = httpsURLConnection;
                                r1 = httpsURLConnection;
                                r1.disconnect();
                            }
                        } catch (Exception e) {
                            e = e;
                            dVar.b.a(new b(e));
                            r1 = httpsURLConnection;
                            if (httpsURLConnection != null) {
                                r1 = httpsURLConnection;
                                r1 = httpsURLConnection;
                                r1 = httpsURLConnection;
                                r1.disconnect();
                            }
                        }
                    } catch (Throwable th) {
                        th = th;
                        r3 = r1;
                        if (r3 != 0) {
                            r3.disconnect();
                        }
                        throw th;
                    }
                } catch (Exception e2) {
                    e = e2;
                    httpsURLConnection = null;
                } catch (Throwable th2) {
                    th = th2;
                    if (r3 != 0) {
                        r3.disconnect();
                    }
                    throw th;
                }
            } catch (MalformedURLException e3) {
                dVar.b.a(new c(e3));
            }
        }
        if (str != null) {
            return str;
        }
        String string = new URI(BuildConfig.BACKEND_URL).resolve("/v1/send_custom_event_batch").toString();
        Intrinsics.checkNotNullExpressionValue(string, "URI(DEFAULT_BACKEND_BASE…(SERVICE_PATH).toString()");
        return string;
    }
}
