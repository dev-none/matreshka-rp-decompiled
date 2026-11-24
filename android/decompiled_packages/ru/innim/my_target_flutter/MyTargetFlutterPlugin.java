package ru.innim.my_target_flutter;

import android.content.Context;
import io.flutter.embedding.engine.plugins.FlutterPlugin;
import io.flutter.embedding.engine.plugins.activity.ActivityAware;
import io.flutter.embedding.engine.plugins.activity.ActivityPluginBinding;
import io.flutter.plugin.common.BinaryMessenger;
import io.flutter.plugin.common.EventChannel;
import io.flutter.plugin.common.MethodChannel;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: MyTargetFlutterPlugin.kt */
/* JADX INFO: loaded from: classes8.dex */
@Metadata(d1 = {"\u00008\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\u0018\u0000 \u00152\u00020\u00012\u00020\u0002:\u0001\u0015B\u0007¢\u0006\u0004\b\u0003\u0010\u0004J\u0010\u0010\u000b\u001a\u00020\f2\u0006\u0010\r\u001a\u00020\u000eH\u0016J\u0010\u0010\u000f\u001a\u00020\f2\u0006\u0010\r\u001a\u00020\u000eH\u0016J\u0010\u0010\u0010\u001a\u00020\f2\u0006\u0010\r\u001a\u00020\u0011H\u0016J\b\u0010\u0012\u001a\u00020\fH\u0016J\u0010\u0010\u0013\u001a\u00020\f2\u0006\u0010\r\u001a\u00020\u0011H\u0016J\b\u0010\u0014\u001a\u00020\fH\u0016R\u000e\u0010\u0005\u001a\u00020\u0006X\u0082.¢\u0006\u0002\n\u0000R\u000e\u0010\u0007\u001a\u00020\bX\u0082.¢\u0006\u0002\n\u0000R\u000e\u0010\t\u001a\u00020\nX\u0082.¢\u0006\u0002\n\u0000¨\u0006\u0016"}, d2 = {"Lru/innim/my_target_flutter/MyTargetFlutterPlugin;", "Lio/flutter/embedding/engine/plugins/FlutterPlugin;", "Lio/flutter/embedding/engine/plugins/activity/ActivityAware;", "<init>", "()V", "adEventHandler", "Lru/innim/my_target_flutter/AdEventHandler;", "adListenerChannel", "Lio/flutter/plugin/common/EventChannel;", "dartChannel", "Lio/flutter/plugin/common/MethodChannel;", "onAttachedToEngine", "", "binding", "Lio/flutter/embedding/engine/plugins/FlutterPlugin$FlutterPluginBinding;", "onDetachedFromEngine", "onAttachedToActivity", "Lio/flutter/embedding/engine/plugins/activity/ActivityPluginBinding;", "onDetachedFromActivityForConfigChanges", "onReattachedToActivityForConfigChanges", "onDetachedFromActivity", "Companion", "my_target_flutter_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
public final class MyTargetFlutterPlugin implements FlutterPlugin, ActivityAware {
    private static final String AD_LISTENER_CHANNEL_NAME = "my_target_flutter/ad_listener";
    private static final String CHANNEL_NAME = "my_target_flutter";
    private AdEventHandler adEventHandler;
    private EventChannel adListenerChannel;
    private MethodChannel dartChannel;

    @Override // io.flutter.embedding.engine.plugins.activity.ActivityAware
    public void onAttachedToActivity(ActivityPluginBinding binding) {
        Intrinsics.checkNotNullParameter(binding, "binding");
    }

    @Override // io.flutter.embedding.engine.plugins.activity.ActivityAware
    public void onDetachedFromActivity() {
    }

    @Override // io.flutter.embedding.engine.plugins.FlutterPlugin
    public void onDetachedFromEngine(FlutterPlugin.FlutterPluginBinding binding) {
        Intrinsics.checkNotNullParameter(binding, "binding");
    }

    @Override // io.flutter.embedding.engine.plugins.activity.ActivityAware
    public void onReattachedToActivityForConfigChanges(ActivityPluginBinding binding) {
        Intrinsics.checkNotNullParameter(binding, "binding");
    }

    @Override // io.flutter.embedding.engine.plugins.FlutterPlugin
    public void onAttachedToEngine(FlutterPlugin.FlutterPluginBinding binding) {
        Intrinsics.checkNotNullParameter(binding, "binding");
        BinaryMessenger binaryMessenger = binding.getBinaryMessenger();
        Intrinsics.checkNotNullExpressionValue(binaryMessenger, "getBinaryMessenger(...)");
        this.dartChannel = new MethodChannel(binaryMessenger, CHANNEL_NAME);
        Context applicationContext = binding.getApplicationContext();
        Intrinsics.checkNotNullExpressionValue(applicationContext, "getApplicationContext(...)");
        this.adListenerChannel = new EventChannel(binaryMessenger, AD_LISTENER_CHANNEL_NAME);
        this.adEventHandler = new AdEventHandler();
        EventChannel eventChannel = this.adListenerChannel;
        MethodChannel methodChannel = null;
        if (eventChannel == null) {
            Intrinsics.throwUninitializedPropertyAccessException("adListenerChannel");
            eventChannel = null;
        }
        AdEventHandler adEventHandler = this.adEventHandler;
        if (adEventHandler == null) {
            Intrinsics.throwUninitializedPropertyAccessException("adEventHandler");
            adEventHandler = null;
        }
        eventChannel.setStreamHandler(adEventHandler);
        AdEventHandler adEventHandler2 = this.adEventHandler;
        if (adEventHandler2 == null) {
            Intrinsics.throwUninitializedPropertyAccessException("adEventHandler");
            adEventHandler2 = null;
        }
        MethodCallHandler methodCallHandler = new MethodCallHandler(applicationContext, adEventHandler2);
        MethodChannel methodChannel2 = this.dartChannel;
        if (methodChannel2 == null) {
            Intrinsics.throwUninitializedPropertyAccessException("dartChannel");
        } else {
            methodChannel = methodChannel2;
        }
        methodChannel.setMethodCallHandler(methodCallHandler);
    }

    @Override // io.flutter.embedding.engine.plugins.activity.ActivityAware
    public void onDetachedFromActivityForConfigChanges() {
        MethodChannel methodChannel = this.dartChannel;
        if (methodChannel == null) {
            Intrinsics.throwUninitializedPropertyAccessException("dartChannel");
            methodChannel = null;
        }
        methodChannel.setMethodCallHandler(null);
        EventChannel eventChannel = this.adListenerChannel;
        if (eventChannel == null) {
            Intrinsics.throwUninitializedPropertyAccessException("adListenerChannel");
            eventChannel = null;
        }
        eventChannel.setStreamHandler(null);
    }
}
