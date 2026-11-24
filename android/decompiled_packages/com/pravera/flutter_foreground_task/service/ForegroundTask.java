package com.pravera.flutter_foreground_task.service;

import android.content.Context;
import android.util.Log;
import androidx.core.app.NotificationCompat;
import androidx.media3.extractor.text.ttml.TtmlNode;
import com.pravera.flutter_foreground_task.FlutterForegroundTaskLifecycleListener;
import com.pravera.flutter_foreground_task.FlutterForegroundTaskStarter;
import com.pravera.flutter_foreground_task.PreferencesKey;
import com.pravera.flutter_foreground_task.models.ForegroundServiceAction;
import com.pravera.flutter_foreground_task.models.ForegroundServiceStatus;
import com.pravera.flutter_foreground_task.models.ForegroundTaskData;
import com.pravera.flutter_foreground_task.models.ForegroundTaskEventAction;
import com.pravera.flutter_foreground_task.models.ForegroundTaskEventType;
import com.tekartik.sqflite.Constant;
import io.flutter.FlutterInjector;
import io.flutter.embedding.engine.FlutterEngine;
import io.flutter.embedding.engine.dart.DartExecutor;
import io.flutter.embedding.engine.loader.FlutterLoader;
import io.flutter.plugin.common.BinaryMessenger;
import io.flutter.plugin.common.MethodCall;
import io.flutter.plugin.common.MethodChannel;
import io.flutter.view.FlutterCallbackInformation;
import java.util.concurrent.CancellationException;
import kotlin.Metadata;
import kotlin.ResultKt;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.intrinsics.IntrinsicsKt;
import kotlin.coroutines.jvm.internal.Boxing;
import kotlin.coroutines.jvm.internal.DebugMetadata;
import kotlin.coroutines.jvm.internal.SuspendLambda;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.coroutines.BuildersKt__Builders_commonKt;
import kotlinx.coroutines.CoroutineScope;
import kotlinx.coroutines.CoroutineScopeKt;
import kotlinx.coroutines.Dispatchers;
import kotlinx.coroutines.Job;

/* JADX INFO: compiled from: ForegroundTask.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000r\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0006\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\u0000\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0004\u0018\u0000 .2\u00020\u0001:\u0001.B/\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0007\u0012\u0006\u0010\b\u001a\u00020\t\u0012\u0006\u0010\n\u001a\u00020\u000b¢\u0006\u0004\b\f\u0010\rJ\u0018\u0010\u0018\u001a\u00020\u00192\u0006\u0010\u001a\u001a\u00020\u001b2\u0006\u0010\u001c\u001a\u00020\u001dH\u0016J\b\u0010\u001e\u001a\u00020\u0019H\u0002J\b\u0010\u001f\u001a\u00020\u0019H\u0002J\b\u0010 \u001a\u00020\u0019H\u0002J\b\u0010!\u001a\u00020\u0019H\u0002J\u0018\u0010\"\u001a\u00020\u00192\u0006\u0010#\u001a\u00020$2\b\u0010%\u001a\u0004\u0018\u00010&J\u000e\u0010'\u001a\u00020\u00192\u0006\u0010\b\u001a\u00020\tJ\u000e\u0010(\u001a\u00020\u00192\u0006\u0010)\u001a\u00020\u0017J\u0016\u0010*\u001a\u00020\u00192\f\u0010\u001a\u001a\b\u0012\u0004\u0012\u00020\u00190+H\u0002J\u0016\u0010,\u001a\u00020\u00192\f\u0010\u001a\u001a\b\u0012\u0004\u0012\u00020\u00190+H\u0002J.\u0010\"\u001a\u00020\u0019*\u00020\u00132\u0006\u0010#\u001a\u00020$2\b\u0010%\u001a\u0004\u0018\u00010&2\u000e\b\u0002\u0010-\u001a\b\u0012\u0004\u0012\u00020\u00190+H\u0002R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0007X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\b\u001a\u00020\tX\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\n\u001a\u00020\u000bX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u000e\u001a\u00020\u000fX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0010\u001a\u00020\u0011X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0012\u001a\u00020\u0013X\u0082\u0004¢\u0006\u0002\n\u0000R\u0010\u0010\u0014\u001a\u0004\u0018\u00010\u0015X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u0016\u001a\u00020\u0017X\u0082\u000e¢\u0006\u0002\n\u0000¨\u0006/"}, d2 = {"Lcom/pravera/flutter_foreground_task/service/ForegroundTask;", "Lio/flutter/plugin/common/MethodChannel$MethodCallHandler;", "context", "Landroid/content/Context;", "serviceStatus", "Lcom/pravera/flutter_foreground_task/models/ForegroundServiceStatus;", "taskData", "Lcom/pravera/flutter_foreground_task/models/ForegroundTaskData;", PreferencesKey.TASK_EVENT_ACTION, "Lcom/pravera/flutter_foreground_task/models/ForegroundTaskEventAction;", "taskLifecycleListener", "Lcom/pravera/flutter_foreground_task/FlutterForegroundTaskLifecycleListener;", "<init>", "(Landroid/content/Context;Lcom/pravera/flutter_foreground_task/models/ForegroundServiceStatus;Lcom/pravera/flutter_foreground_task/models/ForegroundTaskData;Lcom/pravera/flutter_foreground_task/models/ForegroundTaskEventAction;Lcom/pravera/flutter_foreground_task/FlutterForegroundTaskLifecycleListener;)V", "flutterEngine", "Lio/flutter/embedding/engine/FlutterEngine;", "flutterLoader", "Lio/flutter/embedding/engine/loader/FlutterLoader;", "backgroundChannel", "Lio/flutter/plugin/common/MethodChannel;", "repeatTask", "Lkotlinx/coroutines/Job;", "isDestroyed", "", "onMethodCall", "", NotificationCompat.CATEGORY_CALL, "Lio/flutter/plugin/common/MethodCall;", "result", "Lio/flutter/plugin/common/MethodChannel$Result;", TtmlNode.START, "invokeTaskRepeatEvent", "startRepeatTask", "stopRepeatTask", "invokeMethod", "method", "", "data", "", Constant.METHOD_UPDATE, "destroy", "isTimeout", "runIfCallbackHandleExists", "Lkotlin/Function0;", "runIfNotDestroyed", "onComplete", "Companion", "flutter_foreground_task_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
public final class ForegroundTask implements MethodChannel.MethodCallHandler {
    private static final String ACTION_TASK_DESTROY = "onDestroy";
    private static final String ACTION_TASK_REPEAT_EVENT = "onRepeatEvent";
    private static final String ACTION_TASK_START = "onStart";
    private static final String TAG = "ForegroundTask";
    private final MethodChannel backgroundChannel;
    private final FlutterEngine flutterEngine;
    private final FlutterLoader flutterLoader;
    private boolean isDestroyed;
    private Job repeatTask;
    private final ForegroundServiceStatus serviceStatus;
    private final ForegroundTaskData taskData;
    private ForegroundTaskEventAction taskEventAction;
    private final FlutterForegroundTaskLifecycleListener taskLifecycleListener;

    public ForegroundTask(Context context, ForegroundServiceStatus serviceStatus, ForegroundTaskData taskData, ForegroundTaskEventAction taskEventAction, FlutterForegroundTaskLifecycleListener taskLifecycleListener) {
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(serviceStatus, "serviceStatus");
        Intrinsics.checkNotNullParameter(taskData, "taskData");
        Intrinsics.checkNotNullParameter(taskEventAction, "taskEventAction");
        Intrinsics.checkNotNullParameter(taskLifecycleListener, "taskLifecycleListener");
        this.serviceStatus = serviceStatus;
        this.taskData = taskData;
        this.taskEventAction = taskEventAction;
        this.taskLifecycleListener = taskLifecycleListener;
        FlutterEngine flutterEngine = new FlutterEngine(context);
        this.flutterEngine = flutterEngine;
        FlutterLoader flutterLoader = FlutterInjector.instance().flutterLoader();
        Intrinsics.checkNotNullExpressionValue(flutterLoader, "flutterLoader(...)");
        this.flutterLoader = flutterLoader;
        if (!flutterLoader.initialized()) {
            flutterLoader.startInitialization(context);
        }
        flutterLoader.ensureInitializationComplete(context, null);
        taskLifecycleListener.onEngineCreate(flutterEngine);
        BinaryMessenger binaryMessenger = flutterEngine.getDartExecutor().getBinaryMessenger();
        Intrinsics.checkNotNullExpressionValue(binaryMessenger, "getBinaryMessenger(...)");
        MethodChannel methodChannel = new MethodChannel(binaryMessenger, "flutter_foreground_task/background");
        this.backgroundChannel = methodChannel;
        methodChannel.setMethodCallHandler(this);
        Long callbackHandle = taskData.getCallbackHandle();
        if (callbackHandle != null) {
            String strFindAppBundlePath = flutterLoader.findAppBundlePath();
            Intrinsics.checkNotNullExpressionValue(strFindAppBundlePath, "findAppBundlePath(...)");
            flutterEngine.getDartExecutor().executeDartCallback(new DartExecutor.DartCallback(context.getAssets(), strFindAppBundlePath, FlutterCallbackInformation.lookupCallbackInformation(callbackHandle.longValue())));
        }
    }

    @Override // io.flutter.plugin.common.MethodChannel.MethodCallHandler
    public void onMethodCall(MethodCall call, MethodChannel.Result result) {
        Intrinsics.checkNotNullParameter(call, "call");
        Intrinsics.checkNotNullParameter(result, "result");
        if (Intrinsics.areEqual(call.method, TtmlNode.START)) {
            start();
        } else {
            result.notImplemented();
        }
    }

    private final void start() {
        runIfNotDestroyed(new Function0() { // from class: com.pravera.flutter_foreground_task.service.ForegroundTask$$ExternalSyntheticLambda6
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                return ForegroundTask.start$lambda$0(this.f$0);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit start$lambda$0(final ForegroundTask foregroundTask) {
        foregroundTask.runIfCallbackHandleExists(new Function0() { // from class: com.pravera.flutter_foreground_task.service.ForegroundTask$$ExternalSyntheticLambda9
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                return ForegroundTask.start$lambda$0$0(this.f$0);
            }
        });
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit start$lambda$0$0(final ForegroundTask foregroundTask) {
        FlutterForegroundTaskStarter flutterForegroundTaskStarter;
        String action = foregroundTask.serviceStatus.getAction();
        int iHashCode = action.hashCode();
        if (iHashCode == -212670797 ? action.equals(ForegroundServiceAction.API_START) : iHashCode == 481521696 ? action.equals(ForegroundServiceAction.API_RESTART) : iHashCode == 2050777240 && action.equals(ForegroundServiceAction.API_UPDATE)) {
            flutterForegroundTaskStarter = FlutterForegroundTaskStarter.DEVELOPER;
        } else {
            flutterForegroundTaskStarter = FlutterForegroundTaskStarter.SYSTEM;
        }
        foregroundTask.invokeMethod(foregroundTask.backgroundChannel, ACTION_TASK_START, Integer.valueOf(flutterForegroundTaskStarter.ordinal()), new Function0() { // from class: com.pravera.flutter_foreground_task.service.ForegroundTask$$ExternalSyntheticLambda3
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                return ForegroundTask.start$lambda$0$0$0(this.f$0);
            }
        });
        foregroundTask.taskLifecycleListener.onTaskStart(flutterForegroundTaskStarter);
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit start$lambda$0$0$0(final ForegroundTask foregroundTask) {
        foregroundTask.runIfNotDestroyed(new Function0() { // from class: com.pravera.flutter_foreground_task.service.ForegroundTask$$ExternalSyntheticLambda4
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                return ForegroundTask.start$lambda$0$0$0$0(this.f$0);
            }
        });
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit start$lambda$0$0$0$0(ForegroundTask foregroundTask) {
        foregroundTask.startRepeatTask();
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void invokeTaskRepeatEvent() {
        this.backgroundChannel.invokeMethod(ACTION_TASK_REPEAT_EVENT, null);
        this.taskLifecycleListener.onTaskRepeatEvent();
    }

    private final void startRepeatTask() {
        stopRepeatTask();
        ForegroundTaskEventType type = this.taskEventAction.getType();
        long interval = this.taskEventAction.getInterval();
        if (type == ForegroundTaskEventType.NOTHING) {
            return;
        }
        if (type != ForegroundTaskEventType.ONCE) {
            this.repeatTask = BuildersKt__Builders_commonKt.launch$default(CoroutineScopeKt.CoroutineScope(Dispatchers.getDefault()), null, null, new AnonymousClass1(interval, this, null), 3, null);
        } else {
            invokeTaskRepeatEvent();
        }
    }

    /* JADX INFO: renamed from: com.pravera.flutter_foreground_task.service.ForegroundTask$startRepeatTask$1, reason: invalid class name */
    /* JADX INFO: compiled from: ForegroundTask.kt */
    @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 2, 0}, xi = 48)
    @DebugMetadata(c = "com.pravera.flutter_foreground_task.service.ForegroundTask$startRepeatTask$1", f = "ForegroundTask.kt", i = {}, l = {123, 124}, m = "invokeSuspend", n = {}, s = {}, v = 1)
    static final class AnonymousClass1 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Unit>, Object> {
        final /* synthetic */ long $interval;
        int label;
        final /* synthetic */ ForegroundTask this$0;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        AnonymousClass1(long j, ForegroundTask foregroundTask, Continuation<? super AnonymousClass1> continuation) {
            super(2, continuation);
            this.$interval = j;
            this.this$0 = foregroundTask;
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
            return new AnonymousClass1(this.$interval, this.this$0, continuation);
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(CoroutineScope coroutineScope, Continuation<? super Unit> continuation) {
            return ((AnonymousClass1) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
        }

        /* JADX WARN: Code duplicated, block: B:11:0x001e  */
        /* JADX WARN: Code duplicated, block: B:14:0x002c  */
        /* JADX WARN: Unsupported multi-entry loop pattern (BACK_EDGE: B:15:0x0045 -> B:11:0x001e). Please report as a decompilation issue!!! */
        /*  JADX ERROR: JadxOverflowException in pass: RegionMakerVisitor
            jadx.core.utils.exceptions.JadxOverflowException: Regions stack size limit reached
            	at jadx.core.utils.ErrorsCounter.addError(ErrorsCounter.java:59)
            	at jadx.core.utils.ErrorsCounter.error(ErrorsCounter.java:31)
            	at jadx.core.dex.attributes.nodes.NotificationAttrNode.addError(NotificationAttrNode.java:19)
            */
        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final java.lang.Object invokeSuspend(java.lang.Object r7) {
            /*
                r6 = this;
                java.lang.Object r0 = kotlin.coroutines.intrinsics.IntrinsicsKt.getCOROUTINE_SUSPENDED()
                int r1 = r6.label
                r2 = 2
                r3 = 1
                if (r1 == 0) goto L1b
                if (r1 == r3) goto L17
                if (r1 != r2) goto Lf
                goto L1b
            Lf:
                java.lang.IllegalStateException r7 = new java.lang.IllegalStateException
                java.lang.String r0 = "call to 'resume' before 'invoke' with coroutine"
                r7.<init>(r0)
                throw r7
            L17:
                kotlin.ResultKt.throwOnFailure(r7)
                goto L2c
            L1b:
                kotlin.ResultKt.throwOnFailure(r7)
            L1e:
                long r4 = r6.$interval
                r7 = r6
                kotlin.coroutines.Continuation r7 = (kotlin.coroutines.Continuation) r7
                r6.label = r3
                java.lang.Object r7 = kotlinx.coroutines.DelayKt.delay(r4, r7)
                if (r7 != r0) goto L2c
                goto L47
            L2c:
                kotlinx.coroutines.MainCoroutineDispatcher r7 = kotlinx.coroutines.Dispatchers.getMain()
                kotlin.coroutines.CoroutineContext r7 = (kotlin.coroutines.CoroutineContext) r7
                com.pravera.flutter_foreground_task.service.ForegroundTask$startRepeatTask$1$1 r1 = new com.pravera.flutter_foreground_task.service.ForegroundTask$startRepeatTask$1$1
                com.pravera.flutter_foreground_task.service.ForegroundTask r4 = r6.this$0
                r5 = 0
                r1.<init>(r4, r5)
                kotlin.jvm.functions.Function2 r1 = (kotlin.jvm.functions.Function2) r1
                r4 = r6
                kotlin.coroutines.Continuation r4 = (kotlin.coroutines.Continuation) r4
                r6.label = r2
                java.lang.Object r7 = kotlinx.coroutines.BuildersKt.withContext(r7, r1, r4)
                if (r7 != r0) goto L1e
            L47:
                return r0
            */
            throw new UnsupportedOperationException("Method not decompiled: com.pravera.flutter_foreground_task.service.ForegroundTask.AnonymousClass1.invokeSuspend(java.lang.Object):java.lang.Object");
        }

        /* JADX INFO: renamed from: com.pravera.flutter_foreground_task.service.ForegroundTask$startRepeatTask$1$1, reason: invalid class name and collision with other inner class name */
        /* JADX INFO: compiled from: ForegroundTask.kt */
        @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0000\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 2, 0}, xi = 48)
        @DebugMetadata(c = "com.pravera.flutter_foreground_task.service.ForegroundTask$startRepeatTask$1$1", f = "ForegroundTask.kt", i = {}, l = {}, m = "invokeSuspend", n = {}, s = {}, v = 1)
        static final class C11801 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Object>, Object> {
            int label;
            final /* synthetic */ ForegroundTask this$0;

            /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
            C11801(ForegroundTask foregroundTask, Continuation<? super C11801> continuation) {
                super(2, continuation);
                this.this$0 = foregroundTask;
            }

            @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
            public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
                return new C11801(this.this$0, continuation);
            }

            @Override // kotlin.jvm.functions.Function2
            public /* bridge */ /* synthetic */ Object invoke(CoroutineScope coroutineScope, Continuation<? super Object> continuation) {
                return invoke2(coroutineScope, (Continuation<Object>) continuation);
            }

            /* JADX INFO: renamed from: invoke, reason: avoid collision after fix types in other method */
            public final Object invoke2(CoroutineScope coroutineScope, Continuation<Object> continuation) {
                return ((C11801) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
            }

            @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
            public final Object invokeSuspend(Object obj) {
                IntrinsicsKt.getCOROUTINE_SUSPENDED();
                if (this.label == 0) {
                    ResultKt.throwOnFailure(obj);
                    try {
                        this.this$0.invokeTaskRepeatEvent();
                        return Unit.INSTANCE;
                    } catch (Exception e) {
                        return Boxing.boxInt(Log.e(ForegroundTask.TAG, "repeatTask", e));
                    }
                }
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
        }
    }

    private final void stopRepeatTask() {
        Job job = this.repeatTask;
        if (job != null) {
            Job.DefaultImpls.cancel$default(job, (CancellationException) null, 1, (Object) null);
        }
        this.repeatTask = null;
    }

    public final void invokeMethod(final String method, final Object data) {
        Intrinsics.checkNotNullParameter(method, "method");
        runIfNotDestroyed(new Function0() { // from class: com.pravera.flutter_foreground_task.service.ForegroundTask$$ExternalSyntheticLambda5
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                return ForegroundTask.invokeMethod$lambda$0(this.f$0, method, data);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit invokeMethod$lambda$0(ForegroundTask foregroundTask, String str, Object obj) {
        foregroundTask.backgroundChannel.invokeMethod(str, obj);
        return Unit.INSTANCE;
    }

    public final void update(final ForegroundTaskEventAction taskEventAction) {
        Intrinsics.checkNotNullParameter(taskEventAction, "taskEventAction");
        runIfNotDestroyed(new Function0() { // from class: com.pravera.flutter_foreground_task.service.ForegroundTask$$ExternalSyntheticLambda2
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                return ForegroundTask.update$lambda$0(this.f$0, taskEventAction);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit update$lambda$0(final ForegroundTask foregroundTask, final ForegroundTaskEventAction foregroundTaskEventAction) {
        foregroundTask.runIfCallbackHandleExists(new Function0() { // from class: com.pravera.flutter_foreground_task.service.ForegroundTask$$ExternalSyntheticLambda7
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                return ForegroundTask.update$lambda$0$0(this.f$0, foregroundTaskEventAction);
            }
        });
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit update$lambda$0$0(ForegroundTask foregroundTask, ForegroundTaskEventAction foregroundTaskEventAction) {
        foregroundTask.taskEventAction = foregroundTaskEventAction;
        foregroundTask.startRepeatTask();
        return Unit.INSTANCE;
    }

    public final void destroy(final boolean isTimeout) {
        runIfNotDestroyed(new Function0() { // from class: com.pravera.flutter_foreground_task.service.ForegroundTask$$ExternalSyntheticLambda1
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                return ForegroundTask.destroy$lambda$0(this.f$0, isTimeout);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit destroy$lambda$0(final ForegroundTask foregroundTask, boolean z) {
        foregroundTask.stopRepeatTask();
        foregroundTask.backgroundChannel.setMethodCallHandler(null);
        if (foregroundTask.taskData.getCallbackHandle() == null) {
            foregroundTask.taskLifecycleListener.onEngineWillDestroy();
            foregroundTask.flutterEngine.destroy();
        } else {
            foregroundTask.invokeMethod(foregroundTask.backgroundChannel, ACTION_TASK_DESTROY, Boolean.valueOf(z), new Function0() { // from class: com.pravera.flutter_foreground_task.service.ForegroundTask$$ExternalSyntheticLambda8
                @Override // kotlin.jvm.functions.Function0
                public final Object invoke() {
                    return ForegroundTask.destroy$lambda$0$0(this.f$0);
                }
            });
            foregroundTask.taskLifecycleListener.onTaskDestroy();
            foregroundTask.taskLifecycleListener.onEngineWillDestroy();
        }
        foregroundTask.isDestroyed = true;
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit destroy$lambda$0$0(ForegroundTask foregroundTask) {
        foregroundTask.flutterEngine.destroy();
        return Unit.INSTANCE;
    }

    private final void runIfCallbackHandleExists(Function0<Unit> call) {
        if (this.taskData.getCallbackHandle() == null) {
            return;
        }
        call.invoke();
    }

    private final void runIfNotDestroyed(Function0<Unit> call) {
        if (this.isDestroyed) {
            return;
        }
        call.invoke();
    }

    /* JADX WARN: Multi-variable type inference failed */
    static /* synthetic */ void invokeMethod$default(ForegroundTask foregroundTask, MethodChannel methodChannel, String str, Object obj, Function0 function0, int i, Object obj2) {
        if ((i & 4) != 0) {
            function0 = new Function0() { // from class: com.pravera.flutter_foreground_task.service.ForegroundTask$$ExternalSyntheticLambda0
                @Override // kotlin.jvm.functions.Function0
                public final Object invoke() {
                    return Unit.INSTANCE;
                }
            };
        }
        foregroundTask.invokeMethod(methodChannel, str, obj, function0);
    }

    private final void invokeMethod(MethodChannel methodChannel, String str, Object obj, final Function0<Unit> function0) {
        methodChannel.invokeMethod(str, obj, new MethodChannel.Result() { // from class: com.pravera.flutter_foreground_task.service.ForegroundTask$invokeMethod$callback$1
            @Override // io.flutter.plugin.common.MethodChannel.Result
            public void success(Object result) {
                function0.invoke();
            }

            @Override // io.flutter.plugin.common.MethodChannel.Result
            public void error(String errorCode, String errorMessage, Object errorDetails) {
                Intrinsics.checkNotNullParameter(errorCode, "errorCode");
                function0.invoke();
            }

            @Override // io.flutter.plugin.common.MethodChannel.Result
            public void notImplemented() {
                function0.invoke();
            }
        });
    }
}
