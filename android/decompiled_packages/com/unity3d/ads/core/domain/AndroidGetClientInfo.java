package com.unity3d.ads.core.domain;

import com.unity3d.ads.core.data.datasource.AdQualityVersionDataSource;
import com.unity3d.ads.core.data.datasource.FIdExistenceDataSource;
import com.unity3d.ads.core.data.manager.OfferwallManager;
import com.unity3d.ads.core.data.manager.OmidManager;
import com.unity3d.ads.core.data.repository.MediationRepository;
import com.unity3d.ads.core.data.repository.SessionRepository;
import com.unity3d.services.core.properties.MadeWithUnityDetector;
import gatewayprotocol.v1.ClientInfoKt;
import gatewayprotocol.v1.ClientInfoOuterClass;
import kotlin.Metadata;
import kotlin.ResultKt;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.intrinsics.IntrinsicsKt;
import kotlin.coroutines.jvm.internal.ContinuationImpl;
import kotlin.coroutines.jvm.internal.DebugMetadata;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.StringsKt;

/* JADX INFO: compiled from: AndroidGetClientInfo.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u00008\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0002\b\u0000\u0018\u00002\u00020\u0001B7\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0007\u0012\u0006\u0010\b\u001a\u00020\t\u0012\u0006\u0010\n\u001a\u00020\u000b\u0012\u0006\u0010\f\u001a\u00020\r¢\u0006\u0004\b\u000e\u0010\u000fJ\u000e\u0010\u0010\u001a\u00020\u0011H\u0096B¢\u0006\u0002\u0010\u0012R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0007X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\b\u001a\u00020\tX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\n\u001a\u00020\u000bX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\f\u001a\u00020\rX\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u0013"}, d2 = {"Lcom/unity3d/ads/core/domain/AndroidGetClientInfo;", "Lcom/unity3d/ads/core/domain/GetClientInfo;", "sessionRepository", "Lcom/unity3d/ads/core/data/repository/SessionRepository;", "mediationRepository", "Lcom/unity3d/ads/core/data/repository/MediationRepository;", "omidManager", "Lcom/unity3d/ads/core/data/manager/OmidManager;", "offerwallManager", "Lcom/unity3d/ads/core/data/manager/OfferwallManager;", "fIdExistenceDataSource", "Lcom/unity3d/ads/core/data/datasource/FIdExistenceDataSource;", "adQualityVersionDataSource", "Lcom/unity3d/ads/core/data/datasource/AdQualityVersionDataSource;", "<init>", "(Lcom/unity3d/ads/core/data/repository/SessionRepository;Lcom/unity3d/ads/core/data/repository/MediationRepository;Lcom/unity3d/ads/core/data/manager/OmidManager;Lcom/unity3d/ads/core/data/manager/OfferwallManager;Lcom/unity3d/ads/core/data/datasource/FIdExistenceDataSource;Lcom/unity3d/ads/core/data/datasource/AdQualityVersionDataSource;)V", "invoke", "Lgatewayprotocol/v1/ClientInfoOuterClass$ClientInfo;", "(Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "unity-ads_defaultRelease"}, k = 1, mv = {2, 1, 0}, xi = 48)
public final class AndroidGetClientInfo implements GetClientInfo {
    private final AdQualityVersionDataSource adQualityVersionDataSource;
    private final FIdExistenceDataSource fIdExistenceDataSource;
    private final MediationRepository mediationRepository;
    private final OfferwallManager offerwallManager;
    private final OmidManager omidManager;
    private final SessionRepository sessionRepository;

    /* JADX INFO: renamed from: com.unity3d.ads.core.domain.AndroidGetClientInfo$invoke$1, reason: invalid class name */
    /* JADX INFO: compiled from: AndroidGetClientInfo.kt */
    @Metadata(k = 3, mv = {2, 1, 0}, xi = 48)
    @DebugMetadata(c = "com.unity3d.ads.core.domain.AndroidGetClientInfo", f = "AndroidGetClientInfo.kt", i = {0}, l = {42}, m = "invoke", n = {"$this$invoke_u24lambda_u245"}, s = {"L$1"})
    static final class AnonymousClass1 extends ContinuationImpl {
        Object L$0;
        Object L$1;
        int label;
        /* synthetic */ Object result;

        AnonymousClass1(Continuation<? super AnonymousClass1> continuation) {
            super(continuation);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            this.result = obj;
            this.label |= Integer.MIN_VALUE;
            return AndroidGetClientInfo.this.invoke(this);
        }
    }

    public AndroidGetClientInfo(SessionRepository sessionRepository, MediationRepository mediationRepository, OmidManager omidManager, OfferwallManager offerwallManager, FIdExistenceDataSource fIdExistenceDataSource, AdQualityVersionDataSource adQualityVersionDataSource) {
        Intrinsics.checkNotNullParameter(sessionRepository, "sessionRepository");
        Intrinsics.checkNotNullParameter(mediationRepository, "mediationRepository");
        Intrinsics.checkNotNullParameter(omidManager, "omidManager");
        Intrinsics.checkNotNullParameter(offerwallManager, "offerwallManager");
        Intrinsics.checkNotNullParameter(fIdExistenceDataSource, "fIdExistenceDataSource");
        Intrinsics.checkNotNullParameter(adQualityVersionDataSource, "adQualityVersionDataSource");
        this.sessionRepository = sessionRepository;
        this.mediationRepository = mediationRepository;
        this.omidManager = omidManager;
        this.offerwallManager = offerwallManager;
        this.fIdExistenceDataSource = fIdExistenceDataSource;
        this.adQualityVersionDataSource = adQualityVersionDataSource;
    }

    /* JADX WARN: Code duplicated, block: B:7:0x0014  */
    @Override // com.unity3d.ads.core.domain.GetClientInfo
    public Object invoke(Continuation<? super ClientInfoOuterClass.ClientInfo> continuation) {
        AnonymousClass1 anonymousClass1;
        ClientInfoKt.Dsl dsl;
        ClientInfoKt.Dsl dsl2;
        if (continuation instanceof AnonymousClass1) {
            anonymousClass1 = (AnonymousClass1) continuation;
            if ((anonymousClass1.label & Integer.MIN_VALUE) != 0) {
                anonymousClass1.label -= Integer.MIN_VALUE;
            } else {
                anonymousClass1 = new AnonymousClass1(continuation);
            }
        } else {
            anonymousClass1 = new AnonymousClass1(continuation);
        }
        Object obj = anonymousClass1.result;
        Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
        int i = anonymousClass1.label;
        if (i == 0) {
            ResultKt.throwOnFailure(obj);
            ClientInfoKt.Dsl.Companion companion = ClientInfoKt.Dsl.INSTANCE;
            ClientInfoOuterClass.ClientInfo.Builder builderNewBuilder = ClientInfoOuterClass.ClientInfo.newBuilder();
            Intrinsics.checkNotNullExpressionValue(builderNewBuilder, "newBuilder(...)");
            ClientInfoKt.Dsl dsl_create = companion._create(builderNewBuilder);
            dsl_create.setSdkVersion(42000);
            dsl_create.setSdkVersionName("4.20.0");
            String gameId = this.sessionRepository.getGameId();
            if (gameId != null) {
                dsl_create.setGameId(gameId);
            }
            dsl_create.setTest(this.sessionRepository.isTestModeEnabled());
            dsl_create.setPlatform(ClientInfoOuterClass.Platform.PLATFORM_ANDROID);
            dsl_create.setMediationProvider(this.mediationRepository.getMediationProvider().invoke());
            String name = this.mediationRepository.getName();
            if (name != null && dsl_create.getMediationProvider() == ClientInfoOuterClass.MediationProvider.MEDIATION_PROVIDER_CUSTOM && !StringsKt.isBlank(name)) {
                dsl_create.setCustomMediationName(name);
            }
            String version = this.mediationRepository.getVersion();
            if (version != null) {
                dsl_create.setMediationVersion(version);
            }
            OfferwallManager offerwallManager = this.offerwallManager;
            anonymousClass1.L$0 = dsl_create;
            anonymousClass1.L$1 = dsl_create;
            anonymousClass1.label = 1;
            Object version2 = offerwallManager.getVersion(anonymousClass1);
            if (version2 == coroutine_suspended) {
                return coroutine_suspended;
            }
            dsl = dsl_create;
            obj = version2;
            dsl2 = dsl;
        } else {
            if (i != 1) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            dsl = (ClientInfoKt.Dsl) anonymousClass1.L$1;
            dsl2 = (ClientInfoKt.Dsl) anonymousClass1.L$0;
            ResultKt.throwOnFailure(obj);
        }
        String str = (String) obj;
        if (str != null) {
            dsl.setOfferwallVersion(str);
        }
        dsl.setOmidVersion(this.omidManager.getVersion());
        dsl.setOmidPartnerVersion("1");
        dsl.setSdkDevelopmentPlatform(MadeWithUnityDetector.isMadeWithUnity() ? "Unity" : "");
        dsl.setIsFidAvailable(this.fIdExistenceDataSource.invoke());
        String strInvoke = this.adQualityVersionDataSource.invoke();
        if (strInvoke != null) {
            dsl.setAdQualitySdkVersion(strInvoke);
        }
        return dsl2._build();
    }
}
