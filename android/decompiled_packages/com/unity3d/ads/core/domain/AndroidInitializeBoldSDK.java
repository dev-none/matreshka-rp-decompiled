package com.unity3d.ads.core.domain;

import androidx.media3.extractor.ts.TsExtractor;
import com.adjust.sdk.AdjustConfig;
import com.google.protobuf.ByteString;
import com.unity3d.ads.UnityAds;
import com.unity3d.ads.core.data.manager.OptimisticInitializationManager;
import com.unity3d.ads.core.data.manager.SDKPropertiesManager;
import com.unity3d.ads.core.data.manager.StorageManager;
import com.unity3d.ads.core.data.model.AdObject;
import com.unity3d.ads.core.data.model.InitializationState;
import com.unity3d.ads.core.data.model.OperationType;
import com.unity3d.ads.core.data.model.exception.InitializationException;
import com.unity3d.ads.core.data.repository.DiagnosticEventRepository;
import com.unity3d.ads.core.data.repository.SessionRepository;
import com.unity3d.ads.core.domain.events.EventObservers;
import com.unity3d.ads.core.domain.om.InitializeOMSDK;
import com.unity3d.ads.core.extensions.ProtobufExtensionsKt;
import com.unity3d.ads.core.extensions.TimeExtensionsKt;
import com.unity3d.ads.core.log.Logger;
import com.unity3d.ads.gatewayclient.GatewayClient;
import gatewayprotocol.v1.DiagnosticEventRequestOuterClass;
import gatewayprotocol.v1.NativeConfigurationOuterClass;
import io.sentry.SentryEvent;
import java.util.Map;
import kotlin.KotlinVersion;
import kotlin.Metadata;
import kotlin.TuplesKt;
import kotlin.Unit;
import kotlin.collections.MapsKt;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.intrinsics.IntrinsicsKt;
import kotlin.coroutines.jvm.internal.ContinuationImpl;
import kotlin.coroutines.jvm.internal.DebugMetadata;
import kotlin.coroutines.jvm.internal.SuspendLambda;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlin.time.TimeMark;
import kotlinx.coroutines.BuildersKt;
import kotlinx.coroutines.CoroutineDispatcher;
import kotlinx.coroutines.CoroutineScope;

/* JADX INFO: compiled from: AndroidInitializeBoldSDK.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000°\u0001\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0004\n\u0002\u0010\u000b\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010$\n\u0002\b\u0004\b\u0000\u0018\u0000 B2\u00020\u0001:\u0001BB§\u0001\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0007\u0012\u0006\u0010\b\u001a\u00020\t\u0012\u0006\u0010\n\u001a\u00020\u000b\u0012\u0006\u0010\f\u001a\u00020\r\u0012\u0006\u0010\u000e\u001a\u00020\u000f\u0012\u0006\u0010\u0010\u001a\u00020\u0011\u0012\u0006\u0010\u0012\u001a\u00020\u0013\u0012\u0006\u0010\u0014\u001a\u00020\u0015\u0012\u0006\u0010\u0016\u001a\u00020\u0017\u0012\u0006\u0010\u0018\u001a\u00020\u0019\u0012\u0006\u0010\u001a\u001a\u00020\u001b\u0012\u0006\u0010\u001c\u001a\u00020\u001d\u0012\u0006\u0010\u001e\u001a\u00020\u001f\u0012\u0006\u0010 \u001a\u00020!\u0012\u0006\u0010\"\u001a\u00020#\u0012\u0006\u0010$\u001a\u00020%\u0012\u0006\u0010&\u001a\u00020'\u0012\u0006\u0010(\u001a\u00020)¢\u0006\u0004\b*\u0010+J\u0016\u0010,\u001a\u00020-2\u0006\u0010.\u001a\u00020/H\u0096B¢\u0006\u0002\u00100J\b\u00101\u001a\u00020-H\u0002J\u001e\u00102\u001a\u00020-2\u0006\u0010.\u001a\u00020/2\u0006\u00103\u001a\u000204H\u0082@¢\u0006\u0002\u00105J\b\u00106\u001a\u00020/H\u0002J&\u00107\u001a\u00020-2\u0006\u00108\u001a\u0002092\u0006\u0010.\u001a\u00020/2\u0006\u00103\u001a\u000204H\u0082@¢\u0006\u0002\u0010:J(\u0010;\u001a\u00020-2\u0006\u00108\u001a\u0002092\u0006\u0010<\u001a\u00020=2\u0006\u0010.\u001a\u00020/2\u0006\u00103\u001a\u000204H\u0002J0\u0010>\u001a\u000e\u0012\u0004\u0012\u00020/\u0012\u0004\u0012\u00020/0?2\n\b\u0002\u0010<\u001a\u0004\u0018\u00010=2\u0006\u0010.\u001a\u00020/2\u0006\u00103\u001a\u000204H\u0002J\b\u0010@\u001a\u00020-H\u0002J\b\u0010A\u001a\u00020-H\u0002R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0007X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\b\u001a\u00020\tX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\n\u001a\u00020\u000bX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\f\u001a\u00020\rX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u000e\u001a\u00020\u000fX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0010\u001a\u00020\u0011X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0012\u001a\u00020\u0013X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0014\u001a\u00020\u0015X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0016\u001a\u00020\u0017X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0018\u001a\u00020\u0019X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u001a\u001a\u00020\u001bX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u001c\u001a\u00020\u001dX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u001e\u001a\u00020\u001fX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010 \u001a\u00020!X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\"\u001a\u00020#X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010$\u001a\u00020%X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010&\u001a\u00020'X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010(\u001a\u00020)X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006C"}, d2 = {"Lcom/unity3d/ads/core/domain/AndroidInitializeBoldSDK;", "Lcom/unity3d/ads/core/domain/InitializeBoldSDK;", "defaultDispatcher", "Lkotlinx/coroutines/CoroutineDispatcher;", "initializeOM", "Lcom/unity3d/ads/core/domain/om/InitializeOMSDK;", "getInitializeRequest", "Lcom/unity3d/ads/core/domain/GetInitializationRequest;", "getRequestPolicy", "Lcom/unity3d/ads/core/domain/GetRequestPolicy;", "cleanAssets", "Lcom/unity3d/ads/core/domain/CleanAssets;", "handleGatewayInitializationResponse", "Lcom/unity3d/ads/core/domain/HandleGatewayInitializationResponse;", "deliverModuleConfigs", "Lcom/unity3d/ads/core/domain/DeliverModuleConfigs;", "gatewayClient", "Lcom/unity3d/ads/gatewayclient/GatewayClient;", "sessionRepository", "Lcom/unity3d/ads/core/data/repository/SessionRepository;", "eventObservers", "Lcom/unity3d/ads/core/domain/events/EventObservers;", "triggerInitializeListener", "Lcom/unity3d/ads/core/domain/TriggerInitializeListener;", "sendDiagnosticEvent", "Lcom/unity3d/ads/core/domain/SendDiagnosticEvent;", "diagnosticEventRepository", "Lcom/unity3d/ads/core/data/repository/DiagnosticEventRepository;", "storageManager", "Lcom/unity3d/ads/core/data/manager/StorageManager;", "sdkPropertiesManager", "Lcom/unity3d/ads/core/data/manager/SDKPropertiesManager;", "getGameId", "Lcom/unity3d/ads/core/domain/GetGameId;", SentryEvent.JsonKeys.LOGGER, "Lcom/unity3d/ads/core/log/Logger;", "handleFocusCounters", "Lcom/unity3d/ads/core/domain/AndroidHandleFocusCounters;", "optimisticInitializationManager", "Lcom/unity3d/ads/core/data/manager/OptimisticInitializationManager;", "getIsModulesInitEnabled", "Lcom/unity3d/ads/core/domain/GetIsModulesInitEnabled;", "<init>", "(Lkotlinx/coroutines/CoroutineDispatcher;Lcom/unity3d/ads/core/domain/om/InitializeOMSDK;Lcom/unity3d/ads/core/domain/GetInitializationRequest;Lcom/unity3d/ads/core/domain/GetRequestPolicy;Lcom/unity3d/ads/core/domain/CleanAssets;Lcom/unity3d/ads/core/domain/HandleGatewayInitializationResponse;Lcom/unity3d/ads/core/domain/DeliverModuleConfigs;Lcom/unity3d/ads/gatewayclient/GatewayClient;Lcom/unity3d/ads/core/data/repository/SessionRepository;Lcom/unity3d/ads/core/domain/events/EventObservers;Lcom/unity3d/ads/core/domain/TriggerInitializeListener;Lcom/unity3d/ads/core/domain/SendDiagnosticEvent;Lcom/unity3d/ads/core/data/repository/DiagnosticEventRepository;Lcom/unity3d/ads/core/data/manager/StorageManager;Lcom/unity3d/ads/core/data/manager/SDKPropertiesManager;Lcom/unity3d/ads/core/domain/GetGameId;Lcom/unity3d/ads/core/log/Logger;Lcom/unity3d/ads/core/domain/AndroidHandleFocusCounters;Lcom/unity3d/ads/core/data/manager/OptimisticInitializationManager;Lcom/unity3d/ads/core/domain/GetIsModulesInitEnabled;)V", "invoke", "", "source", "", "(Ljava/lang/String;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "checkCanInitialize", "initializationStart", "isRetry", "", "(Ljava/lang/String;ZLkotlin/coroutines/Continuation;)Ljava/lang/Object;", "getInitLog", "initializationSuccess", "startTime", "Lkotlin/time/TimeMark;", "(Lkotlin/time/TimeMark;Ljava/lang/String;ZLkotlin/coroutines/Continuation;)Ljava/lang/Object;", "initializationFailure", "e", "Lcom/unity3d/ads/core/data/model/exception/InitializationException;", "getTags", "", "setupDiagnosticEvents", "logNewPrivacyWasNotUsedIfNeeded", "Companion", "unity-ads_defaultRelease"}, k = 1, mv = {2, 1, 0}, xi = 48)
public final class AndroidInitializeBoldSDK implements InitializeBoldSDK {
    public static final String MSG_GATEWAY_DENIED = "Gateway communication failure";
    public static final String MSG_NETWORK = "Network";
    public static final String MSG_TIMEOUT = "Timeout";
    public static final String MSG_UNKNOWN = "Initialization failure";
    private final CleanAssets cleanAssets;
    private final CoroutineDispatcher defaultDispatcher;
    private final DeliverModuleConfigs deliverModuleConfigs;
    private final DiagnosticEventRepository diagnosticEventRepository;
    private final EventObservers eventObservers;
    private final GatewayClient gatewayClient;
    private final GetGameId getGameId;
    private final GetInitializationRequest getInitializeRequest;
    private final GetIsModulesInitEnabled getIsModulesInitEnabled;
    private final GetRequestPolicy getRequestPolicy;
    private final AndroidHandleFocusCounters handleFocusCounters;
    private final HandleGatewayInitializationResponse handleGatewayInitializationResponse;
    private final InitializeOMSDK initializeOM;
    private final Logger logger;
    private final OptimisticInitializationManager optimisticInitializationManager;
    private final SDKPropertiesManager sdkPropertiesManager;
    private final SendDiagnosticEvent sendDiagnosticEvent;
    private final SessionRepository sessionRepository;
    private final StorageManager storageManager;
    private final TriggerInitializeListener triggerInitializeListener;

    /* JADX INFO: renamed from: com.unity3d.ads.core.domain.AndroidInitializeBoldSDK$initializationSuccess$1, reason: invalid class name */
    /* JADX INFO: compiled from: AndroidInitializeBoldSDK.kt */
    @Metadata(k = 3, mv = {2, 1, 0}, xi = 48)
    @DebugMetadata(c = "com.unity3d.ads.core.domain.AndroidInitializeBoldSDK", f = "AndroidInitializeBoldSDK.kt", i = {0, 1, 2}, l = {TsExtractor.TS_STREAM_TYPE_E_AC3, TsExtractor.TS_STREAM_TYPE_DTS_HD, TsExtractor.TS_STREAM_TYPE_DTS_UHD}, m = "initializationSuccess", n = {"initLatencyMs", "initLatencyMs", "initLatencyMs"}, s = {"D$0", "D$0", "D$0"})
    static final class AnonymousClass1 extends ContinuationImpl {
        double D$0;
        int label;
        /* synthetic */ Object result;

        AnonymousClass1(Continuation<? super AnonymousClass1> continuation) {
            super(continuation);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            this.result = obj;
            this.label |= Integer.MIN_VALUE;
            return AndroidInitializeBoldSDK.this.initializationSuccess(null, null, false, this);
        }
    }

    public AndroidInitializeBoldSDK(CoroutineDispatcher defaultDispatcher, InitializeOMSDK initializeOM, GetInitializationRequest getInitializeRequest, GetRequestPolicy getRequestPolicy, CleanAssets cleanAssets, HandleGatewayInitializationResponse handleGatewayInitializationResponse, DeliverModuleConfigs deliverModuleConfigs, GatewayClient gatewayClient, SessionRepository sessionRepository, EventObservers eventObservers, TriggerInitializeListener triggerInitializeListener, SendDiagnosticEvent sendDiagnosticEvent, DiagnosticEventRepository diagnosticEventRepository, StorageManager storageManager, SDKPropertiesManager sdkPropertiesManager, GetGameId getGameId, Logger logger, AndroidHandleFocusCounters handleFocusCounters, OptimisticInitializationManager optimisticInitializationManager, GetIsModulesInitEnabled getIsModulesInitEnabled) {
        Intrinsics.checkNotNullParameter(defaultDispatcher, "defaultDispatcher");
        Intrinsics.checkNotNullParameter(initializeOM, "initializeOM");
        Intrinsics.checkNotNullParameter(getInitializeRequest, "getInitializeRequest");
        Intrinsics.checkNotNullParameter(getRequestPolicy, "getRequestPolicy");
        Intrinsics.checkNotNullParameter(cleanAssets, "cleanAssets");
        Intrinsics.checkNotNullParameter(handleGatewayInitializationResponse, "handleGatewayInitializationResponse");
        Intrinsics.checkNotNullParameter(deliverModuleConfigs, "deliverModuleConfigs");
        Intrinsics.checkNotNullParameter(gatewayClient, "gatewayClient");
        Intrinsics.checkNotNullParameter(sessionRepository, "sessionRepository");
        Intrinsics.checkNotNullParameter(eventObservers, "eventObservers");
        Intrinsics.checkNotNullParameter(triggerInitializeListener, "triggerInitializeListener");
        Intrinsics.checkNotNullParameter(sendDiagnosticEvent, "sendDiagnosticEvent");
        Intrinsics.checkNotNullParameter(diagnosticEventRepository, "diagnosticEventRepository");
        Intrinsics.checkNotNullParameter(storageManager, "storageManager");
        Intrinsics.checkNotNullParameter(sdkPropertiesManager, "sdkPropertiesManager");
        Intrinsics.checkNotNullParameter(getGameId, "getGameId");
        Intrinsics.checkNotNullParameter(logger, "logger");
        Intrinsics.checkNotNullParameter(handleFocusCounters, "handleFocusCounters");
        Intrinsics.checkNotNullParameter(optimisticInitializationManager, "optimisticInitializationManager");
        Intrinsics.checkNotNullParameter(getIsModulesInitEnabled, "getIsModulesInitEnabled");
        this.defaultDispatcher = defaultDispatcher;
        this.initializeOM = initializeOM;
        this.getInitializeRequest = getInitializeRequest;
        this.getRequestPolicy = getRequestPolicy;
        this.cleanAssets = cleanAssets;
        this.handleGatewayInitializationResponse = handleGatewayInitializationResponse;
        this.deliverModuleConfigs = deliverModuleConfigs;
        this.gatewayClient = gatewayClient;
        this.sessionRepository = sessionRepository;
        this.eventObservers = eventObservers;
        this.triggerInitializeListener = triggerInitializeListener;
        this.sendDiagnosticEvent = sendDiagnosticEvent;
        this.diagnosticEventRepository = diagnosticEventRepository;
        this.storageManager = storageManager;
        this.sdkPropertiesManager = sdkPropertiesManager;
        this.getGameId = getGameId;
        this.logger = logger;
        this.handleFocusCounters = handleFocusCounters;
        this.optimisticInitializationManager = optimisticInitializationManager;
        this.getIsModulesInitEnabled = getIsModulesInitEnabled;
    }

    /* JADX INFO: renamed from: com.unity3d.ads.core.domain.AndroidInitializeBoldSDK$invoke$2, reason: invalid class name */
    /* JADX INFO: compiled from: AndroidInitializeBoldSDK.kt */
    @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
    @DebugMetadata(c = "com.unity3d.ads.core.domain.AndroidInitializeBoldSDK$invoke$2", f = "AndroidInitializeBoldSDK.kt", i = {0, 0, 1, 1}, l = {68, 71, 88}, m = "invokeSuspend", n = {"startTime", "isRetry", "startTime", "isRetry"}, s = {"J$0", "I$0", "J$0", "I$0"})
    static final class AnonymousClass2 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Unit>, Object> {
        final /* synthetic */ String $source;
        int I$0;
        long J$0;
        int label;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        AnonymousClass2(String str, Continuation<? super AnonymousClass2> continuation) {
            super(2, continuation);
            this.$source = str;
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
            return AndroidInitializeBoldSDK.this.new AnonymousClass2(this.$source, continuation);
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(CoroutineScope coroutineScope, Continuation<? super Unit> continuation) {
            return ((AnonymousClass2) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
        }

        /* JADX WARN: Code duplicated, block: B:29:0x008b  */
        /* JADX WARN: Code restructure failed: missing block: B:31:0x0095, code lost:
        
            if (r13.initializationSuccess(r3, r6, r4, r12) == r0) goto L32;
         */
        /* JADX WARN: Type inference failed for: r6v4, types: [java.lang.String, long] */
        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        /*
            Code decompiled incorrectly, please refer to instructions dump.
            To view partially-correct add '--show-bad-code' argument
        */
        public final java.lang.Object invokeSuspend(java.lang.Object r13) {
            /*
                r12 = this;
                java.lang.Object r0 = kotlin.coroutines.intrinsics.IntrinsicsKt.getCOROUTINE_SUSPENDED()
                int r1 = r12.label
                r2 = 3
                r3 = 2
                r4 = 0
                r5 = 1
                if (r1 == 0) goto L32
                if (r1 == r5) goto L2a
                if (r1 == r3) goto L1f
                if (r1 != r2) goto L17
                kotlin.ResultKt.throwOnFailure(r13)
                goto L98
            L17:
                java.lang.IllegalStateException r13 = new java.lang.IllegalStateException
                java.lang.String r0 = "call to 'resume' before 'invoke' with coroutine"
                r13.<init>(r0)
                throw r13
            L1f:
                int r1 = r12.I$0
                long r6 = r12.J$0
                kotlin.ResultKt.throwOnFailure(r13)     // Catch: java.lang.Exception -> L27
                goto L81
            L27:
                r13 = move-exception
                goto L9b
            L2a:
                int r1 = r12.I$0
                long r6 = r12.J$0
                kotlin.ResultKt.throwOnFailure(r13)
                goto L5d
            L32:
                kotlin.ResultKt.throwOnFailure(r13)
                kotlin.time.TimeSource$Monotonic r13 = kotlin.time.TimeSource.Monotonic.INSTANCE
                long r6 = r13.m11326markNowz9LOYto()
                com.unity3d.ads.core.domain.AndroidInitializeBoldSDK r13 = com.unity3d.ads.core.domain.AndroidInitializeBoldSDK.this
                com.unity3d.ads.core.data.repository.SessionRepository r13 = com.unity3d.ads.core.domain.AndroidInitializeBoldSDK.access$getSessionRepository$p(r13)
                boolean r13 = r13.isFirstInitAttempt()
                r13 = r13 ^ r5
                com.unity3d.ads.core.domain.AndroidInitializeBoldSDK r1 = com.unity3d.ads.core.domain.AndroidInitializeBoldSDK.this
                com.unity3d.ads.core.data.manager.OptimisticInitializationManager r1 = com.unity3d.ads.core.domain.AndroidInitializeBoldSDK.access$getOptimisticInitializationManager$p(r1)
                r8 = r12
                kotlin.coroutines.Continuation r8 = (kotlin.coroutines.Continuation) r8
                r12.J$0 = r6
                r12.I$0 = r13
                r12.label = r5
                java.lang.Object r1 = r1.tryOptimisticCompletion(r8)
                if (r1 != r0) goto L5c
                goto L97
            L5c:
                r1 = r13
            L5d:
                com.unity3d.ads.core.domain.AndroidInitializeBoldSDK$invoke$2$1 r13 = new com.unity3d.ads.core.domain.AndroidInitializeBoldSDK$invoke$2$1     // Catch: java.lang.Exception -> L27
                com.unity3d.ads.core.domain.AndroidInitializeBoldSDK r8 = com.unity3d.ads.core.domain.AndroidInitializeBoldSDK.this     // Catch: java.lang.Exception -> L27
                java.lang.String r9 = r12.$source     // Catch: java.lang.Exception -> L27
                if (r1 == 0) goto L67
                r10 = r5
                goto L68
            L67:
                r10 = r4
            L68:
                r11 = 0
                r13.<init>(r8, r9, r10, r11)     // Catch: java.lang.Exception -> L27
                kotlin.jvm.functions.Function2 r13 = (kotlin.jvm.functions.Function2) r13     // Catch: java.lang.Exception -> L27
                r8 = r12
                kotlin.coroutines.Continuation r8 = (kotlin.coroutines.Continuation) r8     // Catch: java.lang.Exception -> L27
                r12.J$0 = r6     // Catch: java.lang.Exception -> L27
                r12.I$0 = r1     // Catch: java.lang.Exception -> L27
                r12.label = r3     // Catch: java.lang.Exception -> L27
                r9 = 120000(0x1d4c0, double:5.9288E-319)
                java.lang.Object r13 = kotlinx.coroutines.TimeoutKt.withTimeout(r9, r13, r8)     // Catch: java.lang.Exception -> L27
                if (r13 != r0) goto L81
                goto L97
            L81:
                com.unity3d.ads.core.domain.AndroidInitializeBoldSDK r13 = com.unity3d.ads.core.domain.AndroidInitializeBoldSDK.this
                kotlin.time.TimeSource$Monotonic$ValueTimeMark r3 = kotlin.time.TimeSource.Monotonic.ValueTimeMark.m11327boximpl(r6)
                java.lang.String r6 = r12.$source
                if (r1 == 0) goto L8c
                r4 = r5
            L8c:
                r1 = r12
                kotlin.coroutines.Continuation r1 = (kotlin.coroutines.Continuation) r1
                r12.label = r2
                java.lang.Object r13 = com.unity3d.ads.core.domain.AndroidInitializeBoldSDK.access$initializationSuccess(r13, r3, r6, r4, r1)
                if (r13 != r0) goto L98
            L97:
                return r0
            L98:
                kotlin.Unit r13 = kotlin.Unit.INSTANCE
                return r13
            L9b:
                com.unity3d.ads.core.data.model.exception.InitializationException$Companion r0 = com.unity3d.ads.core.data.model.exception.InitializationException.INSTANCE
                com.unity3d.ads.core.data.model.exception.InitializationException r0 = r0.parseFrom(r13)
                boolean r13 = r13 instanceof com.unity3d.ads.core.data.model.exception.GatewayException
                if (r13 == 0) goto Lae
                com.unity3d.ads.core.domain.AndroidInitializeBoldSDK r13 = com.unity3d.ads.core.domain.AndroidInitializeBoldSDK.this
                com.unity3d.ads.core.data.repository.SessionRepository r13 = com.unity3d.ads.core.domain.AndroidInitializeBoldSDK.access$getSessionRepository$p(r13)
                r13.setShouldInitialize(r4)
            Lae:
                com.unity3d.ads.core.domain.AndroidInitializeBoldSDK r13 = com.unity3d.ads.core.domain.AndroidInitializeBoldSDK.this
                kotlin.time.TimeSource$Monotonic$ValueTimeMark r2 = kotlin.time.TimeSource.Monotonic.ValueTimeMark.m11327boximpl(r6)
                java.lang.String r3 = r12.$source
                if (r1 == 0) goto Lb9
                r4 = r5
            Lb9:
                com.unity3d.ads.core.domain.AndroidInitializeBoldSDK.access$initializationFailure(r13, r2, r0, r3, r4)
                kotlin.Unit r13 = kotlin.Unit.INSTANCE
                return r13
            */
            throw new UnsupportedOperationException("Method not decompiled: com.unity3d.ads.core.domain.AndroidInitializeBoldSDK.AnonymousClass2.invokeSuspend(java.lang.Object):java.lang.Object");
        }

        /* JADX INFO: renamed from: com.unity3d.ads.core.domain.AndroidInitializeBoldSDK$invoke$2$1, reason: invalid class name */
        /* JADX INFO: compiled from: AndroidInitializeBoldSDK.kt */
        @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
        @DebugMetadata(c = "com.unity3d.ads.core.domain.AndroidInitializeBoldSDK$invoke$2$1", f = "AndroidInitializeBoldSDK.kt", i = {}, l = {72, 74, 76, 77}, m = "invokeSuspend", n = {}, s = {})
        static final class AnonymousClass1 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Unit>, Object> {
            final /* synthetic */ boolean $isRetry;
            final /* synthetic */ String $source;
            int label;
            final /* synthetic */ AndroidInitializeBoldSDK this$0;

            /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
            AnonymousClass1(AndroidInitializeBoldSDK androidInitializeBoldSDK, String str, boolean z, Continuation<? super AnonymousClass1> continuation) {
                super(2, continuation);
                this.this$0 = androidInitializeBoldSDK;
                this.$source = str;
                this.$isRetry = z;
            }

            @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
            public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
                return new AnonymousClass1(this.this$0, this.$source, this.$isRetry, continuation);
            }

            @Override // kotlin.jvm.functions.Function2
            public final Object invoke(CoroutineScope coroutineScope, Continuation<? super Unit> continuation) {
                return ((AnonymousClass1) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
            }

            /* JADX WARN: Code duplicated, block: B:23:0x007d A[PHI: r13
  0x007d: PHI (r13v12 java.lang.Object) = (r13v11 java.lang.Object), (r13v0 java.lang.Object) binds: [B:21:0x007a, B:11:0x0021] A[DONT_GENERATE, DONT_INLINE]] */
            /* JADX WARN: Code restructure failed: missing block: B:24:0x008e, code lost:
            
                if (r1.invoke((gatewayprotocol.v1.UniversalResponseOuterClass.UniversalResponse) r13, r12) == r0) goto L25;
             */
            @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
            /*
                Code decompiled incorrectly, please refer to instructions dump.
                To view partially-correct add '--show-bad-code' argument
            */
            public final java.lang.Object invokeSuspend(java.lang.Object r13) throws com.unity3d.ads.core.data.model.exception.InitializationException {
                /*
                    r12 = this;
                    java.lang.Object r0 = kotlin.coroutines.intrinsics.IntrinsicsKt.getCOROUTINE_SUSPENDED()
                    int r1 = r12.label
                    r2 = 4
                    r3 = 3
                    r4 = 2
                    r5 = 1
                    if (r1 == 0) goto L2d
                    if (r1 == r5) goto L29
                    if (r1 == r4) goto L25
                    if (r1 == r3) goto L21
                    if (r1 != r2) goto L19
                    kotlin.ResultKt.throwOnFailure(r13)
                    goto L91
                L19:
                    java.lang.IllegalStateException r13 = new java.lang.IllegalStateException
                    java.lang.String r0 = "call to 'resume' before 'invoke' with coroutine"
                    r13.<init>(r0)
                    throw r13
                L21:
                    kotlin.ResultKt.throwOnFailure(r13)
                    goto L7d
                L25:
                    kotlin.ResultKt.throwOnFailure(r13)
                    goto L59
                L29:
                    kotlin.ResultKt.throwOnFailure(r13)
                    goto L42
                L2d:
                    kotlin.ResultKt.throwOnFailure(r13)
                    com.unity3d.ads.core.domain.AndroidInitializeBoldSDK r13 = r12.this$0
                    java.lang.String r1 = r12.$source
                    boolean r6 = r12.$isRetry
                    r7 = r12
                    kotlin.coroutines.Continuation r7 = (kotlin.coroutines.Continuation) r7
                    r12.label = r5
                    java.lang.Object r13 = com.unity3d.ads.core.domain.AndroidInitializeBoldSDK.access$initializationStart(r13, r1, r6, r7)
                    if (r13 != r0) goto L42
                    goto L90
                L42:
                    com.unity3d.ads.core.domain.AndroidInitializeBoldSDK r13 = r12.this$0
                    com.unity3d.ads.core.domain.AndroidInitializeBoldSDK.access$checkCanInitialize(r13)
                    com.unity3d.ads.core.domain.AndroidInitializeBoldSDK r13 = r12.this$0
                    com.unity3d.ads.core.domain.GetInitializationRequest r13 = com.unity3d.ads.core.domain.AndroidInitializeBoldSDK.access$getGetInitializeRequest$p(r13)
                    r1 = r12
                    kotlin.coroutines.Continuation r1 = (kotlin.coroutines.Continuation) r1
                    r12.label = r4
                    java.lang.Object r13 = r13.invoke(r1)
                    if (r13 != r0) goto L59
                    goto L90
                L59:
                    r6 = r13
                    gatewayprotocol.v1.UniversalRequestOuterClass$UniversalRequest r6 = (gatewayprotocol.v1.UniversalRequestOuterClass.UniversalRequest) r6
                    com.unity3d.ads.core.domain.AndroidInitializeBoldSDK r13 = r12.this$0
                    com.unity3d.ads.core.domain.GetRequestPolicy r13 = com.unity3d.ads.core.domain.AndroidInitializeBoldSDK.access$getGetRequestPolicy$p(r13)
                    com.unity3d.ads.gatewayclient.RequestPolicy r7 = r13.invoke()
                    com.unity3d.ads.core.domain.AndroidInitializeBoldSDK r13 = r12.this$0
                    com.unity3d.ads.gatewayclient.GatewayClient r4 = com.unity3d.ads.core.domain.AndroidInitializeBoldSDK.access$getGatewayClient$p(r13)
                    com.unity3d.ads.core.data.model.OperationType r8 = com.unity3d.ads.core.data.model.OperationType.INITIALIZATION
                    r9 = r12
                    kotlin.coroutines.Continuation r9 = (kotlin.coroutines.Continuation) r9
                    r12.label = r3
                    r5 = 0
                    r10 = 1
                    r11 = 0
                    java.lang.Object r13 = com.unity3d.ads.gatewayclient.GatewayClient.DefaultImpls.request$default(r4, r5, r6, r7, r8, r9, r10, r11)
                    if (r13 != r0) goto L7d
                    goto L90
                L7d:
                    gatewayprotocol.v1.UniversalResponseOuterClass$UniversalResponse r13 = (gatewayprotocol.v1.UniversalResponseOuterClass.UniversalResponse) r13
                    com.unity3d.ads.core.domain.AndroidInitializeBoldSDK r1 = r12.this$0
                    com.unity3d.ads.core.domain.HandleGatewayInitializationResponse r1 = com.unity3d.ads.core.domain.AndroidInitializeBoldSDK.access$getHandleGatewayInitializationResponse$p(r1)
                    r3 = r12
                    kotlin.coroutines.Continuation r3 = (kotlin.coroutines.Continuation) r3
                    r12.label = r2
                    java.lang.Object r13 = r1.invoke(r13, r3)
                    if (r13 != r0) goto L91
                L90:
                    return r0
                L91:
                    kotlin.Unit r13 = kotlin.Unit.INSTANCE
                    return r13
                */
                throw new UnsupportedOperationException("Method not decompiled: com.unity3d.ads.core.domain.AndroidInitializeBoldSDK.AnonymousClass2.AnonymousClass1.invokeSuspend(java.lang.Object):java.lang.Object");
            }
        }
    }

    @Override // com.unity3d.ads.core.domain.InitializeBoldSDK
    public Object invoke(String str, Continuation<? super Unit> continuation) {
        Object objWithContext = BuildersKt.withContext(this.defaultDispatcher, new AnonymousClass2(str, null), continuation);
        return objWithContext == IntrinsicsKt.getCOROUTINE_SUSPENDED() ? objWithContext : Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void checkCanInitialize() throws InitializationException {
        if (!this.sessionRepository.getShouldInitialize()) {
            InitializationException initializationError = this.sessionRepository.getInitializationError();
            if (initializationError == null) {
                throw new InitializationException(MSG_GATEWAY_DENIED, null, "gateway", "!sessionRepository.shouldInitialize", null, null, 50, null);
            }
            throw initializationError;
        }
        if (this.getGameId.invoke() == null) {
            throw new InitializationException("gameId is null.", null, "invalid_game_id", "null", null, null, 50, null);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final Object initializationStart(String str, boolean z, Continuation<? super Unit> continuation) {
        this.logger.info(getInitLog());
        logNewPrivacyWasNotUsedIfNeeded();
        this.sdkPropertiesManager.setInitializationTime();
        this.sdkPropertiesManager.setInitializationTimeSinceEpoch();
        SendDiagnosticEvent.DefaultImpls.invoke$default(this.sendDiagnosticEvent, DiagnosticEventRequestOuterClass.DiagnosticEventType.DIAGNOSTIC_EVENT_TYPE_NATIVE_INITIALIZATION_STARTED, (Double) null, MapsKt.plus(getTags$default(this, null, str, z, 1, null), MapsKt.mapOf(TuplesKt.to("kotlin_version", KotlinVersion.CURRENT.toString()))), (Map) null, (AdObject) null, (Integer) null, (ByteString) null, 122, (Object) null);
        this.sessionRepository.setInitializationState(InitializationState.INITIALIZING);
        Object objInvoke = this.eventObservers.invoke(continuation);
        return objInvoke == IntrinsicsKt.getCOROUTINE_SUSPENDED() ? objInvoke : Unit.INSTANCE;
    }

    private final String getInitLog() {
        StringBuilder sb = new StringBuilder("Initializing SDK 4.20.0 42000 with game id ");
        sb.append(this.getGameId.invoke());
        sb.append(" in ");
        sb.append(this.sessionRepository.isTestModeEnabled() ? "test" : AdjustConfig.ENVIRONMENT_PRODUCTION);
        sb.append(" mode, session ");
        sb.append(ProtobufExtensionsKt.toUUID(this.sessionRepository.getSessionId()));
        return sb.toString();
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX WARN: Code duplicated, block: B:7:0x0018  */
    /* JADX WARN: Code restructure failed: missing block: B:26:0x00ab, code lost:
    
        if (r1.persistNativeConfiguration(r6) == r7) goto L27;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public final java.lang.Object initializationSuccess(kotlin.time.TimeMark r24, java.lang.String r25, boolean r26, kotlin.coroutines.Continuation<? super kotlin.Unit> r27) {
        /*
            Method dump skipped, instruction units count: 208
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.unity3d.ads.core.domain.AndroidInitializeBoldSDK.initializationSuccess(kotlin.time.TimeMark, java.lang.String, boolean, kotlin.coroutines.Continuation):java.lang.Object");
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void initializationFailure(TimeMark startTime, InitializationException e, String source, boolean isRetry) {
        this.logger.error("Initialization failed: " + e.getMessage(), e);
        SendDiagnosticEvent.DefaultImpls.invoke$default(this.sendDiagnosticEvent, DiagnosticEventRequestOuterClass.DiagnosticEventType.DIAGNOSTIC_EVENT_TYPE_NATIVE_INITIALIZATION_FAILURE_TIME, Double.valueOf(TimeExtensionsKt.elapsedMillis(startTime)), getTags(e, source, isRetry), (Map) null, (AdObject) null, (Integer) null, e.getErrorToken(), 56, (Object) null);
        this.sessionRepository.setInitializationState(InitializationState.FAILED);
        this.sessionRepository.setInitializationError(e);
        this.sdkPropertiesManager.setInitialized(false);
        this.optimisticInitializationManager.onInitializationFinished(false);
        this.triggerInitializeListener.error(e);
        this.deliverModuleConfigs.notifyFailure(e.getMessage());
        setupDiagnosticEvents();
    }

    static /* synthetic */ Map getTags$default(AndroidInitializeBoldSDK androidInitializeBoldSDK, InitializationException initializationException, String str, boolean z, int i, Object obj) {
        if ((i & 1) != 0) {
            initializationException = null;
        }
        return androidInitializeBoldSDK.getTags(initializationException, str, z);
    }

    private final Map<String, String> getTags(InitializationException e, String source, boolean isRetry) {
        Map mapCreateMapBuilder = MapsKt.createMapBuilder();
        mapCreateMapBuilder.put("operation", OperationType.INITIALIZATION.toString());
        if (e != null) {
        }
        mapCreateMapBuilder.put("source", source);
        mapCreateMapBuilder.put("is_retry", String.valueOf(isRetry));
        mapCreateMapBuilder.put("new_api", String.valueOf(this.sessionRepository.getInitializationConfiguration() != null));
        mapCreateMapBuilder.put("modules_init_enabled", String.valueOf(this.getIsModulesInitEnabled.invoke()));
        if (e != null && e.getReasonDebug() != null) {
            mapCreateMapBuilder.put("reason_debug", e.getReasonDebug());
        }
        return MapsKt.build(mapCreateMapBuilder);
    }

    private final void setupDiagnosticEvents() {
        NativeConfigurationOuterClass.DiagnosticEventsConfiguration diagnosticEvents = this.sessionRepository.getNativeConfiguration().getDiagnosticEvents();
        DiagnosticEventRepository diagnosticEventRepository = this.diagnosticEventRepository;
        Intrinsics.checkNotNull(diagnosticEvents);
        diagnosticEventRepository.configure(diagnosticEvents);
    }

    private final void logNewPrivacyWasNotUsedIfNeeded() {
        if (this.sessionRepository.getInitializationConfiguration() != null && UnityAds.getUserConsent() == null && UnityAds.getUserOptOut() == null && UnityAds.getNonBehavioral() == null) {
            this.logger.info("The new UnityAds SDK initialization was used without the new privacy APIs. Use the new privacy APIs to update privacy consent handling.");
        }
    }
}
