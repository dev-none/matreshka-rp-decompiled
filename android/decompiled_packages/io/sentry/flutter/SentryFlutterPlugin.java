package io.sentry.flutter;

import android.app.Activity;
import android.content.Context;
import android.os.Build;
import android.os.Looper;
import android.util.Log;
import android.view.Display;
import android.view.Window;
import android.view.WindowManager;
import androidx.core.app.NotificationCompat;
import androidx.media3.extractor.text.ttml.TtmlNode;
import com.google.android.gms.measurement.AppMeasurement;
import io.flutter.embedding.engine.plugins.FlutterPlugin;
import io.flutter.embedding.engine.plugins.activity.ActivityAware;
import io.flutter.embedding.engine.plugins.activity.ActivityPluginBinding;
import io.flutter.plugin.common.MethodCall;
import io.flutter.plugin.common.MethodChannel;
import io.sentry.DateUtils;
import io.sentry.Integration;
import io.sentry.ScopesAdapter;
import io.sentry.SentryDate;
import io.sentry.SentryOptions;
import io.sentry.SentryReplayOptions;
import io.sentry.android.core.InternalSentrySdk;
import io.sentry.android.core.SentryAndroidOptions;
import io.sentry.android.core.performance.ActivityLifecycleTimeSpan;
import io.sentry.android.core.performance.AppStartMetrics;
import io.sentry.android.core.performance.TimeSpan;
import io.sentry.android.replay.Recorder;
import io.sentry.android.replay.ReplayIntegration;
import io.sentry.protocol.DebugImage;
import io.sentry.transport.CurrentDateProvider;
import io.sentry.transport.ICurrentDateProvider;
import java.lang.ref.WeakReference;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;
import java.util.Set;
import kotlin.Metadata;
import kotlin.TuplesKt;
import kotlin.collections.CollectionsKt;
import kotlin.collections.MapsKt;
import kotlin.jvm.JvmStatic;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.Charsets;
import org.json.JSONArray;
import org.json.JSONObject;

/* JADX INFO: compiled from: SentryFlutterPlugin.kt */
/* JADX INFO: loaded from: classes7.dex */
@Metadata(d1 = {"\u0000D\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0006\u0018\u0000 \u001b2\u00020\u00012\u00020\u00022\u00020\u0003:\u0001\u001bB\u0007¢\u0006\u0004\b\u0004\u0010\u0005J\u0010\u0010\n\u001a\u00020\u000b2\u0006\u0010\f\u001a\u00020\rH\u0016J\u0018\u0010\u000e\u001a\u00020\u000b2\u0006\u0010\u000f\u001a\u00020\u00102\u0006\u0010\u0011\u001a\u00020\u0012H\u0016J\u0010\u0010\u0013\u001a\u00020\u000b2\u0006\u0010\u0014\u001a\u00020\rH\u0016J\u0010\u0010\u0015\u001a\u00020\u000b2\u0006\u0010\u0014\u001a\u00020\u0016H\u0016J\b\u0010\u0017\u001a\u00020\u000bH\u0016J\u0010\u0010\u0018\u001a\u00020\u000b2\u0006\u0010\u0014\u001a\u00020\u0016H\u0016J\b\u0010\u0019\u001a\u00020\u000bH\u0016J\u0010\u0010\u001a\u001a\u00020\u000b2\u0006\u0010\u0011\u001a\u00020\u0012H\u0002R\u000e\u0010\u0006\u001a\u00020\u0007X\u0082.¢\u0006\u0002\n\u0000R\u000e\u0010\b\u001a\u00020\tX\u0082.¢\u0006\u0002\n\u0000¨\u0006\u001c"}, d2 = {"Lio/sentry/flutter/SentryFlutterPlugin;", "Lio/flutter/embedding/engine/plugins/FlutterPlugin;", "Lio/flutter/plugin/common/MethodChannel$MethodCallHandler;", "Lio/flutter/embedding/engine/plugins/activity/ActivityAware;", "<init>", "()V", "channel", "Lio/flutter/plugin/common/MethodChannel;", "context", "Landroid/content/Context;", "onAttachedToEngine", "", "flutterPluginBinding", "Lio/flutter/embedding/engine/plugins/FlutterPlugin$FlutterPluginBinding;", "onMethodCall", NotificationCompat.CATEGORY_CALL, "Lio/flutter/plugin/common/MethodCall;", "result", "Lio/flutter/plugin/common/MethodChannel$Result;", "onDetachedFromEngine", "binding", "onAttachedToActivity", "Lio/flutter/embedding/engine/plugins/activity/ActivityPluginBinding;", "onDetachedFromActivity", "onReattachedToActivityForConfigChanges", "onDetachedFromActivityForConfigChanges", "closeNativeSdk", "Companion", "sentry_flutter_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
public final class SentryFlutterPlugin implements FlutterPlugin, MethodChannel.MethodCallHandler, ActivityAware {

    /* JADX INFO: renamed from: Companion, reason: from kotlin metadata */
    public static final Companion INSTANCE = new Companion(null);
    private static final long NATIVE_CRASH_WAIT_TIME = 500;
    private static WeakReference<Activity> activity;
    private static Context applicationContext;
    private static Long pluginRegistrationTime;
    private static ReplayIntegration replay;
    private MethodChannel channel;
    private Context context;

    @JvmStatic
    public static final void crash() throws InterruptedException {
        INSTANCE.crash();
    }

    @JvmStatic
    public static final byte[] fetchNativeAppStartAsBytes() {
        return INSTANCE.fetchNativeAppStartAsBytes();
    }

    @JvmStatic
    public static final Context getApplicationContext() {
        return INSTANCE.getApplicationContext();
    }

    @JvmStatic
    public static final Integer getDisplayRefreshRate() {
        return INSTANCE.getDisplayRefreshRate();
    }

    @JvmStatic
    public static final byte[] loadContextsAsBytes() {
        return INSTANCE.loadContextsAsBytes();
    }

    @JvmStatic
    public static final byte[] loadDebugImagesAsBytes(Set<String> set) {
        return INSTANCE.loadDebugImagesAsBytes(set);
    }

    @JvmStatic
    public static final ReplayIntegration privateSentryGetReplayIntegration() {
        return INSTANCE.privateSentryGetReplayIntegration();
    }

    @JvmStatic
    public static final void setupReplay(SentryAndroidOptions sentryAndroidOptions, ReplayRecorderCallbacks replayRecorderCallbacks) {
        INSTANCE.setupReplay(sentryAndroidOptions, replayRecorderCallbacks);
    }

    @Override // io.flutter.embedding.engine.plugins.activity.ActivityAware
    public void onDetachedFromActivityForConfigChanges() {
    }

    @Override // io.flutter.embedding.engine.plugins.activity.ActivityAware
    public void onReattachedToActivityForConfigChanges(ActivityPluginBinding binding) {
        Intrinsics.checkNotNullParameter(binding, "binding");
    }

    @Override // io.flutter.embedding.engine.plugins.FlutterPlugin
    public void onAttachedToEngine(FlutterPlugin.FlutterPluginBinding flutterPluginBinding) {
        Intrinsics.checkNotNullParameter(flutterPluginBinding, "flutterPluginBinding");
        pluginRegistrationTime = Long.valueOf(System.currentTimeMillis());
        Context applicationContext2 = flutterPluginBinding.getApplicationContext();
        Intrinsics.checkNotNullExpressionValue(applicationContext2, "getApplicationContext(...)");
        this.context = applicationContext2;
        if (applicationContext2 == null) {
            Intrinsics.throwUninitializedPropertyAccessException("context");
            applicationContext2 = null;
        }
        applicationContext = applicationContext2;
        MethodChannel methodChannel = new MethodChannel(flutterPluginBinding.getBinaryMessenger(), "sentry_flutter");
        this.channel = methodChannel;
        methodChannel.setMethodCallHandler(this);
    }

    @Override // io.flutter.plugin.common.MethodChannel.MethodCallHandler
    public void onMethodCall(MethodCall call, MethodChannel.Result result) {
        Intrinsics.checkNotNullParameter(call, "call");
        Intrinsics.checkNotNullParameter(result, "result");
        if (Intrinsics.areEqual(call.method, "closeNativeSdk")) {
            closeNativeSdk(result);
        } else {
            result.notImplemented();
        }
    }

    @Override // io.flutter.embedding.engine.plugins.FlutterPlugin
    public void onDetachedFromEngine(FlutterPlugin.FlutterPluginBinding binding) {
        Intrinsics.checkNotNullParameter(binding, "binding");
        if (this.channel == null) {
            return;
        }
        INSTANCE.tearDownReplayIntegration();
        MethodChannel methodChannel = this.channel;
        if (methodChannel == null) {
            Intrinsics.throwUninitializedPropertyAccessException("channel");
            methodChannel = null;
        }
        methodChannel.setMethodCallHandler(null);
        applicationContext = null;
    }

    @Override // io.flutter.embedding.engine.plugins.activity.ActivityAware
    public void onAttachedToActivity(ActivityPluginBinding binding) {
        Intrinsics.checkNotNullParameter(binding, "binding");
        activity = new WeakReference<>(binding.getActivity());
    }

    @Override // io.flutter.embedding.engine.plugins.activity.ActivityAware
    public void onDetachedFromActivity() {
        activity = null;
    }

    private final void closeNativeSdk(MethodChannel.Result result) {
        ScopesAdapter.getInstance().close();
        result.success("");
    }

    /* JADX INFO: compiled from: SentryFlutterPlugin.kt */
    @Metadata(d1 = {"\u0000|\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\t\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u0002\n\u0002\u0010\u0012\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010%\n\u0002\u0010\u000e\n\u0002\b\u0004\n\u0002\u0010\"\n\u0000\n\u0002\u0010 \n\u0002\u0010$\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0006\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u0006\u0010\u000f\u001a\u00020\u0010J\n\u0010\u0011\u001a\u0004\u0018\u00010\u0005H\u0007J\u001a\u0010\u0012\u001a\u00020\u00102\u0006\u0010\u0013\u001a\u00020\u00142\b\u0010\u0015\u001a\u0004\u0018\u00010\u0016H\u0007J\b\u0010\u0017\u001a\u00020\u0010H\u0007J\u000f\u0010\u0018\u001a\u0004\u0018\u00010\u0019H\u0007¢\u0006\u0002\u0010\u001aJ\n\u0010\u001b\u001a\u0004\u0018\u00010\u001cH\u0007J&\u0010\u001d\u001a\u00020\u00102\u0006\u0010\u001e\u001a\u00020\u001f2\u0014\u0010 \u001a\u0010\u0012\u0004\u0012\u00020\"\u0012\u0006\u0012\u0004\u0018\u00010\u00010!H\u0002J\n\u0010#\u001a\u0004\u0018\u00010\u0007H\u0007J\n\u0010$\u001a\u0004\u0018\u00010\u001cH\u0007J\u0018\u0010%\u001a\u0004\u0018\u00010\u001c2\f\u0010&\u001a\b\u0012\u0004\u0012\u00020\"0'H\u0007J*\u0010(\u001a\u0018\u0012\u0012\u0012\u0010\u0012\u0004\u0012\u00020\"\u0012\u0006\u0012\u0004\u0018\u00010\u00010*\u0018\u00010)*\n\u0012\u0004\u0012\u00020+\u0018\u00010)H\u0002J\u001a\u0010(\u001a\u0010\u0012\u0004\u0012\u00020\"\u0012\u0006\u0012\u0004\u0018\u00010\u00010**\u00020+H\u0002J\f\u0010,\u001a\u00020-*\u00020-H\u0002R\u0014\u0010\u0004\u001a\u0004\u0018\u00010\u00058\u0002@\u0002X\u0083\u000e¢\u0006\u0002\n\u0000R\u0014\u0010\u0006\u001a\u0004\u0018\u00010\u00078\u0002@\u0002X\u0083\u000e¢\u0006\u0002\n\u0000R\u001a\u0010\b\u001a\n\u0012\u0004\u0012\u00020\n\u0018\u00010\t8\u0002@\u0002X\u0083\u000e¢\u0006\u0002\n\u0000R\u0012\u0010\u000b\u001a\u0004\u0018\u00010\fX\u0082\u000e¢\u0006\u0004\n\u0002\u0010\rR\u000e\u0010\u000e\u001a\u00020\fX\u0082T¢\u0006\u0002\n\u0000¨\u0006."}, d2 = {"Lio/sentry/flutter/SentryFlutterPlugin$Companion;", "", "<init>", "()V", "replay", "Lio/sentry/android/replay/ReplayIntegration;", "applicationContext", "Landroid/content/Context;", "activity", "Ljava/lang/ref/WeakReference;", "Landroid/app/Activity;", "pluginRegistrationTime", "", "Ljava/lang/Long;", "NATIVE_CRASH_WAIT_TIME", "tearDownReplayIntegration", "", "privateSentryGetReplayIntegration", "setupReplay", "options", "Lio/sentry/android/core/SentryAndroidOptions;", "replayCallbacks", "Lio/sentry/flutter/ReplayRecorderCallbacks;", AppMeasurement.CRASH_ORIGIN, "getDisplayRefreshRate", "", "()Ljava/lang/Integer;", "fetchNativeAppStartAsBytes", "", "addTimeSpanToMap", TtmlNode.TAG_SPAN, "Lio/sentry/android/core/performance/TimeSpan;", "map", "", "", "getApplicationContext", "loadContextsAsBytes", "loadDebugImagesAsBytes", "addresses", "", "serialize", "", "", "Lio/sentry/protocol/DebugImage;", "adjustReplaySizeToBlockSize", "", "sentry_flutter_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        private final double adjustReplaySizeToBlockSize(double d) {
            double d2 = 16;
            double d3 = d % d2;
            return d3 <= 8.0d ? d - d3 : d + (d2 - d3);
        }

        private Companion() {
        }

        public final void tearDownReplayIntegration() {
            SafeReplayRecorderCallbacks.INSTANCE.bumpGeneration();
            try {
                ReplayIntegration replayIntegration = SentryFlutterPlugin.replay;
                if (replayIntegration != null) {
                    replayIntegration.close();
                }
            } catch (Exception e) {
                Log.w("Sentry", "Failed to close existing ReplayIntegration", e);
            } finally {
                SentryFlutterPlugin.replay = null;
            }
        }

        @JvmStatic
        public final ReplayIntegration privateSentryGetReplayIntegration() {
            return SentryFlutterPlugin.replay;
        }

        @JvmStatic
        public final void setupReplay(SentryAndroidOptions options, ReplayRecorderCallbacks replayCallbacks) {
            Intrinsics.checkNotNullParameter(options, "options");
            tearDownReplayIntegration();
            List<Integration> integrations = options.getIntegrations();
            Intrinsics.checkNotNullExpressionValue(integrations, "getIntegrations(...)");
            CollectionsKt.removeAll((List) integrations, new Function1() { // from class: io.sentry.flutter.SentryFlutterPlugin$Companion$$ExternalSyntheticLambda1
                @Override // kotlin.jvm.functions.Function1
                public final Object invoke(Object obj) {
                    return Boolean.valueOf(SentryFlutterPlugin.Companion.setupReplay$lambda$0((Integration) obj));
                }
            });
            SentryReplayOptions sessionReplay = options.getSessionReplay();
            Intrinsics.checkNotNullExpressionValue(sessionReplay, "getSessionReplay(...)");
            if ((sessionReplay.isSessionReplayEnabled() || sessionReplay.isSessionReplayForErrorsEnabled()) && replayCallbacks != null) {
                Context context = SentryFlutterPlugin.applicationContext;
                if (context == null) {
                    Log.w("Sentry", "setupReplay called before applicationContext initialized");
                    return;
                }
                final SafeReplayRecorderCallbacks safeReplayRecorderCallbacks = new SafeReplayRecorderCallbacks(replayCallbacks);
                Context applicationContext = context.getApplicationContext();
                Intrinsics.checkNotNullExpressionValue(applicationContext, "getApplicationContext(...)");
                ICurrentDateProvider currentDateProvider = CurrentDateProvider.getInstance();
                Intrinsics.checkNotNullExpressionValue(currentDateProvider, "getInstance(...)");
                SentryFlutterPlugin.replay = new ReplayIntegration(applicationContext, currentDateProvider, new Function0() { // from class: io.sentry.flutter.SentryFlutterPlugin$Companion$$ExternalSyntheticLambda2
                    @Override // kotlin.jvm.functions.Function0
                    public final Object invoke() {
                        return SentryFlutterPlugin.Companion.setupReplay$lambda$1(safeReplayRecorderCallbacks);
                    }
                }, null);
                ReplayIntegration replayIntegration = SentryFlutterPlugin.replay;
                Intrinsics.checkNotNull(replayIntegration);
                replayIntegration.setBreadcrumbConverter(new SentryFlutterReplayBreadcrumbConverter());
                ReplayIntegration replayIntegration2 = SentryFlutterPlugin.replay;
                Intrinsics.checkNotNull(replayIntegration2);
                options.addIntegration(replayIntegration2);
                options.setReplayController(SentryFlutterPlugin.replay);
                return;
            }
            options.setReplayController(null);
        }

        /* JADX INFO: Access modifiers changed from: private */
        public static final boolean setupReplay$lambda$0(Integration integration) {
            return integration instanceof ReplayIntegration;
        }

        /* JADX INFO: Access modifiers changed from: private */
        public static final Recorder setupReplay$lambda$1(SafeReplayRecorderCallbacks safeReplayRecorderCallbacks) {
            ReplayIntegration replayIntegration = SentryFlutterPlugin.replay;
            Intrinsics.checkNotNull(replayIntegration);
            return new SentryFlutterReplayRecorder(safeReplayRecorderCallbacks, replayIntegration);
        }

        @JvmStatic
        public final void crash() throws InterruptedException {
            RuntimeException runtimeException = new RuntimeException("FlutterSentry Native Integration: Sample RuntimeException");
            Thread thread = Looper.getMainLooper().getThread();
            Intrinsics.checkNotNullExpressionValue(thread, "getThread(...)");
            Thread.UncaughtExceptionHandler uncaughtExceptionHandler = thread.getUncaughtExceptionHandler();
            if (uncaughtExceptionHandler != null) {
                uncaughtExceptionHandler.uncaughtException(thread, runtimeException);
            }
            thread.join(500L);
        }

        @JvmStatic
        public final Integer getDisplayRefreshRate() {
            Activity activity;
            Window window;
            WindowManager windowManager;
            Activity activity2;
            if (Build.VERSION.SDK_INT >= 30) {
                WeakReference weakReference = SentryFlutterPlugin.activity;
                Display display = (weakReference == null || (activity2 = (Activity) weakReference.get()) == null) ? null : activity2.getDisplay();
                if (display != null) {
                    return Integer.valueOf((int) display.getRefreshRate());
                }
            } else {
                WeakReference weakReference2 = SentryFlutterPlugin.activity;
                Display defaultDisplay = (weakReference2 == null || (activity = (Activity) weakReference2.get()) == null || (window = activity.getWindow()) == null || (windowManager = window.getWindowManager()) == null) ? null : windowManager.getDefaultDisplay();
                if (defaultDisplay != null) {
                    return Integer.valueOf((int) defaultDisplay.getRefreshRate());
                }
            }
            return null;
        }

        @JvmStatic
        public final byte[] fetchNativeAppStartAsBytes() {
            AppStartMetrics appStartMetrics = AppStartMetrics.getInstance();
            Intrinsics.checkNotNullExpressionValue(appStartMetrics, "getInstance(...)");
            if (!appStartMetrics.isAppLaunchedInForeground() || appStartMetrics.getAppStartTimeSpan().getDurationMs() > 60000) {
                Log.w("Sentry", "Invalid app start data: app not launched in foreground or app start took too long (>60s)");
                return null;
            }
            TimeSpan appStartTimeSpan = appStartMetrics.getAppStartTimeSpan();
            Intrinsics.checkNotNullExpressionValue(appStartTimeSpan, "getAppStartTimeSpan(...)");
            SentryDate startTimestamp = appStartTimeSpan.getStartTimestamp();
            boolean z = appStartMetrics.getAppStartType() == AppStartMetrics.AppStartType.COLD;
            if (startTimestamp == null) {
                Log.w("Sentry", "App start won't be sent due to missing appStartTime");
                return null;
            }
            Map mapMutableMapOf = MapsKt.mutableMapOf(TuplesKt.to("pluginRegistrationTime", SentryFlutterPlugin.pluginRegistrationTime), TuplesKt.to("appStartTime", Double.valueOf(DateUtils.nanosToMillis(startTimestamp.nanoTimestamp()))), TuplesKt.to("isColdStart", Boolean.valueOf(z)));
            LinkedHashMap linkedHashMap = new LinkedHashMap();
            TimeSpan timeSpan = new TimeSpan();
            timeSpan.setDescription("Process Initialization");
            timeSpan.setStartUnixTimeMs(appStartTimeSpan.getStartTimestampMs());
            timeSpan.setStartedAt(appStartTimeSpan.getStartUptimeMs());
            timeSpan.setStoppedAt(appStartMetrics.getClassLoadedUptimeMs());
            addTimeSpanToMap(timeSpan, linkedHashMap);
            TimeSpan applicationOnCreateTimeSpan = appStartMetrics.getApplicationOnCreateTimeSpan();
            Intrinsics.checkNotNullExpressionValue(applicationOnCreateTimeSpan, "getApplicationOnCreateTimeSpan(...)");
            addTimeSpanToMap(applicationOnCreateTimeSpan, linkedHashMap);
            List<TimeSpan> contentProviderOnCreateTimeSpans = appStartMetrics.getContentProviderOnCreateTimeSpans();
            Intrinsics.checkNotNullExpressionValue(contentProviderOnCreateTimeSpans, "getContentProviderOnCreateTimeSpans(...)");
            for (TimeSpan timeSpan2 : contentProviderOnCreateTimeSpans) {
                Companion companion = SentryFlutterPlugin.INSTANCE;
                Intrinsics.checkNotNull(timeSpan2);
                companion.addTimeSpanToMap(timeSpan2, linkedHashMap);
            }
            List<ActivityLifecycleTimeSpan> activityLifecycleTimeSpans = appStartMetrics.getActivityLifecycleTimeSpans();
            Intrinsics.checkNotNullExpressionValue(activityLifecycleTimeSpans, "getActivityLifecycleTimeSpans(...)");
            for (ActivityLifecycleTimeSpan activityLifecycleTimeSpan : activityLifecycleTimeSpans) {
                Companion companion2 = SentryFlutterPlugin.INSTANCE;
                TimeSpan onCreate = activityLifecycleTimeSpan.getOnCreate();
                Intrinsics.checkNotNullExpressionValue(onCreate, "getOnCreate(...)");
                companion2.addTimeSpanToMap(onCreate, linkedHashMap);
                Companion companion3 = SentryFlutterPlugin.INSTANCE;
                TimeSpan onStart = activityLifecycleTimeSpan.getOnStart();
                Intrinsics.checkNotNullExpressionValue(onStart, "getOnStart(...)");
                companion3.addTimeSpanToMap(onStart, linkedHashMap);
            }
            mapMutableMapOf.put("nativeSpanTimes", linkedHashMap);
            String string = new JSONObject(mapMutableMapOf).toString();
            Intrinsics.checkNotNullExpressionValue(string, "toString(...)");
            byte[] bytes = string.getBytes(Charsets.UTF_8);
            Intrinsics.checkNotNullExpressionValue(bytes, "getBytes(...)");
            return bytes;
        }

        private final void addTimeSpanToMap(TimeSpan span, Map<String, Object> map) {
            String description;
            if (span.getStartTimestamp() == null || (description = span.getDescription()) == null) {
                return;
            }
            map.put(description, MapsKt.mapOf(TuplesKt.to("startTimestampMsSinceEpoch", Long.valueOf(span.getStartTimestampMs())), TuplesKt.to("stopTimestampMsSinceEpoch", Long.valueOf(span.getProjectedStopTimestampMs()))));
        }

        @JvmStatic
        public final Context getApplicationContext() {
            return SentryFlutterPlugin.applicationContext;
        }

        @JvmStatic
        public final byte[] loadContextsAsBytes() {
            SentryOptions options = ScopesAdapter.getInstance().getOptions();
            Intrinsics.checkNotNullExpressionValue(options, "getOptions(...)");
            Context applicationContext = getApplicationContext();
            if ((options instanceof SentryAndroidOptions) && applicationContext != null) {
                Map<String, Object> mapSerializeScope = InternalSentrySdk.serializeScope(applicationContext, (SentryAndroidOptions) options, InternalSentrySdk.getCurrentScope());
                Intrinsics.checkNotNullExpressionValue(mapSerializeScope, "serializeScope(...)");
                try {
                    String string = new JSONObject(mapSerializeScope).toString();
                    Intrinsics.checkNotNullExpressionValue(string, "toString(...)");
                    byte[] bytes = string.getBytes(Charsets.UTF_8);
                    Intrinsics.checkNotNullExpressionValue(bytes, "getBytes(...)");
                    return bytes;
                } catch (Exception e) {
                    Log.e("Sentry", "Failed to serialize scope", e);
                }
            }
            return null;
        }

        /* JADX WARN: Code duplicated, block: B:16:0x0057  */
        @JvmStatic
        public final byte[] loadDebugImagesAsBytes(Set<String> addresses) {
            List<DebugImage> list;
            List<Map<String, Object>> listSerialize;
            Intrinsics.checkNotNullParameter(addresses, "addresses");
            SentryOptions options = ScopesAdapter.getInstance().getOptions();
            Intrinsics.checkNotNull(options, "null cannot be cast to non-null type io.sentry.android.core.SentryAndroidOptions");
            SentryAndroidOptions sentryAndroidOptions = (SentryAndroidOptions) options;
            if (addresses.isEmpty()) {
                List<DebugImage> listLoadDebugImages = sentryAndroidOptions.getDebugImagesLoader().loadDebugImages();
                listSerialize = serialize(listLoadDebugImages != null ? CollectionsKt.toList(listLoadDebugImages) : null);
            } else {
                Collection collectionLoadDebugImagesForAddresses = sentryAndroidOptions.getDebugImagesLoader().loadDebugImagesForAddresses(addresses);
                if (collectionLoadDebugImagesForAddresses != null) {
                    Collection collectionLoadDebugImages = collectionLoadDebugImagesForAddresses;
                    if (collectionLoadDebugImages.isEmpty()) {
                        collectionLoadDebugImages = sentryAndroidOptions.getDebugImagesLoader().loadDebugImages();
                    }
                    if (collectionLoadDebugImages != null) {
                        list = CollectionsKt.toList(collectionLoadDebugImages);
                    } else {
                        list = null;
                    }
                } else {
                    list = null;
                }
                listSerialize = serialize(list);
            }
            try {
                String string = new JSONArray((Collection) listSerialize).toString();
                Intrinsics.checkNotNullExpressionValue(string, "toString(...)");
                byte[] bytes = string.getBytes(Charsets.UTF_8);
                Intrinsics.checkNotNullExpressionValue(bytes, "getBytes(...)");
                return bytes;
            } catch (Exception e) {
                Log.e("Sentry", "Failed to serialize debug images", e);
                return null;
            }
        }

        private final List<Map<String, Object>> serialize(List<DebugImage> list) {
            if (list == null) {
                return null;
            }
            List<DebugImage> list2 = list;
            ArrayList arrayList = new ArrayList(CollectionsKt.collectionSizeOrDefault(list2, 10));
            Iterator<T> it = list2.iterator();
            while (it.hasNext()) {
                arrayList.add(SentryFlutterPlugin.INSTANCE.serialize((DebugImage) it.next()));
            }
            return arrayList;
        }

        private final Map<String, Object> serialize(DebugImage debugImage) {
            return MapsKt.mapOf(TuplesKt.to("image_addr", debugImage.getImageAddr()), TuplesKt.to(DebugImage.JsonKeys.IMAGE_SIZE, debugImage.getImageSize()), TuplesKt.to(DebugImage.JsonKeys.CODE_FILE, debugImage.getCodeFile()), TuplesKt.to("type", debugImage.getType()), TuplesKt.to(DebugImage.JsonKeys.DEBUG_ID, debugImage.getDebugId()), TuplesKt.to(DebugImage.JsonKeys.CODE_ID, debugImage.getCodeId()), TuplesKt.to(DebugImage.JsonKeys.DEBUG_FILE, debugImage.getDebugFile()));
        }
    }
}
