package com.unity3d.ads.core.domain;

import com.google.protobuf.ByteString;
import com.google.protobuf.kotlin.ByteStringsKt;
import com.unity3d.ads.BannerSize;
import com.unity3d.ads.MediationInfo;
import com.unity3d.ads.TokenConfiguration;
import com.unity3d.ads.UnityAds;
import com.unity3d.ads.core.data.manager.OfferwallManager;
import com.unity3d.ads.core.data.model.TokenCounters;
import com.unity3d.ads.core.data.repository.CampaignRepository;
import com.unity3d.ads.core.data.repository.DeviceInfoRepository;
import com.unity3d.ads.core.data.repository.SessionRepository;
import com.unity3d.ads.core.data.repository.TcfRepository;
import com.unity3d.ads.core.extensions.AdFormatExtensions;
import gatewayprotocol.v1.AdRequestOuterClass;
import gatewayprotocol.v1.BannerSizeKt;
import gatewayprotocol.v1.ClientInfoOuterClass;
import gatewayprotocol.v1.HeaderBiddingTokenKt;
import gatewayprotocol.v1.HeaderBiddingTokenOuterClass;
import gatewayprotocol.v1.InitializationDataOuterClass;
import gatewayprotocol.v1.StaticDeviceInfoOuterClass;
import gatewayprotocol.v1.TestDataOuterClass;
import gatewayprotocol.v1.TokenCountersKt;
import gatewayprotocol.v1.UniversalRequestOuterClass;
import kotlin.Metadata;
import kotlin.ResultKt;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.intrinsics.IntrinsicsKt;
import kotlin.coroutines.jvm.internal.ContinuationImpl;
import kotlin.coroutines.jvm.internal.DebugMetadata;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: AndroidBuildHeaderBiddingToken.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000h\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\b\u0000\u0018\u00002\u00020\u0001Bg\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0007\u0012\u0006\u0010\b\u001a\u00020\t\u0012\u0006\u0010\n\u001a\u00020\u000b\u0012\u0006\u0010\f\u001a\u00020\r\u0012\u0006\u0010\u000e\u001a\u00020\u000f\u0012\u0006\u0010\u0010\u001a\u00020\u0011\u0012\u0006\u0010\u0012\u001a\u00020\u0013\u0012\u0006\u0010\u0014\u001a\u00020\u0015\u0012\u0006\u0010\u0016\u001a\u00020\u0017\u0012\u0006\u0010\u0018\u001a\u00020\u0019¢\u0006\u0004\b\u001a\u0010\u001bJ \u0010\u001c\u001a\u00020\u001d2\u0006\u0010\u001e\u001a\u00020\u001f2\b\u0010 \u001a\u0004\u0018\u00010!H\u0096B¢\u0006\u0002\u0010\"R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0007X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\b\u001a\u00020\tX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\n\u001a\u00020\u000bX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\f\u001a\u00020\rX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u000e\u001a\u00020\u000fX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0010\u001a\u00020\u0011X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0012\u001a\u00020\u0013X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0014\u001a\u00020\u0015X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0016\u001a\u00020\u0017X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0018\u001a\u00020\u0019X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006#"}, d2 = {"Lcom/unity3d/ads/core/domain/AndroidBuildHeaderBiddingToken;", "Lcom/unity3d/ads/core/domain/BuildHeaderBiddingToken;", "generateId", "Lcom/unity3d/ads/core/domain/GetByteStringId;", "getClientInfo", "Lcom/unity3d/ads/core/domain/GetClientInfo;", "getTimestamps", "Lcom/unity3d/ads/core/domain/GetSharedDataTimestamps;", "getLimitedSessionToken", "Lcom/unity3d/ads/core/domain/GetLimitedSessionToken;", "getInitializationData", "Lcom/unity3d/ads/core/domain/GetInitializationData;", "deviceInfoRepository", "Lcom/unity3d/ads/core/data/repository/DeviceInfoRepository;", "sessionRepository", "Lcom/unity3d/ads/core/data/repository/SessionRepository;", "campaignRepository", "Lcom/unity3d/ads/core/data/repository/CampaignRepository;", "tcfRepository", "Lcom/unity3d/ads/core/data/repository/TcfRepository;", "testDataInfo", "Lcom/unity3d/ads/core/domain/AndroidTestDataInfo;", "offerwallManager", "Lcom/unity3d/ads/core/data/manager/OfferwallManager;", "mediationInfoConverter", "Lcom/unity3d/ads/core/domain/MediationInfoConverter;", "<init>", "(Lcom/unity3d/ads/core/domain/GetByteStringId;Lcom/unity3d/ads/core/domain/GetClientInfo;Lcom/unity3d/ads/core/domain/GetSharedDataTimestamps;Lcom/unity3d/ads/core/domain/GetLimitedSessionToken;Lcom/unity3d/ads/core/domain/GetInitializationData;Lcom/unity3d/ads/core/data/repository/DeviceInfoRepository;Lcom/unity3d/ads/core/data/repository/SessionRepository;Lcom/unity3d/ads/core/data/repository/CampaignRepository;Lcom/unity3d/ads/core/data/repository/TcfRepository;Lcom/unity3d/ads/core/domain/AndroidTestDataInfo;Lcom/unity3d/ads/core/data/manager/OfferwallManager;Lcom/unity3d/ads/core/domain/MediationInfoConverter;)V", "invoke", "Lgatewayprotocol/v1/HeaderBiddingTokenOuterClass$HeaderBiddingToken;", "tokenNumber", "", "tokenConfiguration", "Lcom/unity3d/ads/TokenConfiguration;", "(ILcom/unity3d/ads/TokenConfiguration;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "unity-ads_defaultRelease"}, k = 1, mv = {2, 1, 0}, xi = 48)
public final class AndroidBuildHeaderBiddingToken implements BuildHeaderBiddingToken {
    private final CampaignRepository campaignRepository;
    private final DeviceInfoRepository deviceInfoRepository;
    private final GetByteStringId generateId;
    private final GetClientInfo getClientInfo;
    private final GetInitializationData getInitializationData;
    private final GetLimitedSessionToken getLimitedSessionToken;
    private final GetSharedDataTimestamps getTimestamps;
    private final MediationInfoConverter mediationInfoConverter;
    private final OfferwallManager offerwallManager;
    private final SessionRepository sessionRepository;
    private final TcfRepository tcfRepository;
    private final AndroidTestDataInfo testDataInfo;

    /* JADX INFO: renamed from: com.unity3d.ads.core.domain.AndroidBuildHeaderBiddingToken$invoke$1, reason: invalid class name */
    /* JADX INFO: compiled from: AndroidBuildHeaderBiddingToken.kt */
    @Metadata(k = 3, mv = {2, 1, 0}, xi = 48)
    @DebugMetadata(c = "com.unity3d.ads.core.domain.AndroidBuildHeaderBiddingToken", f = "AndroidBuildHeaderBiddingToken.kt", i = {0, 0, 0, 0, 1, 1, 1, 2, 2, 3, 3, 4, 4}, l = {44, 66, 72, 75, 77}, m = "invoke", n = {"tokenConfiguration", "currentTokenCounters", "sToken", "$this$invoke_u24lambda_u2410", "currentTokenCounters", "sToken", "$this$invoke_u24lambda_u2410", "currentTokenCounters", "$this$invoke_u24lambda_u2410", "currentTokenCounters", "$this$invoke_u24lambda_u2410", "currentTokenCounters", "$this$invoke_u24lambda_u2410"}, s = {"L$0", "L$1", "L$2", "L$4", "L$0", "L$1", "L$3", "L$0", "L$2", "L$0", "L$2", "L$0", "L$2"})
    static final class AnonymousClass1 extends ContinuationImpl {
        Object L$0;
        Object L$1;
        Object L$2;
        Object L$3;
        Object L$4;
        Object L$5;
        int label;
        /* synthetic */ Object result;

        AnonymousClass1(Continuation<? super AnonymousClass1> continuation) {
            super(continuation);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            this.result = obj;
            this.label |= Integer.MIN_VALUE;
            return AndroidBuildHeaderBiddingToken.this.invoke(0, null, this);
        }
    }

    public AndroidBuildHeaderBiddingToken(GetByteStringId generateId, GetClientInfo getClientInfo, GetSharedDataTimestamps getTimestamps, GetLimitedSessionToken getLimitedSessionToken, GetInitializationData getInitializationData, DeviceInfoRepository deviceInfoRepository, SessionRepository sessionRepository, CampaignRepository campaignRepository, TcfRepository tcfRepository, AndroidTestDataInfo testDataInfo, OfferwallManager offerwallManager, MediationInfoConverter mediationInfoConverter) {
        Intrinsics.checkNotNullParameter(generateId, "generateId");
        Intrinsics.checkNotNullParameter(getClientInfo, "getClientInfo");
        Intrinsics.checkNotNullParameter(getTimestamps, "getTimestamps");
        Intrinsics.checkNotNullParameter(getLimitedSessionToken, "getLimitedSessionToken");
        Intrinsics.checkNotNullParameter(getInitializationData, "getInitializationData");
        Intrinsics.checkNotNullParameter(deviceInfoRepository, "deviceInfoRepository");
        Intrinsics.checkNotNullParameter(sessionRepository, "sessionRepository");
        Intrinsics.checkNotNullParameter(campaignRepository, "campaignRepository");
        Intrinsics.checkNotNullParameter(tcfRepository, "tcfRepository");
        Intrinsics.checkNotNullParameter(testDataInfo, "testDataInfo");
        Intrinsics.checkNotNullParameter(offerwallManager, "offerwallManager");
        Intrinsics.checkNotNullParameter(mediationInfoConverter, "mediationInfoConverter");
        this.generateId = generateId;
        this.getClientInfo = getClientInfo;
        this.getTimestamps = getTimestamps;
        this.getLimitedSessionToken = getLimitedSessionToken;
        this.getInitializationData = getInitializationData;
        this.deviceInfoRepository = deviceInfoRepository;
        this.sessionRepository = sessionRepository;
        this.campaignRepository = campaignRepository;
        this.tcfRepository = tcfRepository;
        this.testDataInfo = testDataInfo;
        this.offerwallManager = offerwallManager;
        this.mediationInfoConverter = mediationInfoConverter;
    }

    /* JADX WARN: Code duplicated, block: B:49:0x01c7  */
    /* JADX WARN: Code duplicated, block: B:52:0x01d0  */
    /* JADX WARN: Code duplicated, block: B:62:0x01fe  */
    /* JADX WARN: Code duplicated, block: B:65:0x0213  */
    /* JADX WARN: Code duplicated, block: B:70:0x022e  */
    /* JADX WARN: Code duplicated, block: B:72:0x0239  */
    /* JADX WARN: Code duplicated, block: B:75:0x0253  */
    /* JADX WARN: Code duplicated, block: B:7:0x0014  */
    @Override // com.unity3d.ads.core.domain.BuildHeaderBiddingToken
    public Object invoke(int i, TokenConfiguration tokenConfiguration, Continuation<? super HeaderBiddingTokenOuterClass.HeaderBiddingToken> continuation) {
        AnonymousClass1 anonymousClass1;
        TokenCounters tokenCounters;
        HeaderBiddingTokenKt.Dsl dsl_create;
        TokenConfiguration tokenConfiguration2;
        ByteString byteString;
        HeaderBiddingTokenKt.Dsl dsl;
        HeaderBiddingTokenKt.Dsl dsl2;
        HeaderBiddingTokenKt.Dsl dsl3;
        ByteString byteString2;
        TokenCounters tokenCounters2;
        String userIdentifier;
        String gameId;
        HeaderBiddingTokenKt.Dsl dsl4;
        TokenCounters tokenCounters3;
        HeaderBiddingTokenKt.Dsl dsl5;
        HeaderBiddingTokenKt.Dsl dsl6;
        HeaderBiddingTokenKt.Dsl dsl7;
        TokenCounters tokenCounters4;
        TestDataOuterClass.TestData testDataInvoke;
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
        Object objIsConnected = anonymousClass1.result;
        Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
        int i2 = anonymousClass1.label;
        if (i2 == 0) {
            ResultKt.throwOnFailure(objIsConnected);
            tokenCounters = this.sessionRepository.getTokenCounters();
            ByteString sessionToken = this.sessionRepository.getSessionToken();
            this.sessionRepository.incrementTokenSequenceNumber();
            HeaderBiddingTokenKt.Dsl.Companion companion = HeaderBiddingTokenKt.Dsl.INSTANCE;
            HeaderBiddingTokenOuterClass.HeaderBiddingToken.Builder builderNewBuilder = HeaderBiddingTokenOuterClass.HeaderBiddingToken.newBuilder();
            Intrinsics.checkNotNullExpressionValue(builderNewBuilder, "newBuilder(...)");
            dsl_create = companion._create(builderNewBuilder);
            dsl_create.setTokenId(this.generateId.invoke());
            dsl_create.setTokenNumber(i);
            GetClientInfo getClientInfo = this.getClientInfo;
            anonymousClass1.L$0 = tokenConfiguration;
            anonymousClass1.L$1 = tokenCounters;
            anonymousClass1.L$2 = sessionToken;
            anonymousClass1.L$3 = dsl_create;
            anonymousClass1.L$4 = dsl_create;
            anonymousClass1.L$5 = dsl_create;
            anonymousClass1.label = 1;
            Object objInvoke = getClientInfo.invoke(anonymousClass1);
            if (objInvoke != coroutine_suspended) {
                tokenConfiguration2 = tokenConfiguration;
                byteString = sessionToken;
                dsl = dsl_create;
                objIsConnected = objInvoke;
                dsl2 = dsl;
            }
            return coroutine_suspended;
        }
        if (i2 == 1) {
            dsl2 = (HeaderBiddingTokenKt.Dsl) anonymousClass1.L$5;
            dsl = (HeaderBiddingTokenKt.Dsl) anonymousClass1.L$4;
            dsl_create = (HeaderBiddingTokenKt.Dsl) anonymousClass1.L$3;
            byteString = (ByteString) anonymousClass1.L$2;
            tokenCounters = (TokenCounters) anonymousClass1.L$1;
            tokenConfiguration2 = (TokenConfiguration) anonymousClass1.L$0;
            ResultKt.throwOnFailure(objIsConnected);
        } else {
            if (i2 == 2) {
                dsl3 = (HeaderBiddingTokenKt.Dsl) anonymousClass1.L$4;
                dsl = (HeaderBiddingTokenKt.Dsl) anonymousClass1.L$3;
                dsl_create = (HeaderBiddingTokenKt.Dsl) anonymousClass1.L$2;
                byteString2 = (ByteString) anonymousClass1.L$1;
                tokenCounters2 = (TokenCounters) anonymousClass1.L$0;
                ResultKt.throwOnFailure(objIsConnected);
                dsl3.setOfferwallEnabled(((Boolean) objIsConnected).booleanValue());
                userIdentifier = UnityAds.getUserIdentifier();
                if (userIdentifier != null) {
                    dsl.setExternalUserIdentifier(userIdentifier);
                }
                if (byteString2.isEmpty()) {
                    gameId = this.sessionRepository.getGameId();
                    if (gameId == null && gameId.length() > 0) {
                        GetInitializationData getInitializationData = this.getInitializationData;
                        anonymousClass1.L$0 = tokenCounters2;
                        anonymousClass1.L$1 = dsl_create;
                        anonymousClass1.L$2 = dsl;
                        anonymousClass1.L$3 = dsl;
                        anonymousClass1.L$4 = null;
                        anonymousClass1.label = 3;
                        objIsConnected = getInitializationData.invoke(anonymousClass1);
                        if (objIsConnected != coroutine_suspended) {
                            dsl5 = dsl;
                            tokenCounters3 = tokenCounters2;
                            dsl5.setInitializationData((InitializationDataOuterClass.InitializationData) objIsConnected);
                            dsl6 = dsl;
                            DeviceInfoRepository deviceInfoRepository = this.deviceInfoRepository;
                            anonymousClass1.L$0 = tokenCounters3;
                            anonymousClass1.L$1 = dsl_create;
                            anonymousClass1.L$2 = dsl6;
                            anonymousClass1.L$3 = dsl6;
                            anonymousClass1.label = 5;
                            objIsConnected = deviceInfoRepository.staticDeviceInfo(anonymousClass1);
                            if (objIsConnected != coroutine_suspended) {
                                dsl = dsl6;
                                dsl7 = dsl_create;
                                tokenCounters4 = tokenCounters3;
                            }
                        }
                    } else {
                        GetLimitedSessionToken getLimitedSessionToken = this.getLimitedSessionToken;
                        anonymousClass1.L$0 = tokenCounters2;
                        anonymousClass1.L$1 = dsl_create;
                        anonymousClass1.L$2 = dsl;
                        anonymousClass1.L$3 = dsl;
                        anonymousClass1.L$4 = null;
                        anonymousClass1.label = 4;
                        objIsConnected = getLimitedSessionToken.invoke(anonymousClass1);
                        if (objIsConnected != coroutine_suspended) {
                            dsl4 = dsl;
                            tokenCounters3 = tokenCounters2;
                            dsl4.setLimitedSessionToken((UniversalRequestOuterClass.LimitedSessionToken) objIsConnected);
                            dsl6 = dsl;
                            DeviceInfoRepository deviceInfoRepository2 = this.deviceInfoRepository;
                            anonymousClass1.L$0 = tokenCounters3;
                            anonymousClass1.L$1 = dsl_create;
                            anonymousClass1.L$2 = dsl6;
                            anonymousClass1.L$3 = dsl6;
                            anonymousClass1.label = 5;
                            objIsConnected = deviceInfoRepository2.staticDeviceInfo(anonymousClass1);
                            if (objIsConnected != coroutine_suspended) {
                                dsl = dsl6;
                                dsl7 = dsl_create;
                                tokenCounters4 = tokenCounters3;
                            }
                        }
                    }
                    return coroutine_suspended;
                }
                dsl.setSessionToken(this.sessionRepository.getSessionToken());
                dsl.setStaticDeviceInfo(this.deviceInfoRepository.cachedStaticDeviceInfo());
                testDataInvoke = this.testDataInfo.invoke();
                if (testDataInvoke != null) {
                    dsl.setTestData(testDataInvoke);
                }
                TokenCountersKt.Dsl.Companion companion2 = TokenCountersKt.Dsl.INSTANCE;
                HeaderBiddingTokenOuterClass.TokenCounters.Builder builderNewBuilder2 = HeaderBiddingTokenOuterClass.TokenCounters.newBuilder();
                Intrinsics.checkNotNullExpressionValue(builderNewBuilder2, "newBuilder(...)");
                TokenCountersKt.Dsl dsl_create2 = companion2._create(builderNewBuilder2);
                dsl_create2.setSeq(tokenCounters2.getSeq());
                dsl_create2.setWins(tokenCounters2.getWins());
                dsl_create2.setStarts(tokenCounters2.getStarts());
                dsl.setTokenCounters(dsl_create2._build());
                return dsl_create._build();
            }
            if (i2 == 3) {
                dsl5 = (HeaderBiddingTokenKt.Dsl) anonymousClass1.L$3;
                dsl = (HeaderBiddingTokenKt.Dsl) anonymousClass1.L$2;
                dsl_create = (HeaderBiddingTokenKt.Dsl) anonymousClass1.L$1;
                tokenCounters3 = (TokenCounters) anonymousClass1.L$0;
                ResultKt.throwOnFailure(objIsConnected);
                dsl5.setInitializationData((InitializationDataOuterClass.InitializationData) objIsConnected);
                dsl6 = dsl;
                DeviceInfoRepository deviceInfoRepository3 = this.deviceInfoRepository;
                anonymousClass1.L$0 = tokenCounters3;
                anonymousClass1.L$1 = dsl_create;
                anonymousClass1.L$2 = dsl6;
                anonymousClass1.L$3 = dsl6;
                anonymousClass1.label = 5;
                objIsConnected = deviceInfoRepository3.staticDeviceInfo(anonymousClass1);
                if (objIsConnected != coroutine_suspended) {
                    dsl = dsl6;
                    dsl7 = dsl_create;
                    tokenCounters4 = tokenCounters3;
                }
                return coroutine_suspended;
            }
            if (i2 == 4) {
                dsl4 = (HeaderBiddingTokenKt.Dsl) anonymousClass1.L$3;
                dsl = (HeaderBiddingTokenKt.Dsl) anonymousClass1.L$2;
                dsl_create = (HeaderBiddingTokenKt.Dsl) anonymousClass1.L$1;
                tokenCounters3 = (TokenCounters) anonymousClass1.L$0;
                ResultKt.throwOnFailure(objIsConnected);
                dsl4.setLimitedSessionToken((UniversalRequestOuterClass.LimitedSessionToken) objIsConnected);
                dsl6 = dsl;
                DeviceInfoRepository deviceInfoRepository4 = this.deviceInfoRepository;
                anonymousClass1.L$0 = tokenCounters3;
                anonymousClass1.L$1 = dsl_create;
                anonymousClass1.L$2 = dsl6;
                anonymousClass1.L$3 = dsl6;
                anonymousClass1.label = 5;
                objIsConnected = deviceInfoRepository4.staticDeviceInfo(anonymousClass1);
                if (objIsConnected != coroutine_suspended) {
                    dsl = dsl6;
                    dsl7 = dsl_create;
                    tokenCounters4 = tokenCounters3;
                }
                return coroutine_suspended;
            }
            if (i2 != 5) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            dsl6 = (HeaderBiddingTokenKt.Dsl) anonymousClass1.L$3;
            dsl = (HeaderBiddingTokenKt.Dsl) anonymousClass1.L$2;
            dsl7 = (HeaderBiddingTokenKt.Dsl) anonymousClass1.L$1;
            tokenCounters4 = (TokenCounters) anonymousClass1.L$0;
            ResultKt.throwOnFailure(objIsConnected);
        }
        dsl6.setStaticDeviceInfo((StaticDeviceInfoOuterClass.StaticDeviceInfo) objIsConnected);
        tokenCounters2 = tokenCounters4;
        dsl_create = dsl7;
        testDataInvoke = this.testDataInfo.invoke();
        if (testDataInvoke != null) {
            dsl.setTestData(testDataInvoke);
        }
        TokenCountersKt.Dsl.Companion companion3 = TokenCountersKt.Dsl.INSTANCE;
        HeaderBiddingTokenOuterClass.TokenCounters.Builder builderNewBuilder3 = HeaderBiddingTokenOuterClass.TokenCounters.newBuilder();
        Intrinsics.checkNotNullExpressionValue(builderNewBuilder3, "newBuilder(...)");
        TokenCountersKt.Dsl dsl_create3 = companion3._create(builderNewBuilder3);
        dsl_create3.setSeq(tokenCounters2.getSeq());
        dsl_create3.setWins(tokenCounters2.getWins());
        dsl_create3.setStarts(tokenCounters2.getStarts());
        dsl.setTokenCounters(dsl_create3._build());
        return dsl_create._build();
        dsl2.setClientInfo((ClientInfoOuterClass.ClientInfo) objIsConnected);
        dsl.setTimestamps(this.getTimestamps.invoke());
        if (tokenConfiguration2 != null) {
            dsl.setAdFormat(AdFormatExtensions.toProtoAdFormat(tokenConfiguration2.getAdFormat()));
            dsl.putAllExtras(dsl.getExtrasMap(), tokenConfiguration2.getExtras());
            MediationInfo mediationInfo = tokenConfiguration2.get_mediationInfo();
            if (mediationInfo != null) {
                dsl.setMediationInfo(this.mediationInfoConverter.invoke(mediationInfo));
            }
            String str = tokenConfiguration2.get_placementId();
            if (str != null) {
                dsl.setPlacementId(str);
            }
            String str2 = tokenConfiguration2.get_mediationAdUnitId();
            if (str2 != null) {
                dsl.setMediationAdUnitId(str2);
            }
            BannerSize bannerSize = tokenConfiguration2.get_bannerSize();
            if (bannerSize != null) {
                BannerSizeKt.Dsl.Companion companion4 = BannerSizeKt.Dsl.INSTANCE;
                AdRequestOuterClass.BannerSize.Builder builderNewBuilder4 = AdRequestOuterClass.BannerSize.newBuilder();
                Intrinsics.checkNotNullExpressionValue(builderNewBuilder4, "newBuilder(...)");
                BannerSizeKt.Dsl dsl_create4 = companion4._create(builderNewBuilder4);
                dsl_create4.setWidth(bannerSize.getWidth());
                dsl_create4.setHeight(bannerSize.getHeight());
                dsl.setBannerSize(dsl_create4._build());
            }
        }
        dsl.setSessionCounters(this.sessionRepository.getSessionCounters());
        dsl.setDynamicDeviceInfo(this.deviceInfoRepository.getDynamicDeviceInfo());
        dsl.setPii(this.deviceInfoRepository.getPiiData());
        dsl.setCampaignState(this.campaignRepository.getCampaignState());
        String tcfString = this.tcfRepository.getTcfString();
        if (tcfString != null) {
            dsl.setTcf(ByteStringsKt.toByteStringUtf8(tcfString));
        }
        OfferwallManager offerwallManager = this.offerwallManager;
        anonymousClass1.L$0 = tokenCounters;
        anonymousClass1.L$1 = byteString;
        anonymousClass1.L$2 = dsl_create;
        anonymousClass1.L$3 = dsl;
        anonymousClass1.L$4 = dsl;
        anonymousClass1.L$5 = null;
        anonymousClass1.label = 2;
        objIsConnected = offerwallManager.isConnected(anonymousClass1);
        if (objIsConnected != coroutine_suspended) {
            dsl3 = dsl;
            byteString2 = byteString;
            tokenCounters2 = tokenCounters;
            dsl3.setOfferwallEnabled(((Boolean) objIsConnected).booleanValue());
            userIdentifier = UnityAds.getUserIdentifier();
            if (userIdentifier != null) {
                dsl.setExternalUserIdentifier(userIdentifier);
            }
            if (byteString2.isEmpty()) {
                gameId = this.sessionRepository.getGameId();
                if (gameId == null) {
                    GetLimitedSessionToken getLimitedSessionToken2 = this.getLimitedSessionToken;
                    anonymousClass1.L$0 = tokenCounters2;
                    anonymousClass1.L$1 = dsl_create;
                    anonymousClass1.L$2 = dsl;
                    anonymousClass1.L$3 = dsl;
                    anonymousClass1.L$4 = null;
                    anonymousClass1.label = 4;
                    objIsConnected = getLimitedSessionToken2.invoke(anonymousClass1);
                    if (objIsConnected != coroutine_suspended) {
                        dsl4 = dsl;
                        tokenCounters3 = tokenCounters2;
                        dsl4.setLimitedSessionToken((UniversalRequestOuterClass.LimitedSessionToken) objIsConnected);
                        dsl6 = dsl;
                        DeviceInfoRepository deviceInfoRepository5 = this.deviceInfoRepository;
                        anonymousClass1.L$0 = tokenCounters3;
                        anonymousClass1.L$1 = dsl_create;
                        anonymousClass1.L$2 = dsl6;
                        anonymousClass1.L$3 = dsl6;
                        anonymousClass1.label = 5;
                        objIsConnected = deviceInfoRepository5.staticDeviceInfo(anonymousClass1);
                        if (objIsConnected != coroutine_suspended) {
                            dsl = dsl6;
                            dsl7 = dsl_create;
                            tokenCounters4 = tokenCounters3;
                            dsl6.setStaticDeviceInfo((StaticDeviceInfoOuterClass.StaticDeviceInfo) objIsConnected);
                            tokenCounters2 = tokenCounters4;
                            dsl_create = dsl7;
                        }
                    }
                } else {
                    GetLimitedSessionToken getLimitedSessionToken3 = this.getLimitedSessionToken;
                    anonymousClass1.L$0 = tokenCounters2;
                    anonymousClass1.L$1 = dsl_create;
                    anonymousClass1.L$2 = dsl;
                    anonymousClass1.L$3 = dsl;
                    anonymousClass1.L$4 = null;
                    anonymousClass1.label = 4;
                    objIsConnected = getLimitedSessionToken3.invoke(anonymousClass1);
                    if (objIsConnected != coroutine_suspended) {
                        dsl4 = dsl;
                        tokenCounters3 = tokenCounters2;
                        dsl4.setLimitedSessionToken((UniversalRequestOuterClass.LimitedSessionToken) objIsConnected);
                        dsl6 = dsl;
                        DeviceInfoRepository deviceInfoRepository6 = this.deviceInfoRepository;
                        anonymousClass1.L$0 = tokenCounters3;
                        anonymousClass1.L$1 = dsl_create;
                        anonymousClass1.L$2 = dsl6;
                        anonymousClass1.L$3 = dsl6;
                        anonymousClass1.label = 5;
                        objIsConnected = deviceInfoRepository6.staticDeviceInfo(anonymousClass1);
                        if (objIsConnected != coroutine_suspended) {
                            dsl = dsl6;
                            dsl7 = dsl_create;
                            tokenCounters4 = tokenCounters3;
                            dsl6.setStaticDeviceInfo((StaticDeviceInfoOuterClass.StaticDeviceInfo) objIsConnected);
                            tokenCounters2 = tokenCounters4;
                            dsl_create = dsl7;
                        }
                    }
                }
            } else {
                dsl.setSessionToken(this.sessionRepository.getSessionToken());
                dsl.setStaticDeviceInfo(this.deviceInfoRepository.cachedStaticDeviceInfo());
            }
            testDataInvoke = this.testDataInfo.invoke();
            if (testDataInvoke != null) {
                dsl.setTestData(testDataInvoke);
            }
            TokenCountersKt.Dsl.Companion companion5 = TokenCountersKt.Dsl.INSTANCE;
            HeaderBiddingTokenOuterClass.TokenCounters.Builder builderNewBuilder5 = HeaderBiddingTokenOuterClass.TokenCounters.newBuilder();
            Intrinsics.checkNotNullExpressionValue(builderNewBuilder5, "newBuilder(...)");
            TokenCountersKt.Dsl dsl_create5 = companion5._create(builderNewBuilder5);
            dsl_create5.setSeq(tokenCounters2.getSeq());
            dsl_create5.setWins(tokenCounters2.getWins());
            dsl_create5.setStarts(tokenCounters2.getStarts());
            dsl.setTokenCounters(dsl_create5._build());
            return dsl_create._build();
        }
        return coroutine_suspended;
    }
}
