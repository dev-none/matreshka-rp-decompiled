package com.pravera.flutter_foreground_task.service;

import android.app.Application;
import android.app.Notification;
import android.app.NotificationChannel;
import android.app.NotificationManager;
import android.app.PendingIntent;
import android.app.Service;
import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.content.SharedPreferences;
import android.content.pm.ApplicationInfo;
import android.graphics.Color;
import android.graphics.drawable.Icon;
import android.net.wifi.WifiManager;
import android.os.Build;
import android.os.Bundle;
import android.os.IBinder;
import android.os.PowerManager;
import android.text.Spannable;
import android.text.SpannableString;
import android.text.style.ForegroundColorSpan;
import android.util.Log;
import androidx.core.app.NotificationCompat;
import androidx.media3.common.C;
import androidx.media3.extractor.text.ttml.TtmlNode;
import com.google.android.gms.common.internal.ServiceSpecificExtraArgs;
import com.pravera.flutter_foreground_task.FlutterForegroundTaskLifecycleListener;
import com.pravera.flutter_foreground_task.PreferencesKey;
import com.pravera.flutter_foreground_task.RequestCode;
import com.pravera.flutter_foreground_task.models.ForegroundServiceAction;
import com.pravera.flutter_foreground_task.models.ForegroundServiceStatus;
import com.pravera.flutter_foreground_task.models.ForegroundServiceTypes;
import com.pravera.flutter_foreground_task.models.ForegroundTaskData;
import com.pravera.flutter_foreground_task.models.ForegroundTaskEventAction;
import com.pravera.flutter_foreground_task.models.ForegroundTaskOptions;
import com.pravera.flutter_foreground_task.models.NotificationButton;
import com.pravera.flutter_foreground_task.models.NotificationContent;
import com.pravera.flutter_foreground_task.models.NotificationIcon;
import com.pravera.flutter_foreground_task.models.NotificationOptions;
import com.pravera.flutter_foreground_task.utils.ForegroundServiceUtils;
import com.pravera.flutter_foreground_task.utils.TrackVisibilityUtils;
import io.appmetrica.analytics.coreutils.internal.StringUtils;
import io.sentry.protocol.FeatureFlags;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.Set;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.StringsKt;
import kotlinx.coroutines.flow.FlowKt;
import kotlinx.coroutines.flow.MutableStateFlow;
import kotlinx.coroutines.flow.StateFlow;
import kotlinx.coroutines.flow.StateFlowKt;

/* JADX INFO: compiled from: ForegroundService.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000¯\u0001\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000b\n\u0000\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0000\n\u0002\u0010\b\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\f\n\u0002\u0018\u0002\n\u0002\b\b\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002*\u0001\u001d\u0018\u0000 S2\u00020\u0001:\u0001SB\u0007¢\u0006\u0004\b\u0002\u0010\u0003J\b\u0010\u001f\u001a\u00020 H\u0016J\"\u0010!\u001a\u00020\"2\b\u0010#\u001a\u0004\u0018\u00010$2\u0006\u0010%\u001a\u00020\"2\u0006\u0010&\u001a\u00020\"H\u0016J\u0014\u0010'\u001a\u0004\u0018\u00010(2\b\u0010#\u001a\u0004\u0018\u00010$H\u0016J\b\u0010)\u001a\u00020 H\u0016J\u0012\u0010*\u001a\u00020 2\b\u0010+\u001a\u0004\u0018\u00010$H\u0016J\u0010\u0010,\u001a\u00020 2\u0006\u0010&\u001a\u00020\"H\u0016J\u0018\u0010,\u001a\u00020 2\u0006\u0010&\u001a\u00020\"2\u0006\u0010-\u001a\u00020\"H\u0017J\b\u0010.\u001a\u00020 H\u0002J\b\u0010/\u001a\u00020 H\u0002J\b\u00100\u001a\u00020 H\u0002J\b\u00101\u001a\u00020 H\u0003J\b\u00102\u001a\u00020 H\u0002J\b\u00103\u001a\u00020 H\u0003J\b\u00104\u001a\u000205H\u0002J\b\u00106\u001a\u00020 H\u0002J\b\u00107\u001a\u00020 H\u0003J\b\u00108\u001a\u00020 H\u0002J\b\u00109\u001a\u00020 H\u0002J\b\u0010:\u001a\u00020 H\u0002J\u0012\u0010;\u001a\u00020 2\b\b\u0002\u0010\u001a\u001a\u00020\u001bH\u0002J\u0012\u0010<\u001a\u00020\"2\b\u0010=\u001a\u0004\u0018\u00010>H\u0002J\b\u0010?\u001a\u00020@H\u0002J\b\u0010A\u001a\u00020@H\u0002J\u0017\u0010B\u001a\u0004\u0018\u00010\"2\u0006\u0010C\u001a\u00020DH\u0002¢\u0006\u0002\u0010EJ\u001f\u0010F\u001a\u00020G2\u0006\u0010H\u001a\u00020D2\b\u0010I\u001a\u0004\u0018\u00010\"H\u0002¢\u0006\u0002\u0010JJ&\u0010K\u001a\b\u0012\u0004\u0012\u00020M0L2\f\u0010N\u001a\b\u0012\u0004\u0012\u00020O0L2\b\b\u0002\u0010P\u001a\u00020\u001bH\u0002J&\u0010Q\u001a\b\u0012\u0004\u0012\u00020R0L2\f\u0010N\u001a\b\u0012\u0004\u0012\u00020O0L2\b\b\u0002\u0010P\u001a\u00020\u001bH\u0002R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082.¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0007X\u0082.¢\u0006\u0002\n\u0000R\u000e\u0010\b\u001a\u00020\tX\u0082.¢\u0006\u0002\n\u0000R\u000e\u0010\n\u001a\u00020\u000bX\u0082.¢\u0006\u0002\n\u0000R\u000e\u0010\f\u001a\u00020\rX\u0082.¢\u0006\u0002\n\u0000R\u000e\u0010\u000e\u001a\u00020\u000fX\u0082.¢\u0006\u0002\n\u0000R\u0010\u0010\u0010\u001a\u0004\u0018\u00010\tX\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010\u0011\u001a\u0004\u0018\u00010\u000bX\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010\u0012\u001a\u0004\u0018\u00010\rX\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010\u0013\u001a\u0004\u0018\u00010\u000fX\u0082\u000e¢\u0006\u0002\n\u0000R\u0014\u0010\u0014\u001a\b\u0018\u00010\u0015R\u00020\u0016X\u0082\u000e¢\u0006\u0002\n\u0000R\u0014\u0010\u0017\u001a\b\u0018\u00010\u0018R\u00020\u0019X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u001a\u001a\u00020\u001bX\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010\u001c\u001a\u00020\u001dX\u0082\u000e¢\u0006\u0004\n\u0002\u0010\u001e¨\u0006T"}, d2 = {"Lcom/pravera/flutter_foreground_task/service/ForegroundService;", "Landroid/app/Service;", "<init>", "()V", "foregroundServiceStatus", "Lcom/pravera/flutter_foreground_task/models/ForegroundServiceStatus;", "foregroundServiceTypes", "Lcom/pravera/flutter_foreground_task/models/ForegroundServiceTypes;", "foregroundTaskOptions", "Lcom/pravera/flutter_foreground_task/models/ForegroundTaskOptions;", "foregroundTaskData", "Lcom/pravera/flutter_foreground_task/models/ForegroundTaskData;", "notificationOptions", "Lcom/pravera/flutter_foreground_task/models/NotificationOptions;", "notificationContent", "Lcom/pravera/flutter_foreground_task/models/NotificationContent;", "prevForegroundTaskOptions", "prevForegroundTaskData", "prevNotificationOptions", "prevNotificationContent", "wakeLock", "Landroid/os/PowerManager$WakeLock;", "Landroid/os/PowerManager;", "wifiLock", "Landroid/net/wifi/WifiManager$WifiLock;", "Landroid/net/wifi/WifiManager;", "isTimeout", "", "broadcastReceiver", "com/pravera/flutter_foreground_task/service/ForegroundService$broadcastReceiver$1", "Lcom/pravera/flutter_foreground_task/service/ForegroundService$broadcastReceiver$1;", "onCreate", "", "onStartCommand", "", "intent", "Landroid/content/Intent;", FeatureFlags.TYPE, "startId", "onBind", "Landroid/os/IBinder;", "onDestroy", "onTaskRemoved", "rootIntent", "onTimeout", "fgsType", "loadDataFromPreferences", "registerBroadcastReceiver", "unregisterBroadcastReceiver", "startForegroundService", "stopForegroundService", "createNotificationChannel", "createNotification", "Landroid/app/Notification;", "updateNotification", "acquireLockMode", "releaseLockMode", "createForegroundTask", "updateForegroundTask", "destroyForegroundTask", "getIconResId", PreferencesKey.NOTIFICATION_CONTENT_ICON, "Lcom/pravera/flutter_foreground_task/models/NotificationIcon;", "getContentIntent", "Landroid/app/PendingIntent;", "getDeleteIntent", "getRgbColor", "rgb", "", "(Ljava/lang/String;)Ljava/lang/Integer;", "getTextSpan", "Landroid/text/Spannable;", "text", TtmlNode.ATTR_TTS_COLOR, "(Ljava/lang/String;Ljava/lang/Integer;)Landroid/text/Spannable;", "buildNotificationActions", "", "Landroid/app/Notification$Action;", PreferencesKey.NOTIFICATION_CONTENT_BUTTONS, "Lcom/pravera/flutter_foreground_task/models/NotificationButton;", "needsRebuild", "buildNotificationCompatActions", "Landroidx/core/app/NotificationCompat$Action;", "Companion", "flutter_foreground_task_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
public final class ForegroundService extends Service {
    private static final String ACTION_NOTIFICATION_BUTTON_PRESSED = "onNotificationButtonPressed";
    private static final String ACTION_NOTIFICATION_DISMISSED = "onNotificationDismissed";
    private static final String ACTION_NOTIFICATION_PRESSED = "onNotificationPressed";
    private static final String ACTION_RECEIVE_DATA = "onReceiveData";
    private static final String INTENT_DATA_NAME = "intentData";
    private static final MutableStateFlow<Boolean> _isRunningServiceState;
    private static final StateFlow<Boolean> isRunningServiceState;
    private static ForegroundTask task;
    private static ForegroundTaskLifecycleListeners taskLifecycleListeners;
    private ForegroundService$broadcastReceiver$1 broadcastReceiver = new BroadcastReceiver() { // from class: com.pravera.flutter_foreground_task.service.ForegroundService$broadcastReceiver$1
        @Override // android.content.BroadcastReceiver
        public void onReceive(Context context, Intent intent) {
            if (intent == null) {
                return;
            }
            try {
                String str = intent.getPackage();
                String packageName = this.this$0.getPackageName();
                if (!Intrinsics.areEqual(str, packageName)) {
                    Log.d(ForegroundService.TAG, "This intent has not sent from the current package. (" + str + " != " + packageName + ")");
                    return;
                }
                String action = intent.getAction();
                if (action == null) {
                    return;
                }
                String stringExtra = intent.getStringExtra("intentData");
                ForegroundTask foregroundTask = ForegroundService.task;
                if (foregroundTask != null) {
                    foregroundTask.invokeMethod(action, stringExtra);
                }
            } catch (Exception e) {
                Log.e(ForegroundService.TAG, e.getMessage(), e);
            }
        }
    };
    private ForegroundServiceStatus foregroundServiceStatus;
    private ForegroundServiceTypes foregroundServiceTypes;
    private ForegroundTaskData foregroundTaskData;
    private ForegroundTaskOptions foregroundTaskOptions;
    private boolean isTimeout;
    private NotificationContent notificationContent;
    private NotificationOptions notificationOptions;
    private ForegroundTaskData prevForegroundTaskData;
    private ForegroundTaskOptions prevForegroundTaskOptions;
    private NotificationContent prevNotificationContent;
    private NotificationOptions prevNotificationOptions;
    private PowerManager.WakeLock wakeLock;
    private WifiManager.WifiLock wifiLock;

    /* JADX INFO: renamed from: Companion, reason: from kotlin metadata */
    public static final Companion INSTANCE = new Companion(null);
    private static final String TAG = "ForegroundService";

    @Override // android.app.Service
    public IBinder onBind(Intent intent) {
        return null;
    }

    /* JADX INFO: compiled from: ForegroundService.kt */
    @Metadata(d1 = {"\u0000H\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0002\b\u0007\n\u0002\u0018\u0002\n\u0002\u0010\u000b\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0003\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u000e\u0010\u0016\u001a\u00020\u00172\u0006\u0010\u0018\u001a\u00020\u0019J\u000e\u0010\u001a\u001a\u00020\u00172\u0006\u0010\u0018\u001a\u00020\u0019J\u0010\u0010\u001b\u001a\u00020\u00172\b\u0010\u001c\u001a\u0004\u0018\u00010\u001dJ\u0010\u0010\u001e\u001a\u00020\u00172\b\u0010\u001f\u001a\u0004\u0018\u00010\u0001R\u0016\u0010\u0004\u001a\n \u0006*\u0004\u0018\u00010\u00050\u0005X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0007\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\b\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\t\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\n\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u000b\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u0014\u0010\f\u001a\b\u0012\u0004\u0012\u00020\u000e0\rX\u0082\u0004¢\u0006\u0002\n\u0000R\u0017\u0010\u000f\u001a\b\u0012\u0004\u0012\u00020\u000e0\u0010¢\u0006\b\n\u0000\u001a\u0004\b\u000f\u0010\u0011R\u0010\u0010\u0012\u001a\u0004\u0018\u00010\u0013X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u0014\u001a\u00020\u0015X\u0082\u000e¢\u0006\u0002\n\u0000¨\u0006 "}, d2 = {"Lcom/pravera/flutter_foreground_task/service/ForegroundService$Companion;", "", "<init>", "()V", "TAG", "", "kotlin.jvm.PlatformType", "ACTION_NOTIFICATION_PRESSED", "ACTION_NOTIFICATION_DISMISSED", "ACTION_NOTIFICATION_BUTTON_PRESSED", "ACTION_RECEIVE_DATA", "INTENT_DATA_NAME", "_isRunningServiceState", "Lkotlinx/coroutines/flow/MutableStateFlow;", "", "isRunningServiceState", "Lkotlinx/coroutines/flow/StateFlow;", "()Lkotlinx/coroutines/flow/StateFlow;", "task", "Lcom/pravera/flutter_foreground_task/service/ForegroundTask;", "taskLifecycleListeners", "Lcom/pravera/flutter_foreground_task/service/ForegroundTaskLifecycleListeners;", "addTaskLifecycleListener", "", ServiceSpecificExtraArgs.CastExtraArgs.LISTENER, "Lcom/pravera/flutter_foreground_task/FlutterForegroundTaskLifecycleListener;", "removeTaskLifecycleListener", "handleNotificationContentIntent", "intent", "Landroid/content/Intent;", "sendData", "data", "flutter_foreground_task_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        private Companion() {
        }

        public final StateFlow<Boolean> isRunningServiceState() {
            return ForegroundService.isRunningServiceState;
        }

        public final void addTaskLifecycleListener(FlutterForegroundTaskLifecycleListener listener) {
            Intrinsics.checkNotNullParameter(listener, "listener");
            ForegroundService.taskLifecycleListeners.addListener(listener);
        }

        public final void removeTaskLifecycleListener(FlutterForegroundTaskLifecycleListener listener) {
            Intrinsics.checkNotNullParameter(listener, "listener");
            ForegroundService.taskLifecycleListeners.removeListener(listener);
        }

        public final void handleNotificationContentIntent(Intent intent) {
            Set<String> categories;
            ForegroundTask foregroundTask;
            if (intent == null) {
                return;
            }
            try {
                if (Intrinsics.areEqual(intent.getAction(), "android.intent.action.MAIN") && (categories = intent.getCategories()) != null && categories.contains("android.intent.category.LAUNCHER")) {
                    String stringExtra = intent.getStringExtra(ForegroundService.INTENT_DATA_NAME);
                    if (!Intrinsics.areEqual(stringExtra, ForegroundService.ACTION_NOTIFICATION_PRESSED) || (foregroundTask = ForegroundService.task) == null) {
                        return;
                    }
                    foregroundTask.invokeMethod(stringExtra, null);
                }
            } catch (Exception e) {
                Log.e(ForegroundService.TAG, e.getMessage(), e);
            }
        }

        public final void sendData(Object data) {
            ForegroundTask foregroundTask;
            if (!isRunningServiceState().getValue().booleanValue() || (foregroundTask = ForegroundService.task) == null) {
                return;
            }
            foregroundTask.invokeMethod(ForegroundService.ACTION_RECEIVE_DATA, data);
        }
    }

    static {
        MutableStateFlow<Boolean> MutableStateFlow = StateFlowKt.MutableStateFlow(false);
        _isRunningServiceState = MutableStateFlow;
        isRunningServiceState = FlowKt.asStateFlow(MutableStateFlow);
        taskLifecycleListeners = new ForegroundTaskLifecycleListeners();
    }

    @Override // android.app.Service
    public void onCreate() {
        super.onCreate();
        registerBroadcastReceiver();
    }

    /* JADX WARN: Code duplicated, block: B:27:0x007e A[DONT_GENERATE] */
    /* JADX WARN: Code duplicated, block: B:28:0x0080 A[Catch: Exception -> 0x010c, TryCatch #0 {Exception -> 0x010c, blocks: (B:21:0x005a, B:23:0x006f, B:24:0x0073, B:25:0x0077, B:26:0x007b, B:28:0x0080, B:34:0x0092, B:31:0x008a, B:35:0x00a1, B:38:0x00ab, B:40:0x00b2, B:42:0x00b8, B:44:0x00bc, B:45:0x00c2, B:47:0x00cc, B:48:0x00d0, B:50:0x00d4, B:52:0x00da, B:54:0x00de, B:56:0x00e5, B:58:0x00ef, B:59:0x00f3, B:65:0x0105, B:62:0x00fc), top: B:73:0x005a }] */
    /* JADX WARN: Code duplicated, block: B:30:0x0088  */
    /* JADX WARN: Code duplicated, block: B:31:0x008a A[Catch: Exception -> 0x010c, TryCatch #0 {Exception -> 0x010c, blocks: (B:21:0x005a, B:23:0x006f, B:24:0x0073, B:25:0x0077, B:26:0x007b, B:28:0x0080, B:34:0x0092, B:31:0x008a, B:35:0x00a1, B:38:0x00ab, B:40:0x00b2, B:42:0x00b8, B:44:0x00bc, B:45:0x00c2, B:47:0x00cc, B:48:0x00d0, B:50:0x00d4, B:52:0x00da, B:54:0x00de, B:56:0x00e5, B:58:0x00ef, B:59:0x00f3, B:65:0x0105, B:62:0x00fc), top: B:73:0x005a }] */
    /* JADX WARN: Code duplicated, block: B:33:0x0090  */
    /* JADX WARN: Code duplicated, block: B:34:0x0092 A[Catch: Exception -> 0x010c, TryCatch #0 {Exception -> 0x010c, blocks: (B:21:0x005a, B:23:0x006f, B:24:0x0073, B:25:0x0077, B:26:0x007b, B:28:0x0080, B:34:0x0092, B:31:0x008a, B:35:0x00a1, B:38:0x00ab, B:40:0x00b2, B:42:0x00b8, B:44:0x00bc, B:45:0x00c2, B:47:0x00cc, B:48:0x00d0, B:50:0x00d4, B:52:0x00da, B:54:0x00de, B:56:0x00e5, B:58:0x00ef, B:59:0x00f3, B:65:0x0105, B:62:0x00fc), top: B:73:0x005a }] */
    /* JADX WARN: Code duplicated, block: B:35:0x00a1 A[Catch: Exception -> 0x010c, TryCatch #0 {Exception -> 0x010c, blocks: (B:21:0x005a, B:23:0x006f, B:24:0x0073, B:25:0x0077, B:26:0x007b, B:28:0x0080, B:34:0x0092, B:31:0x008a, B:35:0x00a1, B:38:0x00ab, B:40:0x00b2, B:42:0x00b8, B:44:0x00bc, B:45:0x00c2, B:47:0x00cc, B:48:0x00d0, B:50:0x00d4, B:52:0x00da, B:54:0x00de, B:56:0x00e5, B:58:0x00ef, B:59:0x00f3, B:65:0x0105, B:62:0x00fc), top: B:73:0x005a }] */
    /* JADX WARN: Code duplicated, block: B:37:0x00a9  */
    /* JADX WARN: Code duplicated, block: B:38:0x00ab A[Catch: Exception -> 0x010c, TryCatch #0 {Exception -> 0x010c, blocks: (B:21:0x005a, B:23:0x006f, B:24:0x0073, B:25:0x0077, B:26:0x007b, B:28:0x0080, B:34:0x0092, B:31:0x008a, B:35:0x00a1, B:38:0x00ab, B:40:0x00b2, B:42:0x00b8, B:44:0x00bc, B:45:0x00c2, B:47:0x00cc, B:48:0x00d0, B:50:0x00d4, B:52:0x00da, B:54:0x00de, B:56:0x00e5, B:58:0x00ef, B:59:0x00f3, B:65:0x0105, B:62:0x00fc), top: B:73:0x005a }] */
    /* JADX WARN: Code duplicated, block: B:40:0x00b2 A[Catch: Exception -> 0x010c, TryCatch #0 {Exception -> 0x010c, blocks: (B:21:0x005a, B:23:0x006f, B:24:0x0073, B:25:0x0077, B:26:0x007b, B:28:0x0080, B:34:0x0092, B:31:0x008a, B:35:0x00a1, B:38:0x00ab, B:40:0x00b2, B:42:0x00b8, B:44:0x00bc, B:45:0x00c2, B:47:0x00cc, B:48:0x00d0, B:50:0x00d4, B:52:0x00da, B:54:0x00de, B:56:0x00e5, B:58:0x00ef, B:59:0x00f3, B:65:0x0105, B:62:0x00fc), top: B:73:0x005a }] */
    /* JADX WARN: Code duplicated, block: B:41:0x00b7  */
    /* JADX WARN: Code duplicated, block: B:44:0x00bc A[Catch: Exception -> 0x010c, TryCatch #0 {Exception -> 0x010c, blocks: (B:21:0x005a, B:23:0x006f, B:24:0x0073, B:25:0x0077, B:26:0x007b, B:28:0x0080, B:34:0x0092, B:31:0x008a, B:35:0x00a1, B:38:0x00ab, B:40:0x00b2, B:42:0x00b8, B:44:0x00bc, B:45:0x00c2, B:47:0x00cc, B:48:0x00d0, B:50:0x00d4, B:52:0x00da, B:54:0x00de, B:56:0x00e5, B:58:0x00ef, B:59:0x00f3, B:65:0x0105, B:62:0x00fc), top: B:73:0x005a }] */
    /* JADX WARN: Code duplicated, block: B:47:0x00cc A[Catch: Exception -> 0x010c, TryCatch #0 {Exception -> 0x010c, blocks: (B:21:0x005a, B:23:0x006f, B:24:0x0073, B:25:0x0077, B:26:0x007b, B:28:0x0080, B:34:0x0092, B:31:0x008a, B:35:0x00a1, B:38:0x00ab, B:40:0x00b2, B:42:0x00b8, B:44:0x00bc, B:45:0x00c2, B:47:0x00cc, B:48:0x00d0, B:50:0x00d4, B:52:0x00da, B:54:0x00de, B:56:0x00e5, B:58:0x00ef, B:59:0x00f3, B:65:0x0105, B:62:0x00fc), top: B:73:0x005a }] */
    /* JADX WARN: Code duplicated, block: B:48:0x00d0 A[Catch: Exception -> 0x010c, TryCatch #0 {Exception -> 0x010c, blocks: (B:21:0x005a, B:23:0x006f, B:24:0x0073, B:25:0x0077, B:26:0x007b, B:28:0x0080, B:34:0x0092, B:31:0x008a, B:35:0x00a1, B:38:0x00ab, B:40:0x00b2, B:42:0x00b8, B:44:0x00bc, B:45:0x00c2, B:47:0x00cc, B:48:0x00d0, B:50:0x00d4, B:52:0x00da, B:54:0x00de, B:56:0x00e5, B:58:0x00ef, B:59:0x00f3, B:65:0x0105, B:62:0x00fc), top: B:73:0x005a }] */
    /* JADX WARN: Code duplicated, block: B:50:0x00d4 A[Catch: Exception -> 0x010c, TryCatch #0 {Exception -> 0x010c, blocks: (B:21:0x005a, B:23:0x006f, B:24:0x0073, B:25:0x0077, B:26:0x007b, B:28:0x0080, B:34:0x0092, B:31:0x008a, B:35:0x00a1, B:38:0x00ab, B:40:0x00b2, B:42:0x00b8, B:44:0x00bc, B:45:0x00c2, B:47:0x00cc, B:48:0x00d0, B:50:0x00d4, B:52:0x00da, B:54:0x00de, B:56:0x00e5, B:58:0x00ef, B:59:0x00f3, B:65:0x0105, B:62:0x00fc), top: B:73:0x005a }] */
    /* JADX WARN: Code duplicated, block: B:51:0x00d9  */
    /* JADX WARN: Code duplicated, block: B:54:0x00de A[Catch: Exception -> 0x010c, TryCatch #0 {Exception -> 0x010c, blocks: (B:21:0x005a, B:23:0x006f, B:24:0x0073, B:25:0x0077, B:26:0x007b, B:28:0x0080, B:34:0x0092, B:31:0x008a, B:35:0x00a1, B:38:0x00ab, B:40:0x00b2, B:42:0x00b8, B:44:0x00bc, B:45:0x00c2, B:47:0x00cc, B:48:0x00d0, B:50:0x00d4, B:52:0x00da, B:54:0x00de, B:56:0x00e5, B:58:0x00ef, B:59:0x00f3, B:65:0x0105, B:62:0x00fc), top: B:73:0x005a }] */
    /* JADX WARN: Code duplicated, block: B:55:0x00e4  */
    /* JADX WARN: Code duplicated, block: B:58:0x00ef A[Catch: Exception -> 0x010c, TryCatch #0 {Exception -> 0x010c, blocks: (B:21:0x005a, B:23:0x006f, B:24:0x0073, B:25:0x0077, B:26:0x007b, B:28:0x0080, B:34:0x0092, B:31:0x008a, B:35:0x00a1, B:38:0x00ab, B:40:0x00b2, B:42:0x00b8, B:44:0x00bc, B:45:0x00c2, B:47:0x00cc, B:48:0x00d0, B:50:0x00d4, B:52:0x00da, B:54:0x00de, B:56:0x00e5, B:58:0x00ef, B:59:0x00f3, B:65:0x0105, B:62:0x00fc), top: B:73:0x005a }] */
    /* JADX WARN: Code duplicated, block: B:59:0x00f3 A[Catch: Exception -> 0x010c, TryCatch #0 {Exception -> 0x010c, blocks: (B:21:0x005a, B:23:0x006f, B:24:0x0073, B:25:0x0077, B:26:0x007b, B:28:0x0080, B:34:0x0092, B:31:0x008a, B:35:0x00a1, B:38:0x00ab, B:40:0x00b2, B:42:0x00b8, B:44:0x00bc, B:45:0x00c2, B:47:0x00cc, B:48:0x00d0, B:50:0x00d4, B:52:0x00da, B:54:0x00de, B:56:0x00e5, B:58:0x00ef, B:59:0x00f3, B:65:0x0105, B:62:0x00fc), top: B:73:0x005a }] */
    /* JADX WARN: Code duplicated, block: B:61:0x00fb  */
    /* JADX WARN: Code duplicated, block: B:62:0x00fc A[Catch: Exception -> 0x010c, TryCatch #0 {Exception -> 0x010c, blocks: (B:21:0x005a, B:23:0x006f, B:24:0x0073, B:25:0x0077, B:26:0x007b, B:28:0x0080, B:34:0x0092, B:31:0x008a, B:35:0x00a1, B:38:0x00ab, B:40:0x00b2, B:42:0x00b8, B:44:0x00bc, B:45:0x00c2, B:47:0x00cc, B:48:0x00d0, B:50:0x00d4, B:52:0x00da, B:54:0x00de, B:56:0x00e5, B:58:0x00ef, B:59:0x00f3, B:65:0x0105, B:62:0x00fc), top: B:73:0x005a }] */
    /* JADX WARN: Code duplicated, block: B:64:0x0104  */
    /* JADX WARN: Code duplicated, block: B:65:0x0105 A[Catch: Exception -> 0x010c, TRY_LEAVE, TryCatch #0 {Exception -> 0x010c, blocks: (B:21:0x005a, B:23:0x006f, B:24:0x0073, B:25:0x0077, B:26:0x007b, B:28:0x0080, B:34:0x0092, B:31:0x008a, B:35:0x00a1, B:38:0x00ab, B:40:0x00b2, B:42:0x00b8, B:44:0x00bc, B:45:0x00c2, B:47:0x00cc, B:48:0x00d0, B:50:0x00d4, B:52:0x00da, B:54:0x00de, B:56:0x00e5, B:58:0x00ef, B:59:0x00f3, B:65:0x0105, B:62:0x00fc), top: B:73:0x005a }] */
    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    @Override // android.app.Service
    public int onStartCommand(Intent intent, int flags, int startId) {
        ForegroundTaskData foregroundTaskData;
        Long callbackHandle;
        ForegroundTaskData foregroundTaskData2;
        ForegroundTaskOptions foregroundTaskOptions;
        ForegroundTaskEventAction eventAction;
        ForegroundTaskOptions foregroundTaskOptions2;
        this.isTimeout = false;
        loadDataFromPreferences();
        SharedPreferences sharedPreferences = getSharedPreferences(PreferencesKey.FOREGROUND_TASK_OPTIONS_PREFS, 0);
        ForegroundTaskOptions foregroundTaskOptions3 = null;
        if (sharedPreferences.contains(PreferencesKey.STOP_WITH_TASK) && sharedPreferences.getBoolean(PreferencesKey.STOP_WITH_TASK, false)) {
            Application application = getApplication();
            if (!(application instanceof Application)) {
                application = null;
            }
            if (application != null) {
                TrackVisibilityUtils.INSTANCE.install(application, new Function0() { // from class: com.pravera.flutter_foreground_task.service.ForegroundService$$ExternalSyntheticLambda2
                    @Override // kotlin.jvm.functions.Function0
                    public final Object invoke() {
                        return ForegroundService.onStartCommand$lambda$0$0(this.f$0);
                    }
                });
            }
        }
        ForegroundServiceStatus foregroundServiceStatus = this.foregroundServiceStatus;
        if (foregroundServiceStatus == null) {
            Intrinsics.throwUninitializedPropertyAccessException("foregroundServiceStatus");
            foregroundServiceStatus = null;
        }
        String action = foregroundServiceStatus.getAction();
        boolean zIsSetStopWithTaskFlag = ForegroundServiceUtils.INSTANCE.isSetStopWithTaskFlag(this);
        if (Intrinsics.areEqual(action, ForegroundServiceAction.API_STOP)) {
            stopForegroundService();
            return 2;
        }
        if (intent == null) {
            try {
                ForegroundServiceStatus.INSTANCE.setData(this, ForegroundServiceAction.RESTART);
                ForegroundServiceStatus data = ForegroundServiceStatus.INSTANCE.getData(this);
                this.foregroundServiceStatus = data;
                if (data == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("foregroundServiceStatus");
                    data = null;
                }
                action = data.getAction();
                switch (action.hashCode()) {
                    case -212670797:
                        if (!action.equals(ForegroundServiceAction.API_START)) {
                            startForegroundService();
                            createForegroundTask();
                        }
                        break;
                    case 481521696:
                        if (!action.equals(ForegroundServiceAction.API_RESTART)) {
                            startForegroundService();
                            createForegroundTask();
                        }
                        break;
                    case 2050777240:
                        if (!action.equals(ForegroundServiceAction.API_UPDATE)) {
                            updateNotification();
                            foregroundTaskData = this.prevForegroundTaskData;
                            if (foregroundTaskData != null) {
                                callbackHandle = foregroundTaskData.getCallbackHandle();
                            } else {
                                callbackHandle = null;
                            }
                            foregroundTaskData2 = this.foregroundTaskData;
                            if (foregroundTaskData2 == null) {
                                Intrinsics.throwUninitializedPropertyAccessException("foregroundTaskData");
                                foregroundTaskData2 = null;
                            }
                            if (!Intrinsics.areEqual(callbackHandle, foregroundTaskData2.getCallbackHandle())) {
                                createForegroundTask();
                            } else {
                                foregroundTaskOptions = this.prevForegroundTaskOptions;
                                if (foregroundTaskOptions != null) {
                                    eventAction = foregroundTaskOptions.getEventAction();
                                } else {
                                    eventAction = null;
                                }
                                foregroundTaskOptions2 = this.foregroundTaskOptions;
                                if (foregroundTaskOptions2 == null) {
                                    Intrinsics.throwUninitializedPropertyAccessException("foregroundTaskOptions");
                                } else {
                                    foregroundTaskOptions3 = foregroundTaskOptions2;
                                }
                                if (!Intrinsics.areEqual(eventAction, foregroundTaskOptions3.getEventAction())) {
                                    updateForegroundTask();
                                }
                            }
                        }
                        break;
                    case 2071663685:
                        if (!action.equals(ForegroundServiceAction.RESTART)) {
                            startForegroundService();
                            createForegroundTask();
                            Log.d(TAG, "The service has been restarted by Android OS.");
                        }
                        break;
                    case 2144527023:
                        if (!action.equals(ForegroundServiceAction.REBOOT)) {
                            startForegroundService();
                            createForegroundTask();
                            Log.d(TAG, "The service has been restarted by Android OS.");
                        }
                        break;
                }
            } catch (Exception e) {
                Log.e(TAG, e.getMessage(), e);
                stopForegroundService();
            }
        } else {
            switch (action.hashCode()) {
                case -212670797:
                    if (!action.equals(ForegroundServiceAction.API_START)) {
                        startForegroundService();
                        createForegroundTask();
                    }
                    break;
                case 481521696:
                    if (!action.equals(ForegroundServiceAction.API_RESTART)) {
                        startForegroundService();
                        createForegroundTask();
                    }
                    break;
                case 2050777240:
                    if (!action.equals(ForegroundServiceAction.API_UPDATE)) {
                        updateNotification();
                        foregroundTaskData = this.prevForegroundTaskData;
                        if (foregroundTaskData != null) {
                            callbackHandle = foregroundTaskData.getCallbackHandle();
                        } else {
                            callbackHandle = null;
                        }
                        foregroundTaskData2 = this.foregroundTaskData;
                        if (foregroundTaskData2 == null) {
                            Intrinsics.throwUninitializedPropertyAccessException("foregroundTaskData");
                            foregroundTaskData2 = null;
                        }
                        if (!Intrinsics.areEqual(callbackHandle, foregroundTaskData2.getCallbackHandle())) {
                            createForegroundTask();
                        } else {
                            foregroundTaskOptions = this.prevForegroundTaskOptions;
                            if (foregroundTaskOptions != null) {
                                eventAction = foregroundTaskOptions.getEventAction();
                            } else {
                                eventAction = null;
                            }
                            foregroundTaskOptions2 = this.foregroundTaskOptions;
                            if (foregroundTaskOptions2 == null) {
                                Intrinsics.throwUninitializedPropertyAccessException("foregroundTaskOptions");
                            } else {
                                foregroundTaskOptions3 = foregroundTaskOptions2;
                            }
                            if (!Intrinsics.areEqual(eventAction, foregroundTaskOptions3.getEventAction())) {
                                updateForegroundTask();
                            }
                        }
                    }
                    break;
                case 2071663685:
                    if (!action.equals(ForegroundServiceAction.RESTART)) {
                        startForegroundService();
                        createForegroundTask();
                        Log.d(TAG, "The service has been restarted by Android OS.");
                    }
                    break;
                case 2144527023:
                    if (!action.equals(ForegroundServiceAction.REBOOT)) {
                        startForegroundService();
                        createForegroundTask();
                        Log.d(TAG, "The service has been restarted by Android OS.");
                    }
                    break;
            }
        }
        return zIsSetStopWithTaskFlag ? 2 : 1;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit onStartCommand$lambda$0$0(ForegroundService foregroundService) {
        foregroundService.stopForegroundService();
        return Unit.INSTANCE;
    }

    @Override // android.app.Service
    public void onDestroy() {
        boolean zIsCorrectlyStopped;
        super.onDestroy();
        destroyForegroundTask(this.isTimeout);
        stopForegroundService();
        unregisterBroadcastReceiver();
        ForegroundServiceStatus foregroundServiceStatus = this.foregroundServiceStatus;
        ForegroundTaskOptions foregroundTaskOptions = null;
        if (foregroundServiceStatus != null) {
            if (foregroundServiceStatus == null) {
                Intrinsics.throwUninitializedPropertyAccessException("foregroundServiceStatus");
                foregroundServiceStatus = null;
            }
            zIsCorrectlyStopped = foregroundServiceStatus.isCorrectlyStopped();
        } else {
            zIsCorrectlyStopped = false;
        }
        ForegroundTaskOptions foregroundTaskOptions2 = this.foregroundTaskOptions;
        if (foregroundTaskOptions2 != null) {
            if (foregroundTaskOptions2 == null) {
                Intrinsics.throwUninitializedPropertyAccessException("foregroundTaskOptions");
            } else {
                foregroundTaskOptions = foregroundTaskOptions2;
            }
            if (!foregroundTaskOptions.getAllowAutoRestart() || zIsCorrectlyStopped) {
                return;
            }
            ForegroundService foregroundService = this;
            if (ForegroundServiceUtils.INSTANCE.isSetStopWithTaskFlag(foregroundService)) {
                return;
            }
            Log.e(TAG, "The service will be restarted after 5 seconds because it wasn't properly stopped.");
            RestartReceiver.INSTANCE.setRestartAlarm(foregroundService, 5000);
        }
    }

    @Override // android.app.Service
    public void onTaskRemoved(Intent rootIntent) {
        super.onTaskRemoved(rootIntent);
        ForegroundService foregroundService = this;
        if (ForegroundServiceUtils.INSTANCE.isSetStopWithTaskFlag(foregroundService)) {
            stopSelf();
        } else {
            RestartReceiver.INSTANCE.setRestartAlarm(foregroundService, 1000);
        }
    }

    @Override // android.app.Service
    public void onTimeout(int startId) {
        super.onTimeout(startId);
        this.isTimeout = true;
        stopForegroundService();
        Log.e(TAG, "The service(id: " + startId + ") timed out and was terminated by the system.");
    }

    public void onTimeout(int startId, int fgsType) {
        super.onTimeout(startId, fgsType);
        this.isTimeout = true;
        stopForegroundService();
        Log.e(TAG, "The service(id: " + startId + ") timed out and was terminated by the system.");
    }

    private final void loadDataFromPreferences() {
        ForegroundServiceStatus.Companion companion = ForegroundServiceStatus.INSTANCE;
        Context applicationContext = getApplicationContext();
        Intrinsics.checkNotNullExpressionValue(applicationContext, "getApplicationContext(...)");
        this.foregroundServiceStatus = companion.getData(applicationContext);
        ForegroundServiceTypes.Companion companion2 = ForegroundServiceTypes.INSTANCE;
        Context applicationContext2 = getApplicationContext();
        Intrinsics.checkNotNullExpressionValue(applicationContext2, "getApplicationContext(...)");
        this.foregroundServiceTypes = companion2.getData(applicationContext2);
        ForegroundTaskOptions foregroundTaskOptions = this.foregroundTaskOptions;
        NotificationContent notificationContent = null;
        if (foregroundTaskOptions != null) {
            if (foregroundTaskOptions == null) {
                Intrinsics.throwUninitializedPropertyAccessException("foregroundTaskOptions");
                foregroundTaskOptions = null;
            }
            this.prevForegroundTaskOptions = foregroundTaskOptions;
        }
        ForegroundTaskOptions.Companion companion3 = ForegroundTaskOptions.INSTANCE;
        Context applicationContext3 = getApplicationContext();
        Intrinsics.checkNotNullExpressionValue(applicationContext3, "getApplicationContext(...)");
        this.foregroundTaskOptions = companion3.getData(applicationContext3);
        ForegroundTaskData foregroundTaskData = this.foregroundTaskData;
        if (foregroundTaskData != null) {
            if (foregroundTaskData == null) {
                Intrinsics.throwUninitializedPropertyAccessException("foregroundTaskData");
                foregroundTaskData = null;
            }
            this.prevForegroundTaskData = foregroundTaskData;
        }
        ForegroundTaskData.Companion companion4 = ForegroundTaskData.INSTANCE;
        Context applicationContext4 = getApplicationContext();
        Intrinsics.checkNotNullExpressionValue(applicationContext4, "getApplicationContext(...)");
        this.foregroundTaskData = companion4.getData(applicationContext4);
        NotificationOptions notificationOptions = this.notificationOptions;
        if (notificationOptions != null) {
            if (notificationOptions == null) {
                Intrinsics.throwUninitializedPropertyAccessException("notificationOptions");
                notificationOptions = null;
            }
            this.prevNotificationOptions = notificationOptions;
        }
        NotificationOptions.Companion companion5 = NotificationOptions.INSTANCE;
        Context applicationContext5 = getApplicationContext();
        Intrinsics.checkNotNullExpressionValue(applicationContext5, "getApplicationContext(...)");
        this.notificationOptions = companion5.getData(applicationContext5);
        NotificationContent notificationContent2 = this.notificationContent;
        if (notificationContent2 != null) {
            if (notificationContent2 == null) {
                Intrinsics.throwUninitializedPropertyAccessException("notificationContent");
            } else {
                notificationContent = notificationContent2;
            }
            this.prevNotificationContent = notificationContent;
        }
        NotificationContent.Companion companion6 = NotificationContent.INSTANCE;
        Context applicationContext6 = getApplicationContext();
        Intrinsics.checkNotNullExpressionValue(applicationContext6, "getApplicationContext(...)");
        this.notificationContent = companion6.getData(applicationContext6);
    }

    private final void registerBroadcastReceiver() {
        IntentFilter intentFilter = new IntentFilter();
        intentFilter.addAction(ACTION_NOTIFICATION_BUTTON_PRESSED);
        intentFilter.addAction(ACTION_NOTIFICATION_PRESSED);
        intentFilter.addAction(ACTION_NOTIFICATION_DISMISSED);
        if (Build.VERSION.SDK_INT >= 33) {
            registerReceiver(this.broadcastReceiver, intentFilter, 4);
        } else {
            registerReceiver(this.broadcastReceiver, intentFilter);
        }
    }

    private final void unregisterBroadcastReceiver() {
        unregisterReceiver(this.broadcastReceiver);
    }

    private final void startForegroundService() {
        Boolean value;
        RestartReceiver.INSTANCE.cancelRestartAlarm(this);
        createNotificationChannel();
        NotificationOptions notificationOptions = this.notificationOptions;
        ForegroundServiceTypes foregroundServiceTypes = null;
        if (notificationOptions == null) {
            Intrinsics.throwUninitializedPropertyAccessException("notificationOptions");
            notificationOptions = null;
        }
        int serviceId = notificationOptions.getServiceId();
        Notification notificationCreateNotification = createNotification();
        if (Build.VERSION.SDK_INT >= 29) {
            ForegroundServiceTypes foregroundServiceTypes2 = this.foregroundServiceTypes;
            if (foregroundServiceTypes2 == null) {
                Intrinsics.throwUninitializedPropertyAccessException("foregroundServiceTypes");
            } else {
                foregroundServiceTypes = foregroundServiceTypes2;
            }
            startForeground(serviceId, notificationCreateNotification, foregroundServiceTypes.getValue());
        } else {
            startForeground(serviceId, notificationCreateNotification);
        }
        releaseLockMode();
        acquireLockMode();
        MutableStateFlow<Boolean> mutableStateFlow = _isRunningServiceState;
        do {
            value = mutableStateFlow.getValue();
            value.booleanValue();
        } while (!mutableStateFlow.compareAndSet(value, true));
    }

    private final void stopForegroundService() {
        Boolean value;
        RestartReceiver.INSTANCE.cancelRestartAlarm(this);
        releaseLockMode();
        stopForeground(true);
        stopSelf();
        MutableStateFlow<Boolean> mutableStateFlow = _isRunningServiceState;
        do {
            value = mutableStateFlow.getValue();
            value.booleanValue();
        } while (!mutableStateFlow.compareAndSet(value, false));
    }

    private final void createNotificationChannel() {
        NotificationOptions notificationOptions = this.notificationOptions;
        NotificationOptions notificationOptions2 = null;
        if (notificationOptions == null) {
            Intrinsics.throwUninitializedPropertyAccessException("notificationOptions");
            notificationOptions = null;
        }
        String channelId = notificationOptions.getChannelId();
        NotificationOptions notificationOptions3 = this.notificationOptions;
        if (notificationOptions3 == null) {
            Intrinsics.throwUninitializedPropertyAccessException("notificationOptions");
            notificationOptions3 = null;
        }
        String channelName = notificationOptions3.getChannelName();
        NotificationOptions notificationOptions4 = this.notificationOptions;
        if (notificationOptions4 == null) {
            Intrinsics.throwUninitializedPropertyAccessException("notificationOptions");
            notificationOptions4 = null;
        }
        String channelDescription = notificationOptions4.getChannelDescription();
        NotificationOptions notificationOptions5 = this.notificationOptions;
        if (notificationOptions5 == null) {
            Intrinsics.throwUninitializedPropertyAccessException("notificationOptions");
            notificationOptions5 = null;
        }
        int channelImportance = notificationOptions5.getChannelImportance();
        NotificationManager notificationManager = (NotificationManager) getSystemService(NotificationManager.class);
        if (notificationManager.getNotificationChannel(channelId) == null) {
            NotificationChannel notificationChannel = new NotificationChannel(channelId, channelName, channelImportance);
            if (channelDescription != null) {
                notificationChannel.setDescription(channelDescription);
            }
            NotificationOptions notificationOptions6 = this.notificationOptions;
            if (notificationOptions6 == null) {
                Intrinsics.throwUninitializedPropertyAccessException("notificationOptions");
                notificationOptions6 = null;
            }
            notificationChannel.enableVibration(notificationOptions6.getEnableVibration());
            NotificationOptions notificationOptions7 = this.notificationOptions;
            if (notificationOptions7 == null) {
                Intrinsics.throwUninitializedPropertyAccessException("notificationOptions");
                notificationOptions7 = null;
            }
            if (!notificationOptions7.getPlaySound()) {
                notificationChannel.setSound(null, null);
            }
            NotificationOptions notificationOptions8 = this.notificationOptions;
            if (notificationOptions8 == null) {
                Intrinsics.throwUninitializedPropertyAccessException("notificationOptions");
            } else {
                notificationOptions2 = notificationOptions8;
            }
            notificationChannel.setShowBadge(notificationOptions2.getShowBadge());
            notificationManager.createNotificationChannel(notificationChannel);
        }
    }

    private final Notification createNotification() {
        boolean z;
        String backgroundColorRgb;
        NotificationContent notificationContent = this.notificationContent;
        NotificationOptions notificationOptions = null;
        if (notificationContent == null) {
            Intrinsics.throwUninitializedPropertyAccessException("notificationContent");
            notificationContent = null;
        }
        NotificationIcon icon = notificationContent.getIcon();
        int iconResId = getIconResId(icon);
        Integer rgbColor = (icon == null || (backgroundColorRgb = icon.getBackgroundColorRgb()) == null) ? null : getRgbColor(backgroundColorRgb);
        PendingIntent contentIntent = getContentIntent();
        PendingIntent deleteIntent = getDeleteIntent();
        NotificationContent notificationContent2 = this.prevNotificationContent;
        List<NotificationButton> buttons = notificationContent2 != null ? notificationContent2.getButtons() : null;
        NotificationContent notificationContent3 = this.notificationContent;
        if (notificationContent3 == null) {
            Intrinsics.throwUninitializedPropertyAccessException("notificationContent");
            notificationContent3 = null;
        }
        List<NotificationButton> buttons2 = notificationContent3.getButtons();
        if (buttons == null || buttons.size() != buttons2.size()) {
            z = true;
            break;
        }
        int size = buttons2.size();
        z = false;
        for (int i = 0; i < size; i++) {
            if (!Intrinsics.areEqual(buttons.get(i), buttons2.get(i))) {
                z = true;
                break;
            }
        }
        ForegroundService foregroundService = this;
        NotificationOptions notificationOptions2 = this.notificationOptions;
        if (notificationOptions2 == null) {
            Intrinsics.throwUninitializedPropertyAccessException("notificationOptions");
            notificationOptions2 = null;
        }
        Notification.Builder builder = new Notification.Builder(foregroundService, notificationOptions2.getChannelId());
        builder.setOngoing(true);
        NotificationOptions notificationOptions3 = this.notificationOptions;
        if (notificationOptions3 == null) {
            Intrinsics.throwUninitializedPropertyAccessException("notificationOptions");
            notificationOptions3 = null;
        }
        builder.setShowWhen(notificationOptions3.getShowWhen());
        builder.setSmallIcon(iconResId);
        builder.setContentIntent(contentIntent);
        NotificationContent notificationContent4 = this.notificationContent;
        if (notificationContent4 == null) {
            Intrinsics.throwUninitializedPropertyAccessException("notificationContent");
            notificationContent4 = null;
        }
        builder.setContentTitle(notificationContent4.getTitle());
        NotificationContent notificationContent5 = this.notificationContent;
        if (notificationContent5 == null) {
            Intrinsics.throwUninitializedPropertyAccessException("notificationContent");
            notificationContent5 = null;
        }
        builder.setContentText(notificationContent5.getText());
        builder.setStyle(new Notification.BigTextStyle());
        NotificationOptions notificationOptions4 = this.notificationOptions;
        if (notificationOptions4 == null) {
            Intrinsics.throwUninitializedPropertyAccessException("notificationOptions");
            notificationOptions4 = null;
        }
        builder.setVisibility(notificationOptions4.getVisibility());
        NotificationOptions notificationOptions5 = this.notificationOptions;
        if (notificationOptions5 == null) {
            Intrinsics.throwUninitializedPropertyAccessException("notificationOptions");
        } else {
            notificationOptions = notificationOptions5;
        }
        builder.setOnlyAlertOnce(notificationOptions.getOnlyAlertOnce());
        if (rgbColor != null) {
            builder.setColor(rgbColor.intValue());
        }
        if (Build.VERSION.SDK_INT >= 31) {
            builder.setForegroundServiceBehavior(1);
        }
        if (Build.VERSION.SDK_INT >= 34) {
            builder.setDeleteIntent(deleteIntent);
        }
        Iterator<Notification.Action> it = buildNotificationActions(buttons2, z).iterator();
        while (it.hasNext()) {
            builder.addAction(it.next());
        }
        Notification notificationBuild = builder.build();
        Intrinsics.checkNotNullExpressionValue(notificationBuild, "build(...)");
        return notificationBuild;
    }

    private final void updateNotification() {
        NotificationOptions notificationOptions = this.notificationOptions;
        if (notificationOptions == null) {
            Intrinsics.throwUninitializedPropertyAccessException("notificationOptions");
            notificationOptions = null;
        }
        int serviceId = notificationOptions.getServiceId();
        Notification notificationCreateNotification = createNotification();
        NotificationManager notificationManager = (NotificationManager) getSystemService(NotificationManager.class);
        if (notificationManager != null) {
            notificationManager.notify(serviceId, notificationCreateNotification);
        }
    }

    private final void acquireLockMode() {
        PowerManager.WakeLock wakeLock;
        ForegroundTaskOptions foregroundTaskOptions = this.foregroundTaskOptions;
        ForegroundTaskOptions foregroundTaskOptions2 = null;
        if (foregroundTaskOptions == null) {
            Intrinsics.throwUninitializedPropertyAccessException("foregroundTaskOptions");
            foregroundTaskOptions = null;
        }
        if (foregroundTaskOptions.getAllowWakeLock() && ((wakeLock = this.wakeLock) == null || (wakeLock != null && !wakeLock.isHeld()))) {
            Object systemService = getApplicationContext().getSystemService("power");
            Intrinsics.checkNotNull(systemService, "null cannot be cast to non-null type android.os.PowerManager");
            PowerManager.WakeLock wakeLockNewWakeLock = ((PowerManager) systemService).newWakeLock(1, "ForegroundService:WakeLock");
            wakeLockNewWakeLock.setReferenceCounted(false);
            wakeLockNewWakeLock.acquire();
            this.wakeLock = wakeLockNewWakeLock;
        }
        ForegroundTaskOptions foregroundTaskOptions3 = this.foregroundTaskOptions;
        if (foregroundTaskOptions3 == null) {
            Intrinsics.throwUninitializedPropertyAccessException("foregroundTaskOptions");
        } else {
            foregroundTaskOptions2 = foregroundTaskOptions3;
        }
        if (foregroundTaskOptions2.getAllowWifiLock()) {
            WifiManager.WifiLock wifiLock = this.wifiLock;
            if (wifiLock == null || !(wifiLock == null || wifiLock.isHeld())) {
                Object systemService2 = getApplicationContext().getSystemService("wifi");
                Intrinsics.checkNotNull(systemService2, "null cannot be cast to non-null type android.net.wifi.WifiManager");
                WifiManager.WifiLock wifiLockCreateWifiLock = ((WifiManager) systemService2).createWifiLock(3, "ForegroundService:WifiLock");
                wifiLockCreateWifiLock.setReferenceCounted(false);
                wifiLockCreateWifiLock.acquire();
                this.wifiLock = wifiLockCreateWifiLock;
            }
        }
    }

    private final void releaseLockMode() {
        PowerManager.WakeLock wakeLock = this.wakeLock;
        if (wakeLock != null && wakeLock.isHeld()) {
            wakeLock.release();
            this.wakeLock = null;
        }
        WifiManager.WifiLock wifiLock = this.wifiLock;
        if (wifiLock == null || !wifiLock.isHeld()) {
            return;
        }
        wifiLock.release();
        this.wifiLock = null;
    }

    private final void createForegroundTask() {
        ForegroundServiceStatus foregroundServiceStatus;
        ForegroundTaskData foregroundTaskData;
        ForegroundTaskOptions foregroundTaskOptions = null;
        destroyForegroundTask$default(this, false, 1, null);
        ForegroundService foregroundService = this;
        ForegroundServiceStatus foregroundServiceStatus2 = this.foregroundServiceStatus;
        if (foregroundServiceStatus2 == null) {
            Intrinsics.throwUninitializedPropertyAccessException("foregroundServiceStatus");
            foregroundServiceStatus = null;
        } else {
            foregroundServiceStatus = foregroundServiceStatus2;
        }
        ForegroundTaskData foregroundTaskData2 = this.foregroundTaskData;
        if (foregroundTaskData2 == null) {
            Intrinsics.throwUninitializedPropertyAccessException("foregroundTaskData");
            foregroundTaskData = null;
        } else {
            foregroundTaskData = foregroundTaskData2;
        }
        ForegroundTaskOptions foregroundTaskOptions2 = this.foregroundTaskOptions;
        if (foregroundTaskOptions2 == null) {
            Intrinsics.throwUninitializedPropertyAccessException("foregroundTaskOptions");
        } else {
            foregroundTaskOptions = foregroundTaskOptions2;
        }
        task = new ForegroundTask(foregroundService, foregroundServiceStatus, foregroundTaskData, foregroundTaskOptions.getEventAction(), taskLifecycleListeners);
    }

    private final void updateForegroundTask() {
        ForegroundTask foregroundTask = task;
        if (foregroundTask != null) {
            ForegroundTaskOptions foregroundTaskOptions = this.foregroundTaskOptions;
            if (foregroundTaskOptions == null) {
                Intrinsics.throwUninitializedPropertyAccessException("foregroundTaskOptions");
                foregroundTaskOptions = null;
            }
            foregroundTask.update(foregroundTaskOptions.getEventAction());
        }
    }

    static /* synthetic */ void destroyForegroundTask$default(ForegroundService foregroundService, boolean z, int i, Object obj) {
        if ((i & 1) != 0) {
            z = false;
        }
        foregroundService.destroyForegroundTask(z);
    }

    private final void destroyForegroundTask(boolean isTimeout) {
        ForegroundTask foregroundTask = task;
        if (foregroundTask != null) {
            foregroundTask.destroy(isTimeout);
        }
        task = null;
    }

    private final int getIconResId(NotificationIcon icon) {
        try {
            ApplicationInfo applicationInfo = getApplicationContext().getPackageManager().getApplicationInfo(getApplicationContext().getPackageName(), 128);
            Intrinsics.checkNotNullExpressionValue(applicationInfo, "getApplicationInfo(...)");
            if (icon == null) {
                return applicationInfo.icon;
            }
            Bundle bundle = applicationInfo.metaData;
            if (bundle != null) {
                return bundle.getInt(icon.getMetaDataName());
            }
            return 0;
        } catch (Exception e) {
            Log.e(TAG, "getIconResId(" + icon + ")", e);
            return 0;
        }
    }

    private final PendingIntent getContentIntent() {
        Intent launchIntentForPackage = getApplicationContext().getPackageManager().getLaunchIntentForPackage(getApplicationContext().getPackageName());
        NotificationContent notificationContent = null;
        if (launchIntentForPackage != null) {
            launchIntentForPackage.putExtra(INTENT_DATA_NAME, ACTION_NOTIFICATION_PRESSED);
            NotificationContent notificationContent2 = this.notificationContent;
            if (notificationContent2 == null) {
                Intrinsics.throwUninitializedPropertyAccessException("notificationContent");
            } else {
                notificationContent = notificationContent2;
            }
            String initialRoute = notificationContent.getInitialRoute();
            if (initialRoute != null) {
                launchIntentForPackage.putExtra("route", initialRoute);
            }
        } else {
            launchIntentForPackage = null;
        }
        PendingIntent activity = PendingIntent.getActivity(this, RequestCode.NOTIFICATION_PRESSED, launchIntentForPackage, Build.VERSION.SDK_INT >= 31 ? 201326592 : C.BUFFER_FLAG_FIRST_SAMPLE);
        Intrinsics.checkNotNullExpressionValue(activity, "getActivity(...)");
        return activity;
    }

    private final PendingIntent getDeleteIntent() {
        Intent intent = new Intent(ACTION_NOTIFICATION_DISMISSED);
        intent.setPackage(getPackageName());
        PendingIntent broadcast = PendingIntent.getBroadcast(this, RequestCode.NOTIFICATION_DISMISSED, intent, Build.VERSION.SDK_INT >= 31 ? 201326592 : C.BUFFER_FLAG_FIRST_SAMPLE);
        Intrinsics.checkNotNullExpressionValue(broadcast, "getBroadcast(...)");
        return broadcast;
    }

    private final Integer getRgbColor(String rgb) {
        List listSplit$default = StringsKt.split$default((CharSequence) rgb, new String[]{StringUtils.COMMA}, false, 0, 6, (Object) null);
        if (listSplit$default.size() == 3) {
            return Integer.valueOf(Color.rgb(Integer.parseInt((String) listSplit$default.get(0)), Integer.parseInt((String) listSplit$default.get(1)), Integer.parseInt((String) listSplit$default.get(2))));
        }
        return null;
    }

    private final Spannable getTextSpan(String text, Integer color) {
        if (color != null) {
            SpannableString spannableString = new SpannableString(text);
            spannableString.setSpan(new ForegroundColorSpan(color.intValue()), 0, spannableString.length(), 0);
            return spannableString;
        }
        return new SpannableString(text);
    }

    static /* synthetic */ List buildNotificationActions$default(ForegroundService foregroundService, List list, boolean z, int i, Object obj) {
        if ((i & 2) != 0) {
            z = false;
        }
        return foregroundService.buildNotificationActions(list, z);
    }

    private final List<Notification.Action> buildNotificationActions(List<NotificationButton> buttons, boolean needsRebuild) {
        ArrayList arrayList = new ArrayList();
        int size = buttons.size();
        int i = 0;
        while (i < size) {
            Intent intent = new Intent(ACTION_NOTIFICATION_BUTTON_PRESSED);
            intent.setPackage(getPackageName());
            intent.putExtra(INTENT_DATA_NAME, buttons.get(i).getId());
            int i2 = needsRebuild ? 335544320 : 67108864;
            String textColorRgb = buttons.get(i).getTextColorRgb();
            Spannable textSpan = getTextSpan(buttons.get(i).getText(), textColorRgb != null ? getRgbColor(textColorRgb) : null);
            i++;
            Notification.Action actionBuild = new Notification.Action.Builder((Icon) null, textSpan, PendingIntent.getBroadcast(this, i, intent, i2)).build();
            Intrinsics.checkNotNull(actionBuild);
            arrayList.add(actionBuild);
        }
        return arrayList;
    }

    static /* synthetic */ List buildNotificationCompatActions$default(ForegroundService foregroundService, List list, boolean z, int i, Object obj) {
        if ((i & 2) != 0) {
            z = false;
        }
        return foregroundService.buildNotificationCompatActions(list, z);
    }

    private final List<NotificationCompat.Action> buildNotificationCompatActions(List<NotificationButton> buttons, boolean needsRebuild) {
        ArrayList arrayList = new ArrayList();
        int size = buttons.size();
        int i = 0;
        while (i < size) {
            Intent intent = new Intent(ACTION_NOTIFICATION_BUTTON_PRESSED);
            intent.setPackage(getPackageName());
            intent.putExtra(INTENT_DATA_NAME, buttons.get(i).getId());
            int i2 = needsRebuild ? 335544320 : 67108864;
            String textColorRgb = buttons.get(i).getTextColorRgb();
            Spannable textSpan = getTextSpan(buttons.get(i).getText(), textColorRgb != null ? getRgbColor(textColorRgb) : null);
            i++;
            NotificationCompat.Action actionBuild = new NotificationCompat.Action.Builder(0, textSpan, PendingIntent.getBroadcast(this, i, intent, i2)).build();
            Intrinsics.checkNotNullExpressionValue(actionBuild, "build(...)");
            arrayList.add(actionBuild);
        }
        return arrayList;
    }
}
