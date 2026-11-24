package com.github.dart_lang.jni;

import android.app.Activity;
import android.content.Context;
import io.flutter.embedding.engine.plugins.FlutterPlugin;
import io.flutter.embedding.engine.plugins.activity.ActivityAware;
import io.flutter.embedding.engine.plugins.activity.ActivityPluginBinding;

/* JADX INFO: loaded from: classes4.dex */
public class JniPlugin implements FlutterPlugin, ActivityAware {
    native void initializeJni(Context context, ClassLoader classLoader);

    @Override // io.flutter.embedding.engine.plugins.activity.ActivityAware
    public void onDetachedFromActivity() {
    }

    @Override // io.flutter.embedding.engine.plugins.activity.ActivityAware
    public void onDetachedFromActivityForConfigChanges() {
    }

    @Override // io.flutter.embedding.engine.plugins.FlutterPlugin
    public void onDetachedFromEngine(FlutterPlugin.FlutterPluginBinding flutterPluginBinding) {
    }

    native void setJniActivity(Activity activity, Context context);

    @Override // io.flutter.embedding.engine.plugins.FlutterPlugin
    public void onAttachedToEngine(FlutterPlugin.FlutterPluginBinding flutterPluginBinding) {
        setup(flutterPluginBinding.getApplicationContext());
    }

    private void setup(Context context) {
        initializeJni(context, getClass().getClassLoader());
    }

    @Override // io.flutter.embedding.engine.plugins.activity.ActivityAware
    public void onAttachedToActivity(ActivityPluginBinding activityPluginBinding) {
        Activity activity = activityPluginBinding.getActivity();
        setJniActivity(activity, activity.getApplicationContext());
    }

    @Override // io.flutter.embedding.engine.plugins.activity.ActivityAware
    public void onReattachedToActivityForConfigChanges(ActivityPluginBinding activityPluginBinding) {
        Activity activity = activityPluginBinding.getActivity();
        setJniActivity(activity, activity.getApplicationContext());
    }

    static {
        System.loadLibrary("dartjni");
    }
}
