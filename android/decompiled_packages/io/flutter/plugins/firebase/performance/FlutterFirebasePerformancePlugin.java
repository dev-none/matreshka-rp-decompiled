package io.flutter.plugins.firebase.performance;

import androidx.exifinterface.media.ExifInterface;
import com.google.android.gms.tasks.Task;
import com.google.android.gms.tasks.TaskCompletionSource;
import com.google.firebase.FirebaseApp;
import com.google.firebase.perf.FirebasePerformance;
import com.google.firebase.perf.metrics.HttpMetric;
import com.google.firebase.perf.metrics.Trace;
import io.flutter.embedding.engine.plugins.FlutterPlugin;
import io.flutter.plugin.common.BinaryMessenger;
import io.flutter.plugins.firebase.analytics.Constants;
import io.flutter.plugins.firebase.core.FlutterFirebasePlugin;
import io.flutter.plugins.firebase.core.FlutterFirebasePluginRegistry;
import io.sentry.SentryEvent;
import java.util.HashMap;
import java.util.Map;
import kotlin.Metadata;
import kotlin.NoWhenBranchMatchedException;
import kotlin.Result;
import kotlin.ResultKt;
import kotlin.Unit;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: FlutterFirebasePerformancePlugin.kt */
/* JADX INFO: loaded from: classes7.dex */
@Metadata(d1 = {"\u0000\u0084\u0001\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u000b\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0002\u0010\t\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0010$\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\u0018\u0000 02\u00020\u00012\u00020\u00022\u00020\u0003:\u00010B\u0007¢\u0006\u0004\b\u0004\u0010\u0005J\u0010\u0010\b\u001a\u00020\t2\u0006\u0010\n\u001a\u00020\u0007H\u0002J\u0010\u0010\u000b\u001a\u00020\t2\u0006\u0010\f\u001a\u00020\rH\u0016J\u0010\u0010\u000e\u001a\u00020\t2\u0006\u0010\f\u001a\u00020\rH\u0016J*\u0010\u000f\u001a\u00020\t2\u0006\u0010\u0010\u001a\u00020\u00112\u0018\u0010\u0012\u001a\u0014\u0012\n\u0012\b\u0012\u0004\u0012\u00020\t0\u0014\u0012\u0004\u0012\u00020\t0\u0013H\u0016J\"\u0010\u0015\u001a\u00020\t2\u0018\u0010\u0012\u001a\u0014\u0012\n\u0012\b\u0012\u0004\u0012\u00020\u00110\u0014\u0012\u0004\u0012\u00020\t0\u0013H\u0016J*\u0010\u0016\u001a\u00020\t2\u0006\u0010\u0017\u001a\u00020\u00182\u0018\u0010\u0012\u001a\u0014\u0012\n\u0012\b\u0012\u0004\u0012\u00020\u00190\u0014\u0012\u0004\u0012\u00020\t0\u0013H\u0016J2\u0010\u001a\u001a\u00020\t2\u0006\u0010\u001b\u001a\u00020\u00192\u0006\u0010\u001c\u001a\u00020\u001d2\u0018\u0010\u0012\u001a\u0014\u0012\n\u0012\b\u0012\u0004\u0012\u00020\t0\u0014\u0012\u0004\u0012\u00020\t0\u0013H\u0016J*\u0010\u001e\u001a\u00020\t2\u0006\u0010\u001f\u001a\u00020 2\u0018\u0010\u0012\u001a\u0014\u0012\n\u0012\b\u0012\u0004\u0012\u00020\u00190\u0014\u0012\u0004\u0012\u00020\t0\u0013H\u0016J2\u0010!\u001a\u00020\t2\u0006\u0010\u001b\u001a\u00020\u00192\u0006\u0010\u001c\u001a\u00020\"2\u0018\u0010\u0012\u001a\u0014\u0012\n\u0012\b\u0012\u0004\u0012\u00020\t0\u0014\u0012\u0004\u0012\u00020\t0\u0013H\u0016J8\u0010#\u001a\u00020\t\"\u0004\b\u0000\u0010$2\u0018\u0010\u0012\u001a\u0014\u0012\n\u0012\b\u0012\u0004\u0012\u0002H$0\u0014\u0012\u0004\u0012\u00020\t0\u00132\u000e\u0010%\u001a\n\u0018\u00010&j\u0004\u0018\u0001`'H\u0002J\"\u0010(\u001a\u0014\u0012\u0010\u0012\u000e\u0012\u0004\u0012\u00020\u0018\u0012\u0004\u0012\u00020+0*0)2\u0006\u0010,\u001a\u00020-H\u0016J\u000e\u0010.\u001a\b\u0012\u0004\u0012\u00020/0)H\u0016R\u0010\u0010\u0006\u001a\u0004\u0018\u00010\u0007X\u0082\u000e¢\u0006\u0002\n\u0000¨\u00061"}, d2 = {"Lio/flutter/plugins/firebase/performance/FlutterFirebasePerformancePlugin;", "Lio/flutter/plugins/firebase/core/FlutterFirebasePlugin;", "Lio/flutter/embedding/engine/plugins/FlutterPlugin;", "Lio/flutter/plugins/firebase/performance/FirebasePerformanceHostApi;", "<init>", "()V", "binaryMessenger", "Lio/flutter/plugin/common/BinaryMessenger;", "initInstance", "", "messenger", "onAttachedToEngine", "binding", "Lio/flutter/embedding/engine/plugins/FlutterPlugin$FlutterPluginBinding;", "onDetachedFromEngine", "setPerformanceCollectionEnabled", Constants.ENABLED, "", "callback", "Lkotlin/Function1;", "Lkotlin/Result;", "isPerformanceCollectionEnabled", "startTrace", "name", "", "", "stopTrace", "handle", "attributes", "Lio/flutter/plugins/firebase/performance/TraceAttributes;", "startHttpMetric", "options", "Lio/flutter/plugins/firebase/performance/HttpMetricOptions;", "stopHttpMetric", "Lio/flutter/plugins/firebase/performance/HttpMetricAttributes;", "handleFailure", ExifInterface.GPS_DIRECTION_TRUE, SentryEvent.JsonKeys.EXCEPTION, "Ljava/lang/Exception;", "Lkotlin/Exception;", "getPluginConstantsForFirebaseApp", "Lcom/google/android/gms/tasks/Task;", "", "", "firebaseApp", "Lcom/google/firebase/FirebaseApp;", "didReinitializeFirebaseCore", "Ljava/lang/Void;", "Companion", "firebase_performance_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
public final class FlutterFirebasePerformancePlugin implements FlutterFirebasePlugin, FlutterPlugin, FirebasePerformanceHostApi {
    private static final String METHOD_CHANNEL_NAME = "plugins.flutter.io/firebase_performance";
    private static int _httpMetricHandle;
    private static int _traceHandle;
    private BinaryMessenger binaryMessenger;

    /* JADX INFO: renamed from: Companion, reason: from kotlin metadata */
    public static final Companion INSTANCE = new Companion(null);
    private static final HashMap<Integer, HttpMetric> _httpMetrics = new HashMap<>();
    private static final HashMap<Integer, Trace> _traces = new HashMap<>();

    private final void initInstance(BinaryMessenger messenger) {
        FlutterFirebasePluginRegistry.registerPlugin(METHOD_CHANNEL_NAME, this);
        this.binaryMessenger = messenger;
        FirebasePerformanceHostApi.Companion.setUp$default(FirebasePerformanceHostApi.INSTANCE, messenger, this, null, 4, null);
    }

    @Override // io.flutter.embedding.engine.plugins.FlutterPlugin
    public void onAttachedToEngine(FlutterPlugin.FlutterPluginBinding binding) {
        Intrinsics.checkNotNullParameter(binding, "binding");
        BinaryMessenger binaryMessenger = binding.getBinaryMessenger();
        Intrinsics.checkNotNullExpressionValue(binaryMessenger, "getBinaryMessenger(...)");
        initInstance(binaryMessenger);
    }

    @Override // io.flutter.embedding.engine.plugins.FlutterPlugin
    public void onDetachedFromEngine(FlutterPlugin.FlutterPluginBinding binding) {
        Intrinsics.checkNotNullParameter(binding, "binding");
        this.binaryMessenger = null;
        FirebasePerformanceHostApi.Companion companion = FirebasePerformanceHostApi.INSTANCE;
        BinaryMessenger binaryMessenger = binding.getBinaryMessenger();
        Intrinsics.checkNotNullExpressionValue(binaryMessenger, "getBinaryMessenger(...)");
        FirebasePerformanceHostApi.Companion.setUp$default(companion, binaryMessenger, null, null, 4, null);
    }

    @Override // io.flutter.plugins.firebase.performance.FirebasePerformanceHostApi
    public void setPerformanceCollectionEnabled(final boolean enabled, final Function1<? super Result<Unit>, Unit> callback) {
        Intrinsics.checkNotNullParameter(callback, "callback");
        FlutterFirebasePlugin.cachedThreadPool.execute(new Runnable() { // from class: io.flutter.plugins.firebase.performance.FlutterFirebasePerformancePlugin$$ExternalSyntheticLambda2
            @Override // java.lang.Runnable
            public final void run() {
                FlutterFirebasePerformancePlugin.setPerformanceCollectionEnabled$lambda$0(enabled, callback, this);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void setPerformanceCollectionEnabled$lambda$0(boolean z, Function1 function1, FlutterFirebasePerformancePlugin flutterFirebasePerformancePlugin) {
        try {
            FirebasePerformance.getInstance().setPerformanceCollectionEnabled(z);
            Result.Companion companion = Result.INSTANCE;
            function1.invoke(Result.m9860boximpl(Result.m9861constructorimpl(Unit.INSTANCE)));
        } catch (Exception e) {
            flutterFirebasePerformancePlugin.handleFailure(function1, e);
        }
    }

    @Override // io.flutter.plugins.firebase.performance.FirebasePerformanceHostApi
    public void isPerformanceCollectionEnabled(final Function1<? super Result<Boolean>, Unit> callback) {
        Intrinsics.checkNotNullParameter(callback, "callback");
        FlutterFirebasePlugin.cachedThreadPool.execute(new Runnable() { // from class: io.flutter.plugins.firebase.performance.FlutterFirebasePerformancePlugin$$ExternalSyntheticLambda6
            @Override // java.lang.Runnable
            public final void run() {
                FlutterFirebasePerformancePlugin.isPerformanceCollectionEnabled$lambda$0(callback, this);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void isPerformanceCollectionEnabled$lambda$0(Function1 function1, FlutterFirebasePerformancePlugin flutterFirebasePerformancePlugin) {
        try {
            boolean zIsPerformanceCollectionEnabled = FirebasePerformance.getInstance().isPerformanceCollectionEnabled();
            Result.Companion companion = Result.INSTANCE;
            function1.invoke(Result.m9860boximpl(Result.m9861constructorimpl(Boolean.valueOf(zIsPerformanceCollectionEnabled))));
        } catch (Exception e) {
            flutterFirebasePerformancePlugin.handleFailure(function1, e);
        }
    }

    @Override // io.flutter.plugins.firebase.performance.FirebasePerformanceHostApi
    public void startTrace(final String name, final Function1<? super Result<Long>, Unit> callback) {
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(callback, "callback");
        FlutterFirebasePlugin.cachedThreadPool.execute(new Runnable() { // from class: io.flutter.plugins.firebase.performance.FlutterFirebasePerformancePlugin$$ExternalSyntheticLambda0
            @Override // java.lang.Runnable
            public final void run() {
                FlutterFirebasePerformancePlugin.startTrace$lambda$0(name, callback, this);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void startTrace$lambda$0(String str, Function1 function1, FlutterFirebasePerformancePlugin flutterFirebasePerformancePlugin) {
        try {
            Trace traceNewTrace = FirebasePerformance.getInstance().newTrace(str);
            Intrinsics.checkNotNullExpressionValue(traceNewTrace, "newTrace(...)");
            traceNewTrace.start();
            int i = _traceHandle;
            _traceHandle = i + 1;
            _traces.put(Integer.valueOf(i), traceNewTrace);
            Result.Companion companion = Result.INSTANCE;
            function1.invoke(Result.m9860boximpl(Result.m9861constructorimpl(Long.valueOf(i))));
        } catch (Exception e) {
            flutterFirebasePerformancePlugin.handleFailure(function1, e);
        }
    }

    @Override // io.flutter.plugins.firebase.performance.FirebasePerformanceHostApi
    public void stopTrace(final long handle, final TraceAttributes attributes, final Function1<? super Result<Unit>, Unit> callback) {
        Intrinsics.checkNotNullParameter(attributes, "attributes");
        Intrinsics.checkNotNullParameter(callback, "callback");
        FlutterFirebasePlugin.cachedThreadPool.execute(new Runnable() { // from class: io.flutter.plugins.firebase.performance.FlutterFirebasePerformancePlugin$$ExternalSyntheticLambda7
            @Override // java.lang.Runnable
            public final void run() {
                FlutterFirebasePerformancePlugin.stopTrace$lambda$0(handle, callback, attributes, this);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void stopTrace$lambda$0(long j, Function1 function1, TraceAttributes traceAttributes, FlutterFirebasePerformancePlugin flutterFirebasePerformancePlugin) {
        try {
            int i = (int) j;
            Trace trace = _traces.get(Integer.valueOf(i));
            if (trace == null) {
                Result.Companion companion = Result.INSTANCE;
                function1.invoke(Result.m9860boximpl(Result.m9861constructorimpl(Unit.INSTANCE)));
                return;
            }
            Map<String, String> attributes = traceAttributes.getAttributes();
            if (attributes != null) {
                for (Map.Entry<String, String> entry : attributes.entrySet()) {
                    trace.putAttribute(entry.getKey(), entry.getValue());
                }
            }
            Map<String, Long> metrics = traceAttributes.getMetrics();
            if (metrics != null) {
                for (Map.Entry<String, Long> entry2 : metrics.entrySet()) {
                    trace.putMetric(entry2.getKey(), entry2.getValue().longValue());
                }
            }
            trace.stop();
            _traces.remove(Integer.valueOf(i));
            Result.Companion companion2 = Result.INSTANCE;
            function1.invoke(Result.m9860boximpl(Result.m9861constructorimpl(Unit.INSTANCE)));
        } catch (Exception e) {
            flutterFirebasePerformancePlugin.handleFailure(function1, e);
        }
    }

    @Override // io.flutter.plugins.firebase.performance.FirebasePerformanceHostApi
    public void startHttpMetric(final HttpMetricOptions options, final Function1<? super Result<Long>, Unit> callback) {
        Intrinsics.checkNotNullParameter(options, "options");
        Intrinsics.checkNotNullParameter(callback, "callback");
        FlutterFirebasePlugin.cachedThreadPool.execute(new Runnable() { // from class: io.flutter.plugins.firebase.performance.FlutterFirebasePerformancePlugin$$ExternalSyntheticLambda5
            @Override // java.lang.Runnable
            public final void run() {
                FlutterFirebasePerformancePlugin.startHttpMetric$lambda$0(options, callback, this);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void startHttpMetric$lambda$0(HttpMetricOptions httpMetricOptions, Function1 function1, FlutterFirebasePerformancePlugin flutterFirebasePerformancePlugin) {
        try {
            HttpMetric httpMetricNewHttpMetric = FirebasePerformance.getInstance().newHttpMetric(httpMetricOptions.getUrl(), INSTANCE.parseHttpMethod(httpMetricOptions.getHttpMethod()));
            Intrinsics.checkNotNullExpressionValue(httpMetricNewHttpMetric, "newHttpMetric(...)");
            httpMetricNewHttpMetric.start();
            int i = _httpMetricHandle;
            _httpMetricHandle = i + 1;
            _httpMetrics.put(Integer.valueOf(i), httpMetricNewHttpMetric);
            Result.Companion companion = Result.INSTANCE;
            function1.invoke(Result.m9860boximpl(Result.m9861constructorimpl(Long.valueOf(i))));
        } catch (Exception e) {
            flutterFirebasePerformancePlugin.handleFailure(function1, e);
        }
    }

    @Override // io.flutter.plugins.firebase.performance.FirebasePerformanceHostApi
    public void stopHttpMetric(final long handle, final HttpMetricAttributes attributes, final Function1<? super Result<Unit>, Unit> callback) {
        Intrinsics.checkNotNullParameter(attributes, "attributes");
        Intrinsics.checkNotNullParameter(callback, "callback");
        FlutterFirebasePlugin.cachedThreadPool.execute(new Runnable() { // from class: io.flutter.plugins.firebase.performance.FlutterFirebasePerformancePlugin$$ExternalSyntheticLambda1
            @Override // java.lang.Runnable
            public final void run() {
                FlutterFirebasePerformancePlugin.stopHttpMetric$lambda$0(handle, callback, attributes, this);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void stopHttpMetric$lambda$0(long j, Function1 function1, HttpMetricAttributes httpMetricAttributes, FlutterFirebasePerformancePlugin flutterFirebasePerformancePlugin) {
        try {
            int i = (int) j;
            HttpMetric httpMetric = _httpMetrics.get(Integer.valueOf(i));
            if (httpMetric == null) {
                Result.Companion companion = Result.INSTANCE;
                function1.invoke(Result.m9860boximpl(Result.m9861constructorimpl(Unit.INSTANCE)));
                return;
            }
            Long httpResponseCode = httpMetricAttributes.getHttpResponseCode();
            if (httpResponseCode != null) {
                httpMetric.setHttpResponseCode((int) httpResponseCode.longValue());
            }
            Long requestPayloadSize = httpMetricAttributes.getRequestPayloadSize();
            if (requestPayloadSize != null) {
                httpMetric.setRequestPayloadSize(requestPayloadSize.longValue());
            }
            String responseContentType = httpMetricAttributes.getResponseContentType();
            if (responseContentType != null) {
                httpMetric.setResponseContentType(responseContentType);
            }
            Long responsePayloadSize = httpMetricAttributes.getResponsePayloadSize();
            if (responsePayloadSize != null) {
                httpMetric.setResponsePayloadSize(responsePayloadSize.longValue());
            }
            Map<String, String> attributes = httpMetricAttributes.getAttributes();
            if (attributes != null) {
                for (Map.Entry<String, String> entry : attributes.entrySet()) {
                    httpMetric.putAttribute(entry.getKey(), entry.getValue());
                }
            }
            httpMetric.stop();
            _httpMetrics.remove(Integer.valueOf(i));
            Result.Companion companion2 = Result.INSTANCE;
            function1.invoke(Result.m9860boximpl(Result.m9861constructorimpl(Unit.INSTANCE)));
        } catch (Exception e) {
            flutterFirebasePerformancePlugin.handleFailure(function1, e);
        }
    }

    private final <T> void handleFailure(Function1<? super Result<? extends T>, Unit> callback, Exception exception) {
        String message = exception != null ? exception.getMessage() : "An unknown error occurred";
        Result.Companion companion = Result.INSTANCE;
        callback.invoke(Result.m9860boximpl(Result.m9861constructorimpl(ResultKt.createFailure(new FlutterError("firebase_performance", message, null)))));
    }

    @Override // io.flutter.plugins.firebase.core.FlutterFirebasePlugin
    public Task<Map<String, Object>> getPluginConstantsForFirebaseApp(FirebaseApp firebaseApp) {
        Intrinsics.checkNotNullParameter(firebaseApp, "firebaseApp");
        final TaskCompletionSource taskCompletionSource = new TaskCompletionSource();
        FlutterFirebasePlugin.cachedThreadPool.execute(new Runnable() { // from class: io.flutter.plugins.firebase.performance.FlutterFirebasePerformancePlugin$$ExternalSyntheticLambda4
            @Override // java.lang.Runnable
            public final void run() {
                FlutterFirebasePerformancePlugin.getPluginConstantsForFirebaseApp$lambda$0(taskCompletionSource);
            }
        });
        Task<Map<String, Object>> task = taskCompletionSource.getTask();
        Intrinsics.checkNotNullExpressionValue(task, "getTask(...)");
        return task;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void getPluginConstantsForFirebaseApp$lambda$0(TaskCompletionSource taskCompletionSource) {
        try {
            taskCompletionSource.setResult(new HashMap());
        } catch (Exception e) {
            taskCompletionSource.setException(e);
        }
    }

    @Override // io.flutter.plugins.firebase.core.FlutterFirebasePlugin
    public Task<Void> didReinitializeFirebaseCore() {
        final TaskCompletionSource taskCompletionSource = new TaskCompletionSource();
        FlutterFirebasePlugin.cachedThreadPool.execute(new Runnable() { // from class: io.flutter.plugins.firebase.performance.FlutterFirebasePerformancePlugin$$ExternalSyntheticLambda3
            @Override // java.lang.Runnable
            public final void run() {
                FlutterFirebasePerformancePlugin.didReinitializeFirebaseCore$lambda$0(taskCompletionSource);
            }
        });
        Task<Void> task = taskCompletionSource.getTask();
        Intrinsics.checkNotNullExpressionValue(task, "getTask(...)");
        return task;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void didReinitializeFirebaseCore$lambda$0(TaskCompletionSource taskCompletionSource) {
        try {
            for (Trace trace : _traces.values()) {
                Intrinsics.checkNotNullExpressionValue(trace, "next(...)");
                trace.stop();
            }
            _traces.clear();
            for (HttpMetric httpMetric : _httpMetrics.values()) {
                Intrinsics.checkNotNullExpressionValue(httpMetric, "next(...)");
                httpMetric.stop();
            }
            _httpMetrics.clear();
            taskCompletionSource.setResult(null);
        } catch (Exception e) {
            taskCompletionSource.setException(e);
        }
    }

    /* JADX INFO: compiled from: FlutterFirebasePerformancePlugin.kt */
    @Metadata(d1 = {"\u00004\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0002\u0010\b\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u000b\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u0010\u0010\u0018\u001a\u00020\u00052\u0006\u0010\u0019\u001a\u00020\u001aH\u0002R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R-\u0010\u0006\u001a\u001e\u0012\u0004\u0012\u00020\b\u0012\u0004\u0012\u00020\t0\u0007j\u000e\u0012\u0004\u0012\u00020\b\u0012\u0004\u0012\u00020\t`\n¢\u0006\b\n\u0000\u001a\u0004\b\u000b\u0010\fR-\u0010\r\u001a\u001e\u0012\u0004\u0012\u00020\b\u0012\u0004\u0012\u00020\u000e0\u0007j\u000e\u0012\u0004\u0012\u00020\b\u0012\u0004\u0012\u00020\u000e`\n¢\u0006\b\n\u0000\u001a\u0004\b\u000f\u0010\fR\u001a\u0010\u0010\u001a\u00020\bX\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u0011\u0010\u0012\"\u0004\b\u0013\u0010\u0014R\u001a\u0010\u0015\u001a\u00020\bX\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u0016\u0010\u0012\"\u0004\b\u0017\u0010\u0014¨\u0006\u001b"}, d2 = {"Lio/flutter/plugins/firebase/performance/FlutterFirebasePerformancePlugin$Companion;", "", "<init>", "()V", "METHOD_CHANNEL_NAME", "", "_httpMetrics", "Ljava/util/HashMap;", "", "Lcom/google/firebase/perf/metrics/HttpMetric;", "Lkotlin/collections/HashMap;", "get_httpMetrics", "()Ljava/util/HashMap;", "_traces", "Lcom/google/firebase/perf/metrics/Trace;", "get_traces", "_traceHandle", "get_traceHandle", "()I", "set_traceHandle", "(I)V", "_httpMetricHandle", "get_httpMetricHandle", "set_httpMetricHandle", "parseHttpMethod", "httpMethod", "Lio/flutter/plugins/firebase/performance/HttpMethod;", "firebase_performance_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
    public static final class Companion {

        /* JADX INFO: compiled from: FlutterFirebasePerformancePlugin.kt */
        @Metadata(k = 3, mv = {2, 2, 0}, xi = 48)
        public static final /* synthetic */ class WhenMappings {
            public static final /* synthetic */ int[] $EnumSwitchMapping$0;

            static {
                int[] iArr = new int[HttpMethod.values().length];
                try {
                    iArr[HttpMethod.CONNECT.ordinal()] = 1;
                } catch (NoSuchFieldError unused) {
                }
                try {
                    iArr[HttpMethod.DELETE.ordinal()] = 2;
                } catch (NoSuchFieldError unused2) {
                }
                try {
                    iArr[HttpMethod.GET.ordinal()] = 3;
                } catch (NoSuchFieldError unused3) {
                }
                try {
                    iArr[HttpMethod.HEAD.ordinal()] = 4;
                } catch (NoSuchFieldError unused4) {
                }
                try {
                    iArr[HttpMethod.OPTIONS.ordinal()] = 5;
                } catch (NoSuchFieldError unused5) {
                }
                try {
                    iArr[HttpMethod.PATCH.ordinal()] = 6;
                } catch (NoSuchFieldError unused6) {
                }
                try {
                    iArr[HttpMethod.POST.ordinal()] = 7;
                } catch (NoSuchFieldError unused7) {
                }
                try {
                    iArr[HttpMethod.PUT.ordinal()] = 8;
                } catch (NoSuchFieldError unused8) {
                }
                try {
                    iArr[HttpMethod.TRACE.ordinal()] = 9;
                } catch (NoSuchFieldError unused9) {
                }
                $EnumSwitchMapping$0 = iArr;
            }
        }

        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        private Companion() {
        }

        public final HashMap<Integer, HttpMetric> get_httpMetrics() {
            return FlutterFirebasePerformancePlugin._httpMetrics;
        }

        public final HashMap<Integer, Trace> get_traces() {
            return FlutterFirebasePerformancePlugin._traces;
        }

        public final int get_traceHandle() {
            return FlutterFirebasePerformancePlugin._traceHandle;
        }

        public final void set_traceHandle(int i) {
            FlutterFirebasePerformancePlugin._traceHandle = i;
        }

        public final int get_httpMetricHandle() {
            return FlutterFirebasePerformancePlugin._httpMetricHandle;
        }

        public final void set_httpMetricHandle(int i) {
            FlutterFirebasePerformancePlugin._httpMetricHandle = i;
        }

        /* JADX INFO: Access modifiers changed from: private */
        public final String parseHttpMethod(HttpMethod httpMethod) {
            switch (WhenMappings.$EnumSwitchMapping$0[httpMethod.ordinal()]) {
                case 1:
                    return FirebasePerformance.HttpMethod.CONNECT;
                case 2:
                    return FirebasePerformance.HttpMethod.DELETE;
                case 3:
                    return "GET";
                case 4:
                    return FirebasePerformance.HttpMethod.HEAD;
                case 5:
                    return FirebasePerformance.HttpMethod.OPTIONS;
                case 6:
                    return FirebasePerformance.HttpMethod.PATCH;
                case 7:
                    return "POST";
                case 8:
                    return FirebasePerformance.HttpMethod.PUT;
                case 9:
                    return FirebasePerformance.HttpMethod.TRACE;
                default:
                    throw new NoWhenBranchMatchedException();
            }
        }
    }
}
