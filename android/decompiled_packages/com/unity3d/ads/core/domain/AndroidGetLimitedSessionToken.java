package com.unity3d.ads.core.domain;

import com.unity3d.ads.core.data.repository.DeviceInfoRepository;
import com.unity3d.ads.core.data.repository.MediationRepository;
import com.unity3d.ads.core.data.repository.SessionRepository;
import gatewayprotocol.v1.ClientInfoOuterClass;
import gatewayprotocol.v1.LimitedSessionTokenKt;
import gatewayprotocol.v1.StaticDeviceInfoOuterClass;
import gatewayprotocol.v1.UniversalRequestOuterClass;
import kotlin.Metadata;
import kotlin.ResultKt;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.intrinsics.IntrinsicsKt;
import kotlin.coroutines.jvm.internal.ContinuationImpl;
import kotlin.coroutines.jvm.internal.DebugMetadata;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: AndroidGetLimitedSessionToken.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000&\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0002\b\u0000\u0018\u00002\u00020\u0001B\u001f\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0007¢\u0006\u0004\b\b\u0010\tJ\u000e\u0010\n\u001a\u00020\u000bH\u0096B¢\u0006\u0002\u0010\fR\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0007X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\r"}, d2 = {"Lcom/unity3d/ads/core/domain/AndroidGetLimitedSessionToken;", "Lcom/unity3d/ads/core/domain/GetLimitedSessionToken;", "deviceInfoRepository", "Lcom/unity3d/ads/core/data/repository/DeviceInfoRepository;", "sessionRepository", "Lcom/unity3d/ads/core/data/repository/SessionRepository;", "mediationRepository", "Lcom/unity3d/ads/core/data/repository/MediationRepository;", "<init>", "(Lcom/unity3d/ads/core/data/repository/DeviceInfoRepository;Lcom/unity3d/ads/core/data/repository/SessionRepository;Lcom/unity3d/ads/core/data/repository/MediationRepository;)V", "invoke", "Lgatewayprotocol/v1/UniversalRequestOuterClass$LimitedSessionToken;", "(Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "unity-ads_defaultRelease"}, k = 1, mv = {2, 1, 0}, xi = 48)
public final class AndroidGetLimitedSessionToken implements GetLimitedSessionToken {
    private final DeviceInfoRepository deviceInfoRepository;
    private final MediationRepository mediationRepository;
    private final SessionRepository sessionRepository;

    /* JADX INFO: renamed from: com.unity3d.ads.core.domain.AndroidGetLimitedSessionToken$invoke$1, reason: invalid class name */
    /* JADX INFO: compiled from: AndroidGetLimitedSessionToken.kt */
    @Metadata(k = 3, mv = {2, 1, 0}, xi = 48)
    @DebugMetadata(c = "com.unity3d.ads.core.domain.AndroidGetLimitedSessionToken", f = "AndroidGetLimitedSessionToken.kt", i = {0, 1, 2, 3}, l = {19, 20, 21, 22}, m = "invoke", n = {"$this$invoke_u24lambda_u243", "$this$invoke_u24lambda_u243", "$this$invoke_u24lambda_u243", "$this$invoke_u24lambda_u243"}, s = {"L$1", "L$1", "L$1", "L$1"})
    static final class AnonymousClass1 extends ContinuationImpl {
        Object L$0;
        Object L$1;
        Object L$2;
        int label;
        /* synthetic */ Object result;

        AnonymousClass1(Continuation<? super AnonymousClass1> continuation) {
            super(continuation);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            this.result = obj;
            this.label |= Integer.MIN_VALUE;
            return AndroidGetLimitedSessionToken.this.invoke(this);
        }
    }

    public AndroidGetLimitedSessionToken(DeviceInfoRepository deviceInfoRepository, SessionRepository sessionRepository, MediationRepository mediationRepository) {
        Intrinsics.checkNotNullParameter(deviceInfoRepository, "deviceInfoRepository");
        Intrinsics.checkNotNullParameter(sessionRepository, "sessionRepository");
        Intrinsics.checkNotNullParameter(mediationRepository, "mediationRepository");
        this.deviceInfoRepository = deviceInfoRepository;
        this.sessionRepository = sessionRepository;
        this.mediationRepository = mediationRepository;
    }

    /* JADX WARN: Code duplicated, block: B:31:0x00e8  */
    /* JADX WARN: Code duplicated, block: B:35:0x010a  */
    /* JADX WARN: Code duplicated, block: B:38:0x0125  */
    /* JADX WARN: Code duplicated, block: B:46:0x0157  */
    /* JADX WARN: Code duplicated, block: B:7:0x0014  */
    @Override // com.unity3d.ads.core.domain.GetLimitedSessionToken
    public Object invoke(Continuation<? super UniversalRequestOuterClass.LimitedSessionToken> continuation) {
        AnonymousClass1 anonymousClass1;
        LimitedSessionTokenKt.Dsl dsl_create;
        LimitedSessionTokenKt.Dsl dsl;
        LimitedSessionTokenKt.Dsl dsl2;
        LimitedSessionTokenKt.Dsl dsl3;
        LimitedSessionTokenKt.Dsl dsl4;
        LimitedSessionTokenKt.Dsl dsl5;
        LimitedSessionTokenKt.Dsl dsl6;
        LimitedSessionTokenKt.Dsl dsl7;
        LimitedSessionTokenKt.Dsl dsl8;
        LimitedSessionTokenKt.Dsl dsl9;
        LimitedSessionTokenKt.Dsl dsl10;
        LimitedSessionTokenKt.Dsl dsl11;
        String gameId;
        String name;
        String version;
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
        Object objStaticDeviceInfo = anonymousClass1.result;
        Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
        int i = anonymousClass1.label;
        if (i != 0) {
            if (i == 1) {
                dsl_create = (LimitedSessionTokenKt.Dsl) anonymousClass1.L$2;
                dsl = (LimitedSessionTokenKt.Dsl) anonymousClass1.L$1;
                dsl2 = (LimitedSessionTokenKt.Dsl) anonymousClass1.L$0;
                ResultKt.throwOnFailure(objStaticDeviceInfo);
            } else {
                if (i == 2) {
                    dsl3 = (LimitedSessionTokenKt.Dsl) anonymousClass1.L$2;
                    dsl4 = (LimitedSessionTokenKt.Dsl) anonymousClass1.L$1;
                    dsl5 = (LimitedSessionTokenKt.Dsl) anonymousClass1.L$0;
                    ResultKt.throwOnFailure(objStaticDeviceInfo);
                    String deviceModel = ((StaticDeviceInfoOuterClass.StaticDeviceInfo) objStaticDeviceInfo).getDeviceModel();
                    Intrinsics.checkNotNullExpressionValue(deviceModel, "getDeviceModel(...)");
                    dsl3.setDeviceModel(deviceModel);
                    DeviceInfoRepository deviceInfoRepository = this.deviceInfoRepository;
                    anonymousClass1.L$0 = dsl5;
                    anonymousClass1.L$1 = dsl4;
                    anonymousClass1.L$2 = dsl4;
                    anonymousClass1.label = 3;
                    objStaticDeviceInfo = deviceInfoRepository.staticDeviceInfo(anonymousClass1);
                    if (objStaticDeviceInfo != coroutine_suspended) {
                        dsl6 = dsl4;
                        dsl7 = dsl6;
                        dsl8 = dsl5;
                        String osVersion = ((StaticDeviceInfoOuterClass.StaticDeviceInfo) objStaticDeviceInfo).getOsVersion();
                        Intrinsics.checkNotNullExpressionValue(osVersion, "getOsVersion(...)");
                        dsl6.setOsVersion(osVersion);
                        DeviceInfoRepository deviceInfoRepository2 = this.deviceInfoRepository;
                        anonymousClass1.L$0 = dsl8;
                        anonymousClass1.L$1 = dsl7;
                        anonymousClass1.L$2 = dsl7;
                        anonymousClass1.label = 4;
                        objStaticDeviceInfo = deviceInfoRepository2.getIdfi(anonymousClass1);
                        if (objStaticDeviceInfo != coroutine_suspended) {
                            dsl9 = dsl7;
                            dsl10 = dsl9;
                            dsl11 = dsl8;
                        }
                    }
                    return coroutine_suspended;
                }
                if (i == 3) {
                    dsl6 = (LimitedSessionTokenKt.Dsl) anonymousClass1.L$2;
                    dsl7 = (LimitedSessionTokenKt.Dsl) anonymousClass1.L$1;
                    dsl8 = (LimitedSessionTokenKt.Dsl) anonymousClass1.L$0;
                    ResultKt.throwOnFailure(objStaticDeviceInfo);
                    String osVersion2 = ((StaticDeviceInfoOuterClass.StaticDeviceInfo) objStaticDeviceInfo).getOsVersion();
                    Intrinsics.checkNotNullExpressionValue(osVersion2, "getOsVersion(...)");
                    dsl6.setOsVersion(osVersion2);
                    DeviceInfoRepository deviceInfoRepository3 = this.deviceInfoRepository;
                    anonymousClass1.L$0 = dsl8;
                    anonymousClass1.L$1 = dsl7;
                    anonymousClass1.L$2 = dsl7;
                    anonymousClass1.label = 4;
                    objStaticDeviceInfo = deviceInfoRepository3.getIdfi(anonymousClass1);
                    if (objStaticDeviceInfo != coroutine_suspended) {
                        dsl9 = dsl7;
                        dsl10 = dsl9;
                        dsl11 = dsl8;
                    }
                    return coroutine_suspended;
                }
                if (i != 4) {
                    throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
                dsl9 = (LimitedSessionTokenKt.Dsl) anonymousClass1.L$2;
                dsl10 = (LimitedSessionTokenKt.Dsl) anonymousClass1.L$1;
                dsl11 = (LimitedSessionTokenKt.Dsl) anonymousClass1.L$0;
                ResultKt.throwOnFailure(objStaticDeviceInfo);
            }
            dsl9.setIdfi((String) objStaticDeviceInfo);
            dsl10.setSdkVersion(42000);
            dsl10.setSdkVersionName("4.20.0");
            gameId = this.sessionRepository.getGameId();
            if (gameId != null) {
                dsl10.setGameId(gameId);
            }
            dsl10.setPlatform(ClientInfoOuterClass.Platform.PLATFORM_ANDROID);
            dsl10.setMediationProvider(this.mediationRepository.getMediationProvider().invoke());
            name = this.mediationRepository.getName();
            if (name != null && dsl10.getMediationProvider() == ClientInfoOuterClass.MediationProvider.MEDIATION_PROVIDER_CUSTOM) {
                dsl10.setCustomMediationName(name);
            }
            version = this.mediationRepository.getVersion();
            if (version != null) {
                dsl10.setMediationVersion(version);
            }
            return dsl11._build();
        }
        ResultKt.throwOnFailure(objStaticDeviceInfo);
        LimitedSessionTokenKt.Dsl.Companion companion = LimitedSessionTokenKt.Dsl.INSTANCE;
        UniversalRequestOuterClass.LimitedSessionToken.Builder builderNewBuilder = UniversalRequestOuterClass.LimitedSessionToken.newBuilder();
        Intrinsics.checkNotNullExpressionValue(builderNewBuilder, "newBuilder(...)");
        dsl_create = companion._create(builderNewBuilder);
        dsl_create.setSessionId(this.sessionRepository.getSessionId());
        DeviceInfoRepository deviceInfoRepository4 = this.deviceInfoRepository;
        anonymousClass1.L$0 = dsl_create;
        anonymousClass1.L$1 = dsl_create;
        anonymousClass1.L$2 = dsl_create;
        anonymousClass1.label = 1;
        objStaticDeviceInfo = deviceInfoRepository4.staticDeviceInfo(anonymousClass1);
        if (objStaticDeviceInfo != coroutine_suspended) {
            dsl = dsl_create;
            dsl2 = dsl;
        }
        return coroutine_suspended;
        String deviceMake = ((StaticDeviceInfoOuterClass.StaticDeviceInfo) objStaticDeviceInfo).getDeviceMake();
        Intrinsics.checkNotNullExpressionValue(deviceMake, "getDeviceMake(...)");
        dsl_create.setDeviceMake(deviceMake);
        DeviceInfoRepository deviceInfoRepository5 = this.deviceInfoRepository;
        anonymousClass1.L$0 = dsl2;
        anonymousClass1.L$1 = dsl;
        anonymousClass1.L$2 = dsl;
        anonymousClass1.label = 2;
        objStaticDeviceInfo = deviceInfoRepository5.staticDeviceInfo(anonymousClass1);
        if (objStaticDeviceInfo != coroutine_suspended) {
            dsl3 = dsl;
            dsl4 = dsl3;
            dsl5 = dsl2;
            String deviceModel2 = ((StaticDeviceInfoOuterClass.StaticDeviceInfo) objStaticDeviceInfo).getDeviceModel();
            Intrinsics.checkNotNullExpressionValue(deviceModel2, "getDeviceModel(...)");
            dsl3.setDeviceModel(deviceModel2);
            DeviceInfoRepository deviceInfoRepository6 = this.deviceInfoRepository;
            anonymousClass1.L$0 = dsl5;
            anonymousClass1.L$1 = dsl4;
            anonymousClass1.L$2 = dsl4;
            anonymousClass1.label = 3;
            objStaticDeviceInfo = deviceInfoRepository6.staticDeviceInfo(anonymousClass1);
            if (objStaticDeviceInfo != coroutine_suspended) {
                dsl6 = dsl4;
                dsl7 = dsl6;
                dsl8 = dsl5;
                String osVersion3 = ((StaticDeviceInfoOuterClass.StaticDeviceInfo) objStaticDeviceInfo).getOsVersion();
                Intrinsics.checkNotNullExpressionValue(osVersion3, "getOsVersion(...)");
                dsl6.setOsVersion(osVersion3);
                DeviceInfoRepository deviceInfoRepository7 = this.deviceInfoRepository;
                anonymousClass1.L$0 = dsl8;
                anonymousClass1.L$1 = dsl7;
                anonymousClass1.L$2 = dsl7;
                anonymousClass1.label = 4;
                objStaticDeviceInfo = deviceInfoRepository7.getIdfi(anonymousClass1);
                if (objStaticDeviceInfo != coroutine_suspended) {
                    dsl9 = dsl7;
                    dsl10 = dsl9;
                    dsl11 = dsl8;
                    dsl9.setIdfi((String) objStaticDeviceInfo);
                    dsl10.setSdkVersion(42000);
                    dsl10.setSdkVersionName("4.20.0");
                    gameId = this.sessionRepository.getGameId();
                    if (gameId != null) {
                        dsl10.setGameId(gameId);
                    }
                    dsl10.setPlatform(ClientInfoOuterClass.Platform.PLATFORM_ANDROID);
                    dsl10.setMediationProvider(this.mediationRepository.getMediationProvider().invoke());
                    name = this.mediationRepository.getName();
                    if (name != null) {
                        dsl10.setCustomMediationName(name);
                    }
                    version = this.mediationRepository.getVersion();
                    if (version != null) {
                        dsl10.setMediationVersion(version);
                    }
                    return dsl11._build();
                }
            }
        }
        return coroutine_suspended;
    }
}
