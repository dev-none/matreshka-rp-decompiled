package xyz.luan.audioplayers;

import android.os.Handler;
import com.google.firebase.analytics.FirebaseAnalytics;
import io.flutter.plugin.common.MethodChannel;
import io.sentry.protocol.Response;
import kotlin.Metadata;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: AudioplayersPlugin.kt */
/* JADX INFO: loaded from: classes8.dex */
@Metadata(d1 = {"\u00004\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0010\u000b\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0000\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0002\b\u0004\b\u0002\u0018\u00002\u00020\u0001B%\u0012\u0006\u0010\u0002\u001a\u00020\u0001\u0012\u0006\u0010\u0003\u001a\u00020\u0004\u0012\f\u0010\u0005\u001a\b\u0012\u0004\u0012\u00020\u00070\u0006¢\u0006\u0004\b\b\u0010\tJ\u0012\u0010\n\u001a\u00020\u000b2\b\u0010\f\u001a\u0004\u0018\u00010\rH\u0016J$\u0010\u000e\u001a\u00020\u000b2\u0006\u0010\u000f\u001a\u00020\u00102\b\u0010\u0011\u001a\u0004\u0018\u00010\u00102\b\u0010\u0012\u001a\u0004\u0018\u00010\rH\u0016J\b\u0010\u0013\u001a\u00020\u000bH\u0016R\u000e\u0010\u0002\u001a\u00020\u0001X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0003\u001a\u00020\u0004X\u0082\u0004¢\u0006\u0002\n\u0000R\u0014\u0010\u0005\u001a\b\u0012\u0004\u0012\u00020\u00070\u0006X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u0014"}, d2 = {"Lxyz/luan/audioplayers/MainThreadResult;", "Lio/flutter/plugin/common/MethodChannel$Result;", Response.TYPE, "handler", "Landroid/os/Handler;", "isAttached", "Lkotlin/Function0;", "", "<init>", "(Lio/flutter/plugin/common/MethodChannel$Result;Landroid/os/Handler;Lkotlin/jvm/functions/Function0;)V", FirebaseAnalytics.Param.SUCCESS, "", "result", "", "error", "errorCode", "", "errorMessage", "errorDetails", "notImplemented", "audioplayers_android_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
final class MainThreadResult implements MethodChannel.Result {
    private final Handler handler;
    private final Function0<Boolean> isAttached;
    private final MethodChannel.Result response;

    public MainThreadResult(MethodChannel.Result response, Handler handler, Function0<Boolean> isAttached) {
        Intrinsics.checkNotNullParameter(response, "response");
        Intrinsics.checkNotNullParameter(handler, "handler");
        Intrinsics.checkNotNullParameter(isAttached, "isAttached");
        this.response = response;
        this.handler = handler;
        this.isAttached = isAttached;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void success$lambda$0(MainThreadResult mainThreadResult, Object obj) {
        if (mainThreadResult.isAttached.invoke().booleanValue()) {
            mainThreadResult.response.success(obj);
        }
    }

    @Override // io.flutter.plugin.common.MethodChannel.Result
    public void success(final Object result) {
        this.handler.post(new Runnable() { // from class: xyz.luan.audioplayers.MainThreadResult$$ExternalSyntheticLambda2
            @Override // java.lang.Runnable
            public final void run() {
                MainThreadResult.success$lambda$0(this.f$0, result);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void error$lambda$0(MainThreadResult mainThreadResult, String str, String str2, Object obj) {
        if (mainThreadResult.isAttached.invoke().booleanValue()) {
            mainThreadResult.response.error(str, str2, obj);
        }
    }

    @Override // io.flutter.plugin.common.MethodChannel.Result
    public void error(final String errorCode, final String errorMessage, final Object errorDetails) {
        Intrinsics.checkNotNullParameter(errorCode, "errorCode");
        this.handler.post(new Runnable() { // from class: xyz.luan.audioplayers.MainThreadResult$$ExternalSyntheticLambda0
            @Override // java.lang.Runnable
            public final void run() {
                MainThreadResult.error$lambda$0(this.f$0, errorCode, errorMessage, errorDetails);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void notImplemented$lambda$0(MainThreadResult mainThreadResult) {
        if (mainThreadResult.isAttached.invoke().booleanValue()) {
            mainThreadResult.response.notImplemented();
        }
    }

    @Override // io.flutter.plugin.common.MethodChannel.Result
    public void notImplemented() {
        this.handler.post(new Runnable() { // from class: xyz.luan.audioplayers.MainThreadResult$$ExternalSyntheticLambda1
            @Override // java.lang.Runnable
            public final void run() {
                MainThreadResult.notImplemented$lambda$0(this.f$0);
            }
        });
    }
}
