package com.unity3d.ads.core.data.manager;

import com.google.firebase.analytics.FirebaseAnalytics;
import com.google.protobuf.ByteString;
import com.unity3d.ads.core.data.datasource.StaticDeviceInfoDataSource;
import com.unity3d.ads.core.data.model.AdObject;
import com.unity3d.ads.core.data.repository.SessionRepository;
import com.unity3d.ads.core.domain.SendDiagnosticEvent;
import com.unity3d.ads.core.domain.TriggerInitializeListener;
import com.unity3d.ads.core.log.Logger;
import com.unity3d.services.core.preferences.AndroidPreferences;
import io.sentry.SentryEvent;
import java.util.Map;
import java.util.concurrent.CancellationException;
import java.util.concurrent.atomic.AtomicBoolean;
import kotlin.Metadata;
import kotlin.ResultKt;
import kotlin.Unit;
import kotlin.collections.CollectionsKt;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.intrinsics.IntrinsicsKt;
import kotlin.coroutines.jvm.internal.Boxing;
import kotlin.coroutines.jvm.internal.ContinuationImpl;
import kotlin.coroutines.jvm.internal.DebugMetadata;
import kotlin.coroutines.jvm.internal.SuspendLambda;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.coroutines.BuildersKt;
import kotlinx.coroutines.BuildersKt__Builders_commonKt;
import kotlinx.coroutines.CoroutineDispatcher;
import kotlinx.coroutines.CoroutineScope;
import kotlinx.coroutines.DelayKt;
import kotlinx.coroutines.Dispatchers;
import kotlinx.coroutines.Job;
import ru.ok.tracer.base.ucum.UcumUtils;

/* JADX INFO: compiled from: AndroidOptimisticInitializationManager.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000T\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0004\n\u0002\u0010\u000e\n\u0002\b\u0002\b\u0000\u0018\u0000 \u001e2\u00020\u0001:\u0001\u001eB7\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0007\u0012\u0006\u0010\b\u001a\u00020\t\u0012\u0006\u0010\n\u001a\u00020\u000b\u0012\u0006\u0010\f\u001a\u00020\r¢\u0006\u0004\b\u000e\u0010\u000fJ\u000e\u0010\u0014\u001a\u00020\u0015H\u0096@¢\u0006\u0002\u0010\u0016J\u0010\u0010\u0017\u001a\u00020\u00182\u0006\u0010\u0019\u001a\u00020\u0015H\u0016J\b\u0010\u001a\u001a\u00020\u0018H\u0002J\u000e\u0010\u001b\u001a\u00020\u0018H\u0082@¢\u0006\u0002\u0010\u0016J\b\u0010\u001c\u001a\u00020\u001dH\u0002R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0007X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\b\u001a\u00020\tX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\n\u001a\u00020\u000bX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\f\u001a\u00020\rX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0010\u001a\u00020\u0011X\u0082\u0004¢\u0006\u0002\n\u0000R\u0010\u0010\u0012\u001a\u0004\u0018\u00010\u0013X\u0082\u000e¢\u0006\u0002\n\u0000¨\u0006\u001f"}, d2 = {"Lcom/unity3d/ads/core/data/manager/AndroidOptimisticInitializationManager;", "Lcom/unity3d/ads/core/data/manager/OptimisticInitializationManager;", "sessionRepository", "Lcom/unity3d/ads/core/data/repository/SessionRepository;", "triggerInitializeListener", "Lcom/unity3d/ads/core/domain/TriggerInitializeListener;", "sendDiagnosticEvent", "Lcom/unity3d/ads/core/domain/SendDiagnosticEvent;", "optimisticScope", "Lkotlinx/coroutines/CoroutineScope;", "staticDeviceInfoDataSource", "Lcom/unity3d/ads/core/data/datasource/StaticDeviceInfoDataSource;", SentryEvent.JsonKeys.LOGGER, "Lcom/unity3d/ads/core/log/Logger;", "<init>", "(Lcom/unity3d/ads/core/data/repository/SessionRepository;Lcom/unity3d/ads/core/domain/TriggerInitializeListener;Lcom/unity3d/ads/core/domain/SendDiagnosticEvent;Lkotlinx/coroutines/CoroutineScope;Lcom/unity3d/ads/core/data/datasource/StaticDeviceInfoDataSource;Lcom/unity3d/ads/core/log/Logger;)V", "terminal", "Ljava/util/concurrent/atomic/AtomicBoolean;", "timerJob", "Lkotlinx/coroutines/Job;", "tryOptimisticCompletion", "", "(Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "onInitializationFinished", "", FirebaseAnalytics.Param.SUCCESS, "sendOptimistic", "storeKey", "computeKey", "", "Companion", "unity-ads_defaultRelease"}, k = 1, mv = {2, 1, 0}, xi = 48)
public final class AndroidOptimisticInitializationManager implements OptimisticInitializationManager {
    private static final String DIAGNOSTIC_EVENT = "native_initialize_success_optimistically";
    private static final String KEY_LAST_SUCCESS = "last_init_success";
    private static final String PREFERENCES_FILE = "unityads-optimistic-init";
    private final Logger logger;
    private final CoroutineScope optimisticScope;
    private final SendDiagnosticEvent sendDiagnosticEvent;
    private final SessionRepository sessionRepository;
    private final StaticDeviceInfoDataSource staticDeviceInfoDataSource;
    private final AtomicBoolean terminal;
    private volatile Job timerJob;
    private final TriggerInitializeListener triggerInitializeListener;

    /* JADX INFO: renamed from: com.unity3d.ads.core.data.manager.AndroidOptimisticInitializationManager$storeKey$1, reason: invalid class name and case insensitive filesystem */
    /* JADX INFO: compiled from: AndroidOptimisticInitializationManager.kt */
    @Metadata(k = 3, mv = {2, 1, 0}, xi = 48)
    @DebugMetadata(c = "com.unity3d.ads.core.data.manager.AndroidOptimisticInitializationManager", f = "AndroidOptimisticInitializationManager.kt", i = {}, l = {107}, m = "storeKey", n = {}, s = {})
    static final class C18431 extends ContinuationImpl {
        int label;
        /* synthetic */ Object result;

        C18431(Continuation<? super C18431> continuation) {
            super(continuation);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            this.result = obj;
            this.label |= Integer.MIN_VALUE;
            return AndroidOptimisticInitializationManager.this.storeKey(this);
        }
    }

    /* JADX INFO: renamed from: com.unity3d.ads.core.data.manager.AndroidOptimisticInitializationManager$tryOptimisticCompletion$1, reason: invalid class name and case insensitive filesystem */
    /* JADX INFO: compiled from: AndroidOptimisticInitializationManager.kt */
    @Metadata(k = 3, mv = {2, 1, 0}, xi = 48)
    @DebugMetadata(c = "com.unity3d.ads.core.data.manager.AndroidOptimisticInitializationManager", f = "AndroidOptimisticInitializationManager.kt", i = {0, 0, 1}, l = {58, 70}, m = "tryOptimisticCompletion", n = {"currentKey", "delayMs", "delayMs"}, s = {"L$0", "I$0", "I$0"})
    static final class C18441 extends ContinuationImpl {
        int I$0;
        Object L$0;
        int label;
        /* synthetic */ Object result;

        C18441(Continuation<? super C18441> continuation) {
            super(continuation);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            this.result = obj;
            this.label |= Integer.MIN_VALUE;
            return AndroidOptimisticInitializationManager.this.tryOptimisticCompletion(this);
        }
    }

    public AndroidOptimisticInitializationManager(SessionRepository sessionRepository, TriggerInitializeListener triggerInitializeListener, SendDiagnosticEvent sendDiagnosticEvent, CoroutineScope optimisticScope, StaticDeviceInfoDataSource staticDeviceInfoDataSource, Logger logger) {
        Intrinsics.checkNotNullParameter(sessionRepository, "sessionRepository");
        Intrinsics.checkNotNullParameter(triggerInitializeListener, "triggerInitializeListener");
        Intrinsics.checkNotNullParameter(sendDiagnosticEvent, "sendDiagnosticEvent");
        Intrinsics.checkNotNullParameter(optimisticScope, "optimisticScope");
        Intrinsics.checkNotNullParameter(staticDeviceInfoDataSource, "staticDeviceInfoDataSource");
        Intrinsics.checkNotNullParameter(logger, "logger");
        this.sessionRepository = sessionRepository;
        this.triggerInitializeListener = triggerInitializeListener;
        this.sendDiagnosticEvent = sendDiagnosticEvent;
        this.optimisticScope = optimisticScope;
        this.staticDeviceInfoDataSource = staticDeviceInfoDataSource;
        this.logger = logger;
        this.terminal = new AtomicBoolean(false);
    }

    /* JADX WARN: Code duplicated, block: B:7:0x0014  */
    @Override // com.unity3d.ads.core.data.manager.OptimisticInitializationManager
    public Object tryOptimisticCompletion(Continuation<? super Boolean> continuation) {
        C18441 c18441;
        String strComputeKey;
        int i;
        Exception exc;
        int i2;
        if (continuation instanceof C18441) {
            c18441 = (C18441) continuation;
            if ((c18441.label & Integer.MIN_VALUE) != 0) {
                c18441.label -= Integer.MIN_VALUE;
            } else {
                c18441 = new C18441(continuation);
            }
        } else {
            c18441 = new C18441(continuation);
        }
        Object obj = c18441.result;
        Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
        int i3 = c18441.label;
        try {
            if (i3 != 0) {
                if (i3 == 1) {
                    i = c18441.I$0;
                    strComputeKey = (String) c18441.L$0;
                    ResultKt.throwOnFailure(obj);
                } else {
                    if (i3 != 2) {
                        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                    }
                    i2 = c18441.I$0;
                    try {
                        ResultKt.throwOnFailure(obj);
                    } catch (Exception e) {
                        exc = e;
                        Logger.DefaultImpls.trace$default(this.logger, "Optimistic init: failed to delete key: " + exc.getMessage(), null, 2, null);
                    }
                }
                this.timerJob = BuildersKt__Builders_commonKt.launch$default(this.optimisticScope, null, null, new AnonymousClass4(i2, this, null), 3, null);
                Logger.DefaultImpls.trace$default(this.logger, "Optimistic init: timer armed for " + i2 + UcumUtils.UCUM_MILLISECODS, null, 2, null);
                return Boxing.boxBoolean(true);
            }
            ResultKt.throwOnFailure(obj);
            Job job = this.timerJob;
            if (job != null) {
                Job.DefaultImpls.cancel$default(job, (CancellationException) null, 1, (Object) null);
            }
            this.timerJob = null;
            this.terminal.set(false);
            int optimisticInitDelayMs = this.sessionRepository.getNativeConfiguration().getOptimisticInitDelayMs();
            if (optimisticInitDelayMs <= 0) {
                return Boxing.boxBoolean(false);
            }
            strComputeKey = computeKey();
            CoroutineDispatcher io2 = Dispatchers.getIO();
            C18452 c18452 = new C18452(null);
            c18441.L$0 = strComputeKey;
            c18441.I$0 = optimisticInitDelayMs;
            c18441.label = 1;
            Object objWithContext = BuildersKt.withContext(io2, c18452, c18441);
            if (objWithContext != coroutine_suspended) {
                i = optimisticInitDelayMs;
                obj = objWithContext;
            }
            return coroutine_suspended;
            if (!Intrinsics.areEqual((String) obj, strComputeKey)) {
                return Boxing.boxBoolean(false);
            }
            try {
                CoroutineDispatcher io3 = Dispatchers.getIO();
                AnonymousClass3 anonymousClass3 = new AnonymousClass3(null);
                c18441.L$0 = null;
                c18441.I$0 = i;
                c18441.label = 2;
                if (BuildersKt.withContext(io3, anonymousClass3, c18441) != coroutine_suspended) {
                    i2 = i;
                    this.timerJob = BuildersKt__Builders_commonKt.launch$default(this.optimisticScope, null, null, new AnonymousClass4(i2, this, null), 3, null);
                    Logger.DefaultImpls.trace$default(this.logger, "Optimistic init: timer armed for " + i2 + UcumUtils.UCUM_MILLISECODS, null, 2, null);
                    return Boxing.boxBoolean(true);
                }
                return coroutine_suspended;
            } catch (Exception e2) {
                exc = e2;
                i2 = i;
                Logger.DefaultImpls.trace$default(this.logger, "Optimistic init: failed to delete key: " + exc.getMessage(), null, 2, null);
            }
        } catch (Exception e3) {
            Logger.DefaultImpls.trace$default(this.logger, "Optimistic init: failed to read key: " + e3.getMessage(), null, 2, null);
            return Boxing.boxBoolean(false);
        }
    }

    /* JADX INFO: renamed from: com.unity3d.ads.core.data.manager.AndroidOptimisticInitializationManager$tryOptimisticCompletion$2, reason: invalid class name and case insensitive filesystem */
    /* JADX INFO: compiled from: AndroidOptimisticInitializationManager.kt */
    @Metadata(d1 = {"\u0000\f\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\u0010\u0000\u001a\n \u0002*\u0004\u0018\u00010\u00010\u0001*\u00020\u0003H\n"}, d2 = {"<anonymous>", "", "kotlin.jvm.PlatformType", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
    @DebugMetadata(c = "com.unity3d.ads.core.data.manager.AndroidOptimisticInitializationManager$tryOptimisticCompletion$2", f = "AndroidOptimisticInitializationManager.kt", i = {}, l = {}, m = "invokeSuspend", n = {}, s = {})
    static final class C18452 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super String>, Object> {
        int label;

        C18452(Continuation<? super C18452> continuation) {
            super(2, continuation);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
            return new C18452(continuation);
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(CoroutineScope coroutineScope, Continuation<? super String> continuation) {
            return ((C18452) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            IntrinsicsKt.getCOROUTINE_SUSPENDED();
            if (this.label != 0) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            ResultKt.throwOnFailure(obj);
            return AndroidPreferences.getString(AndroidOptimisticInitializationManager.PREFERENCES_FILE, AndroidOptimisticInitializationManager.KEY_LAST_SUCCESS);
        }
    }

    /* JADX INFO: renamed from: com.unity3d.ads.core.data.manager.AndroidOptimisticInitializationManager$tryOptimisticCompletion$3, reason: invalid class name */
    /* JADX INFO: compiled from: AndroidOptimisticInitializationManager.kt */
    @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
    @DebugMetadata(c = "com.unity3d.ads.core.data.manager.AndroidOptimisticInitializationManager$tryOptimisticCompletion$3", f = "AndroidOptimisticInitializationManager.kt", i = {}, l = {}, m = "invokeSuspend", n = {}, s = {})
    static final class AnonymousClass3 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Unit>, Object> {
        int label;

        AnonymousClass3(Continuation<? super AnonymousClass3> continuation) {
            super(2, continuation);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
            return new AnonymousClass3(continuation);
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(CoroutineScope coroutineScope, Continuation<? super Unit> continuation) {
            return ((AnonymousClass3) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            IntrinsicsKt.getCOROUTINE_SUSPENDED();
            if (this.label != 0) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            ResultKt.throwOnFailure(obj);
            AndroidPreferences.removeKey(AndroidOptimisticInitializationManager.PREFERENCES_FILE, AndroidOptimisticInitializationManager.KEY_LAST_SUCCESS);
            return Unit.INSTANCE;
        }
    }

    /* JADX INFO: renamed from: com.unity3d.ads.core.data.manager.AndroidOptimisticInitializationManager$tryOptimisticCompletion$4, reason: invalid class name */
    /* JADX INFO: compiled from: AndroidOptimisticInitializationManager.kt */
    @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
    @DebugMetadata(c = "com.unity3d.ads.core.data.manager.AndroidOptimisticInitializationManager$tryOptimisticCompletion$4", f = "AndroidOptimisticInitializationManager.kt", i = {}, l = {79}, m = "invokeSuspend", n = {}, s = {})
    static final class AnonymousClass4 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Unit>, Object> {
        final /* synthetic */ int $delayMs;
        int label;
        final /* synthetic */ AndroidOptimisticInitializationManager this$0;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        AnonymousClass4(int i, AndroidOptimisticInitializationManager androidOptimisticInitializationManager, Continuation<? super AnonymousClass4> continuation) {
            super(2, continuation);
            this.$delayMs = i;
            this.this$0 = androidOptimisticInitializationManager;
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
            return new AnonymousClass4(this.$delayMs, this.this$0, continuation);
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(CoroutineScope coroutineScope, Continuation<? super Unit> continuation) {
            return ((AnonymousClass4) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
            int i = this.label;
            if (i == 0) {
                ResultKt.throwOnFailure(obj);
                this.label = 1;
                if (DelayKt.delay(this.$delayMs, this) == coroutine_suspended) {
                    return coroutine_suspended;
                }
            } else {
                if (i != 1) {
                    throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
                ResultKt.throwOnFailure(obj);
            }
            this.this$0.sendOptimistic();
            return Unit.INSTANCE;
        }
    }

    @Override // com.unity3d.ads.core.data.manager.OptimisticInitializationManager
    public void onInitializationFinished(boolean success) {
        this.terminal.set(true);
        Job job = this.timerJob;
        if (job != null) {
            Job.DefaultImpls.cancel$default(job, (CancellationException) null, 1, (Object) null);
        }
        if (success) {
            BuildersKt__Builders_commonKt.launch$default(this.optimisticScope, null, null, new AnonymousClass1(null), 3, null);
        }
    }

    /* JADX INFO: renamed from: com.unity3d.ads.core.data.manager.AndroidOptimisticInitializationManager$onInitializationFinished$1, reason: invalid class name */
    /* JADX INFO: compiled from: AndroidOptimisticInitializationManager.kt */
    @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
    @DebugMetadata(c = "com.unity3d.ads.core.data.manager.AndroidOptimisticInitializationManager$onInitializationFinished$1", f = "AndroidOptimisticInitializationManager.kt", i = {}, l = {90}, m = "invokeSuspend", n = {}, s = {})
    static final class AnonymousClass1 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Unit>, Object> {
        int label;

        AnonymousClass1(Continuation<? super AnonymousClass1> continuation) {
            super(2, continuation);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
            return AndroidOptimisticInitializationManager.this.new AnonymousClass1(continuation);
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(CoroutineScope coroutineScope, Continuation<? super Unit> continuation) {
            return ((AnonymousClass1) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
            int i = this.label;
            if (i == 0) {
                ResultKt.throwOnFailure(obj);
                this.label = 1;
                if (AndroidOptimisticInitializationManager.this.storeKey(this) == coroutine_suspended) {
                    return coroutine_suspended;
                }
            } else {
                if (i != 1) {
                    throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
                ResultKt.throwOnFailure(obj);
            }
            return Unit.INSTANCE;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void sendOptimistic() {
        if (this.terminal.compareAndSet(false, true)) {
            try {
                Logger.DefaultImpls.trace$default(this.logger, "Optimistic init: timer fired, sending success callback", null, 2, null);
                this.triggerInitializeListener.success();
                SendDiagnosticEvent.DefaultImpls.invoke$default(this.sendDiagnosticEvent, DIAGNOSTIC_EVENT, (Double) null, (Map) null, (Map) null, (AdObject) null, (Integer) null, (ByteString) null, 126, (Object) null);
            } catch (Throwable th) {
                this.logger.trace("Optimistic init: failed to send success callback: " + th.getMessage(), th);
            }
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX WARN: Code duplicated, block: B:7:0x0014  */
    public final Object storeKey(Continuation<? super Unit> continuation) {
        C18431 c18431;
        if (continuation instanceof C18431) {
            c18431 = (C18431) continuation;
            if ((c18431.label & Integer.MIN_VALUE) != 0) {
                c18431.label -= Integer.MIN_VALUE;
            } else {
                c18431 = new C18431(continuation);
            }
        } else {
            c18431 = new C18431(continuation);
        }
        Object obj = c18431.result;
        Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
        int i = c18431.label;
        try {
            if (i == 0) {
                ResultKt.throwOnFailure(obj);
                String strComputeKey = computeKey();
                CoroutineDispatcher io2 = Dispatchers.getIO();
                AnonymousClass2 anonymousClass2 = new AnonymousClass2(strComputeKey, null);
                c18431.label = 1;
                if (BuildersKt.withContext(io2, anonymousClass2, c18431) == coroutine_suspended) {
                    return coroutine_suspended;
                }
            } else {
                if (i != 1) {
                    throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
                ResultKt.throwOnFailure(obj);
            }
        } catch (Exception e) {
            Logger.DefaultImpls.trace$default(this.logger, "Optimistic init: failed to store key: " + e.getMessage(), null, 2, null);
        }
        return Unit.INSTANCE;
    }

    /* JADX INFO: renamed from: com.unity3d.ads.core.data.manager.AndroidOptimisticInitializationManager$storeKey$2, reason: invalid class name */
    /* JADX INFO: compiled from: AndroidOptimisticInitializationManager.kt */
    @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
    @DebugMetadata(c = "com.unity3d.ads.core.data.manager.AndroidOptimisticInitializationManager$storeKey$2", f = "AndroidOptimisticInitializationManager.kt", i = {}, l = {}, m = "invokeSuspend", n = {}, s = {})
    static final class AnonymousClass2 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Unit>, Object> {
        final /* synthetic */ String $key;
        int label;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        AnonymousClass2(String str, Continuation<? super AnonymousClass2> continuation) {
            super(2, continuation);
            this.$key = str;
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
            return new AnonymousClass2(this.$key, continuation);
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(CoroutineScope coroutineScope, Continuation<? super Unit> continuation) {
            return ((AnonymousClass2) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            IntrinsicsKt.getCOROUTINE_SUSPENDED();
            if (this.label != 0) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            ResultKt.throwOnFailure(obj);
            AndroidPreferences.setString(AndroidOptimisticInitializationManager.PREFERENCES_FILE, AndroidOptimisticInitializationManager.KEY_LAST_SUCCESS, this.$key);
            return Unit.INSTANCE;
        }
    }

    private final String computeKey() {
        String gameId = this.sessionRepository.getGameId();
        if (gameId == null) {
            gameId = "";
        }
        return CollectionsKt.joinToString$default(CollectionsKt.listOf((Object[]) new String[]{gameId, "4.20.0", this.staticDeviceInfoDataSource.fetchCached().getBundleVersion()}), "|", null, null, 0, null, null, 62, null);
    }
}
