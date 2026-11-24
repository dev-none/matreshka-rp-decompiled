package com.pravera.flutter_foreground_task;

import android.content.Context;
import android.content.Intent;
import com.google.android.gms.common.internal.ServiceSpecificExtraArgs;
import com.pravera.flutter_foreground_task.service.ForegroundService;
import com.pravera.flutter_foreground_task.service.ForegroundServiceManager;
import com.pravera.flutter_foreground_task.service.NotificationPermissionManager;
import com.pravera.flutter_foreground_task.service.ServiceProvider;
import io.flutter.embedding.engine.plugins.FlutterPlugin;
import io.flutter.embedding.engine.plugins.activity.ActivityAware;
import io.flutter.embedding.engine.plugins.activity.ActivityPluginBinding;
import io.flutter.plugin.common.BinaryMessenger;
import io.flutter.plugin.common.PluginRegistry;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: FlutterForegroundTaskPlugin.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000L\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0006\n\u0002\u0010\u000b\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\u0018\u0000 \u001e2\u00020\u00012\u00020\u00022\u00020\u00032\u00020\u0004:\u0001\u001eB\u0007¢\u0006\u0004\b\u0005\u0010\u0006J\u0010\u0010\u000f\u001a\u00020\u00102\u0006\u0010\u0011\u001a\u00020\u0012H\u0016J\u0010\u0010\u0013\u001a\u00020\u00102\u0006\u0010\u0011\u001a\u00020\u0012H\u0016J\u0010\u0010\u0014\u001a\u00020\u00102\u0006\u0010\u0011\u001a\u00020\fH\u0016J\b\u0010\u0015\u001a\u00020\u0010H\u0016J\u0010\u0010\u0016\u001a\u00020\u00102\u0006\u0010\u0011\u001a\u00020\fH\u0016J\b\u0010\u0017\u001a\u00020\u0010H\u0016J\u0010\u0010\u0018\u001a\u00020\u00192\u0006\u0010\u001a\u001a\u00020\u001bH\u0016J\b\u0010\u001c\u001a\u00020\bH\u0016J\b\u0010\u001d\u001a\u00020\nH\u0016R\u000e\u0010\u0007\u001a\u00020\bX\u0082.¢\u0006\u0002\n\u0000R\u000e\u0010\t\u001a\u00020\nX\u0082.¢\u0006\u0002\n\u0000R\u0010\u0010\u000b\u001a\u0004\u0018\u00010\fX\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\r\u001a\u00020\u000eX\u0082.¢\u0006\u0002\n\u0000¨\u0006\u001f"}, d2 = {"Lcom/pravera/flutter_foreground_task/FlutterForegroundTaskPlugin;", "Lio/flutter/embedding/engine/plugins/FlutterPlugin;", "Lio/flutter/embedding/engine/plugins/activity/ActivityAware;", "Lcom/pravera/flutter_foreground_task/service/ServiceProvider;", "Lio/flutter/plugin/common/PluginRegistry$NewIntentListener;", "<init>", "()V", "notificationPermissionManager", "Lcom/pravera/flutter_foreground_task/service/NotificationPermissionManager;", "foregroundServiceManager", "Lcom/pravera/flutter_foreground_task/service/ForegroundServiceManager;", "activityBinding", "Lio/flutter/embedding/engine/plugins/activity/ActivityPluginBinding;", "methodCallHandler", "Lcom/pravera/flutter_foreground_task/MethodCallHandlerImpl;", "onAttachedToEngine", "", "binding", "Lio/flutter/embedding/engine/plugins/FlutterPlugin$FlutterPluginBinding;", "onDetachedFromEngine", "onAttachedToActivity", "onDetachedFromActivityForConfigChanges", "onReattachedToActivityForConfigChanges", "onDetachedFromActivity", "onNewIntent", "", "intent", "Landroid/content/Intent;", "getNotificationPermissionManager", "getForegroundServiceManager", "Companion", "flutter_foreground_task_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
public final class FlutterForegroundTaskPlugin implements FlutterPlugin, ActivityAware, ServiceProvider, PluginRegistry.NewIntentListener {

    /* JADX INFO: renamed from: Companion, reason: from kotlin metadata */
    public static final Companion INSTANCE = new Companion(null);
    private ActivityPluginBinding activityBinding;
    private ForegroundServiceManager foregroundServiceManager;
    private MethodCallHandlerImpl methodCallHandler;
    private NotificationPermissionManager notificationPermissionManager;

    /* JADX INFO: compiled from: FlutterForegroundTaskPlugin.kt */
    @Metadata(d1 = {"\u0000\u001a\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u000e\u0010\u0004\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u0007J\u000e\u0010\b\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u0007¨\u0006\t"}, d2 = {"Lcom/pravera/flutter_foreground_task/FlutterForegroundTaskPlugin$Companion;", "", "<init>", "()V", "addTaskLifecycleListener", "", ServiceSpecificExtraArgs.CastExtraArgs.LISTENER, "Lcom/pravera/flutter_foreground_task/FlutterForegroundTaskLifecycleListener;", "removeTaskLifecycleListener", "flutter_foreground_task_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        private Companion() {
        }

        public final void addTaskLifecycleListener(FlutterForegroundTaskLifecycleListener listener) {
            Intrinsics.checkNotNullParameter(listener, "listener");
            ForegroundService.INSTANCE.addTaskLifecycleListener(listener);
        }

        public final void removeTaskLifecycleListener(FlutterForegroundTaskLifecycleListener listener) {
            Intrinsics.checkNotNullParameter(listener, "listener");
            ForegroundService.INSTANCE.removeTaskLifecycleListener(listener);
        }
    }

    @Override // io.flutter.embedding.engine.plugins.FlutterPlugin
    public void onAttachedToEngine(FlutterPlugin.FlutterPluginBinding binding) {
        Intrinsics.checkNotNullParameter(binding, "binding");
        this.notificationPermissionManager = new NotificationPermissionManager();
        this.foregroundServiceManager = new ForegroundServiceManager();
        Context applicationContext = binding.getApplicationContext();
        Intrinsics.checkNotNullExpressionValue(applicationContext, "getApplicationContext(...)");
        MethodCallHandlerImpl methodCallHandlerImpl = new MethodCallHandlerImpl(applicationContext, this);
        this.methodCallHandler = methodCallHandlerImpl;
        BinaryMessenger binaryMessenger = binding.getBinaryMessenger();
        Intrinsics.checkNotNullExpressionValue(binaryMessenger, "getBinaryMessenger(...)");
        methodCallHandlerImpl.init(binaryMessenger);
    }

    @Override // io.flutter.embedding.engine.plugins.FlutterPlugin
    public void onDetachedFromEngine(FlutterPlugin.FlutterPluginBinding binding) {
        Intrinsics.checkNotNullParameter(binding, "binding");
        MethodCallHandlerImpl methodCallHandlerImpl = this.methodCallHandler;
        if (methodCallHandlerImpl != null) {
            if (methodCallHandlerImpl == null) {
                Intrinsics.throwUninitializedPropertyAccessException("methodCallHandler");
                methodCallHandlerImpl = null;
            }
            methodCallHandlerImpl.dispose();
        }
    }

    @Override // io.flutter.embedding.engine.plugins.activity.ActivityAware
    public void onAttachedToActivity(ActivityPluginBinding binding) {
        Intrinsics.checkNotNullParameter(binding, "binding");
        MethodCallHandlerImpl methodCallHandlerImpl = this.methodCallHandler;
        MethodCallHandlerImpl methodCallHandlerImpl2 = null;
        if (methodCallHandlerImpl == null) {
            Intrinsics.throwUninitializedPropertyAccessException("methodCallHandler");
            methodCallHandlerImpl = null;
        }
        methodCallHandlerImpl.setActivity(binding.getActivity());
        NotificationPermissionManager notificationPermissionManager = this.notificationPermissionManager;
        if (notificationPermissionManager == null) {
            Intrinsics.throwUninitializedPropertyAccessException("notificationPermissionManager");
            notificationPermissionManager = null;
        }
        binding.addRequestPermissionsResultListener(notificationPermissionManager);
        MethodCallHandlerImpl methodCallHandlerImpl3 = this.methodCallHandler;
        if (methodCallHandlerImpl3 == null) {
            Intrinsics.throwUninitializedPropertyAccessException("methodCallHandler");
        } else {
            methodCallHandlerImpl2 = methodCallHandlerImpl3;
        }
        binding.addActivityResultListener(methodCallHandlerImpl2);
        binding.addOnNewIntentListener(this);
        this.activityBinding = binding;
        ForegroundService.INSTANCE.handleNotificationContentIntent(binding.getActivity().getIntent());
    }

    @Override // io.flutter.embedding.engine.plugins.activity.ActivityAware
    public void onDetachedFromActivityForConfigChanges() {
        onDetachedFromActivity();
    }

    @Override // io.flutter.embedding.engine.plugins.activity.ActivityAware
    public void onReattachedToActivityForConfigChanges(ActivityPluginBinding binding) {
        Intrinsics.checkNotNullParameter(binding, "binding");
        onAttachedToActivity(binding);
    }

    @Override // io.flutter.embedding.engine.plugins.activity.ActivityAware
    public void onDetachedFromActivity() {
        ActivityPluginBinding activityPluginBinding = this.activityBinding;
        if (activityPluginBinding != null) {
            NotificationPermissionManager notificationPermissionManager = this.notificationPermissionManager;
            if (notificationPermissionManager == null) {
                Intrinsics.throwUninitializedPropertyAccessException("notificationPermissionManager");
                notificationPermissionManager = null;
            }
            activityPluginBinding.removeRequestPermissionsResultListener(notificationPermissionManager);
        }
        ActivityPluginBinding activityPluginBinding2 = this.activityBinding;
        if (activityPluginBinding2 != null) {
            MethodCallHandlerImpl methodCallHandlerImpl = this.methodCallHandler;
            if (methodCallHandlerImpl == null) {
                Intrinsics.throwUninitializedPropertyAccessException("methodCallHandler");
                methodCallHandlerImpl = null;
            }
            activityPluginBinding2.removeActivityResultListener(methodCallHandlerImpl);
        }
        ActivityPluginBinding activityPluginBinding3 = this.activityBinding;
        if (activityPluginBinding3 != null) {
            activityPluginBinding3.removeOnNewIntentListener(this);
        }
        this.activityBinding = null;
        MethodCallHandlerImpl methodCallHandlerImpl2 = this.methodCallHandler;
        if (methodCallHandlerImpl2 == null) {
            Intrinsics.throwUninitializedPropertyAccessException("methodCallHandler");
            methodCallHandlerImpl2 = null;
        }
        methodCallHandlerImpl2.setActivity(null);
    }

    @Override // io.flutter.plugin.common.PluginRegistry.NewIntentListener
    public boolean onNewIntent(Intent intent) {
        Intrinsics.checkNotNullParameter(intent, "intent");
        ForegroundService.INSTANCE.handleNotificationContentIntent(intent);
        return true;
    }

    @Override // com.pravera.flutter_foreground_task.service.ServiceProvider
    public NotificationPermissionManager getNotificationPermissionManager() {
        NotificationPermissionManager notificationPermissionManager = this.notificationPermissionManager;
        if (notificationPermissionManager != null) {
            return notificationPermissionManager;
        }
        Intrinsics.throwUninitializedPropertyAccessException("notificationPermissionManager");
        return null;
    }

    @Override // com.pravera.flutter_foreground_task.service.ServiceProvider
    public ForegroundServiceManager getForegroundServiceManager() {
        ForegroundServiceManager foregroundServiceManager = this.foregroundServiceManager;
        if (foregroundServiceManager != null) {
            return foregroundServiceManager;
        }
        Intrinsics.throwUninitializedPropertyAccessException("foregroundServiceManager");
        return null;
    }
}
