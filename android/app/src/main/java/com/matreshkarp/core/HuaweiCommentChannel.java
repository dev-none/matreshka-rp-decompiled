package com.matreshkarp.core;

import android.app.Activity;
import android.content.Intent;
import io.flutter.plugin.common.BinaryMessenger;
import io.flutter.plugin.common.MethodCall;
import io.flutter.plugin.common.MethodChannel;
import io.sentry.SentryBaseEvent;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: HuaweiCommentChannel.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000<\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\b\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\u0018\u0000 \u00142\u00020\u0001:\u0001\u0014B\u0017\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005¢\u0006\u0004\b\u0006\u0010\u0007J\u0016\u0010\n\u001a\u00020\u000b2\u0006\u0010\f\u001a\u00020\r2\u0006\u0010\u000e\u001a\u00020\rJ\u0010\u0010\u000f\u001a\u00020\u00102\u0006\u0010\u0011\u001a\u00020\tH\u0002J\b\u0010\u0012\u001a\u00020\u0013H\u0002R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u0010\u0010\b\u001a\u0004\u0018\u00010\tX\u0082\u000e¢\u0006\u0002\n\u0000¨\u0006\u0015"}, d2 = {"Lcom/matreshkarp/core/HuaweiCommentChannel;", "", "activity", "Landroid/app/Activity;", "messenger", "Lio/flutter/plugin/common/BinaryMessenger;", "<init>", "(Landroid/app/Activity;Lio/flutter/plugin/common/BinaryMessenger;)V", "pending", "Lio/flutter/plugin/common/MethodChannel$Result;", "onActivityResult", "", "requestCode", "", "resultCode", SentryBaseEvent.JsonKeys.REQUEST, "", "result", "commentIntent", "Landroid/content/Intent;", "Companion", "app_matreshkaProdRelease"}, k = 1, mv = {2, 2, 0}, xi = 48)
public final class HuaweiCommentChannel {
    private static final String ACTION = "com.huawei.appmarket.intent.action.guidecomment";
    private static final String APP_MARKET = "com.huawei.appmarket";
    private static final int REQUEST_CODE = 7311;
    private final Activity activity;
    private MethodChannel.Result pending;

    public HuaweiCommentChannel(Activity activity, BinaryMessenger messenger) {
        Intrinsics.checkNotNullParameter(activity, "activity");
        Intrinsics.checkNotNullParameter(messenger, "messenger");
        this.activity = activity;
        new MethodChannel(messenger, "rate_us_huawei").setMethodCallHandler(new MethodChannel.MethodCallHandler() { // from class: com.matreshkarp.core.HuaweiCommentChannel$$ExternalSyntheticLambda0
            @Override // io.flutter.plugin.common.MethodChannel.MethodCallHandler
            public final void onMethodCall(MethodCall methodCall, MethodChannel.Result result) {
                HuaweiCommentChannel._init_$lambda$0(this.f$0, methodCall, result);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void _init_$lambda$0(HuaweiCommentChannel huaweiCommentChannel, MethodCall call, MethodChannel.Result result) {
        Intrinsics.checkNotNullParameter(call, "call");
        Intrinsics.checkNotNullParameter(result, "result");
        String str = call.method;
        if (Intrinsics.areEqual(str, "isAvailable")) {
            result.success(Boolean.valueOf(huaweiCommentChannel.commentIntent().resolveActivity(huaweiCommentChannel.activity.getPackageManager()) != null));
        } else if (Intrinsics.areEqual(str, SentryBaseEvent.JsonKeys.REQUEST)) {
            huaweiCommentChannel.request(result);
        } else {
            result.notImplemented();
        }
    }

    public final boolean onActivityResult(int requestCode, int resultCode) {
        if (requestCode != REQUEST_CODE) {
            return false;
        }
        MethodChannel.Result result = this.pending;
        if (result != null) {
            result.success(Integer.valueOf(resultCode));
        }
        this.pending = null;
        return true;
    }

    private final void request(MethodChannel.Result result) {
        MethodChannel.Result result2 = this.pending;
        if (result2 != null) {
            result2.success(null);
        }
        this.pending = result;
        try {
            this.activity.startActivityForResult(commentIntent(), REQUEST_CODE);
        } catch (Exception e) {
            this.pending = null;
            result.error("start_failed", e.getMessage(), null);
        }
    }

    private final Intent commentIntent() {
        Intent intent = new Intent(ACTION).setPackage(APP_MARKET);
        Intrinsics.checkNotNullExpressionValue(intent, "setPackage(...)");
        return intent;
    }
}
