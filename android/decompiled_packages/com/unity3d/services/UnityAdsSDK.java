package com.unity3d.services;

import android.content.Context;
import androidx.media3.extractor.ts.TsExtractor;
import com.google.android.gms.common.internal.ServiceSpecificExtraArgs;
import com.google.protobuf.ByteString;
import com.unity3d.ads.IUnityAdsTokenListener;
import com.unity3d.ads.InitializationConfiguration;
import com.unity3d.ads.TokenConfiguration;
import com.unity3d.ads.UnityAdsLoadOptions;
import com.unity3d.ads.UnityAdsShowOptions;
import com.unity3d.ads.core.data.model.AdObject;
import com.unity3d.ads.core.data.model.InitializationConfigurationInternal;
import com.unity3d.ads.core.data.model.InitializationState;
import com.unity3d.ads.core.data.model.Listeners;
import com.unity3d.ads.core.data.repository.SessionRepository;
import com.unity3d.ads.core.domain.AndroidGetIsModulesInitEnabled;
import com.unity3d.ads.core.domain.GetAdObject;
import com.unity3d.ads.core.domain.GetAsyncHeaderBiddingToken;
import com.unity3d.ads.core.domain.GetGameId;
import com.unity3d.ads.core.domain.GetHeaderBiddingToken;
import com.unity3d.ads.core.domain.GetInitializationState;
import com.unity3d.ads.core.domain.HandleInvocationsFromAdViewer;
import com.unity3d.ads.core.domain.InitializeBoldSDK;
import com.unity3d.ads.core.domain.InternalLoadListener;
import com.unity3d.ads.core.domain.LegacyLoadUseCase;
import com.unity3d.ads.core.domain.LegacyShowUseCase;
import com.unity3d.ads.core.domain.SendDiagnosticEvent;
import com.unity3d.ads.core.domain.ShouldAllowInitialization;
import com.unity3d.ads.core.domain.TokenNumberProvider;
import com.unity3d.ads.core.domain.ValidateExtrasSize;
import com.unity3d.ads.core.domain.om.OmFinishSession;
import com.unity3d.ads.core.extensions.ExceptionExtensionsKt;
import com.unity3d.ads.core.extensions.TimeExtensionsKt;
import com.unity3d.ads.core.log.LogLevelKt;
import com.unity3d.ads.core.log.Logger;
import com.unity3d.services.banners.UnityBannerSize;
import com.unity3d.services.core.di.IServiceComponent;
import com.unity3d.services.core.di.IServiceProvider;
import com.unity3d.services.core.di.ServiceProvider;
import gatewayprotocol.v1.DiagnosticEventRequestOuterClass;
import io.sentry.SentryEvent;
import java.util.Map;
import kotlin.Lazy;
import kotlin.LazyKt;
import kotlin.LazyThreadSafetyMode;
import kotlin.Metadata;
import kotlin.ResultKt;
import kotlin.TuplesKt;
import kotlin.Unit;
import kotlin.collections.MapsKt;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.intrinsics.IntrinsicsKt;
import kotlin.coroutines.jvm.internal.Boxing;
import kotlin.coroutines.jvm.internal.DebugMetadata;
import kotlin.coroutines.jvm.internal.SuspendLambda;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Reflection;
import kotlin.time.TimeSource;
import kotlinx.coroutines.BuildersKt__BuildersKt;
import kotlinx.coroutines.BuildersKt__Builders_commonKt;
import kotlinx.coroutines.CoroutineScope;
import kotlinx.coroutines.CoroutineScopeKt;
import kotlinx.coroutines.Job;
import kotlinx.coroutines.JobKt__JobKt;

/* JADX INFO: compiled from: UnityAdsSDK.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000°\u0001\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0006\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\u0018\u00002\u00020\u0001B\u0011\u0012\b\b\u0002\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005J\b\u0010\u0006\u001a\u00020\u0003H\u0016J&\u0010\t\u001a\u00020\b2\b\u0010\n\u001a\u0004\u0018\u00010\u000b2\b\b\u0002\u0010\f\u001a\u00020\u000b2\n\b\u0002\u0010\r\u001a\u0004\u0018\u00010\u000eJ.\u0010\u000f\u001a\u00020\b2\b\u0010\u0010\u001a\u0004\u0018\u00010\u000b2\u0006\u0010\u0011\u001a\u00020\u00122\b\u0010\u0013\u001a\u0004\u0018\u00010\u00142\n\b\u0002\u0010\u0015\u001a\u0004\u0018\u00010\u0016J\"\u0010\u0017\u001a\u00020\b2\b\u0010\u0010\u001a\u0004\u0018\u00010\u000b2\b\u0010\u0018\u001a\u0004\u0018\u00010\u00192\u0006\u0010\u0013\u001a\u00020\u001aJ\b\u0010\u001b\u001a\u0004\u0018\u00010\u000bJ\u0010\u0010\u001b\u001a\u00020\b2\b\u0010\u0013\u001a\u0004\u0018\u00010\u001cJ\u001a\u0010\u001b\u001a\u00020\b2\b\u0010\u001d\u001a\u0004\u0018\u00010\u001e2\b\u0010\u0013\u001a\u0004\u0018\u00010\u001cJ\u0018\u0010\u001f\u001a\u0004\u0018\u00010\u000b2\u0006\u0010 \u001a\u00020\u000bH\u0082@¢\u0006\u0002\u0010!J\u000e\u0010\"\u001a\u00020\b2\u0006\u0010#\u001a\u00020\u000bJ\u0006\u0010$\u001a\u00020%R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u0010\u0010\u0007\u001a\u0004\u0018\u00010\bX\u0082\u000e¢\u0006\u0002\n\u0000¨\u0006&²\u0006\n\u0010'\u001a\u00020(X\u008a\u0084\u0002²\u0006\n\u0010)\u001a\u00020*X\u008a\u0084\u0002²\u0006\n\u0010+\u001a\u00020,X\u008a\u0084\u0002²\u0006\n\u0010-\u001a\u00020.X\u008a\u0084\u0002²\u0006\n\u0010/\u001a\u000200X\u008a\u0084\u0002²\u0006\n\u00101\u001a\u000202X\u008a\u0084\u0002²\u0006\n\u00103\u001a\u000204X\u008a\u0084\u0002²\u0006\n\u00101\u001a\u000202X\u008a\u0084\u0002²\u0006\n\u00105\u001a\u000206X\u008a\u0084\u0002²\u0006\n\u00107\u001a\u000208X\u008a\u0084\u0002²\u0006\n\u00105\u001a\u000206X\u008a\u0084\u0002²\u0006\n\u00109\u001a\u00020:X\u008a\u0084\u0002²\u0006\n\u0010;\u001a\u00020<X\u008a\u0084\u0002²\u0006\n\u0010=\u001a\u00020>X\u008a\u0084\u0002²\u0006\n\u0010-\u001a\u00020.X\u008a\u0084\u0002²\u0006\n\u0010?\u001a\u00020@X\u008a\u0084\u0002²\u0006\n\u0010A\u001a\u00020BX\u008a\u0084\u0002²\u0006\n\u0010=\u001a\u00020>X\u008a\u0084\u0002"}, d2 = {"Lcom/unity3d/services/UnityAdsSDK;", "Lcom/unity3d/services/core/di/IServiceComponent;", "serviceProvider", "Lcom/unity3d/services/core/di/IServiceProvider;", "<init>", "(Lcom/unity3d/services/core/di/IServiceProvider;)V", "getServiceProvider", "initializationJob", "Lkotlinx/coroutines/Job;", "initialize", "gameId", "", "source", "initializationConfiguration", "Lcom/unity3d/ads/InitializationConfiguration;", "load", "placementId", HandleInvocationsFromAdViewer.KEY_LOAD_OPTIONS, "Lcom/unity3d/ads/UnityAdsLoadOptions;", ServiceSpecificExtraArgs.CastExtraArgs.LISTENER, "Lcom/unity3d/ads/core/domain/InternalLoadListener;", "bannerSize", "Lcom/unity3d/services/banners/UnityBannerSize;", "show", "showOptions", "Lcom/unity3d/ads/UnityAdsShowOptions;", "Lcom/unity3d/ads/core/data/model/Listeners;", "getToken", "Lcom/unity3d/ads/IUnityAdsTokenListener;", "tokenConfiguration", "Lcom/unity3d/ads/TokenConfiguration;", "fetchToken", "sync", "(Ljava/lang/String;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "finishOMIDSession", "opportunityId", "sendBannerDestroyed", "", "unity-ads_defaultRelease", "shouldAllowInitialization", "Lcom/unity3d/ads/core/domain/ShouldAllowInitialization;", "sessionRepository", "Lcom/unity3d/ads/core/data/repository/SessionRepository;", "validateExtrasSize", "Lcom/unity3d/ads/core/domain/ValidateExtrasSize;", SentryEvent.JsonKeys.LOGGER, "Lcom/unity3d/ads/core/log/Logger;", "initializeBoldSDK", "Lcom/unity3d/ads/core/domain/InitializeBoldSDK;", "getGameId", "Lcom/unity3d/ads/core/domain/GetGameId;", "context", "Landroid/content/Context;", "tokenNumberProvider", "Lcom/unity3d/ads/core/domain/TokenNumberProvider;", "getAsyncHeaderBiddingToken", "Lcom/unity3d/ads/core/domain/GetAsyncHeaderBiddingToken;", "getHeaderBiddingToken", "Lcom/unity3d/ads/core/domain/GetHeaderBiddingToken;", "getInitializationState", "Lcom/unity3d/ads/core/domain/GetInitializationState;", "sendDiagnosticEvent", "Lcom/unity3d/ads/core/domain/SendDiagnosticEvent;", "getAdObject", "Lcom/unity3d/ads/core/domain/GetAdObject;", "omFinishSession", "Lcom/unity3d/ads/core/domain/om/OmFinishSession;"}, k = 1, mv = {2, 1, 0}, xi = 48)
public final class UnityAdsSDK implements IServiceComponent {
    private Job initializationJob;
    private final IServiceProvider serviceProvider;

    /* JADX WARN: Multi-variable type inference failed */
    public UnityAdsSDK() {
        this(null, 1, 0 == true ? 1 : 0);
    }

    public UnityAdsSDK(IServiceProvider serviceProvider) {
        Intrinsics.checkNotNullParameter(serviceProvider, "serviceProvider");
        this.serviceProvider = serviceProvider;
    }

    public /* synthetic */ UnityAdsSDK(ServiceProvider serviceProvider, int i, DefaultConstructorMarker defaultConstructorMarker) {
        this((i & 1) != 0 ? ServiceProvider.INSTANCE : serviceProvider);
    }

    @Override // com.unity3d.services.core.di.IServiceComponent
    public IServiceProvider getServiceProvider() {
        return this.serviceProvider;
    }

    public static /* synthetic */ Job initialize$default(UnityAdsSDK unityAdsSDK, String str, String str2, InitializationConfiguration initializationConfiguration, int i, Object obj) {
        if ((i & 2) != 0) {
            str2 = "api";
        }
        if ((i & 4) != 0) {
            initializationConfiguration = null;
        }
        return unityAdsSDK.initialize(str, str2, initializationConfiguration);
    }

    public final Job initialize(String gameId, String source, InitializationConfiguration initializationConfiguration) {
        Intrinsics.checkNotNullParameter(source, "source");
        synchronized (this) {
            Job job = this.initializationJob;
            if (job != null && job.isActive()) {
                return job;
            }
            final UnityAdsSDK unityAdsSDK = this;
            final String str = "";
            if (!initialize$lambda$6$lambda$0(LazyKt.lazy(LazyThreadSafetyMode.NONE, (Function0) new Function0<ShouldAllowInitialization>() { // from class: com.unity3d.services.UnityAdsSDK$initialize$lambda$6$$inlined$inject$default$1
                /* JADX WARN: Type inference failed for: r0v3, types: [com.unity3d.ads.core.domain.ShouldAllowInitialization, java.lang.Object] */
                @Override // kotlin.jvm.functions.Function0
                public final ShouldAllowInitialization invoke() {
                    IServiceComponent iServiceComponent = unityAdsSDK;
                    return iServiceComponent.getServiceProvider().getRegistry().getService(str, Reflection.getOrCreateKotlinClass(ShouldAllowInitialization.class));
                }
            })).invoke(gameId)) {
                return JobKt__JobKt.Job$default((Job) null, 1, (Object) null);
            }
            if (initializationConfiguration != null) {
                final UnityAdsSDK unityAdsSDK2 = this;
                final String str2 = "";
                Lazy lazy = LazyKt.lazy(LazyThreadSafetyMode.NONE, (Function0) new Function0<SessionRepository>() { // from class: com.unity3d.services.UnityAdsSDK$initialize$lambda$6$lambda$4$$inlined$inject$default$1
                    /* JADX WARN: Type inference failed for: r0v3, types: [com.unity3d.ads.core.data.repository.SessionRepository, java.lang.Object] */
                    @Override // kotlin.jvm.functions.Function0
                    public final SessionRepository invoke() {
                        IServiceComponent iServiceComponent = unityAdsSDK2;
                        return iServiceComponent.getServiceProvider().getRegistry().getService(str2, Reflection.getOrCreateKotlinClass(SessionRepository.class));
                    }
                });
                final UnityAdsSDK unityAdsSDK3 = this;
                final String str3 = "";
                ValidateExtrasSize.invoke$default(initialize$lambda$6$lambda$4$lambda$2(LazyKt.lazy(LazyThreadSafetyMode.NONE, (Function0) new Function0<ValidateExtrasSize>() { // from class: com.unity3d.services.UnityAdsSDK$initialize$lambda$6$lambda$4$$inlined$inject$default$2
                    /* JADX WARN: Type inference failed for: r0v3, types: [com.unity3d.ads.core.domain.ValidateExtrasSize, java.lang.Object] */
                    @Override // kotlin.jvm.functions.Function0
                    public final ValidateExtrasSize invoke() {
                        IServiceComponent iServiceComponent = unityAdsSDK3;
                        return iServiceComponent.getServiceProvider().getRegistry().getService(str3, Reflection.getOrCreateKotlinClass(ValidateExtrasSize.class));
                    }
                })), initializationConfiguration.getExtras(), "init", null, 4, null);
                initialize$lambda$6$lambda$4$lambda$1(lazy).setInitializationConfiguration(new InitializationConfigurationInternal(initializationConfiguration.getGameId(), initializationConfiguration.getIsTestModeEnabled(), initializationConfiguration.getLogLevel(), initializationConfiguration.getExtras(), initializationConfiguration.getMediationInfo()));
                final UnityAdsSDK unityAdsSDK4 = this;
                final String str4 = "";
                initialize$lambda$6$lambda$4$lambda$3(LazyKt.lazy(LazyThreadSafetyMode.NONE, (Function0) new Function0<Logger>() { // from class: com.unity3d.services.UnityAdsSDK$initialize$lambda$6$lambda$4$$inlined$inject$default$3
                    /* JADX WARN: Type inference failed for: r0v3, types: [com.unity3d.ads.core.log.Logger, java.lang.Object] */
                    @Override // kotlin.jvm.functions.Function0
                    public final Logger invoke() {
                        IServiceComponent iServiceComponent = unityAdsSDK4;
                        return iServiceComponent.getServiceProvider().getRegistry().getService(str4, Reflection.getOrCreateKotlinClass(Logger.class));
                    }
                })).setLogLevel(LogLevelKt.toLogLevelInternal(initializationConfiguration.getLogLevel()));
            }
            final UnityAdsSDK unityAdsSDK5 = this;
            final String str5 = "";
            Lazy lazy2 = LazyKt.lazy(LazyThreadSafetyMode.NONE, (Function0) new Function0<InitializeBoldSDK>() { // from class: com.unity3d.services.UnityAdsSDK$initialize$lambda$6$$inlined$inject$default$2
                /* JADX WARN: Type inference failed for: r0v3, types: [com.unity3d.ads.core.domain.InitializeBoldSDK, java.lang.Object] */
                @Override // kotlin.jvm.functions.Function0
                public final InitializeBoldSDK invoke() {
                    IServiceComponent iServiceComponent = unityAdsSDK5;
                    return iServiceComponent.getServiceProvider().getRegistry().getService(str5, Reflection.getOrCreateKotlinClass(InitializeBoldSDK.class));
                }
            });
            CoroutineScope coroutineScope = (CoroutineScope) getServiceProvider().getRegistry().getService(ServiceProvider.NAMED_INIT_SCOPE, Reflection.getOrCreateKotlinClass(CoroutineScope.class));
            Job jobLaunch$default = BuildersKt__Builders_commonKt.launch$default(coroutineScope, null, null, new UnityAdsSDK$initialize$1$newInitializationJob$1(source, coroutineScope, lazy2, null), 3, null);
            this.initializationJob = jobLaunch$default;
            return jobLaunch$default;
        }
    }

    private static final ShouldAllowInitialization initialize$lambda$6$lambda$0(Lazy<? extends ShouldAllowInitialization> lazy) {
        return lazy.getValue();
    }

    private static final SessionRepository initialize$lambda$6$lambda$4$lambda$1(Lazy<? extends SessionRepository> lazy) {
        return lazy.getValue();
    }

    private static final ValidateExtrasSize initialize$lambda$6$lambda$4$lambda$2(Lazy<ValidateExtrasSize> lazy) {
        return lazy.getValue();
    }

    private static final Logger initialize$lambda$6$lambda$4$lambda$3(Lazy<? extends Logger> lazy) {
        return lazy.getValue();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final InitializeBoldSDK initialize$lambda$6$lambda$5(Lazy<? extends InitializeBoldSDK> lazy) {
        return lazy.getValue();
    }

    public static /* synthetic */ Job load$default(UnityAdsSDK unityAdsSDK, String str, UnityAdsLoadOptions unityAdsLoadOptions, InternalLoadListener internalLoadListener, UnityBannerSize unityBannerSize, int i, Object obj) {
        if ((i & 8) != 0) {
            unityBannerSize = null;
        }
        return unityAdsSDK.load(str, unityAdsLoadOptions, internalLoadListener, unityBannerSize);
    }

    private static final GetGameId load$lambda$7(Lazy<? extends GetGameId> lazy) {
        return lazy.getValue();
    }

    public final Job load(String placementId, UnityAdsLoadOptions loadOptions, InternalLoadListener listener, UnityBannerSize bannerSize) {
        Intrinsics.checkNotNullParameter(loadOptions, "loadOptions");
        final UnityAdsSDK unityAdsSDK = this;
        final String str = "";
        initialize$default(this, load$lambda$7(LazyKt.lazy(LazyThreadSafetyMode.NONE, (Function0) new Function0<GetGameId>() { // from class: com.unity3d.services.UnityAdsSDK$load$$inlined$inject$default$1
            /* JADX WARN: Type inference failed for: r0v3, types: [com.unity3d.ads.core.domain.GetGameId, java.lang.Object] */
            @Override // kotlin.jvm.functions.Function0
            public final GetGameId invoke() {
                IServiceComponent iServiceComponent = unityAdsSDK;
                return iServiceComponent.getServiceProvider().getRegistry().getService(str, Reflection.getOrCreateKotlinClass(GetGameId.class));
            }
        })).invoke(), "load", null, 4, null);
        CoroutineScope coroutineScope = (CoroutineScope) unityAdsSDK.getServiceProvider().getRegistry().getService(ServiceProvider.NAMED_LOAD_SCOPE, Reflection.getOrCreateKotlinClass(CoroutineScope.class));
        return BuildersKt__Builders_commonKt.launch$default(coroutineScope, null, null, new C19271(placementId, loadOptions, listener, bannerSize, coroutineScope, LazyKt.lazy(LazyThreadSafetyMode.NONE, (Function0) new Function0<Context>() { // from class: com.unity3d.services.UnityAdsSDK$load$$inlined$inject$default$2
            /* JADX WARN: Type inference failed for: r0v3, types: [android.content.Context, java.lang.Object] */
            @Override // kotlin.jvm.functions.Function0
            public final Context invoke() {
                IServiceComponent iServiceComponent = unityAdsSDK;
                return iServiceComponent.getServiceProvider().getRegistry().getService(str, Reflection.getOrCreateKotlinClass(Context.class));
            }
        }), null), 3, null);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Context load$lambda$8(Lazy<? extends Context> lazy) {
        return lazy.getValue();
    }

    /* JADX INFO: renamed from: com.unity3d.services.UnityAdsSDK$load$1, reason: invalid class name and case insensitive filesystem */
    /* JADX INFO: compiled from: UnityAdsSDK.kt */
    @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
    @DebugMetadata(c = "com.unity3d.services.UnityAdsSDK$load$1", f = "UnityAdsSDK.kt", i = {}, l = {TsExtractor.TS_STREAM_TYPE_DTS_UHD}, m = "invokeSuspend", n = {}, s = {})
    static final class C19271 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Unit>, Object> {
        final /* synthetic */ UnityBannerSize $bannerSize;
        final /* synthetic */ Lazy<Context> $context$delegate;
        final /* synthetic */ InternalLoadListener $listener;
        final /* synthetic */ UnityAdsLoadOptions $loadOptions;
        final /* synthetic */ CoroutineScope $loadScope;
        final /* synthetic */ String $placementId;
        int label;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        /* JADX WARN: Multi-variable type inference failed */
        C19271(String str, UnityAdsLoadOptions unityAdsLoadOptions, InternalLoadListener internalLoadListener, UnityBannerSize unityBannerSize, CoroutineScope coroutineScope, Lazy<? extends Context> lazy, Continuation<? super C19271> continuation) {
            super(2, continuation);
            this.$placementId = str;
            this.$loadOptions = unityAdsLoadOptions;
            this.$listener = internalLoadListener;
            this.$bannerSize = unityBannerSize;
            this.$loadScope = coroutineScope;
            this.$context$delegate = lazy;
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
            return UnityAdsSDK.this.new C19271(this.$placementId, this.$loadOptions, this.$listener, this.$bannerSize, this.$loadScope, this.$context$delegate, continuation);
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(CoroutineScope coroutineScope, Continuation<? super Unit> continuation) {
            return ((C19271) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
            int i = this.label;
            if (i == 0) {
                ResultKt.throwOnFailure(obj);
                this.label = 1;
                if (((LegacyLoadUseCase) UnityAdsSDK.this.getServiceProvider().getRegistry().getService("", Reflection.getOrCreateKotlinClass(LegacyLoadUseCase.class))).invoke(UnityAdsSDK.load$lambda$8(this.$context$delegate), this.$placementId, this.$loadOptions, this.$listener, this.$bannerSize, this) == coroutine_suspended) {
                    return coroutine_suspended;
                }
            } else {
                if (i != 1) {
                    throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
                ResultKt.throwOnFailure(obj);
            }
            CoroutineScopeKt.cancel$default(this.$loadScope, null, 1, null);
            return Unit.INSTANCE;
        }
    }

    public final Job show(String placementId, UnityAdsShowOptions showOptions, Listeners listener) {
        Intrinsics.checkNotNullParameter(listener, "listener");
        UnityAdsSDK unityAdsSDK = this;
        CoroutineScope coroutineScope = (CoroutineScope) unityAdsSDK.getServiceProvider().getRegistry().getService(ServiceProvider.NAMED_SHOW_SCOPE, Reflection.getOrCreateKotlinClass(CoroutineScope.class));
        return BuildersKt__Builders_commonKt.launch$default(coroutineScope, null, null, new C19281((LegacyShowUseCase) unityAdsSDK.getServiceProvider().getRegistry().getService("", Reflection.getOrCreateKotlinClass(LegacyShowUseCase.class)), placementId, showOptions, listener, coroutineScope, null), 3, null);
    }

    /* JADX INFO: renamed from: com.unity3d.services.UnityAdsSDK$show$1, reason: invalid class name and case insensitive filesystem */
    /* JADX INFO: compiled from: UnityAdsSDK.kt */
    @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
    @DebugMetadata(c = "com.unity3d.services.UnityAdsSDK$show$1", f = "UnityAdsSDK.kt", i = {}, l = {149}, m = "invokeSuspend", n = {}, s = {})
    static final class C19281 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Unit>, Object> {
        final /* synthetic */ Listeners $listener;
        final /* synthetic */ String $placementId;
        final /* synthetic */ LegacyShowUseCase $showBoldSDK;
        final /* synthetic */ UnityAdsShowOptions $showOptions;
        final /* synthetic */ CoroutineScope $showScope;
        int label;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        C19281(LegacyShowUseCase legacyShowUseCase, String str, UnityAdsShowOptions unityAdsShowOptions, Listeners listeners, CoroutineScope coroutineScope, Continuation<? super C19281> continuation) {
            super(2, continuation);
            this.$showBoldSDK = legacyShowUseCase;
            this.$placementId = str;
            this.$showOptions = unityAdsShowOptions;
            this.$listener = listeners;
            this.$showScope = coroutineScope;
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
            return new C19281(this.$showBoldSDK, this.$placementId, this.$showOptions, this.$listener, this.$showScope, continuation);
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(CoroutineScope coroutineScope, Continuation<? super Unit> continuation) {
            return ((C19281) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
            int i = this.label;
            if (i == 0) {
                ResultKt.throwOnFailure(obj);
                this.label = 1;
                if (this.$showBoldSDK.invoke(this.$placementId, this.$showOptions, this.$listener, this) == coroutine_suspended) {
                    return coroutine_suspended;
                }
            } else {
                if (i != 1) {
                    throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
                ResultKt.throwOnFailure(obj);
            }
            CoroutineScopeKt.cancel$default(this.$showScope, null, 1, null);
            return Unit.INSTANCE;
        }
    }

    /* JADX INFO: renamed from: com.unity3d.services.UnityAdsSDK$getToken$1, reason: invalid class name and case insensitive filesystem */
    /* JADX INFO: compiled from: UnityAdsSDK.kt */
    @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u000e\n\u0002\u0018\u0002\u0010\u0000\u001a\u0004\u0018\u00010\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
    @DebugMetadata(c = "com.unity3d.services.UnityAdsSDK$getToken$1", f = "UnityAdsSDK.kt", i = {}, l = {159}, m = "invokeSuspend", n = {}, s = {})
    static final class C19261 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super String>, Object> {
        int label;

        C19261(Continuation<? super C19261> continuation) {
            super(2, continuation);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
            return UnityAdsSDK.this.new C19261(continuation);
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(CoroutineScope coroutineScope, Continuation<? super String> continuation) {
            return ((C19261) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
            int i = this.label;
            if (i != 0) {
                if (i != 1) {
                    throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
                ResultKt.throwOnFailure(obj);
                return obj;
            }
            ResultKt.throwOnFailure(obj);
            this.label = 1;
            Object objFetchToken = UnityAdsSDK.this.fetchToken(AndroidGetIsModulesInitEnabled.ENABLE_MODULES_INIT_VALUE, this);
            return objFetchToken == coroutine_suspended ? coroutine_suspended : objFetchToken;
        }
    }

    public final String getToken() {
        return (String) BuildersKt__BuildersKt.runBlocking$default(null, new C19261(null), 1, null);
    }

    public final Job getToken(IUnityAdsTokenListener listener) {
        return getToken(null, listener);
    }

    private static final GetGameId getToken$lambda$9(Lazy<? extends GetGameId> lazy) {
        return lazy.getValue();
    }

    public final Job getToken(TokenConfiguration tokenConfiguration, IUnityAdsTokenListener listener) {
        final UnityAdsSDK unityAdsSDK = this;
        final String str = "";
        initialize$default(this, getToken$lambda$9(LazyKt.lazy(LazyThreadSafetyMode.NONE, (Function0) new Function0<GetGameId>() { // from class: com.unity3d.services.UnityAdsSDK$getToken$$inlined$inject$default$1
            /* JADX WARN: Type inference failed for: r0v3, types: [com.unity3d.ads.core.domain.GetGameId, java.lang.Object] */
            @Override // kotlin.jvm.functions.Function0
            public final GetGameId invoke() {
                IServiceComponent iServiceComponent = unityAdsSDK;
                return iServiceComponent.getServiceProvider().getRegistry().getService(str, Reflection.getOrCreateKotlinClass(GetGameId.class));
            }
        })).invoke(), "get_token", null, 4, null);
        Lazy lazy = LazyKt.lazy(LazyThreadSafetyMode.NONE, (Function0) new Function0<TokenNumberProvider>() { // from class: com.unity3d.services.UnityAdsSDK$getToken$$inlined$inject$default$2
            /* JADX WARN: Type inference failed for: r0v3, types: [com.unity3d.ads.core.domain.TokenNumberProvider, java.lang.Object] */
            @Override // kotlin.jvm.functions.Function0
            public final TokenNumberProvider invoke() {
                IServiceComponent iServiceComponent = unityAdsSDK;
                return iServiceComponent.getServiceProvider().getRegistry().getService(str, Reflection.getOrCreateKotlinClass(TokenNumberProvider.class));
            }
        });
        Lazy lazy2 = LazyKt.lazy(LazyThreadSafetyMode.NONE, (Function0) new Function0<GetAsyncHeaderBiddingToken>() { // from class: com.unity3d.services.UnityAdsSDK$getToken$$inlined$inject$default$3
            /* JADX WARN: Type inference failed for: r0v3, types: [com.unity3d.ads.core.domain.GetAsyncHeaderBiddingToken, java.lang.Object] */
            @Override // kotlin.jvm.functions.Function0
            public final GetAsyncHeaderBiddingToken invoke() {
                IServiceComponent iServiceComponent = unityAdsSDK;
                return iServiceComponent.getServiceProvider().getRegistry().getService(str, Reflection.getOrCreateKotlinClass(GetAsyncHeaderBiddingToken.class));
            }
        });
        CoroutineScope coroutineScope = (CoroutineScope) unityAdsSDK.getServiceProvider().getRegistry().getService(ServiceProvider.NAMED_GET_TOKEN_SCOPE, Reflection.getOrCreateKotlinClass(CoroutineScope.class));
        return BuildersKt__Builders_commonKt.launch$default(coroutineScope, null, null, new AnonymousClass2(tokenConfiguration, listener, coroutineScope, lazy2, lazy, null), 3, null);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final TokenNumberProvider getToken$lambda$10(Lazy<? extends TokenNumberProvider> lazy) {
        return lazy.getValue();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final GetAsyncHeaderBiddingToken getToken$lambda$11(Lazy<? extends GetAsyncHeaderBiddingToken> lazy) {
        return lazy.getValue();
    }

    /* JADX INFO: renamed from: com.unity3d.services.UnityAdsSDK$getToken$2, reason: invalid class name */
    /* JADX INFO: compiled from: UnityAdsSDK.kt */
    @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
    @DebugMetadata(c = "com.unity3d.services.UnityAdsSDK$getToken$2", f = "UnityAdsSDK.kt", i = {}, l = {175}, m = "invokeSuspend", n = {}, s = {})
    static final class AnonymousClass2 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Unit>, Object> {
        final /* synthetic */ Lazy<GetAsyncHeaderBiddingToken> $getAsyncHeaderBiddingToken$delegate;
        final /* synthetic */ CoroutineScope $getTokenScope;
        final /* synthetic */ IUnityAdsTokenListener $listener;
        final /* synthetic */ TokenConfiguration $tokenConfiguration;
        final /* synthetic */ Lazy<TokenNumberProvider> $tokenNumberProvider$delegate;
        int label;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        /* JADX WARN: Multi-variable type inference failed */
        AnonymousClass2(TokenConfiguration tokenConfiguration, IUnityAdsTokenListener iUnityAdsTokenListener, CoroutineScope coroutineScope, Lazy<? extends GetAsyncHeaderBiddingToken> lazy, Lazy<? extends TokenNumberProvider> lazy2, Continuation<? super AnonymousClass2> continuation) {
            super(2, continuation);
            this.$tokenConfiguration = tokenConfiguration;
            this.$listener = iUnityAdsTokenListener;
            this.$getTokenScope = coroutineScope;
            this.$getAsyncHeaderBiddingToken$delegate = lazy;
            this.$tokenNumberProvider$delegate = lazy2;
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
            return new AnonymousClass2(this.$tokenConfiguration, this.$listener, this.$getTokenScope, this.$getAsyncHeaderBiddingToken$delegate, this.$tokenNumberProvider$delegate, continuation);
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(CoroutineScope coroutineScope, Continuation<? super Unit> continuation) {
            return ((AnonymousClass2) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
            int i = this.label;
            if (i == 0) {
                ResultKt.throwOnFailure(obj);
                this.label = 1;
                if (UnityAdsSDK.getToken$lambda$11(this.$getAsyncHeaderBiddingToken$delegate).invoke(UnityAdsSDK.getToken$lambda$10(this.$tokenNumberProvider$delegate).invoke(), this.$tokenConfiguration, this.$listener, this) == coroutine_suspended) {
                    return coroutine_suspended;
                }
            } else {
                if (i != 1) {
                    throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
                ResultKt.throwOnFailure(obj);
            }
            CoroutineScopeKt.cancel$default(this.$getTokenScope, null, 1, null);
            return Unit.INSTANCE;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final Object fetchToken(String str, Continuation<? super String> continuation) {
        String str2;
        String str3;
        String str4;
        DiagnosticEventRequestOuterClass.DiagnosticEventType diagnosticEventType;
        final UnityAdsSDK unityAdsSDK = this;
        final String str5 = "";
        Lazy lazy = LazyKt.lazy(LazyThreadSafetyMode.NONE, (Function0) new Function0<TokenNumberProvider>() { // from class: com.unity3d.services.UnityAdsSDK$fetchToken$$inlined$inject$default$1
            /* JADX WARN: Type inference failed for: r0v3, types: [com.unity3d.ads.core.domain.TokenNumberProvider, java.lang.Object] */
            @Override // kotlin.jvm.functions.Function0
            public final TokenNumberProvider invoke() {
                IServiceComponent iServiceComponent = unityAdsSDK;
                return iServiceComponent.getServiceProvider().getRegistry().getService(str5, Reflection.getOrCreateKotlinClass(TokenNumberProvider.class));
            }
        });
        Lazy lazy2 = LazyKt.lazy(LazyThreadSafetyMode.NONE, (Function0) new Function0<GetHeaderBiddingToken>() { // from class: com.unity3d.services.UnityAdsSDK$fetchToken$$inlined$inject$default$2
            /* JADX WARN: Type inference failed for: r0v3, types: [com.unity3d.ads.core.domain.GetHeaderBiddingToken, java.lang.Object] */
            @Override // kotlin.jvm.functions.Function0
            public final GetHeaderBiddingToken invoke() {
                IServiceComponent iServiceComponent = unityAdsSDK;
                return iServiceComponent.getServiceProvider().getRegistry().getService(str5, Reflection.getOrCreateKotlinClass(GetHeaderBiddingToken.class));
            }
        });
        Lazy lazy3 = LazyKt.lazy(LazyThreadSafetyMode.NONE, (Function0) new Function0<GetInitializationState>() { // from class: com.unity3d.services.UnityAdsSDK$fetchToken$$inlined$inject$default$3
            /* JADX WARN: Type inference failed for: r0v3, types: [com.unity3d.ads.core.domain.GetInitializationState, java.lang.Object] */
            @Override // kotlin.jvm.functions.Function0
            public final GetInitializationState invoke() {
                IServiceComponent iServiceComponent = unityAdsSDK;
                return iServiceComponent.getServiceProvider().getRegistry().getService(str5, Reflection.getOrCreateKotlinClass(GetInitializationState.class));
            }
        });
        Lazy lazy4 = LazyKt.lazy(LazyThreadSafetyMode.NONE, (Function0) new Function0<SendDiagnosticEvent>() { // from class: com.unity3d.services.UnityAdsSDK$fetchToken$$inlined$inject$default$4
            /* JADX WARN: Type inference failed for: r0v3, types: [com.unity3d.ads.core.domain.SendDiagnosticEvent, java.lang.Object] */
            @Override // kotlin.jvm.functions.Function0
            public final SendDiagnosticEvent invoke() {
                IServiceComponent iServiceComponent = unityAdsSDK;
                return iServiceComponent.getServiceProvider().getRegistry().getService(str5, Reflection.getOrCreateKotlinClass(SendDiagnosticEvent.class));
            }
        });
        Lazy lazy5 = LazyKt.lazy(LazyThreadSafetyMode.NONE, (Function0) new Function0<Logger>() { // from class: com.unity3d.services.UnityAdsSDK$fetchToken$$inlined$inject$default$5
            /* JADX WARN: Type inference failed for: r0v3, types: [com.unity3d.ads.core.log.Logger, java.lang.Object] */
            @Override // kotlin.jvm.functions.Function0
            public final Logger invoke() {
                IServiceComponent iServiceComponent = unityAdsSDK;
                return iServiceComponent.getServiceProvider().getRegistry().getService(str5, Reflection.getOrCreateKotlinClass(Logger.class));
            }
        });
        long jM11326markNowz9LOYto = TimeSource.Monotonic.INSTANCE.m11326markNowz9LOYto();
        SendDiagnosticEvent.DefaultImpls.invoke$default(fetchToken$lambda$15(lazy4), DiagnosticEventRequestOuterClass.DiagnosticEventType.DIAGNOSTIC_EVENT_TYPE_NATIVE_GATEWAY_TOKEN_STARTED, (Double) null, MapsKt.mapOf(TuplesKt.to("sync", str), TuplesKt.to("state", GetInitializationState.DefaultImpls.invoke$default(fetchToken$lambda$14(lazy3), false, 1, null).toString())), (Map) null, (AdObject) null, (Integer) null, (ByteString) null, 122, (Object) null);
        if (GetInitializationState.DefaultImpls.invoke$default(fetchToken$lambda$14(lazy3), false, 1, null) == InitializationState.INITIALIZED) {
            try {
                str4 = (String) BuildersKt__BuildersKt.runBlocking$default(null, new UnityAdsSDK$fetchToken$token$1(lazy2, lazy, null), 1, null);
                str2 = null;
                str3 = null;
            } catch (Exception e) {
                String shortenedStackTrace$default = ExceptionExtensionsKt.getShortenedStackTrace$default(e, 0, 1, null);
                str2 = "uncaught_exception";
                str3 = shortenedStackTrace$default;
                str4 = null;
            }
        } else {
            str2 = "not_initialized";
            str3 = null;
            str4 = null;
        }
        SendDiagnosticEvent sendDiagnosticEventFetchToken$lambda$15 = fetchToken$lambda$15(lazy4);
        if (str4 == null) {
            diagnosticEventType = DiagnosticEventRequestOuterClass.DiagnosticEventType.DIAGNOSTIC_EVENT_TYPE_NATIVE_GATEWAY_TOKEN_FAILURE_TIME;
        } else {
            diagnosticEventType = DiagnosticEventRequestOuterClass.DiagnosticEventType.DIAGNOSTIC_EVENT_TYPE_NATIVE_GATEWAY_TOKEN_SUCCESS_TIME;
        }
        DiagnosticEventRequestOuterClass.DiagnosticEventType diagnosticEventType2 = diagnosticEventType;
        Double dBoxDouble = Boxing.boxDouble(TimeExtensionsKt.elapsedMillis(TimeSource.Monotonic.ValueTimeMark.m11327boximpl(jM11326markNowz9LOYto)));
        Map mapCreateMapBuilder = MapsKt.createMapBuilder();
        mapCreateMapBuilder.put("sync", str);
        mapCreateMapBuilder.put("state", GetInitializationState.DefaultImpls.invoke$default(fetchToken$lambda$14(lazy3), false, 1, null).toString());
        if (str2 != null) {
        }
        if (str3 != null) {
            mapCreateMapBuilder.put("reason_debug", str3);
        }
        Unit unit = Unit.INSTANCE;
        SendDiagnosticEvent.DefaultImpls.invoke$default(sendDiagnosticEventFetchToken$lambda$15, diagnosticEventType2, dBoxDouble, MapsKt.build(mapCreateMapBuilder), (Map) null, (AdObject) null, Boxing.boxInt(fetchToken$lambda$12(lazy).invoke()), (ByteString) null, 88, (Object) null);
        if (str4 == null) {
            Logger.DefaultImpls.error$default(fetchToken$lambda$16(lazy5), "Returned nil token due to: " + str2, null, 2, null);
        } else {
            fetchToken$lambda$16(lazy5).info("Generated a valid token.");
        }
        return str4;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final TokenNumberProvider fetchToken$lambda$12(Lazy<? extends TokenNumberProvider> lazy) {
        return lazy.getValue();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final GetHeaderBiddingToken fetchToken$lambda$13(Lazy<? extends GetHeaderBiddingToken> lazy) {
        return lazy.getValue();
    }

    private static final GetInitializationState fetchToken$lambda$14(Lazy<? extends GetInitializationState> lazy) {
        return lazy.getValue();
    }

    private static final SendDiagnosticEvent fetchToken$lambda$15(Lazy<? extends SendDiagnosticEvent> lazy) {
        return lazy.getValue();
    }

    private static final Logger fetchToken$lambda$16(Lazy<? extends Logger> lazy) {
        return lazy.getValue();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final GetAdObject finishOMIDSession$lambda$20(Lazy<? extends GetAdObject> lazy) {
        return lazy.getValue();
    }

    public final Job finishOMIDSession(String opportunityId) {
        Intrinsics.checkNotNullParameter(opportunityId, "opportunityId");
        final UnityAdsSDK unityAdsSDK = this;
        final String str = "";
        Lazy lazy = LazyKt.lazy(LazyThreadSafetyMode.NONE, (Function0) new Function0<GetAdObject>() { // from class: com.unity3d.services.UnityAdsSDK$finishOMIDSession$$inlined$inject$default$1
            /* JADX WARN: Type inference failed for: r0v3, types: [com.unity3d.ads.core.domain.GetAdObject, java.lang.Object] */
            @Override // kotlin.jvm.functions.Function0
            public final GetAdObject invoke() {
                IServiceComponent iServiceComponent = unityAdsSDK;
                return iServiceComponent.getServiceProvider().getRegistry().getService(str, Reflection.getOrCreateKotlinClass(GetAdObject.class));
            }
        });
        Lazy lazy2 = LazyKt.lazy(LazyThreadSafetyMode.NONE, (Function0) new Function0<OmFinishSession>() { // from class: com.unity3d.services.UnityAdsSDK$finishOMIDSession$$inlined$inject$default$2
            /* JADX WARN: Type inference failed for: r0v3, types: [com.unity3d.ads.core.domain.om.OmFinishSession, java.lang.Object] */
            @Override // kotlin.jvm.functions.Function0
            public final OmFinishSession invoke() {
                IServiceComponent iServiceComponent = unityAdsSDK;
                return iServiceComponent.getServiceProvider().getRegistry().getService(str, Reflection.getOrCreateKotlinClass(OmFinishSession.class));
            }
        });
        CoroutineScope coroutineScope = (CoroutineScope) unityAdsSDK.getServiceProvider().getRegistry().getService(ServiceProvider.NAMED_OMID_SCOPE, Reflection.getOrCreateKotlinClass(CoroutineScope.class));
        return BuildersKt__Builders_commonKt.launch$default(coroutineScope, null, null, new AnonymousClass1(opportunityId, coroutineScope, lazy, lazy2, null), 3, null);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final OmFinishSession finishOMIDSession$lambda$21(Lazy<? extends OmFinishSession> lazy) {
        return lazy.getValue();
    }

    /* JADX INFO: renamed from: com.unity3d.services.UnityAdsSDK$finishOMIDSession$1, reason: invalid class name */
    /* JADX INFO: compiled from: UnityAdsSDK.kt */
    @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
    @DebugMetadata(c = "com.unity3d.services.UnityAdsSDK$finishOMIDSession$1", f = "UnityAdsSDK.kt", i = {}, l = {238}, m = "invokeSuspend", n = {}, s = {})
    static final class AnonymousClass1 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Unit>, Object> {
        final /* synthetic */ Lazy<GetAdObject> $getAdObject$delegate;
        final /* synthetic */ Lazy<OmFinishSession> $omFinishSession$delegate;
        final /* synthetic */ CoroutineScope $omidScope;
        final /* synthetic */ String $opportunityId;
        int label;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        /* JADX WARN: Multi-variable type inference failed */
        AnonymousClass1(String str, CoroutineScope coroutineScope, Lazy<? extends GetAdObject> lazy, Lazy<? extends OmFinishSession> lazy2, Continuation<? super AnonymousClass1> continuation) {
            super(2, continuation);
            this.$opportunityId = str;
            this.$omidScope = coroutineScope;
            this.$getAdObject$delegate = lazy;
            this.$omFinishSession$delegate = lazy2;
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
            return new AnonymousClass1(this.$opportunityId, this.$omidScope, this.$getAdObject$delegate, this.$omFinishSession$delegate, continuation);
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
                AdObject adObjectInvoke = UnityAdsSDK.finishOMIDSession$lambda$20(this.$getAdObject$delegate).invoke(this.$opportunityId);
                if (adObjectInvoke != null) {
                    OmFinishSession omFinishSessionFinishOMIDSession$lambda$21 = UnityAdsSDK.finishOMIDSession$lambda$21(this.$omFinishSession$delegate);
                    this.label = 1;
                    if (omFinishSessionFinishOMIDSession$lambda$21.invoke(adObjectInvoke, this) == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                }
            } else {
                if (i != 1) {
                    throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
                ResultKt.throwOnFailure(obj);
            }
            CoroutineScopeKt.cancel$default(this.$omidScope, null, 1, null);
            return Unit.INSTANCE;
        }
    }

    private static final SendDiagnosticEvent sendBannerDestroyed$lambda$22(Lazy<? extends SendDiagnosticEvent> lazy) {
        return lazy.getValue();
    }

    public final void sendBannerDestroyed() {
        final UnityAdsSDK unityAdsSDK = this;
        final String str = "";
        SendDiagnosticEvent.DefaultImpls.invoke$default(sendBannerDestroyed$lambda$22(LazyKt.lazy(LazyThreadSafetyMode.NONE, (Function0) new Function0<SendDiagnosticEvent>() { // from class: com.unity3d.services.UnityAdsSDK$sendBannerDestroyed$$inlined$inject$default$1
            /* JADX WARN: Type inference failed for: r0v3, types: [com.unity3d.ads.core.domain.SendDiagnosticEvent, java.lang.Object] */
            @Override // kotlin.jvm.functions.Function0
            public final SendDiagnosticEvent invoke() {
                IServiceComponent iServiceComponent = unityAdsSDK;
                return iServiceComponent.getServiceProvider().getRegistry().getService(str, Reflection.getOrCreateKotlinClass(SendDiagnosticEvent.class));
            }
        })), "native_banner_destroyed", (Double) null, (Map) null, (Map) null, (AdObject) null, (Integer) null, (ByteString) null, 126, (Object) null);
    }
}
