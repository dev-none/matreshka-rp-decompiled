package ru.ok.tracer.lite.performance.metrics.upload;

import android.content.Context;
import android.content.pm.PackageInfo;
import android.content.pm.PackageManager;
import android.net.Uri;
import android.util.Log;
import io.sentry.protocol.profiling.SentryProfile;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.collections.CollectionsKt;
import kotlin.io.CloseableKt;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.StringsKt;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;
import ru.ok.tracer.base.apptoken.AppTokenUtils;
import ru.ok.tracer.base.commands.CommandsHandler;
import ru.ok.tracer.base.compat.PackageInfoCompat;
import ru.ok.tracer.base.compat.PackageManagerCompat;
import ru.ok.tracer.base.http.HttpRequest;
import ru.ok.tracer.base.http.HttpRequestBody;
import ru.ok.tracer.base.http.HttpResponse;
import ru.ok.tracer.base.http.HttpResponseBody;
import ru.ok.tracer.base.time.PrecisionClock;
import ru.ok.tracer.lite.TracerLite;
import ru.ok.tracer.lite.limits.TracerLiteLimits;
import ru.ok.tracer.lite.performance.metrics.PerfSampleLite;
import ru.ok.tracer.lite.performance.metrics.TracerPerformanceMetricsLiteKt;
import ru.ok.tracer.lite.upload.TracerLiteHttpClientHolder;
import ru.ok.tracer.lite.upload.UploadBeanUtilsLite;

/* JADX INFO: compiled from: PerfSampleUploaderLite.kt */
/* JADX INFO: loaded from: classes8.dex */
@Metadata(d1 = {"\u0000Z\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\t\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010$\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\b\u0000\u0018\u00002\u00020\u0001B\r\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0002\u0010\u0004J\u001c\u0010\u0010\u001a\u00020\u00112\u0012\u0010\u0012\u001a\u000e\u0012\u0004\u0012\u00020\f\u0012\u0004\u0012\u00020\u00010\u0013H\u0002J \u0010\u0014\u001a\u0004\u0018\u00010\u00112\u0014\u0010\u0012\u001a\u0010\u0012\u0004\u0012\u00020\f\u0012\u0004\u0012\u00020\u0001\u0018\u00010\u0013H\u0002J\u0016\u0010\u0015\u001a\u00020\u00162\f\u0010\u0017\u001a\b\u0012\u0004\u0012\u00020\u00190\u0018H\u0002J\u0010\u0010\u0015\u001a\u00020\u00112\u0006\u0010\u001a\u001a\u00020\u0019H\u0002J\u0014\u0010\u001b\u001a\u00020\u001c2\f\u0010\u0017\u001a\b\u0012\u0004\u0012\u00020\u00190\u0018J\u0016\u0010\u001d\u001a\u00020\u001c2\f\u0010\u0017\u001a\b\u0012\u0004\u0012\u00020\u00190\u0018H\u0002R\u000e\u0010\u0005\u001a\u00020\u0006X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0007\u001a\u00020\bX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\t\u001a\u00020\nX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u000b\u001a\u00020\fX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\r\u001a\u00020\u000eX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u000f\u001a\u00020\fX\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u001e"}, d2 = {"Lru/ok/tracer/lite/performance/metrics/upload/PerfSampleUploaderLite;", "", "tracer", "Lru/ok/tracer/lite/TracerLite;", "(Lru/ok/tracer/lite/TracerLite;)V", "commandHandler", "Lru/ok/tracer/base/commands/CommandsHandler;", "httpClientHolder", "Lru/ok/tracer/lite/upload/TracerLiteHttpClientHolder;", "limits", "Lru/ok/tracer/lite/limits/TracerLiteLimits;", "packageName", "", "versionCode", "", "versionName", "attributesToJson", "Lorg/json/JSONObject;", "attributes", "", "nullableAttributesToJson", "toJson", "Lorg/json/JSONArray;", SentryProfile.JsonKeys.SAMPLES, "", "Lru/ok/tracer/lite/performance/metrics/PerfSampleLite;", "sample", "upload", "", "uploadSingleSession", "tracer-lite-performance-metrics_release"}, k = 1, mv = {1, 7, 1}, xi = 48)
public final class PerfSampleUploaderLite {
    private final CommandsHandler commandHandler;
    private final TracerLiteHttpClientHolder httpClientHolder;
    private final TracerLiteLimits limits;
    private final String packageName;
    private final TracerLite tracer;
    private final long versionCode;
    private final String versionName;

    public PerfSampleUploaderLite(TracerLite tracer) throws PackageManager.NameNotFoundException {
        Intrinsics.checkNotNullParameter(tracer, "tracer");
        this.tracer = tracer;
        Context context = tracer.getContext();
        PackageManager packageManager = context.getPackageManager();
        Intrinsics.checkNotNullExpressionValue(packageManager, "context.packageManager");
        String packageName = context.getPackageName();
        Intrinsics.checkNotNullExpressionValue(packageName, "context.packageName");
        PackageInfo packageInfoCompat = PackageManagerCompat.getPackageInfoCompat(packageManager, packageName, 0);
        String str = packageInfoCompat.versionName;
        Intrinsics.checkNotNullExpressionValue(str, "packageInfo.versionName");
        this.versionName = str;
        this.versionCode = PackageInfoCompat.getLongVersionCodeCompat(packageInfoCompat);
        String str2 = packageInfoCompat.packageName;
        Intrinsics.checkNotNullExpressionValue(str2, "packageInfo.packageName");
        this.packageName = str2;
        this.httpClientHolder = TracerLiteHttpClientHolder.INSTANCE.get(tracer);
        TracerLiteLimits tracerLiteLimits = TracerLiteLimits.INSTANCE.get(tracer);
        this.limits = tracerLiteLimits;
        this.commandHandler = new CommandsHandler.Builder().setLimitsHandler(tracerLiteLimits).setFeatureName(TracerPerformanceMetricsLiteKt.FEATURE_PERFORMANCE_METRICS).build();
    }

    public final void upload(List<PerfSampleLite> samples) throws JSONException {
        Intrinsics.checkNotNullParameter(samples, "samples");
        LinkedHashMap linkedHashMap = new LinkedHashMap();
        for (Object obj : samples) {
            String sessionUuid = ((PerfSampleLite) obj).getSessionUuid();
            Object obj2 = linkedHashMap.get(sessionUuid);
            if (obj2 == null) {
                obj2 = (List) new ArrayList();
                linkedHashMap.put(sessionUuid, obj2);
            }
            ((List) obj2).add(obj);
        }
        Iterator it = linkedHashMap.entrySet().iterator();
        while (it.hasNext()) {
            uploadSingleSession((List) ((Map.Entry) it.next()).getValue());
        }
    }

    private final void uploadSingleSession(List<PerfSampleLite> samples) throws JSONException {
        byte[] bytes;
        if (samples.isEmpty()) {
            return;
        }
        try {
            String libToken = this.tracer.getLibToken();
            if (libToken == null) {
                throw new IllegalStateException("No lib token".toString());
            }
            String hostAppToken = AppTokenUtils.getHostAppToken(this.tracer.getContext());
            JSONObject jSONObjectComposeLibUploadBean$default = UploadBeanUtilsLite.composeLibUploadBean$default(this.tracer.getContext(), this.tracer.getLibraryInfo(), ((PerfSampleLite) CollectionsKt.first((List) samples)).getSessionUuid(), null, null, null, 56, null);
            jSONObjectComposeLibUploadBean$default.put("clientTimeUnixNano", PrecisionClock.currentTimeNanos());
            jSONObjectComposeLibUploadBean$default.put(SentryProfile.JsonKeys.SAMPLES, toJson(samples));
            Uri.Builder builderAppendQueryParameter = Uri.parse(this.tracer.getConfiguration().getApiUrl()).buildUpon().appendEncodedPath("api/perf/upload").appendQueryParameter("crashToken", libToken);
            if (hostAppToken != null) {
                builderAppendQueryParameter.appendQueryParameter("crashHostAppToken", hostAppToken);
            }
            String string = builderAppendQueryParameter.toString();
            Intrinsics.checkNotNullExpressionValue(string, "tracer.configuration.api…}\n            .toString()");
            HttpRequestBody.Companion companion = HttpRequestBody.INSTANCE;
            String string2 = jSONObjectComposeLibUploadBean$default.toString();
            Intrinsics.checkNotNullExpressionValue(string2, "bodyJsonObject.toString()");
            try {
                HttpResponse httpResponseExecute = this.httpClientHolder.getHttpClient().execute(new HttpRequest(string, HttpRequestBody.Companion.fromString$default(companion, "application/json; charset=utf-8", string2, null, 4, null)));
                try {
                    HttpResponse httpResponse = httpResponseExecute;
                    int statusCode = httpResponse.getStatusCode();
                    String message = httpResponse.getMessage();
                    HttpResponseBody body = httpResponse.getBody();
                    String contentType = body != null ? body.getContentType() : null;
                    HttpResponseBody body2 = httpResponse.getBody();
                    this.commandHandler.handleResponse(contentType, (body2 == null || (bytes = body2.getBytes()) == null) ? null : StringsKt.decodeToString(bytes));
                    if (statusCode == 200) {
                        Unit unit = Unit.INSTANCE;
                        CloseableKt.closeFinally(httpResponseExecute, null);
                    } else {
                        throw new IOException("HTTP " + statusCode + ' ' + message);
                    }
                } catch (Throwable th) {
                    try {
                        throw th;
                    } catch (Throwable th2) {
                        CloseableKt.closeFinally(httpResponseExecute, th);
                        throw th2;
                    }
                }
            } catch (IOException e) {
                Log.e("ru.ok.tracer", "Tracer crash report failed", e);
            }
        } catch (Exception unused) {
            Log.e("Tracer", "No lib token");
        }
    }

    private final JSONArray toJson(List<PerfSampleLite> samples) {
        JSONArray jSONArray = new JSONArray();
        Iterator<PerfSampleLite> it = samples.iterator();
        while (it.hasNext()) {
            jSONArray.put(toJson(it.next()));
        }
        return jSONArray;
    }

    private final JSONObject toJson(PerfSampleLite sample) throws JSONException {
        JSONObject jSONObject = new JSONObject();
        jSONObject.put("timeUnixNano", sample.getTimeUnixNano());
        jSONObject.put("name", sample.getName());
        jSONObject.put("value", sample.getValue());
        jSONObject.put("unit", sample.getUnit());
        Map<String, Object> attributes = sample.getAttributes();
        if (attributes.isEmpty()) {
            attributes = null;
        }
        jSONObject.put("attributes", nullableAttributesToJson(attributes));
        return jSONObject;
    }

    private final JSONObject nullableAttributesToJson(Map<String, ? extends Object> attributes) {
        if (attributes != null) {
            return attributesToJson(attributes);
        }
        return null;
    }

    private final JSONObject attributesToJson(Map<String, ? extends Object> attributes) throws JSONException {
        JSONObject jSONObject = new JSONObject();
        for (Map.Entry<String, ? extends Object> entry : attributes.entrySet()) {
            String key = entry.getKey();
            Object value = entry.getValue();
            if (value instanceof String) {
                jSONObject.put(key, value);
            } else if (value instanceof Boolean) {
                jSONObject.put(key, ((Boolean) value).booleanValue());
            } else if (value instanceof Long) {
                jSONObject.put(key, ((Number) value).longValue());
            } else if (value instanceof Double) {
                jSONObject.put(key, ((Number) value).doubleValue());
            } else if (value instanceof Byte) {
                jSONObject.put(key, value);
            } else if (value instanceof Short) {
                jSONObject.put(key, value);
            } else if (value instanceof Integer) {
                jSONObject.put(key, ((Number) value).intValue());
            } else if (value instanceof Float) {
                jSONObject.put(key, value);
            } else {
                jSONObject.put(key, value.toString());
            }
        }
        return jSONObject;
    }
}
