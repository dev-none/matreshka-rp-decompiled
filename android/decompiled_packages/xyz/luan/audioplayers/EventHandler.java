package xyz.luan.audioplayers;

import android.os.Handler;
import android.os.Looper;
import androidx.core.app.NotificationCompat;
import com.google.firebase.analytics.FirebaseAnalytics;
import com.tekartik.sqflite.Constant;
import com.unity3d.ads.core.domain.HandleInvocationsFromAdViewer;
import io.flutter.plugin.common.EventChannel;
import java.util.HashMap;
import java.util.Map;
import kotlin.Metadata;
import kotlin.Pair;
import kotlin.Unit;
import kotlin.collections.MapsKt;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: AudioplayersPlugin.kt */
/* JADX INFO: loaded from: classes8.dex */
@Metadata(d1 = {"\u0000H\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0010\u000b\n\u0000\n\u0002\u0018\u0002\n\u0002\u0010\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0007\n\u0002\u0010\u0000\n\u0002\b\u0004\n\u0002\u0010\u000e\n\u0002\u0010$\n\u0002\b\u0006\u0018\u00002\u00020\u0001B9\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\f\u0010\u0006\u001a\b\u0012\u0004\u0012\u00020\b0\u0007\u0012\u0012\u0010\t\u001a\u000e\u0012\u0004\u0012\u00020\u0000\u0012\u0004\u0012\u00020\u000b0\n¢\u0006\u0004\b\f\u0010\rJ\u0006\u0010\u0012\u001a\u00020\u000bJ\u0016\u0010\u0013\u001a\u00020\u000b2\f\u0010\u0014\u001a\b\u0012\u0004\u0012\u00020\u000b0\u0007H\u0002J\u001c\u0010\u0015\u001a\u00020\u000b2\b\u0010\u0016\u001a\u0004\u0018\u00010\u00172\b\u0010\u0018\u001a\u0004\u0018\u00010\u000fH\u0016J\u0012\u0010\u0019\u001a\u00020\u000b2\b\u0010\u0016\u001a\u0004\u0018\u00010\u0017H\u0016J$\u0010\u001a\u001a\u00020\u000b2\u0006\u0010\u001b\u001a\u00020\u001c2\u0014\b\u0002\u0010\u0016\u001a\u000e\u0012\u0004\u0012\u00020\u001c\u0012\u0004\u0012\u00020\u00170\u001dJ$\u0010\u001e\u001a\u00020\u000b2\b\u0010\u001f\u001a\u0004\u0018\u00010\u001c2\b\u0010 \u001a\u0004\u0018\u00010\u001c2\b\u0010!\u001a\u0004\u0018\u00010\u0017J\u0006\u0010\"\u001a\u00020\u000bR\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082\u0004¢\u0006\u0002\n\u0000R\u0014\u0010\u0006\u001a\b\u0012\u0004\u0012\u00020\b0\u0007X\u0082\u0004¢\u0006\u0002\n\u0000R\u001a\u0010\t\u001a\u000e\u0012\u0004\u0012\u00020\u0000\u0012\u0004\u0012\u00020\u000b0\nX\u0082\u0004¢\u0006\u0002\n\u0000R\u0010\u0010\u000e\u001a\u0004\u0018\u00010\u000fX\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u0010\u001a\u00020\bX\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u0011\u001a\u00020\bX\u0082\u000e¢\u0006\u0002\n\u0000¨\u0006#"}, d2 = {"Lxyz/luan/audioplayers/EventHandler;", "Lio/flutter/plugin/common/EventChannel$StreamHandler;", "eventChannel", "Lio/flutter/plugin/common/EventChannel;", "mainHandler", "Landroid/os/Handler;", "isAttached", "Lkotlin/Function0;", "", "onDispose", "Lkotlin/Function1;", "", "<init>", "(Lio/flutter/plugin/common/EventChannel;Landroid/os/Handler;Lkotlin/jvm/functions/Function0;Lkotlin/jvm/functions/Function1;)V", "eventSink", "Lio/flutter/plugin/common/EventChannel$EventSink;", "disposed", "registered", "register", "onMainThread", HandleInvocationsFromAdViewer.KEY_ACTION, "onListen", Constant.PARAM_SQL_ARGUMENTS, "", "events", "onCancel", FirebaseAnalytics.Param.SUCCESS, "method", "", "", "error", "errorCode", "errorMessage", "errorDetails", "dispose", "audioplayers_android_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
public final class EventHandler implements EventChannel.StreamHandler {
    private boolean disposed;
    private final EventChannel eventChannel;
    private EventChannel.EventSink eventSink;
    private final Function0<Boolean> isAttached;
    private final Handler mainHandler;
    private final Function1<EventHandler, Unit> onDispose;
    private boolean registered;

    /* JADX WARN: Multi-variable type inference failed */
    public EventHandler(EventChannel eventChannel, Handler mainHandler, Function0<Boolean> isAttached, Function1<? super EventHandler, Unit> onDispose) {
        Intrinsics.checkNotNullParameter(eventChannel, "eventChannel");
        Intrinsics.checkNotNullParameter(mainHandler, "mainHandler");
        Intrinsics.checkNotNullParameter(isAttached, "isAttached");
        Intrinsics.checkNotNullParameter(onDispose, "onDispose");
        this.eventChannel = eventChannel;
        this.mainHandler = mainHandler;
        this.isAttached = isAttached;
        this.onDispose = onDispose;
    }

    public final void register() {
        onMainThread(new Function0() { // from class: xyz.luan.audioplayers.EventHandler$$ExternalSyntheticLambda0
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                return EventHandler.register$lambda$0(this.f$0);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit register$lambda$0(EventHandler eventHandler) {
        if (eventHandler.isAttached.invoke().booleanValue() && !eventHandler.disposed) {
            eventHandler.eventChannel.setStreamHandler(eventHandler);
            eventHandler.registered = true;
        }
        return Unit.INSTANCE;
    }

    private final void onMainThread(final Function0<Unit> action) {
        if (Intrinsics.areEqual(Looper.myLooper(), this.mainHandler.getLooper())) {
            action.invoke();
        } else {
            this.mainHandler.post(new Runnable() { // from class: xyz.luan.audioplayers.EventHandler$$ExternalSyntheticLambda4
                @Override // java.lang.Runnable
                public final void run() {
                    action.invoke();
                }
            });
        }
    }

    @Override // io.flutter.plugin.common.EventChannel.StreamHandler
    public void onListen(Object arguments, EventChannel.EventSink events) {
        if (!this.isAttached.invoke().booleanValue() || this.disposed) {
            return;
        }
        this.eventSink = events;
    }

    @Override // io.flutter.plugin.common.EventChannel.StreamHandler
    public void onCancel(Object arguments) {
        this.eventSink = null;
    }

    /* JADX WARN: Multi-variable type inference failed */
    public static /* synthetic */ void success$default(EventHandler eventHandler, String str, Map map, int i, Object obj) {
        if ((i & 2) != 0) {
            map = new HashMap();
        }
        eventHandler.success(str, map);
    }

    public final void success(final String method, final Map<String, ? extends Object> arguments) {
        Intrinsics.checkNotNullParameter(method, "method");
        Intrinsics.checkNotNullParameter(arguments, "arguments");
        onMainThread(new Function0() { // from class: xyz.luan.audioplayers.EventHandler$$ExternalSyntheticLambda3
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                return EventHandler.success$lambda$0(this.f$0, arguments, method);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit success$lambda$0(EventHandler eventHandler, Map map, String str) {
        EventChannel.EventSink eventSink;
        if (eventHandler.isAttached.invoke().booleanValue() && !eventHandler.disposed && (eventSink = eventHandler.eventSink) != null) {
            eventSink.success(MapsKt.plus(map, new Pair(NotificationCompat.CATEGORY_EVENT, str)));
        }
        return Unit.INSTANCE;
    }

    public final void error(final String errorCode, final String errorMessage, final Object errorDetails) {
        onMainThread(new Function0() { // from class: xyz.luan.audioplayers.EventHandler$$ExternalSyntheticLambda1
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                return EventHandler.error$lambda$0(this.f$0, errorCode, errorMessage, errorDetails);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit error$lambda$0(EventHandler eventHandler, String str, String str2, Object obj) {
        EventChannel.EventSink eventSink;
        if (eventHandler.isAttached.invoke().booleanValue() && !eventHandler.disposed && (eventSink = eventHandler.eventSink) != null) {
            eventSink.error(str, str2, obj);
        }
        return Unit.INSTANCE;
    }

    public final void dispose() {
        onMainThread(new Function0() { // from class: xyz.luan.audioplayers.EventHandler$$ExternalSyntheticLambda2
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                return EventHandler.dispose$lambda$0(this.f$0);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit dispose$lambda$0(EventHandler eventHandler) {
        EventChannel.EventSink eventSink;
        if (!eventHandler.disposed) {
            eventHandler.disposed = true;
            if (eventHandler.isAttached.invoke().booleanValue() && (eventSink = eventHandler.eventSink) != null) {
                eventSink.endOfStream();
            }
            eventHandler.eventSink = null;
            if (eventHandler.registered) {
                eventHandler.eventChannel.setStreamHandler(null);
                eventHandler.registered = false;
            }
            eventHandler.onDispose.invoke(eventHandler);
        }
        return Unit.INSTANCE;
    }
}
