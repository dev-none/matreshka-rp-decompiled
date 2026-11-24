package com.unity3d.ads.core.domain;

import com.google.protobuf.ByteString;
import com.google.protobuf.kotlin.ByteStringsKt;
import com.unity3d.ads.core.data.datasource.WebviewConfigurationDataSource;
import com.unity3d.ads.core.data.model.LoadConfigurationInternal;
import com.unity3d.ads.core.data.repository.CampaignRepository;
import com.unity3d.ads.core.data.repository.DeviceInfoRepository;
import com.unity3d.ads.core.data.repository.SessionRepository;
import com.unity3d.ads.core.data.repository.TcfRepository;
import com.unity3d.ads.datastore.WebviewConfigurationStore;
import gatewayprotocol.v1.AdRequestKt;
import gatewayprotocol.v1.AdRequestOuterClass;
import gatewayprotocol.v1.StaticDeviceInfoOuterClass;
import gatewayprotocol.v1.UniversalRequestKt;
import gatewayprotocol.v1.UniversalRequestOuterClass;
import io.sentry.rrweb.RRWebVideoEvent;
import kotlin.Metadata;
import kotlin.ResultKt;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.intrinsics.IntrinsicsKt;
import kotlin.coroutines.jvm.internal.ContinuationImpl;
import kotlin.coroutines.jvm.internal.DebugMetadata;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.MutablePropertyReference0Impl;

/* JADX INFO: compiled from: AndroidGetAdRequest.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000P\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\b\u0000\u0018\u00002\u00020\u0001B7\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0007\u0012\u0006\u0010\b\u001a\u00020\t\u0012\u0006\u0010\n\u001a\u00020\u000b\u0012\u0006\u0010\f\u001a\u00020\r¢\u0006\u0004\b\u000e\u0010\u000fJ2\u0010\u0010\u001a\u00020\u00112\u0006\u0010\u0012\u001a\u00020\u00132\u0006\u0010\u0014\u001a\u00020\u00152\b\u0010\u0016\u001a\u0004\u0018\u00010\u00172\b\u0010\u0018\u001a\u0004\u0018\u00010\u0019H\u0096B¢\u0006\u0002\u0010\u001aR\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0007X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\b\u001a\u00020\tX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\n\u001a\u00020\u000bX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\f\u001a\u00020\rX\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u001b"}, d2 = {"Lcom/unity3d/ads/core/domain/AndroidGetAdRequest;", "Lcom/unity3d/ads/core/domain/GetAdRequest;", "getUniversalRequestForPayLoad", "Lcom/unity3d/ads/core/domain/GetUniversalRequestForPayLoad;", "sessionRepository", "Lcom/unity3d/ads/core/data/repository/SessionRepository;", "deviceInfoRepository", "Lcom/unity3d/ads/core/data/repository/DeviceInfoRepository;", "campaignRepository", "Lcom/unity3d/ads/core/data/repository/CampaignRepository;", "webViewConfigurationDataSource", "Lcom/unity3d/ads/core/data/datasource/WebviewConfigurationDataSource;", "tcfRepository", "Lcom/unity3d/ads/core/data/repository/TcfRepository;", "<init>", "(Lcom/unity3d/ads/core/domain/GetUniversalRequestForPayLoad;Lcom/unity3d/ads/core/data/repository/SessionRepository;Lcom/unity3d/ads/core/data/repository/DeviceInfoRepository;Lcom/unity3d/ads/core/data/repository/CampaignRepository;Lcom/unity3d/ads/core/data/datasource/WebviewConfigurationDataSource;Lcom/unity3d/ads/core/data/repository/TcfRepository;)V", "invoke", "Lgatewayprotocol/v1/UniversalRequestOuterClass$UniversalRequest;", "placement", "", "impressionOpportunity", "Lcom/google/protobuf/ByteString;", RRWebVideoEvent.JsonKeys.SIZE, "Lgatewayprotocol/v1/AdRequestOuterClass$BannerSize;", "loadConfiguration", "Lcom/unity3d/ads/core/data/model/LoadConfigurationInternal;", "(Ljava/lang/String;Lcom/google/protobuf/ByteString;Lgatewayprotocol/v1/AdRequestOuterClass$BannerSize;Lcom/unity3d/ads/core/data/model/LoadConfigurationInternal;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "unity-ads_defaultRelease"}, k = 1, mv = {2, 1, 0}, xi = 48)
public final class AndroidGetAdRequest implements GetAdRequest {
    private final CampaignRepository campaignRepository;
    private final DeviceInfoRepository deviceInfoRepository;
    private final GetUniversalRequestForPayLoad getUniversalRequestForPayLoad;
    private final SessionRepository sessionRepository;
    private final TcfRepository tcfRepository;
    private final WebviewConfigurationDataSource webViewConfigurationDataSource;

    /* JADX INFO: renamed from: com.unity3d.ads.core.domain.AndroidGetAdRequest$invoke$1, reason: invalid class name */
    /* JADX INFO: compiled from: AndroidGetAdRequest.kt */
    @Metadata(k = 3, mv = {2, 1, 0}, xi = 48)
    @DebugMetadata(c = "com.unity3d.ads.core.domain.AndroidGetAdRequest", f = "AndroidGetAdRequest.kt", i = {0, 0, 0, 0, 0, 1, 1, 1}, l = {35, 40, 63}, m = "invoke", n = {"placement", "impressionOpportunity", RRWebVideoEvent.JsonKeys.SIZE, "loadConfiguration", "$this$invoke_u24lambda_u242", RRWebVideoEvent.JsonKeys.SIZE, "loadConfiguration", "$this$invoke_u24lambda_u242"}, s = {"L$0", "L$1", "L$2", "L$3", "L$5", "L$0", "L$1", "L$3"})
    static final class AnonymousClass1 extends ContinuationImpl {
        Object L$0;
        Object L$1;
        Object L$2;
        Object L$3;
        Object L$4;
        Object L$5;
        Object L$6;
        int label;
        /* synthetic */ Object result;

        AnonymousClass1(Continuation<? super AnonymousClass1> continuation) {
            super(continuation);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            this.result = obj;
            this.label |= Integer.MIN_VALUE;
            return AndroidGetAdRequest.this.invoke(null, null, null, null, this);
        }
    }

    public AndroidGetAdRequest(GetUniversalRequestForPayLoad getUniversalRequestForPayLoad, SessionRepository sessionRepository, DeviceInfoRepository deviceInfoRepository, CampaignRepository campaignRepository, WebviewConfigurationDataSource webViewConfigurationDataSource, TcfRepository tcfRepository) {
        Intrinsics.checkNotNullParameter(getUniversalRequestForPayLoad, "getUniversalRequestForPayLoad");
        Intrinsics.checkNotNullParameter(sessionRepository, "sessionRepository");
        Intrinsics.checkNotNullParameter(deviceInfoRepository, "deviceInfoRepository");
        Intrinsics.checkNotNullParameter(campaignRepository, "campaignRepository");
        Intrinsics.checkNotNullParameter(webViewConfigurationDataSource, "webViewConfigurationDataSource");
        Intrinsics.checkNotNullParameter(tcfRepository, "tcfRepository");
        this.getUniversalRequestForPayLoad = getUniversalRequestForPayLoad;
        this.sessionRepository = sessionRepository;
        this.deviceInfoRepository = deviceInfoRepository;
        this.campaignRepository = campaignRepository;
        this.webViewConfigurationDataSource = webViewConfigurationDataSource;
        this.tcfRepository = tcfRepository;
    }

    /* JADX WARN: Code duplicated, block: B:29:0x010b  */
    /* JADX WARN: Code duplicated, block: B:30:0x0111  */
    /* JADX WARN: Code duplicated, block: B:33:0x0121  */
    /* JADX WARN: Code duplicated, block: B:35:0x012a  */
    /* JADX WARN: Code duplicated, block: B:37:0x0130  */
    /* JADX WARN: Code duplicated, block: B:42:0x0174 A[RETURN] */
    /* JADX WARN: Code duplicated, block: B:7:0x0018  */
    @Override // com.unity3d.ads.core.domain.GetAdRequest
    public Object invoke(String str, ByteString byteString, AdRequestOuterClass.BannerSize bannerSize, LoadConfigurationInternal loadConfigurationInternal, Continuation<? super UniversalRequestOuterClass.UniversalRequest> continuation) {
        AnonymousClass1 anonymousClass1;
        AdRequestKt.Dsl dsl_create;
        String str2;
        ByteString byteString2;
        AdRequestOuterClass.BannerSize bannerSize2;
        LoadConfigurationInternal loadConfigurationInternal2;
        AdRequestKt.Dsl dsl;
        AdRequestKt.Dsl dsl2;
        AdRequestOuterClass.BannerSize bannerSize3;
        LoadConfigurationInternal loadConfigurationInternal3;
        AdRequestKt.Dsl dsl3;
        final AdRequestKt.Dsl dsl4;
        AdRequestKt.Dsl dsl5;
        String tcfString;
        Object objInvoke;
        String mediationAdUnitId;
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
                dsl_create = (AdRequestKt.Dsl) anonymousClass1.L$6;
                AdRequestKt.Dsl dsl6 = (AdRequestKt.Dsl) anonymousClass1.L$5;
                AdRequestKt.Dsl dsl7 = (AdRequestKt.Dsl) anonymousClass1.L$4;
                LoadConfigurationInternal loadConfigurationInternal4 = (LoadConfigurationInternal) anonymousClass1.L$3;
                AdRequestOuterClass.BannerSize bannerSize4 = (AdRequestOuterClass.BannerSize) anonymousClass1.L$2;
                ByteString byteString3 = (ByteString) anonymousClass1.L$1;
                String str3 = (String) anonymousClass1.L$0;
                ResultKt.throwOnFailure(objStaticDeviceInfo);
                dsl = dsl6;
                str2 = str3;
                dsl2 = dsl7;
                byteString2 = byteString3;
                loadConfigurationInternal2 = loadConfigurationInternal4;
                bannerSize2 = bannerSize4;
            } else {
                if (i != 2) {
                    if (i != 3) {
                        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                    }
                    ResultKt.throwOnFailure(objStaticDeviceInfo);
                    return objStaticDeviceInfo;
                }
                dsl3 = (AdRequestKt.Dsl) anonymousClass1.L$4;
                dsl4 = (AdRequestKt.Dsl) anonymousClass1.L$3;
                dsl5 = (AdRequestKt.Dsl) anonymousClass1.L$2;
                loadConfigurationInternal3 = (LoadConfigurationInternal) anonymousClass1.L$1;
                bannerSize3 = (AdRequestOuterClass.BannerSize) anonymousClass1.L$0;
                ResultKt.throwOnFailure(objStaticDeviceInfo);
            }
            dsl3.setWebviewVersion(((WebviewConfigurationStore.WebViewConfigurationStore) objStaticDeviceInfo).getVersion());
            dsl4.setCampaignState(this.campaignRepository.getCampaignState());
            if (bannerSize3 == null) {
                dsl4.setAdRequestType(AdRequestOuterClass.AdRequestType.AD_REQUEST_TYPE_FULLSCREEN);
            } else {
                dsl4.setAdRequestType(AdRequestOuterClass.AdRequestType.AD_REQUEST_TYPE_BANNER);
                dsl4.setBannerSize(bannerSize3);
            }
            tcfString = this.tcfRepository.getTcfString();
            if (tcfString != null) {
                dsl4.setTcf(ByteStringsKt.toByteStringUtf8(tcfString));
            }
            if (loadConfigurationInternal3 != null) {
                mediationAdUnitId = loadConfigurationInternal3.getMediationAdUnitId();
                if (mediationAdUnitId != null) {
                    new MutablePropertyReference0Impl(dsl4) { // from class: com.unity3d.ads.core.domain.AndroidGetAdRequest$invoke$request$1$2$2
                        @Override // kotlin.jvm.internal.MutablePropertyReference0Impl, kotlin.reflect.KProperty0
                        public Object get() {
                            return ((AdRequestKt.Dsl) this.receiver).getMediationAdUnitId();
                        }

                        @Override // kotlin.jvm.internal.MutablePropertyReference0Impl, kotlin.reflect.KMutableProperty0
                        public void set(Object obj) {
                            ((AdRequestKt.Dsl) this.receiver).setMediationAdUnitId((String) obj);
                        }
                    }.set(mediationAdUnitId);
                }
                dsl4.putAllExtras(dsl4.getExtrasMap(), loadConfigurationInternal3.getExtras());
            }
            AdRequestOuterClass.AdRequest adRequest_build = dsl5._build();
            UniversalRequestKt universalRequestKt = UniversalRequestKt.INSTANCE;
            UniversalRequestKt.PayloadKt.Dsl.Companion companion = UniversalRequestKt.PayloadKt.Dsl.INSTANCE;
            UniversalRequestOuterClass.UniversalRequest.Payload.Builder builderNewBuilder = UniversalRequestOuterClass.UniversalRequest.Payload.newBuilder();
            Intrinsics.checkNotNullExpressionValue(builderNewBuilder, "newBuilder(...)");
            UniversalRequestKt.PayloadKt.Dsl dsl_create2 = companion._create(builderNewBuilder);
            dsl_create2.setAdRequest(adRequest_build);
            UniversalRequestOuterClass.UniversalRequest.Payload payload_build = dsl_create2._build();
            GetUniversalRequestForPayLoad getUniversalRequestForPayLoad = this.getUniversalRequestForPayLoad;
            anonymousClass1.L$0 = null;
            anonymousClass1.L$1 = null;
            anonymousClass1.L$2 = null;
            anonymousClass1.L$3 = null;
            anonymousClass1.L$4 = null;
            anonymousClass1.label = 3;
            objInvoke = getUniversalRequestForPayLoad.invoke(payload_build, anonymousClass1);
            if (objInvoke != coroutine_suspended) {
                return coroutine_suspended;
            }
            return objInvoke;
        }
        ResultKt.throwOnFailure(objStaticDeviceInfo);
        AdRequestKt.Dsl.Companion companion2 = AdRequestKt.Dsl.INSTANCE;
        AdRequestOuterClass.AdRequest.Builder builderNewBuilder2 = AdRequestOuterClass.AdRequest.newBuilder();
        Intrinsics.checkNotNullExpressionValue(builderNewBuilder2, "newBuilder(...)");
        dsl_create = companion2._create(builderNewBuilder2);
        dsl_create.setSessionCounters(this.sessionRepository.getSessionCounters());
        DeviceInfoRepository deviceInfoRepository = this.deviceInfoRepository;
        str2 = str;
        anonymousClass1.L$0 = str2;
        byteString2 = byteString;
        anonymousClass1.L$1 = byteString2;
        bannerSize2 = bannerSize;
        anonymousClass1.L$2 = bannerSize2;
        loadConfigurationInternal2 = loadConfigurationInternal;
        anonymousClass1.L$3 = loadConfigurationInternal2;
        anonymousClass1.L$4 = dsl_create;
        anonymousClass1.L$5 = dsl_create;
        anonymousClass1.L$6 = dsl_create;
        anonymousClass1.label = 1;
        objStaticDeviceInfo = deviceInfoRepository.staticDeviceInfo(anonymousClass1);
        if (objStaticDeviceInfo != coroutine_suspended) {
            dsl = dsl_create;
            dsl2 = dsl;
        }
        return coroutine_suspended;
        dsl_create.setStaticDeviceInfo((StaticDeviceInfoOuterClass.StaticDeviceInfo) objStaticDeviceInfo);
        dsl.setDynamicDeviceInfo(this.deviceInfoRepository.getDynamicDeviceInfo(true));
        dsl.setImpressionOpportunityId(byteString2);
        dsl.setPlacementId(str2);
        dsl.setRequestImpressionConfiguration(true);
        WebviewConfigurationDataSource webviewConfigurationDataSource = this.webViewConfigurationDataSource;
        anonymousClass1.L$0 = bannerSize2;
        anonymousClass1.L$1 = loadConfigurationInternal2;
        anonymousClass1.L$2 = dsl2;
        anonymousClass1.L$3 = dsl;
        anonymousClass1.L$4 = dsl;
        anonymousClass1.L$5 = null;
        anonymousClass1.L$6 = null;
        anonymousClass1.label = 2;
        objStaticDeviceInfo = webviewConfigurationDataSource.get(anonymousClass1);
        if (objStaticDeviceInfo != coroutine_suspended) {
            bannerSize3 = bannerSize2;
            loadConfigurationInternal3 = loadConfigurationInternal2;
            dsl3 = dsl;
            dsl4 = dsl3;
            dsl5 = dsl2;
            dsl3.setWebviewVersion(((WebviewConfigurationStore.WebViewConfigurationStore) objStaticDeviceInfo).getVersion());
            dsl4.setCampaignState(this.campaignRepository.getCampaignState());
            if (bannerSize3 == null) {
                dsl4.setAdRequestType(AdRequestOuterClass.AdRequestType.AD_REQUEST_TYPE_FULLSCREEN);
            } else {
                dsl4.setAdRequestType(AdRequestOuterClass.AdRequestType.AD_REQUEST_TYPE_BANNER);
                dsl4.setBannerSize(bannerSize3);
            }
            tcfString = this.tcfRepository.getTcfString();
            if (tcfString != null) {
                dsl4.setTcf(ByteStringsKt.toByteStringUtf8(tcfString));
            }
            if (loadConfigurationInternal3 != null) {
                mediationAdUnitId = loadConfigurationInternal3.getMediationAdUnitId();
                if (mediationAdUnitId != null) {
                    new MutablePropertyReference0Impl(dsl4) { // from class: com.unity3d.ads.core.domain.AndroidGetAdRequest$invoke$request$1$2$2
                        @Override // kotlin.jvm.internal.MutablePropertyReference0Impl, kotlin.reflect.KProperty0
                        public Object get() {
                            return ((AdRequestKt.Dsl) this.receiver).getMediationAdUnitId();
                        }

                        @Override // kotlin.jvm.internal.MutablePropertyReference0Impl, kotlin.reflect.KMutableProperty0
                        public void set(Object obj) {
                            ((AdRequestKt.Dsl) this.receiver).setMediationAdUnitId((String) obj);
                        }
                    }.set(mediationAdUnitId);
                }
                dsl4.putAllExtras(dsl4.getExtrasMap(), loadConfigurationInternal3.getExtras());
            }
            AdRequestOuterClass.AdRequest adRequest_build2 = dsl5._build();
            UniversalRequestKt universalRequestKt2 = UniversalRequestKt.INSTANCE;
            UniversalRequestKt.PayloadKt.Dsl.Companion companion3 = UniversalRequestKt.PayloadKt.Dsl.INSTANCE;
            UniversalRequestOuterClass.UniversalRequest.Payload.Builder builderNewBuilder3 = UniversalRequestOuterClass.UniversalRequest.Payload.newBuilder();
            Intrinsics.checkNotNullExpressionValue(builderNewBuilder3, "newBuilder(...)");
            UniversalRequestKt.PayloadKt.Dsl dsl_create3 = companion3._create(builderNewBuilder3);
            dsl_create3.setAdRequest(adRequest_build2);
            UniversalRequestOuterClass.UniversalRequest.Payload payload_build2 = dsl_create3._build();
            GetUniversalRequestForPayLoad getUniversalRequestForPayLoad2 = this.getUniversalRequestForPayLoad;
            anonymousClass1.L$0 = null;
            anonymousClass1.L$1 = null;
            anonymousClass1.L$2 = null;
            anonymousClass1.L$3 = null;
            anonymousClass1.L$4 = null;
            anonymousClass1.label = 3;
            objInvoke = getUniversalRequestForPayLoad2.invoke(payload_build2, anonymousClass1);
            if (objInvoke != coroutine_suspended) {
                return objInvoke;
            }
        }
        return coroutine_suspended;
    }
}
