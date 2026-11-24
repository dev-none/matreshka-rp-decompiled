package dev.britannio.in_app_review;

import android.app.Activity;
import android.content.Context;
import android.content.Intent;
import android.net.Uri;
import android.util.Log;
import androidx.core.app.NotificationCompat;
import com.google.android.gms.tasks.OnCompleteListener;
import com.google.android.gms.tasks.Task;
import com.google.android.play.core.review.ReviewInfo;
import com.google.android.play.core.review.ReviewManager;
import com.google.android.play.core.review.ReviewManagerFactory;
import io.flutter.embedding.engine.plugins.FlutterPlugin;
import io.flutter.embedding.engine.plugins.activity.ActivityAware;
import io.flutter.embedding.engine.plugins.activity.ActivityPluginBinding;
import io.flutter.plugin.common.MethodCall;
import io.flutter.plugin.common.MethodChannel;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: InAppReviewPlugin.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000V\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0007\n\u0002\u0010\u000b\n\u0000\u0018\u00002\u00020\u00012\u00020\u00022\u00020\u0003B\u0007¢\u0006\u0004\b\u0004\u0010\u0005J\u0010\u0010\u000e\u001a\u00020\u000f2\u0006\u0010\u0010\u001a\u00020\u0011H\u0016J\u0018\u0010\u0012\u001a\u00020\u000f2\u0006\u0010\u0013\u001a\u00020\u00142\u0006\u0010\u0015\u001a\u00020\u0016H\u0016J\u0010\u0010\u0017\u001a\u00020\u000f2\u0006\u0010\u0018\u001a\u00020\u0011H\u0016J\u0010\u0010\u0019\u001a\u00020\u000f2\u0006\u0010\u0018\u001a\u00020\u001aH\u0016J\b\u0010\u001b\u001a\u00020\u000fH\u0016J\u0010\u0010\u001c\u001a\u00020\u000f2\u0006\u0010\u0018\u001a\u00020\u001aH\u0016J\b\u0010\u001d\u001a\u00020\u000fH\u0016J\u0010\u0010\u001e\u001a\u00020\u000f2\u0006\u0010\u0015\u001a\u00020\u0016H\u0002J\u0010\u0010\u001f\u001a\u00020\u000f2\u0006\u0010\u0015\u001a\u00020\u0016H\u0002J\u0010\u0010 \u001a\u00020\u000f2\u0006\u0010\u0015\u001a\u00020\u0016H\u0002J\u0014\u0010!\u001a\u00020\"2\n\b\u0002\u0010\u0015\u001a\u0004\u0018\u00010\u0016H\u0002R\u000e\u0010\u0006\u001a\u00020\u0007X\u0082.¢\u0006\u0002\n\u0000R\u0010\u0010\b\u001a\u0004\u0018\u00010\tX\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010\n\u001a\u0004\u0018\u00010\u000bX\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\f\u001a\u00020\rX\u0082D¢\u0006\u0002\n\u0000¨\u0006#"}, d2 = {"Ldev/britannio/in_app_review/InAppReviewPlugin;", "Lio/flutter/embedding/engine/plugins/FlutterPlugin;", "Lio/flutter/plugin/common/MethodChannel$MethodCallHandler;", "Lio/flutter/embedding/engine/plugins/activity/ActivityAware;", "<init>", "()V", "channel", "Lio/flutter/plugin/common/MethodChannel;", "context", "Landroid/content/Context;", "activity", "Landroid/app/Activity;", "TAG", "", "onAttachedToEngine", "", "flutterPluginBinding", "Lio/flutter/embedding/engine/plugins/FlutterPlugin$FlutterPluginBinding;", "onMethodCall", NotificationCompat.CATEGORY_CALL, "Lio/flutter/plugin/common/MethodCall;", "result", "Lio/flutter/plugin/common/MethodChannel$Result;", "onDetachedFromEngine", "binding", "onAttachedToActivity", "Lio/flutter/embedding/engine/plugins/activity/ActivityPluginBinding;", "onDetachedFromActivityForConfigChanges", "onReattachedToActivityForConfigChanges", "onDetachedFromActivity", "isAvailable", "requestReview", "openStoreListing", "noContextOrActivity", "", "in_app_review_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
public final class InAppReviewPlugin implements FlutterPlugin, MethodChannel.MethodCallHandler, ActivityAware {
    private final String TAG = "InAppReviewPlugin";
    private Activity activity;
    private MethodChannel channel;
    private Context context;

    @Override // io.flutter.embedding.engine.plugins.FlutterPlugin
    public void onAttachedToEngine(FlutterPlugin.FlutterPluginBinding flutterPluginBinding) {
        Intrinsics.checkNotNullParameter(flutterPluginBinding, "flutterPluginBinding");
        MethodChannel methodChannel = new MethodChannel(flutterPluginBinding.getBinaryMessenger(), BuildConfig.LIBRARY_PACKAGE_NAME);
        this.channel = methodChannel;
        methodChannel.setMethodCallHandler(this);
        this.context = flutterPluginBinding.getApplicationContext();
    }

    @Override // io.flutter.plugin.common.MethodChannel.MethodCallHandler
    public void onMethodCall(MethodCall call, MethodChannel.Result result) {
        Intrinsics.checkNotNullParameter(call, "call");
        Intrinsics.checkNotNullParameter(result, "result");
        Log.i(this.TAG, "onMethodCall: " + call.method);
        String str = call.method;
        if (str != null) {
            int iHashCode = str.hashCode();
            if (iHashCode != 159262157) {
                if (iHashCode != 444517567) {
                    if (iHashCode == 1361080007 && str.equals("requestReview")) {
                        requestReview(result);
                        return;
                    }
                } else if (str.equals("isAvailable")) {
                    isAvailable(result);
                    return;
                }
            } else if (str.equals("openStoreListing")) {
                openStoreListing(result);
                return;
            }
        }
        result.notImplemented();
    }

    @Override // io.flutter.embedding.engine.plugins.FlutterPlugin
    public void onDetachedFromEngine(FlutterPlugin.FlutterPluginBinding binding) {
        Intrinsics.checkNotNullParameter(binding, "binding");
        MethodChannel methodChannel = this.channel;
        if (methodChannel == null) {
            Intrinsics.throwUninitializedPropertyAccessException("channel");
            methodChannel = null;
        }
        methodChannel.setMethodCallHandler(null);
        this.context = null;
    }

    @Override // io.flutter.embedding.engine.plugins.activity.ActivityAware
    public void onAttachedToActivity(ActivityPluginBinding binding) {
        Intrinsics.checkNotNullParameter(binding, "binding");
        this.activity = binding.getActivity();
    }

    @Override // io.flutter.embedding.engine.plugins.activity.ActivityAware
    public void onDetachedFromActivityForConfigChanges() {
        this.activity = null;
    }

    @Override // io.flutter.embedding.engine.plugins.activity.ActivityAware
    public void onReattachedToActivityForConfigChanges(ActivityPluginBinding binding) {
        Intrinsics.checkNotNullParameter(binding, "binding");
        this.activity = binding.getActivity();
    }

    @Override // io.flutter.embedding.engine.plugins.activity.ActivityAware
    public void onDetachedFromActivity() {
        this.activity = null;
    }

    private final void isAvailable(final MethodChannel.Result result) {
        Log.i(this.TAG, "isAvailable: called");
        if (noContextOrActivity$default(this, null, 1, null)) {
            result.success(false);
            return;
        }
        try {
            Context context = this.context;
            Intrinsics.checkNotNull(context);
            ReviewManager reviewManagerCreate = ReviewManagerFactory.create(context);
            Intrinsics.checkNotNullExpressionValue(reviewManagerCreate, "create(...)");
            Task<ReviewInfo> taskRequestReviewFlow = reviewManagerCreate.requestReviewFlow();
            Intrinsics.checkNotNullExpressionValue(taskRequestReviewFlow, "requestReviewFlow(...)");
            Intrinsics.checkNotNull(taskRequestReviewFlow.addOnCompleteListener(new OnCompleteListener() { // from class: dev.britannio.in_app_review.InAppReviewPlugin$$ExternalSyntheticLambda2
                @Override // com.google.android.gms.tasks.OnCompleteListener
                public final void onComplete(Task task) {
                    InAppReviewPlugin.isAvailable$lambda$0(result, task);
                }
            }));
        } catch (Exception e) {
            Log.e(this.TAG, "isAvailable: error", e);
            result.success(false);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void isAvailable$lambda$0(MethodChannel.Result result, Task task) {
        Intrinsics.checkNotNullParameter(task, "task");
        if (task.isSuccessful()) {
            result.success(true);
        } else {
            result.success(false);
        }
    }

    private final void requestReview(final MethodChannel.Result result) {
        Log.i(this.TAG, "requestReview: called");
        if (noContextOrActivity(result)) {
            return;
        }
        try {
            Context context = this.context;
            Intrinsics.checkNotNull(context);
            final ReviewManager reviewManagerCreate = ReviewManagerFactory.create(context);
            Intrinsics.checkNotNullExpressionValue(reviewManagerCreate, "create(...)");
            Task<ReviewInfo> taskRequestReviewFlow = reviewManagerCreate.requestReviewFlow();
            Intrinsics.checkNotNullExpressionValue(taskRequestReviewFlow, "requestReviewFlow(...)");
            Intrinsics.checkNotNull(taskRequestReviewFlow.addOnCompleteListener(new OnCompleteListener() { // from class: dev.britannio.in_app_review.InAppReviewPlugin$$ExternalSyntheticLambda1
                @Override // com.google.android.gms.tasks.OnCompleteListener
                public final void onComplete(Task task) {
                    InAppReviewPlugin.requestReview$lambda$0(this.f$0, result, reviewManagerCreate, task);
                }
            }));
        } catch (Exception e) {
            Log.e(this.TAG, "requestReview: error", e);
            result.error("error", "An error occurred during the request review flow", null);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void requestReview$lambda$0(InAppReviewPlugin inAppReviewPlugin, final MethodChannel.Result result, ReviewManager reviewManager, Task task) {
        Intrinsics.checkNotNullParameter(task, "task");
        if (inAppReviewPlugin.noContextOrActivity(result)) {
            return;
        }
        if (task.isSuccessful()) {
            Log.i(inAppReviewPlugin.TAG, "onComplete: Successfully requested review flow");
            ReviewInfo reviewInfo = (ReviewInfo) task.getResult();
            Activity activity = inAppReviewPlugin.activity;
            Intrinsics.checkNotNull(activity);
            Task<Void> taskLaunchReviewFlow = reviewManager.launchReviewFlow(activity, reviewInfo);
            Intrinsics.checkNotNullExpressionValue(taskLaunchReviewFlow, "launchReviewFlow(...)");
            taskLaunchReviewFlow.addOnCompleteListener(new OnCompleteListener() { // from class: dev.britannio.in_app_review.InAppReviewPlugin$$ExternalSyntheticLambda0
                @Override // com.google.android.gms.tasks.OnCompleteListener
                public final void onComplete(Task task2) {
                    InAppReviewPlugin.requestReview$lambda$0$0(result, task2);
                }
            });
            return;
        }
        Log.w(inAppReviewPlugin.TAG, "onComplete: Unsuccessfully requested review flow");
        result.error("error", "In-App Review API unavailable", null);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void requestReview$lambda$0$0(MethodChannel.Result result, Task it) {
        Intrinsics.checkNotNullParameter(it, "it");
        result.success(null);
    }

    private final void openStoreListing(MethodChannel.Result result) {
        Log.i(this.TAG, "openStoreListing: called");
        if (noContextOrActivity(result)) {
            return;
        }
        try {
            Context context = this.context;
            Intrinsics.checkNotNull(context);
            String packageName = context.getPackageName();
            Intent data = new Intent("android.intent.action.VIEW").setData(Uri.parse("https://play.google.com/store/apps/details?id=" + packageName));
            Intrinsics.checkNotNullExpressionValue(data, "setData(...)");
            Activity activity = this.activity;
            Intrinsics.checkNotNull(activity);
            activity.startActivity(data);
            result.success(null);
        } catch (Exception e) {
            Log.e(this.TAG, "openStoreListing: error", e);
            result.error("error", "An error occurred while opening the play store", null);
        }
    }

    static /* synthetic */ boolean noContextOrActivity$default(InAppReviewPlugin inAppReviewPlugin, MethodChannel.Result result, int i, Object obj) {
        if ((i & 1) != 0) {
            result = null;
        }
        return inAppReviewPlugin.noContextOrActivity(result);
    }

    private final boolean noContextOrActivity(MethodChannel.Result result) {
        Log.i(this.TAG, "noContextOrActivity: called");
        if (this.context == null) {
            Log.e(this.TAG, "noContextOrActivity: Android context not available");
            if (result != null) {
                result.error("error", "Android context not available", null);
            }
            return true;
        }
        if (this.activity != null) {
            return false;
        }
        Log.e(this.TAG, "noContextOrActivity: Android activity not available");
        if (result != null) {
            result.error("error", "Android activity not available", null);
        }
        return true;
    }
}
