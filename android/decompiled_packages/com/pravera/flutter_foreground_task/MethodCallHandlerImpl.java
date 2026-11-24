package com.pravera.flutter_foreground_task;

import android.app.Activity;
import android.content.Context;
import android.content.Intent;
import androidx.core.app.NotificationCompat;
import com.pravera.flutter_foreground_task.errors.ActivityNotAttachedException;
import com.pravera.flutter_foreground_task.models.NotificationPermission;
import com.pravera.flutter_foreground_task.service.NotificationPermissionCallback;
import com.pravera.flutter_foreground_task.service.ServiceProvider;
import com.pravera.flutter_foreground_task.utils.ErrorHandleUtils;
import com.pravera.flutter_foreground_task.utils.PluginUtils;
import io.flutter.plugin.common.BinaryMessenger;
import io.flutter.plugin.common.MethodCall;
import io.flutter.plugin.common.MethodChannel;
import io.flutter.plugin.common.PluginRegistry;
import java.util.LinkedHashMap;
import java.util.Map;
import java.util.UUID;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: MethodCallHandlerImpl.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000b\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010%\n\u0002\u0010\b\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u000b\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0004\u0018\u00002\u00020\u00012\u00020\u00022\u00020\u0003B\u0017\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0007¢\u0006\u0004\b\b\u0010\tJ\u0018\u0010\u0013\u001a\u00020\u00142\u0006\u0010\u0015\u001a\u00020\u00162\u0006\u0010\u0017\u001a\u00020\u0012H\u0016J\"\u0010\u0018\u001a\u00020\u00192\u0006\u0010\u001a\u001a\u00020\u00102\u0006\u0010\u001b\u001a\u00020\u00102\b\u0010\u001c\u001a\u0004\u0018\u00010\u001dH\u0016J\u0010\u0010\u001e\u001a\u00020\u00142\u0006\u0010\u001f\u001a\u00020 H\u0016J\u0012\u0010!\u001a\u00020\u00142\b\u0010\f\u001a\u0004\u0018\u00010\rH\u0016J\b\u0010\"\u001a\u00020\u0014H\u0016J\b\u0010#\u001a\u00020\rH\u0002R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0007X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\n\u001a\u00020\u000bX\u0082.¢\u0006\u0002\n\u0000R\u0010\u0010\f\u001a\u0004\u0018\u00010\rX\u0082\u000e¢\u0006\u0002\n\u0000R\u001a\u0010\u000e\u001a\u000e\u0012\u0004\u0012\u00020\u0010\u0012\u0004\u0012\u00020\u00100\u000fX\u0082\u000e¢\u0006\u0002\n\u0000R\u001a\u0010\u0011\u001a\u000e\u0012\u0004\u0012\u00020\u0010\u0012\u0004\u0012\u00020\u00120\u000fX\u0082\u000e¢\u0006\u0002\n\u0000¨\u0006$"}, d2 = {"Lcom/pravera/flutter_foreground_task/MethodCallHandlerImpl;", "Lio/flutter/plugin/common/MethodChannel$MethodCallHandler;", "Lcom/pravera/flutter_foreground_task/FlutterForegroundTaskPluginChannel;", "Lio/flutter/plugin/common/PluginRegistry$ActivityResultListener;", "context", "Landroid/content/Context;", "provider", "Lcom/pravera/flutter_foreground_task/service/ServiceProvider;", "<init>", "(Landroid/content/Context;Lcom/pravera/flutter_foreground_task/service/ServiceProvider;)V", "channel", "Lio/flutter/plugin/common/MethodChannel;", "activity", "Landroid/app/Activity;", "methodCodes", "", "", "methodResults", "Lio/flutter/plugin/common/MethodChannel$Result;", "onMethodCall", "", NotificationCompat.CATEGORY_CALL, "Lio/flutter/plugin/common/MethodCall;", "result", "onActivityResult", "", "requestCode", "resultCode", "data", "Landroid/content/Intent;", "init", "messenger", "Lio/flutter/plugin/common/BinaryMessenger;", "setActivity", "dispose", "checkActivityNull", "flutter_foreground_task_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
public final class MethodCallHandlerImpl implements MethodChannel.MethodCallHandler, FlutterForegroundTaskPluginChannel, PluginRegistry.ActivityResultListener {
    private Activity activity;
    private MethodChannel channel;
    private final Context context;
    private Map<Integer, Integer> methodCodes;
    private Map<Integer, MethodChannel.Result> methodResults;
    private final ServiceProvider provider;

    public MethodCallHandlerImpl(Context context, ServiceProvider provider) {
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(provider, "provider");
        this.context = context;
        this.provider = provider;
        this.methodCodes = new LinkedHashMap();
        this.methodResults = new LinkedHashMap();
    }

    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    @Override // io.flutter.plugin.common.MethodChannel.MethodCallHandler
    public void onMethodCall(MethodCall call, final MethodChannel.Result result) {
        Intrinsics.checkNotNullParameter(call, "call");
        Intrinsics.checkNotNullParameter(result, "result");
        Object obj = call.arguments;
        try {
            String str = call.method;
            if (str != null) {
                boolean z = true;
                switch (str.hashCode()) {
                    case -2070189206:
                        if (str.equals("setOnLockScreenVisibility")) {
                            Activity activityCheckActivityNull = checkActivityNull();
                            if (obj instanceof Boolean) {
                                PluginUtils.INSTANCE.setOnLockScreenVisibility(activityCheckActivityNull, ((Boolean) obj).booleanValue());
                                return;
                            }
                            return;
                        }
                        break;
                    case -1401626951:
                        if (str.equals("isAppOnForeground")) {
                            result.success(Boolean.valueOf(PluginUtils.INSTANCE.isAppOnForeground(this.context)));
                            return;
                        }
                        break;
                    case -958428903:
                        if (str.equals("requestIgnoreBatteryOptimization")) {
                            Activity activityCheckActivityNull2 = checkActivityNull();
                            int iHashCode = UUID.randomUUID().hashCode() & 65535;
                            this.methodCodes.put(Integer.valueOf(iHashCode), 200);
                            this.methodResults.put(Integer.valueOf(iHashCode), result);
                            PluginUtils.INSTANCE.requestIgnoreBatteryOptimization(activityCheckActivityNull2, iHashCode);
                            return;
                        }
                        break;
                    case -917901449:
                        if (str.equals("canDrawOverlays")) {
                            result.success(Boolean.valueOf(PluginUtils.INSTANCE.canDrawOverlays(this.context)));
                            return;
                        }
                        break;
                    case -843699029:
                        if (str.equals("wakeUpScreen")) {
                            PluginUtils.INSTANCE.wakeUpScreen(this.context);
                            return;
                        }
                        break;
                    case -830276983:
                        if (str.equals("requestNotificationPermission")) {
                            this.provider.getNotificationPermissionManager().requestPermission(checkActivityNull(), new NotificationPermissionCallback() { // from class: com.pravera.flutter_foreground_task.MethodCallHandlerImpl$onMethodCall$2$callback$1
                                @Override // com.pravera.flutter_foreground_task.service.NotificationPermissionCallback
                                public void onResult(NotificationPermission permissionStatus) {
                                    Intrinsics.checkNotNullParameter(permissionStatus, "permissionStatus");
                                    result.success(Integer.valueOf(permissionStatus.ordinal()));
                                }

                                @Override // com.pravera.flutter_foreground_task.service.NotificationPermissionCallback
                                public void onError(Exception exception) {
                                    Intrinsics.checkNotNullParameter(exception, "exception");
                                    ErrorHandleUtils.INSTANCE.handleMethodCallError(result, exception);
                                }
                            });
                            return;
                        }
                        break;
                    case -802694078:
                        if (str.equals("checkNotificationPermission")) {
                            result.success(Integer.valueOf(this.provider.getNotificationPermissionManager().checkPermission(checkActivityNull()).ordinal()));
                            return;
                        }
                        break;
                    case -675127954:
                        if (str.equals("launchApp")) {
                            if (obj != null) {
                                z = obj instanceof String;
                            }
                            if (z) {
                                PluginUtils.INSTANCE.launchApp(this.context, (String) obj);
                                return;
                            }
                            return;
                        }
                        break;
                    case -386121002:
                        if (str.equals("openSystemAlertWindowSettings")) {
                            Activity activityCheckActivityNull3 = checkActivityNull();
                            int iHashCode2 = UUID.randomUUID().hashCode() & 65535;
                            this.methodCodes.put(Integer.valueOf(iHashCode2), 202);
                            this.methodResults.put(Integer.valueOf(iHashCode2), result);
                            PluginUtils.INSTANCE.openSystemAlertWindowSettings(activityCheckActivityNull3, iHashCode2);
                            return;
                        }
                        break;
                    case 310881216:
                        if (str.equals("isRunningService")) {
                            result.success(Boolean.valueOf(this.provider.getForegroundServiceManager().isRunningService()));
                            return;
                        }
                        break;
                    case 481665446:
                        if (str.equals("restartService")) {
                            this.provider.getForegroundServiceManager().restart(this.context);
                            result.success(true);
                            return;
                        }
                        break;
                    case 488202668:
                        if (str.equals("updateService")) {
                            this.provider.getForegroundServiceManager().update(this.context, obj);
                            result.success(true);
                            return;
                        }
                        break;
                    case 677170851:
                        if (str.equals("minimizeApp")) {
                            PluginUtils.INSTANCE.minimizeApp(checkActivityNull());
                            return;
                        }
                        break;
                    case 699379795:
                        if (str.equals("stopService")) {
                            this.provider.getForegroundServiceManager().stop(this.context);
                            result.success(true);
                            return;
                        }
                        break;
                    case 827196186:
                        if (str.equals("canScheduleExactAlarms")) {
                            result.success(Boolean.valueOf(PluginUtils.INSTANCE.canScheduleExactAlarms(this.context)));
                            return;
                        }
                        break;
                    case 1246965586:
                        if (str.equals("sendData")) {
                            this.provider.getForegroundServiceManager().sendData(obj);
                            return;
                        }
                        break;
                    case 1263333587:
                        if (str.equals("attachedActivity")) {
                            if (this.activity == null) {
                                z = false;
                            }
                            result.success(Boolean.valueOf(z));
                            return;
                        }
                        break;
                    case 1465118721:
                        if (str.equals("openIgnoreBatteryOptimizationSettings")) {
                            Activity activityCheckActivityNull4 = checkActivityNull();
                            int iHashCode3 = UUID.randomUUID().hashCode() & 65535;
                            this.methodCodes.put(Integer.valueOf(iHashCode3), 201);
                            this.methodResults.put(Integer.valueOf(iHashCode3), result);
                            PluginUtils.INSTANCE.openIgnoreBatteryOptimizationSettings(activityCheckActivityNull4, iHashCode3);
                            return;
                        }
                        break;
                    case 1616958905:
                        if (str.equals("openAlarmsAndRemindersSettings")) {
                            Activity activityCheckActivityNull5 = checkActivityNull();
                            int iHashCode4 = UUID.randomUUID().hashCode() & 65535;
                            this.methodCodes.put(Integer.valueOf(iHashCode4), 203);
                            this.methodResults.put(Integer.valueOf(iHashCode4), result);
                            PluginUtils.INSTANCE.openAlarmsAndRemindersSettings(activityCheckActivityNull5, iHashCode4);
                            return;
                        }
                        break;
                    case 1849706483:
                        if (str.equals("startService")) {
                            this.provider.getForegroundServiceManager().start(this.context, obj);
                            result.success(true);
                            return;
                        }
                        break;
                    case 2079768210:
                        if (str.equals("isIgnoringBatteryOptimizations")) {
                            result.success(Boolean.valueOf(PluginUtils.INSTANCE.isIgnoringBatteryOptimizations(this.context)));
                            return;
                        }
                        break;
                }
            }
            result.notImplemented();
        } catch (Exception e) {
            ErrorHandleUtils.INSTANCE.handleMethodCallError(result, e);
        }
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    @Override // io.flutter.plugin.common.PluginRegistry.ActivityResultListener
    public boolean onActivityResult(int requestCode, int resultCode, Intent data) {
        Integer num = this.methodCodes.get(Integer.valueOf(requestCode));
        MethodChannel.Result result = this.methodResults.get(Integer.valueOf(requestCode));
        this.methodCodes.remove(Integer.valueOf(requestCode));
        this.methodResults.remove(Integer.valueOf(requestCode));
        if (num != null && result != null) {
            switch (num.intValue()) {
                case 200:
                    result.success(Boolean.valueOf(PluginUtils.INSTANCE.isIgnoringBatteryOptimizations(this.context)));
                    break;
                case 201:
                    result.success(Boolean.valueOf(PluginUtils.INSTANCE.isIgnoringBatteryOptimizations(this.context)));
                    break;
                case 202:
                    result.success(Boolean.valueOf(PluginUtils.INSTANCE.canDrawOverlays(this.context)));
                    break;
                case 203:
                    result.success(Boolean.valueOf(PluginUtils.INSTANCE.canScheduleExactAlarms(this.context)));
                    break;
            }
        }
        return true;
    }

    @Override // com.pravera.flutter_foreground_task.FlutterForegroundTaskPluginChannel
    public void init(BinaryMessenger messenger) {
        Intrinsics.checkNotNullParameter(messenger, "messenger");
        MethodChannel methodChannel = new MethodChannel(messenger, "flutter_foreground_task/methods");
        this.channel = methodChannel;
        methodChannel.setMethodCallHandler(this);
    }

    @Override // com.pravera.flutter_foreground_task.FlutterForegroundTaskPluginChannel
    public void setActivity(Activity activity) {
        this.activity = activity;
    }

    @Override // com.pravera.flutter_foreground_task.FlutterForegroundTaskPluginChannel
    public void dispose() {
        MethodChannel methodChannel = this.channel;
        if (methodChannel != null) {
            if (methodChannel == null) {
                Intrinsics.throwUninitializedPropertyAccessException("channel");
                methodChannel = null;
            }
            methodChannel.setMethodCallHandler(null);
        }
    }

    private final Activity checkActivityNull() throws ActivityNotAttachedException {
        Activity activity = this.activity;
        if (activity == null) {
            throw new ActivityNotAttachedException();
        }
        Intrinsics.checkNotNull(activity);
        return activity;
    }
}
