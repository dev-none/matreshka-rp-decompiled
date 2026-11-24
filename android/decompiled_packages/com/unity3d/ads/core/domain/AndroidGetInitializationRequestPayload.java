package com.unity3d.ads.core.domain;

import com.google.protobuf.ByteString;
import com.google.protobuf.kotlin.ByteStringsKt;
import com.google.protobuf.kotlin.DslList;
import com.unity3d.ads.UnityAds;
import com.unity3d.ads.core.configuration.MediationInitBlobMetadataReader;
import com.unity3d.ads.core.data.datasource.GoogleAppIdDataSource;
import com.unity3d.ads.core.data.datasource.InstallReferrerDataSource;
import com.unity3d.ads.core.data.datasource.ModuleInitParamsDataSource;
import com.unity3d.ads.core.data.model.InitializationConfigurationInternal;
import com.unity3d.ads.core.data.repository.DeviceInfoRepository;
import com.unity3d.ads.core.data.repository.LegacyUserConsentRepository;
import com.unity3d.ads.core.data.repository.SessionRepository;
import com.unity3d.services.core.device.Storage;
import com.unity3d.services.core.device.StorageManager;
import gatewayprotocol.v1.ClientInfoOuterClass;
import gatewayprotocol.v1.InitializationDeviceInfoKt;
import gatewayprotocol.v1.InitializationRequestKt;
import gatewayprotocol.v1.InitializationRequestOuterClass;
import gatewayprotocol.v1.StaticDeviceInfoOuterClass;
import io.appmetrica.analytics.coreutils.internal.StringUtils;
import java.util.Map;
import kotlin.Metadata;
import kotlin.ResultKt;
import kotlin.collections.CollectionsKt;
import kotlin.collections.MapsKt;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.intrinsics.IntrinsicsKt;
import kotlin.coroutines.jvm.internal.ContinuationImpl;
import kotlin.coroutines.jvm.internal.DebugMetadata;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.MutablePropertyReference0Impl;
import org.json.JSONException;

/* JADX INFO: compiled from: AndroidGetInitializationRequestPayload.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000D\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0003\b\u0000\u0018\u0000 \u00172\u00020\u0001:\u0001\u0017BG\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0007\u0012\u0006\u0010\b\u001a\u00020\t\u0012\u0006\u0010\n\u001a\u00020\u000b\u0012\u0006\u0010\f\u001a\u00020\r\u0012\u0006\u0010\u000e\u001a\u00020\u000f\u0012\u0006\u0010\u0010\u001a\u00020\u0011¢\u0006\u0004\b\u0012\u0010\u0013J\u000e\u0010\u0014\u001a\u00020\u0015H\u0096B¢\u0006\u0002\u0010\u0016R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0007X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\b\u001a\u00020\tX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\n\u001a\u00020\u000bX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\f\u001a\u00020\rX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u000e\u001a\u00020\u000fX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0010\u001a\u00020\u0011X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u0018"}, d2 = {"Lcom/unity3d/ads/core/domain/AndroidGetInitializationRequestPayload;", "Lcom/unity3d/ads/core/domain/GetInitializationRequestPayload;", "getClientInfo", "Lcom/unity3d/ads/core/domain/GetClientInfo;", "sessionRepository", "Lcom/unity3d/ads/core/data/repository/SessionRepository;", "deviceInfoRepository", "Lcom/unity3d/ads/core/data/repository/DeviceInfoRepository;", "legacyUserConsentRepository", "Lcom/unity3d/ads/core/data/repository/LegacyUserConsentRepository;", "mediationInitBlobMetadataReader", "Lcom/unity3d/ads/core/configuration/MediationInitBlobMetadataReader;", "installReferrerDataSource", "Lcom/unity3d/ads/core/data/datasource/InstallReferrerDataSource;", "googleAppIdDataSource", "Lcom/unity3d/ads/core/data/datasource/GoogleAppIdDataSource;", "moduleInitParamsDataSource", "Lcom/unity3d/ads/core/data/datasource/ModuleInitParamsDataSource;", "<init>", "(Lcom/unity3d/ads/core/domain/GetClientInfo;Lcom/unity3d/ads/core/data/repository/SessionRepository;Lcom/unity3d/ads/core/data/repository/DeviceInfoRepository;Lcom/unity3d/ads/core/data/repository/LegacyUserConsentRepository;Lcom/unity3d/ads/core/configuration/MediationInitBlobMetadataReader;Lcom/unity3d/ads/core/data/datasource/InstallReferrerDataSource;Lcom/unity3d/ads/core/data/datasource/GoogleAppIdDataSource;Lcom/unity3d/ads/core/data/datasource/ModuleInitParamsDataSource;)V", "invoke", "Lgatewayprotocol/v1/InitializationRequestOuterClass$InitializationRequest;", "(Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "Companion", "unity-ads_defaultRelease"}, k = 1, mv = {2, 1, 0}, xi = 48)
public final class AndroidGetInitializationRequestPayload implements GetInitializationRequestPayload {
    private static final String BLOB_EXTRA_KEY = "uads_init_blob";
    private final DeviceInfoRepository deviceInfoRepository;
    private final GetClientInfo getClientInfo;
    private final GoogleAppIdDataSource googleAppIdDataSource;
    private final InstallReferrerDataSource installReferrerDataSource;
    private final LegacyUserConsentRepository legacyUserConsentRepository;
    private final MediationInitBlobMetadataReader mediationInitBlobMetadataReader;
    private final ModuleInitParamsDataSource moduleInitParamsDataSource;
    private final SessionRepository sessionRepository;

    /* JADX INFO: renamed from: com.unity3d.ads.core.domain.AndroidGetInitializationRequestPayload$invoke$1, reason: invalid class name */
    /* JADX INFO: compiled from: AndroidGetInitializationRequestPayload.kt */
    @Metadata(k = 3, mv = {2, 1, 0}, xi = 48)
    @DebugMetadata(c = "com.unity3d.ads.core.domain.AndroidGetInitializationRequestPayload", f = "AndroidGetInitializationRequestPayload.kt", i = {0, 1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 8, 8, 9, 9}, l = {30, 35, 36, 57, 62, 67, 72, 87, 103, 113}, m = "invoke", n = {"$this$invoke_u24lambda_u2415", "$this$invoke_u24lambda_u2415", "staticDeviceInfo", "$this$invoke_u24lambda_u2415", "staticDeviceInfo", "$this$invoke_u24lambda_u2415", "staticDeviceInfo", "$this$invoke_u24lambda_u2415", "staticDeviceInfo", "$this$invoke_u24lambda_u2415", "staticDeviceInfo", "$this$invoke_u24lambda_u2415", "staticDeviceInfo", "$this$invoke_u24lambda_u2415", "staticDeviceInfo", "$this$invoke_u24lambda_u2415", "staticDeviceInfo", "$this$invoke_u24lambda_u2415", "staticDeviceInfo"}, s = {"L$1", "L$1", "L$2", "L$1", "L$2", "L$1", "L$2", "L$1", "L$2", "L$1", "L$2", "L$1", "L$2", "L$1", "L$2", "L$1", "L$2", "L$1", "L$2"})
    static final class AnonymousClass1 extends ContinuationImpl {
        Object L$0;
        Object L$1;
        Object L$2;
        Object L$3;
        Object L$4;
        int label;
        /* synthetic */ Object result;

        AnonymousClass1(Continuation<? super AnonymousClass1> continuation) {
            super(continuation);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            this.result = obj;
            this.label |= Integer.MIN_VALUE;
            return AndroidGetInitializationRequestPayload.this.invoke(this);
        }
    }

    public AndroidGetInitializationRequestPayload(GetClientInfo getClientInfo, SessionRepository sessionRepository, DeviceInfoRepository deviceInfoRepository, LegacyUserConsentRepository legacyUserConsentRepository, MediationInitBlobMetadataReader mediationInitBlobMetadataReader, InstallReferrerDataSource installReferrerDataSource, GoogleAppIdDataSource googleAppIdDataSource, ModuleInitParamsDataSource moduleInitParamsDataSource) {
        Intrinsics.checkNotNullParameter(getClientInfo, "getClientInfo");
        Intrinsics.checkNotNullParameter(sessionRepository, "sessionRepository");
        Intrinsics.checkNotNullParameter(deviceInfoRepository, "deviceInfoRepository");
        Intrinsics.checkNotNullParameter(legacyUserConsentRepository, "legacyUserConsentRepository");
        Intrinsics.checkNotNullParameter(mediationInitBlobMetadataReader, "mediationInitBlobMetadataReader");
        Intrinsics.checkNotNullParameter(installReferrerDataSource, "installReferrerDataSource");
        Intrinsics.checkNotNullParameter(googleAppIdDataSource, "googleAppIdDataSource");
        Intrinsics.checkNotNullParameter(moduleInitParamsDataSource, "moduleInitParamsDataSource");
        this.getClientInfo = getClientInfo;
        this.sessionRepository = sessionRepository;
        this.deviceInfoRepository = deviceInfoRepository;
        this.legacyUserConsentRepository = legacyUserConsentRepository;
        this.mediationInitBlobMetadataReader = mediationInitBlobMetadataReader;
        this.installReferrerDataSource = installReferrerDataSource;
        this.googleAppIdDataSource = googleAppIdDataSource;
        this.moduleInitParamsDataSource = moduleInitParamsDataSource;
    }

    /* JADX WARN: Code duplicated, block: B:101:0x0335  */
    /* JADX WARN: Code duplicated, block: B:104:0x0340  */
    /* JADX WARN: Code duplicated, block: B:110:0x0357  */
    /* JADX WARN: Code duplicated, block: B:117:0x0389  */
    /* JADX WARN: Code duplicated, block: B:120:0x0398  */
    /* JADX WARN: Code duplicated, block: B:122:0x03aa A[DONT_INVERT] */
    /* JADX WARN: Code duplicated, block: B:123:0x03ac  */
    /* JADX WARN: Code duplicated, block: B:124:0x03af  */
    /* JADX WARN: Code duplicated, block: B:127:0x03b3  */
    /* JADX WARN: Code duplicated, block: B:129:0x03b6  */
    /* JADX WARN: Code duplicated, block: B:132:0x03bb  */
    /* JADX WARN: Code duplicated, block: B:137:0x03d1  */
    /* JADX WARN: Code duplicated, block: B:140:0x03e8  */
    /* JADX WARN: Code duplicated, block: B:143:0x03ef  */
    /* JADX WARN: Code duplicated, block: B:147:0x03fb  */
    /* JADX WARN: Code duplicated, block: B:150:0x040e  */
    /* JADX WARN: Code duplicated, block: B:155:0x042d  */
    /* JADX WARN: Code duplicated, block: B:157:0x0430  */
    /* JADX WARN: Code duplicated, block: B:159:0x0433  */
    /* JADX WARN: Code duplicated, block: B:28:0x0124  */
    /* JADX WARN: Code duplicated, block: B:30:0x012e  */
    /* JADX WARN: Code duplicated, block: B:31:0x0131  */
    /* JADX WARN: Code duplicated, block: B:33:0x0134  */
    /* JADX WARN: Code duplicated, block: B:34:0x0139  */
    /* JADX WARN: Code duplicated, block: B:36:0x013c  */
    /* JADX WARN: Code duplicated, block: B:37:0x013e  */
    /* JADX WARN: Code duplicated, block: B:41:0x0158  */
    /* JADX WARN: Code duplicated, block: B:45:0x0173  */
    /* JADX WARN: Code duplicated, block: B:48:0x0181  */
    /* JADX WARN: Code duplicated, block: B:52:0x0275  */
    /* JADX WARN: Code duplicated, block: B:55:0x027c  */
    /* JADX WARN: Code duplicated, block: B:59:0x0292 A[PHI: r1 r4 r5 r9
  0x0292: PHI (r1v40 java.lang.Object) = (r1v39 java.lang.Object), (r1v1 java.lang.Object) binds: [B:57:0x028e, B:17:0x0099] A[DONT_GENERATE, DONT_INLINE]
  0x0292: PHI (r4v58 gatewayprotocol.v1.StaticDeviceInfoOuterClass$StaticDeviceInfo) = 
  (r4v55 gatewayprotocol.v1.StaticDeviceInfoOuterClass$StaticDeviceInfo)
  (r4v60 gatewayprotocol.v1.StaticDeviceInfoOuterClass$StaticDeviceInfo)
 binds: [B:57:0x028e, B:17:0x0099] A[DONT_GENERATE, DONT_INLINE]
  0x0292: PHI (r5v8 gatewayprotocol.v1.InitializationRequestKt$Dsl) = (r5v5 gatewayprotocol.v1.InitializationRequestKt$Dsl), (r5v10 gatewayprotocol.v1.InitializationRequestKt$Dsl) binds: [B:57:0x028e, B:17:0x0099] A[DONT_GENERATE, DONT_INLINE]
  0x0292: PHI (r9v14 gatewayprotocol.v1.InitializationRequestKt$Dsl) = (r9v11 gatewayprotocol.v1.InitializationRequestKt$Dsl), (r9v16 gatewayprotocol.v1.InitializationRequestKt$Dsl) binds: [B:57:0x028e, B:17:0x0099] A[DONT_GENERATE, DONT_INLINE]] */
    /* JADX WARN: Code duplicated, block: B:61:0x0299  */
    /* JADX WARN: Code duplicated, block: B:68:0x02b6 A[PHI: r1 r4 r5 r9
  0x02b6: PHI (r1v44 java.lang.Object) = (r1v43 java.lang.Object), (r1v1 java.lang.Object) binds: [B:66:0x02b2, B:16:0x0088] A[DONT_GENERATE, DONT_INLINE]
  0x02b6: PHI (r4v61 gatewayprotocol.v1.StaticDeviceInfoOuterClass$StaticDeviceInfo) = 
  (r4v58 gatewayprotocol.v1.StaticDeviceInfoOuterClass$StaticDeviceInfo)
  (r4v63 gatewayprotocol.v1.StaticDeviceInfoOuterClass$StaticDeviceInfo)
 binds: [B:66:0x02b2, B:16:0x0088] A[DONT_GENERATE, DONT_INLINE]
  0x02b6: PHI (r5v11 gatewayprotocol.v1.InitializationRequestKt$Dsl) = (r5v8 gatewayprotocol.v1.InitializationRequestKt$Dsl), (r5v13 gatewayprotocol.v1.InitializationRequestKt$Dsl) binds: [B:66:0x02b2, B:16:0x0088] A[DONT_GENERATE, DONT_INLINE]
  0x02b6: PHI (r9v17 gatewayprotocol.v1.InitializationRequestKt$Dsl) = (r9v14 gatewayprotocol.v1.InitializationRequestKt$Dsl), (r9v19 gatewayprotocol.v1.InitializationRequestKt$Dsl) binds: [B:66:0x02b2, B:16:0x0088] A[DONT_GENERATE, DONT_INLINE]] */
    /* JADX WARN: Code duplicated, block: B:70:0x02be  */
    /* JADX WARN: Code duplicated, block: B:74:0x02d4 A[PHI: r1 r4 r5 r9
  0x02d4: PHI (r1v48 java.lang.Object) = (r1v47 java.lang.Object), (r1v1 java.lang.Object) binds: [B:72:0x02d0, B:15:0x0077] A[DONT_GENERATE, DONT_INLINE]
  0x02d4: PHI (r4v64 gatewayprotocol.v1.StaticDeviceInfoOuterClass$StaticDeviceInfo) = 
  (r4v61 gatewayprotocol.v1.StaticDeviceInfoOuterClass$StaticDeviceInfo)
  (r4v66 gatewayprotocol.v1.StaticDeviceInfoOuterClass$StaticDeviceInfo)
 binds: [B:72:0x02d0, B:15:0x0077] A[DONT_GENERATE, DONT_INLINE]
  0x02d4: PHI (r5v14 gatewayprotocol.v1.InitializationRequestKt$Dsl) = (r5v11 gatewayprotocol.v1.InitializationRequestKt$Dsl), (r5v16 gatewayprotocol.v1.InitializationRequestKt$Dsl) binds: [B:72:0x02d0, B:15:0x0077] A[DONT_GENERATE, DONT_INLINE]
  0x02d4: PHI (r9v20 gatewayprotocol.v1.InitializationRequestKt$Dsl) = (r9v17 gatewayprotocol.v1.InitializationRequestKt$Dsl), (r9v22 gatewayprotocol.v1.InitializationRequestKt$Dsl) binds: [B:72:0x02d0, B:15:0x0077] A[DONT_GENERATE, DONT_INLINE]] */
    /* JADX WARN: Code duplicated, block: B:76:0x02dc  */
    /* JADX WARN: Code duplicated, block: B:79:0x02e7  */
    /* JADX WARN: Code duplicated, block: B:7:0x0018  */
    /* JADX WARN: Code duplicated, block: B:82:0x02f2  */
    /* JADX WARN: Code duplicated, block: B:85:0x0301  */
    /* JADX WARN: Code duplicated, block: B:89:0x031c A[PHI: r1 r4 r5 r9
  0x031c: PHI (r1v60 java.lang.Object) = (r1v57 java.lang.Object), (r1v1 java.lang.Object) binds: [B:87:0x0318, B:14:0x0066] A[DONT_GENERATE, DONT_INLINE]
  0x031c: PHI (r4v67 gatewayprotocol.v1.StaticDeviceInfoOuterClass$StaticDeviceInfo) = 
  (r4v64 gatewayprotocol.v1.StaticDeviceInfoOuterClass$StaticDeviceInfo)
  (r4v69 gatewayprotocol.v1.StaticDeviceInfoOuterClass$StaticDeviceInfo)
 binds: [B:87:0x0318, B:14:0x0066] A[DONT_GENERATE, DONT_INLINE]
  0x031c: PHI (r5v17 gatewayprotocol.v1.InitializationRequestKt$Dsl) = (r5v14 gatewayprotocol.v1.InitializationRequestKt$Dsl), (r5v20 gatewayprotocol.v1.InitializationRequestKt$Dsl) binds: [B:87:0x0318, B:14:0x0066] A[DONT_GENERATE, DONT_INLINE]
  0x031c: PHI (r9v23 gatewayprotocol.v1.InitializationRequestKt$Dsl) = (r9v20 gatewayprotocol.v1.InitializationRequestKt$Dsl), (r9v25 gatewayprotocol.v1.InitializationRequestKt$Dsl) binds: [B:87:0x0318, B:14:0x0066] A[DONT_GENERATE, DONT_INLINE]] */
    /* JADX WARN: Code duplicated, block: B:91:0x0323  */
    /* JADX WARN: Code duplicated, block: B:95:0x032c  */
    /* JADX WARN: Code duplicated, block: B:98:0x0330  */
    @Override // com.unity3d.ads.core.domain.GetInitializationRequestPayload
    public Object invoke(Continuation<? super InitializationRequestOuterClass.InitializationRequest> continuation) throws JSONException {
        AnonymousClass1 anonymousClass1;
        InitializationRequestKt.Dsl dsl;
        InitializationRequestKt.Dsl dsl2;
        StaticDeviceInfoOuterClass.StaticDeviceInfo staticDeviceInfo;
        Storage storage;
        boolean z;
        InitializationRequestKt.Dsl dsl3;
        Object obj;
        Boolean bool;
        boolean zBooleanValue;
        InitializationRequestKt.Dsl dsl4;
        String analyticsUserId;
        StaticDeviceInfoOuterClass.StaticDeviceInfo staticDeviceInfo2;
        final InitializationRequestKt.Dsl dsl5;
        InitializationRequestKt.Dsl dsl6;
        ByteString byteString;
        String str;
        String str2;
        ByteString byteString2;
        ByteString byteString3;
        String legacyFlowUserConsent;
        String unityInstallationId;
        String unityMegaSessionId;
        String str3;
        boolean z2;
        String str4;
        InitializationConfigurationInternal initializationConfiguration;
        DslList moduleInitParams;
        Object objInvoke;
        InitializationRequestKt.Dsl dsl7;
        DslList dslList;
        final InitializationRequestKt.Dsl dsl8;
        Map<String, String> extras;
        Map mutableMap;
        String str5;
        ByteString byteStringUtf8;
        StaticDeviceInfoOuterClass.StaticDeviceInfo staticDeviceInfo3;
        InitializationRequestKt.Dsl dsl9;
        InitializationRequestKt.Dsl dsl10;
        Object obj2;
        String str6;
        ByteString byteStringUtf9;
        boolean z3;
        String userIdentifier;
        String str7;
        String googleAppId;
        InitializationRequestOuterClass.InstallReferrer installReferrer;
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
        Object objInvoke2 = anonymousClass1.result;
        Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
        switch (anonymousClass1.label) {
            case 0:
                ResultKt.throwOnFailure(objInvoke2);
                InitializationRequestKt.Dsl.Companion companion = InitializationRequestKt.Dsl.INSTANCE;
                InitializationRequestOuterClass.InitializationRequest.Builder builderNewBuilder = InitializationRequestOuterClass.InitializationRequest.newBuilder();
                Intrinsics.checkNotNullExpressionValue(builderNewBuilder, "newBuilder(...)");
                InitializationRequestKt.Dsl dsl_create = companion._create(builderNewBuilder);
                DeviceInfoRepository deviceInfoRepository = this.deviceInfoRepository;
                anonymousClass1.L$0 = dsl_create;
                anonymousClass1.L$1 = dsl_create;
                anonymousClass1.label = 1;
                Object objStaticDeviceInfo = deviceInfoRepository.staticDeviceInfo(anonymousClass1);
                if (objStaticDeviceInfo != coroutine_suspended) {
                    dsl = dsl_create;
                    objInvoke2 = objStaticDeviceInfo;
                    dsl2 = dsl;
                    staticDeviceInfo = (StaticDeviceInfoOuterClass.StaticDeviceInfo) objInvoke2;
                    storage = StorageManager.getStorage(StorageManager.StorageType.PRIVATE);
                    if (storage.readStorage()) {
                        obj = storage.get("configuration.hasInitialized");
                        if (obj instanceof Boolean) {
                            bool = (Boolean) obj;
                        } else {
                            bool = null;
                        }
                        if (bool != null) {
                            zBooleanValue = bool.booleanValue();
                        } else {
                            zBooleanValue = false;
                        }
                        if (zBooleanValue) {
                            z = true;
                        } else {
                            z = false;
                        }
                    } else {
                        z = false;
                    }
                    dsl2.setIsFirstInit(!z);
                    GetClientInfo getClientInfo = this.getClientInfo;
                    anonymousClass1.L$0 = dsl;
                    anonymousClass1.L$1 = dsl2;
                    anonymousClass1.L$2 = staticDeviceInfo;
                    anonymousClass1.L$3 = dsl2;
                    anonymousClass1.label = 2;
                    objInvoke2 = getClientInfo.invoke(anonymousClass1);
                    if (objInvoke2 != coroutine_suspended) {
                        dsl3 = dsl2;
                        dsl2.setClientInfo((ClientInfoOuterClass.ClientInfo) objInvoke2);
                        DeviceInfoRepository deviceInfoRepository2 = this.deviceInfoRepository;
                        anonymousClass1.L$0 = dsl;
                        anonymousClass1.L$1 = dsl3;
                        anonymousClass1.L$2 = staticDeviceInfo;
                        anonymousClass1.L$3 = dsl3;
                        anonymousClass1.label = 3;
                        objInvoke2 = deviceInfoRepository2.getIdfi(anonymousClass1);
                        if (objInvoke2 != coroutine_suspended) {
                            dsl4 = dsl3;
                            dsl4.setIdfi((String) objInvoke2);
                            analyticsUserId = this.deviceInfoRepository.getAnalyticsUserId();
                            if (analyticsUserId != null) {
                                dsl3.setAnalyticsUserId(analyticsUserId);
                            }
                            dsl3.setSessionId(this.sessionRepository.getSessionId());
                            InitializationDeviceInfoKt.Dsl.Companion companion2 = InitializationDeviceInfoKt.Dsl.INSTANCE;
                            InitializationRequestOuterClass.InitializationDeviceInfo.Builder builderNewBuilder2 = InitializationRequestOuterClass.InitializationDeviceInfo.newBuilder();
                            Intrinsics.checkNotNullExpressionValue(builderNewBuilder2, "newBuilder(...)");
                            InitializationDeviceInfoKt.Dsl dsl_create2 = companion2._create(builderNewBuilder2);
                            dsl_create2.setBundleId(this.deviceInfoRepository.getAppName());
                            dsl_create2.setDeviceModel(this.deviceInfoRepository.getModel());
                            dsl_create2.setDeviceMake(this.deviceInfoRepository.getManufacturer());
                            dsl_create2.setOsVersion(this.deviceInfoRepository.getOsVersion());
                            dsl_create2.setTotalDiskSpace(staticDeviceInfo.getTotalDiskSpace());
                            dsl_create2.setTotalRamMemory(staticDeviceInfo.getTotalRamMemory());
                            dsl_create2.setCurrentUiTheme(this.deviceInfoRepository.getCurrentUiTheme());
                            String networkOperator = this.deviceInfoRepository.getDynamicDeviceInfo().getNetworkOperator();
                            Intrinsics.checkNotNullExpressionValue(networkOperator, "getNetworkOperator(...)");
                            dsl_create2.setNetworkOperator(networkOperator);
                            dsl_create2.setBatteryLevel(this.deviceInfoRepository.getDynamicDeviceInfo().getBatteryLevel());
                            dsl_create2.setBatteryStatus(this.deviceInfoRepository.getDynamicDeviceInfo().getBatteryStatus());
                            dsl_create2.setSystemBootTime(this.deviceInfoRepository.getSystemBootTime());
                            String language = this.deviceInfoRepository.getDynamicDeviceInfo().getLanguage();
                            Intrinsics.checkNotNullExpressionValue(language, "getLanguage(...)");
                            dsl_create2.setLanguage(language);
                            dsl_create2.setLocalList(CollectionsKt.joinToString$default(this.deviceInfoRepository.getLocaleList(), StringUtils.COMMA, null, null, 0, null, null, 62, null));
                            dsl_create2.setConnectionType(this.deviceInfoRepository.getConnectionTypeStr());
                            String bundleVersion = this.deviceInfoRepository.cachedStaticDeviceInfo().getBundleVersion();
                            Intrinsics.checkNotNullExpressionValue(bundleVersion, "getBundleVersion(...)");
                            dsl_create2.setBundleVersion(bundleVersion);
                            dsl3.setDeviceInfo(dsl_create2._build());
                            DeviceInfoRepository deviceInfoRepository3 = this.deviceInfoRepository;
                            anonymousClass1.L$0 = dsl;
                            anonymousClass1.L$1 = dsl3;
                            anonymousClass1.L$2 = staticDeviceInfo;
                            anonymousClass1.L$3 = null;
                            anonymousClass1.label = 4;
                            objInvoke2 = deviceInfoRepository3.getAuidByteString(anonymousClass1);
                            if (objInvoke2 != coroutine_suspended) {
                                staticDeviceInfo2 = staticDeviceInfo;
                                dsl5 = dsl3;
                                dsl6 = dsl;
                                byteString = (ByteString) objInvoke2;
                                if (byteString != null) {
                                    dsl5.setAuid(byteString);
                                }
                                DeviceInfoRepository deviceInfoRepository4 = this.deviceInfoRepository;
                                anonymousClass1.L$0 = dsl6;
                                anonymousClass1.L$1 = dsl5;
                                anonymousClass1.L$2 = staticDeviceInfo2;
                                anonymousClass1.label = 5;
                                objInvoke2 = deviceInfoRepository4.getAuidString(anonymousClass1);
                                if (objInvoke2 != coroutine_suspended) {
                                    str = (String) objInvoke2;
                                    str2 = str;
                                    if (str2 != null && str2.length() != 0) {
                                        dsl5.setAuidString(str);
                                    }
                                    SessionRepository sessionRepository = this.sessionRepository;
                                    anonymousClass1.L$0 = dsl6;
                                    anonymousClass1.L$1 = dsl5;
                                    anonymousClass1.L$2 = staticDeviceInfo2;
                                    anonymousClass1.label = 6;
                                    objInvoke2 = sessionRepository.getPrivacy(anonymousClass1);
                                    if (objInvoke2 != coroutine_suspended) {
                                        byteString2 = (ByteString) objInvoke2;
                                        if (!byteString2.isEmpty()) {
                                            dsl5.setPrivacy(byteString2);
                                        }
                                        SessionRepository sessionRepository2 = this.sessionRepository;
                                        anonymousClass1.L$0 = dsl6;
                                        anonymousClass1.L$1 = dsl5;
                                        anonymousClass1.L$2 = staticDeviceInfo2;
                                        anonymousClass1.label = 7;
                                        objInvoke2 = sessionRepository2.getGatewayCache(anonymousClass1);
                                        if (objInvoke2 != coroutine_suspended) {
                                            byteString3 = (ByteString) objInvoke2;
                                            if (!byteString3.isEmpty()) {
                                                dsl5.setCache(byteString3);
                                            }
                                            legacyFlowUserConsent = this.legacyUserConsentRepository.getLegacyFlowUserConsent();
                                            if (legacyFlowUserConsent != null) {
                                                dsl5.setLegacyFlowUserConsent(legacyFlowUserConsent);
                                            }
                                            unityInstallationId = this.sessionRepository.getUnityInstallationId();
                                            if (unityInstallationId != null) {
                                                dsl5.setUnityInstallationId(ByteStringsKt.toByteStringUtf8(unityInstallationId));
                                            }
                                            unityMegaSessionId = this.sessionRepository.getUnityMegaSessionId();
                                            if (unityMegaSessionId != null) {
                                                dsl5.setUnityMegaSessionId(ByteStringsKt.toByteStringUtf8(unityMegaSessionId));
                                            }
                                            DeviceInfoRepository deviceInfoRepository5 = this.deviceInfoRepository;
                                            anonymousClass1.L$0 = dsl6;
                                            anonymousClass1.L$1 = dsl5;
                                            anonymousClass1.L$2 = staticDeviceInfo2;
                                            anonymousClass1.label = 8;
                                            objInvoke2 = deviceInfoRepository5.getUnityBuildGuid(anonymousClass1);
                                            if (objInvoke2 != coroutine_suspended) {
                                                str3 = (String) objInvoke2;
                                                if (str3 != null || str3.length() == 0) {
                                                    z2 = true;
                                                } else {
                                                    z2 = false;
                                                }
                                                if (z2) {
                                                    objInvoke2 = null;
                                                }
                                                str4 = (String) objInvoke2;
                                                if (str4 != null) {
                                                    dsl5.setUnityBuildGuid(str4);
                                                }
                                                initializationConfiguration = this.sessionRepository.getInitializationConfiguration();
                                                if (initializationConfiguration != null && (extras = initializationConfiguration.getExtras()) != null && (mutableMap = MapsKt.toMutableMap(extras)) != null) {
                                                    str5 = (String) mutableMap.remove(BLOB_EXTRA_KEY);
                                                    if (str5 != null && (byteStringUtf8 = ByteStringsKt.toByteStringUtf8(str5)) != null) {
                                                        new MutablePropertyReference0Impl(dsl5) { // from class: com.unity3d.ads.core.domain.AndroidGetInitializationRequestPayload$invoke$2$9$2
                                                            @Override // kotlin.jvm.internal.MutablePropertyReference0Impl, kotlin.reflect.KProperty0
                                                            public Object get() {
                                                                return ((InitializationRequestKt.Dsl) this.receiver).getUadsInitBlob();
                                                            }

                                                            @Override // kotlin.jvm.internal.MutablePropertyReference0Impl, kotlin.reflect.KMutableProperty0
                                                            public void set(Object obj3) {
                                                                ((InitializationRequestKt.Dsl) this.receiver).setUadsInitBlob((ByteString) obj3);
                                                            }
                                                        }.set(byteStringUtf8);
                                                    }
                                                    dsl5.putAllExtras(dsl5.getExtrasMap(), mutableMap);
                                                }
                                                moduleInitParams = dsl5.getModuleInitParams();
                                                ModuleInitParamsDataSource moduleInitParamsDataSource = this.moduleInitParamsDataSource;
                                                anonymousClass1.L$0 = dsl6;
                                                anonymousClass1.L$1 = dsl5;
                                                anonymousClass1.L$2 = staticDeviceInfo2;
                                                anonymousClass1.L$3 = dsl5;
                                                anonymousClass1.L$4 = moduleInitParams;
                                                anonymousClass1.label = 9;
                                                objInvoke = moduleInitParamsDataSource.invoke(anonymousClass1);
                                                if (objInvoke != coroutine_suspended) {
                                                    dsl7 = dsl5;
                                                    dslList = moduleInitParams;
                                                    objInvoke2 = objInvoke;
                                                    dsl8 = dsl7;
                                                    dsl7.addAllModuleInitParams(dslList, (Iterable) objInvoke2);
                                                    if (!dsl8.hasUadsInitBlob()) {
                                                        MediationInitBlobMetadataReader mediationInitBlobMetadataReader = this.mediationInitBlobMetadataReader;
                                                        obj2 = mediationInitBlobMetadataReader.getJsonStorage().get(mediationInitBlobMetadataReader.getKey());
                                                        if (obj2 == null) {
                                                            obj2 = null;
                                                        } else {
                                                            if (obj2 != null) {
                                                                z3 = obj2 instanceof String;
                                                            } else {
                                                                z3 = true;
                                                            }
                                                            if (!z3) {
                                                                obj2 = null;
                                                            }
                                                            if (obj2 == null) {
                                                                obj2 = null;
                                                            }
                                                        }
                                                        str6 = (String) obj2;
                                                        if (str6 != null && (byteStringUtf9 = ByteStringsKt.toByteStringUtf8(str6)) != null) {
                                                            new MutablePropertyReference0Impl(dsl8) { // from class: com.unity3d.ads.core.domain.AndroidGetInitializationRequestPayload$invoke$2$11
                                                                @Override // kotlin.jvm.internal.MutablePropertyReference0Impl, kotlin.reflect.KProperty0
                                                                public Object get() {
                                                                    return ((InitializationRequestKt.Dsl) this.receiver).getUadsInitBlob();
                                                                }

                                                                @Override // kotlin.jvm.internal.MutablePropertyReference0Impl, kotlin.reflect.KMutableProperty0
                                                                public void set(Object obj3) {
                                                                    ((InitializationRequestKt.Dsl) this.receiver).setUadsInitBlob((ByteString) obj3);
                                                                }
                                                            }.set(byteStringUtf9);
                                                        }
                                                    }
                                                    if (dsl8.getIsFirstInit()) {
                                                        InstallReferrerDataSource installReferrerDataSource = this.installReferrerDataSource;
                                                        anonymousClass1.L$0 = dsl6;
                                                        anonymousClass1.L$1 = dsl8;
                                                        anonymousClass1.L$2 = staticDeviceInfo2;
                                                        anonymousClass1.L$3 = null;
                                                        anonymousClass1.L$4 = null;
                                                        anonymousClass1.label = 10;
                                                        objInvoke2 = installReferrerDataSource.invoke(anonymousClass1);
                                                        if (objInvoke2 != coroutine_suspended) {
                                                            staticDeviceInfo3 = staticDeviceInfo2;
                                                            dsl9 = dsl6;
                                                            dsl10 = dsl8;
                                                            installReferrer = (InitializationRequestOuterClass.InstallReferrer) objInvoke2;
                                                            if (installReferrer != null) {
                                                                dsl10.setInstallReferrer(installReferrer);
                                                            }
                                                            dsl6 = dsl9;
                                                            dsl8 = dsl10;
                                                            staticDeviceInfo2 = staticDeviceInfo3;
                                                        }
                                                    }
                                                    userIdentifier = UnityAds.getUserIdentifier();
                                                    if (userIdentifier != null) {
                                                        dsl8.setExternalUserIdentifier(userIdentifier);
                                                    }
                                                    if (this.sessionRepository.getNativeConfiguration().getFeatureFlags().getCollectGoogleAppId() && (googleAppId = this.googleAppIdDataSource.getGoogleAppId()) != null) {
                                                        dsl8.setGoogleAppId(googleAppId);
                                                    }
                                                    String appInstaller = staticDeviceInfo2.getAndroid().getAppInstaller();
                                                    Intrinsics.checkNotNull(appInstaller);
                                                    str7 = appInstaller.length() > 0 ? appInstaller : null;
                                                    if (str7 != null) {
                                                        dsl8.setInstallSource(str7);
                                                    }
                                                    return dsl6._build();
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                return coroutine_suspended;
            case 1:
                dsl2 = (InitializationRequestKt.Dsl) anonymousClass1.L$1;
                InitializationRequestKt.Dsl dsl11 = (InitializationRequestKt.Dsl) anonymousClass1.L$0;
                ResultKt.throwOnFailure(objInvoke2);
                dsl = dsl11;
                staticDeviceInfo = (StaticDeviceInfoOuterClass.StaticDeviceInfo) objInvoke2;
                storage = StorageManager.getStorage(StorageManager.StorageType.PRIVATE);
                if (storage.readStorage()) {
                    obj = storage.get("configuration.hasInitialized");
                    if (obj instanceof Boolean) {
                        bool = (Boolean) obj;
                    } else {
                        bool = null;
                    }
                    if (bool != null) {
                        zBooleanValue = bool.booleanValue();
                    } else {
                        zBooleanValue = false;
                    }
                    if (zBooleanValue) {
                        z = true;
                    } else {
                        z = false;
                    }
                } else {
                    z = false;
                }
                dsl2.setIsFirstInit(!z);
                GetClientInfo getClientInfo2 = this.getClientInfo;
                anonymousClass1.L$0 = dsl;
                anonymousClass1.L$1 = dsl2;
                anonymousClass1.L$2 = staticDeviceInfo;
                anonymousClass1.L$3 = dsl2;
                anonymousClass1.label = 2;
                objInvoke2 = getClientInfo2.invoke(anonymousClass1);
                if (objInvoke2 != coroutine_suspended) {
                    dsl3 = dsl2;
                    dsl2.setClientInfo((ClientInfoOuterClass.ClientInfo) objInvoke2);
                    DeviceInfoRepository deviceInfoRepository6 = this.deviceInfoRepository;
                    anonymousClass1.L$0 = dsl;
                    anonymousClass1.L$1 = dsl3;
                    anonymousClass1.L$2 = staticDeviceInfo;
                    anonymousClass1.L$3 = dsl3;
                    anonymousClass1.label = 3;
                    objInvoke2 = deviceInfoRepository6.getIdfi(anonymousClass1);
                    if (objInvoke2 != coroutine_suspended) {
                        dsl4 = dsl3;
                        dsl4.setIdfi((String) objInvoke2);
                        analyticsUserId = this.deviceInfoRepository.getAnalyticsUserId();
                        if (analyticsUserId != null) {
                            dsl3.setAnalyticsUserId(analyticsUserId);
                        }
                        dsl3.setSessionId(this.sessionRepository.getSessionId());
                        InitializationDeviceInfoKt.Dsl.Companion companion3 = InitializationDeviceInfoKt.Dsl.INSTANCE;
                        InitializationRequestOuterClass.InitializationDeviceInfo.Builder builderNewBuilder3 = InitializationRequestOuterClass.InitializationDeviceInfo.newBuilder();
                        Intrinsics.checkNotNullExpressionValue(builderNewBuilder3, "newBuilder(...)");
                        InitializationDeviceInfoKt.Dsl dsl_create3 = companion3._create(builderNewBuilder3);
                        dsl_create3.setBundleId(this.deviceInfoRepository.getAppName());
                        dsl_create3.setDeviceModel(this.deviceInfoRepository.getModel());
                        dsl_create3.setDeviceMake(this.deviceInfoRepository.getManufacturer());
                        dsl_create3.setOsVersion(this.deviceInfoRepository.getOsVersion());
                        dsl_create3.setTotalDiskSpace(staticDeviceInfo.getTotalDiskSpace());
                        dsl_create3.setTotalRamMemory(staticDeviceInfo.getTotalRamMemory());
                        dsl_create3.setCurrentUiTheme(this.deviceInfoRepository.getCurrentUiTheme());
                        String networkOperator2 = this.deviceInfoRepository.getDynamicDeviceInfo().getNetworkOperator();
                        Intrinsics.checkNotNullExpressionValue(networkOperator2, "getNetworkOperator(...)");
                        dsl_create3.setNetworkOperator(networkOperator2);
                        dsl_create3.setBatteryLevel(this.deviceInfoRepository.getDynamicDeviceInfo().getBatteryLevel());
                        dsl_create3.setBatteryStatus(this.deviceInfoRepository.getDynamicDeviceInfo().getBatteryStatus());
                        dsl_create3.setSystemBootTime(this.deviceInfoRepository.getSystemBootTime());
                        String language2 = this.deviceInfoRepository.getDynamicDeviceInfo().getLanguage();
                        Intrinsics.checkNotNullExpressionValue(language2, "getLanguage(...)");
                        dsl_create3.setLanguage(language2);
                        dsl_create3.setLocalList(CollectionsKt.joinToString$default(this.deviceInfoRepository.getLocaleList(), StringUtils.COMMA, null, null, 0, null, null, 62, null));
                        dsl_create3.setConnectionType(this.deviceInfoRepository.getConnectionTypeStr());
                        String bundleVersion2 = this.deviceInfoRepository.cachedStaticDeviceInfo().getBundleVersion();
                        Intrinsics.checkNotNullExpressionValue(bundleVersion2, "getBundleVersion(...)");
                        dsl_create3.setBundleVersion(bundleVersion2);
                        dsl3.setDeviceInfo(dsl_create3._build());
                        DeviceInfoRepository deviceInfoRepository7 = this.deviceInfoRepository;
                        anonymousClass1.L$0 = dsl;
                        anonymousClass1.L$1 = dsl3;
                        anonymousClass1.L$2 = staticDeviceInfo;
                        anonymousClass1.L$3 = null;
                        anonymousClass1.label = 4;
                        objInvoke2 = deviceInfoRepository7.getAuidByteString(anonymousClass1);
                        if (objInvoke2 != coroutine_suspended) {
                            staticDeviceInfo2 = staticDeviceInfo;
                            dsl5 = dsl3;
                            dsl6 = dsl;
                            byteString = (ByteString) objInvoke2;
                            if (byteString != null) {
                                dsl5.setAuid(byteString);
                            }
                            DeviceInfoRepository deviceInfoRepository8 = this.deviceInfoRepository;
                            anonymousClass1.L$0 = dsl6;
                            anonymousClass1.L$1 = dsl5;
                            anonymousClass1.L$2 = staticDeviceInfo2;
                            anonymousClass1.label = 5;
                            objInvoke2 = deviceInfoRepository8.getAuidString(anonymousClass1);
                            if (objInvoke2 != coroutine_suspended) {
                                str = (String) objInvoke2;
                                str2 = str;
                                if (str2 != null) {
                                    dsl5.setAuidString(str);
                                }
                                SessionRepository sessionRepository3 = this.sessionRepository;
                                anonymousClass1.L$0 = dsl6;
                                anonymousClass1.L$1 = dsl5;
                                anonymousClass1.L$2 = staticDeviceInfo2;
                                anonymousClass1.label = 6;
                                objInvoke2 = sessionRepository3.getPrivacy(anonymousClass1);
                                if (objInvoke2 != coroutine_suspended) {
                                    byteString2 = (ByteString) objInvoke2;
                                    if (!byteString2.isEmpty()) {
                                        dsl5.setPrivacy(byteString2);
                                    }
                                    SessionRepository sessionRepository4 = this.sessionRepository;
                                    anonymousClass1.L$0 = dsl6;
                                    anonymousClass1.L$1 = dsl5;
                                    anonymousClass1.L$2 = staticDeviceInfo2;
                                    anonymousClass1.label = 7;
                                    objInvoke2 = sessionRepository4.getGatewayCache(anonymousClass1);
                                    if (objInvoke2 != coroutine_suspended) {
                                        byteString3 = (ByteString) objInvoke2;
                                        if (!byteString3.isEmpty()) {
                                            dsl5.setCache(byteString3);
                                        }
                                        legacyFlowUserConsent = this.legacyUserConsentRepository.getLegacyFlowUserConsent();
                                        if (legacyFlowUserConsent != null) {
                                            dsl5.setLegacyFlowUserConsent(legacyFlowUserConsent);
                                        }
                                        unityInstallationId = this.sessionRepository.getUnityInstallationId();
                                        if (unityInstallationId != null) {
                                            dsl5.setUnityInstallationId(ByteStringsKt.toByteStringUtf8(unityInstallationId));
                                        }
                                        unityMegaSessionId = this.sessionRepository.getUnityMegaSessionId();
                                        if (unityMegaSessionId != null) {
                                            dsl5.setUnityMegaSessionId(ByteStringsKt.toByteStringUtf8(unityMegaSessionId));
                                        }
                                        DeviceInfoRepository deviceInfoRepository9 = this.deviceInfoRepository;
                                        anonymousClass1.L$0 = dsl6;
                                        anonymousClass1.L$1 = dsl5;
                                        anonymousClass1.L$2 = staticDeviceInfo2;
                                        anonymousClass1.label = 8;
                                        objInvoke2 = deviceInfoRepository9.getUnityBuildGuid(anonymousClass1);
                                        if (objInvoke2 != coroutine_suspended) {
                                            str3 = (String) objInvoke2;
                                            if (str3 != null) {
                                                z2 = true;
                                            } else {
                                                z2 = true;
                                            }
                                            if (z2) {
                                                objInvoke2 = null;
                                            }
                                            str4 = (String) objInvoke2;
                                            if (str4 != null) {
                                                dsl5.setUnityBuildGuid(str4);
                                            }
                                            initializationConfiguration = this.sessionRepository.getInitializationConfiguration();
                                            if (initializationConfiguration != null) {
                                                str5 = (String) mutableMap.remove(BLOB_EXTRA_KEY);
                                                if (str5 != null) {
                                                    new MutablePropertyReference0Impl(dsl5) { // from class: com.unity3d.ads.core.domain.AndroidGetInitializationRequestPayload$invoke$2$9$2
                                                        @Override // kotlin.jvm.internal.MutablePropertyReference0Impl, kotlin.reflect.KProperty0
                                                        public Object get() {
                                                            return ((InitializationRequestKt.Dsl) this.receiver).getUadsInitBlob();
                                                        }

                                                        @Override // kotlin.jvm.internal.MutablePropertyReference0Impl, kotlin.reflect.KMutableProperty0
                                                        public void set(Object obj3) {
                                                            ((InitializationRequestKt.Dsl) this.receiver).setUadsInitBlob((ByteString) obj3);
                                                        }
                                                    }.set(byteStringUtf8);
                                                }
                                                dsl5.putAllExtras(dsl5.getExtrasMap(), mutableMap);
                                            }
                                            moduleInitParams = dsl5.getModuleInitParams();
                                            ModuleInitParamsDataSource moduleInitParamsDataSource2 = this.moduleInitParamsDataSource;
                                            anonymousClass1.L$0 = dsl6;
                                            anonymousClass1.L$1 = dsl5;
                                            anonymousClass1.L$2 = staticDeviceInfo2;
                                            anonymousClass1.L$3 = dsl5;
                                            anonymousClass1.L$4 = moduleInitParams;
                                            anonymousClass1.label = 9;
                                            objInvoke = moduleInitParamsDataSource2.invoke(anonymousClass1);
                                            if (objInvoke != coroutine_suspended) {
                                                dsl7 = dsl5;
                                                dslList = moduleInitParams;
                                                objInvoke2 = objInvoke;
                                                dsl8 = dsl7;
                                                dsl7.addAllModuleInitParams(dslList, (Iterable) objInvoke2);
                                                if (!dsl8.hasUadsInitBlob()) {
                                                    MediationInitBlobMetadataReader mediationInitBlobMetadataReader2 = this.mediationInitBlobMetadataReader;
                                                    obj2 = mediationInitBlobMetadataReader2.getJsonStorage().get(mediationInitBlobMetadataReader2.getKey());
                                                    if (obj2 == null) {
                                                        obj2 = null;
                                                    } else {
                                                        if (obj2 != null) {
                                                            z3 = obj2 instanceof String;
                                                        } else {
                                                            z3 = true;
                                                        }
                                                        if (!z3) {
                                                            obj2 = null;
                                                        }
                                                        if (obj2 == null) {
                                                            obj2 = null;
                                                        }
                                                    }
                                                    str6 = (String) obj2;
                                                    if (str6 != null) {
                                                        new MutablePropertyReference0Impl(dsl8) { // from class: com.unity3d.ads.core.domain.AndroidGetInitializationRequestPayload$invoke$2$11
                                                            @Override // kotlin.jvm.internal.MutablePropertyReference0Impl, kotlin.reflect.KProperty0
                                                            public Object get() {
                                                                return ((InitializationRequestKt.Dsl) this.receiver).getUadsInitBlob();
                                                            }

                                                            @Override // kotlin.jvm.internal.MutablePropertyReference0Impl, kotlin.reflect.KMutableProperty0
                                                            public void set(Object obj3) {
                                                                ((InitializationRequestKt.Dsl) this.receiver).setUadsInitBlob((ByteString) obj3);
                                                            }
                                                        }.set(byteStringUtf9);
                                                    }
                                                }
                                                if (dsl8.getIsFirstInit()) {
                                                    InstallReferrerDataSource installReferrerDataSource2 = this.installReferrerDataSource;
                                                    anonymousClass1.L$0 = dsl6;
                                                    anonymousClass1.L$1 = dsl8;
                                                    anonymousClass1.L$2 = staticDeviceInfo2;
                                                    anonymousClass1.L$3 = null;
                                                    anonymousClass1.L$4 = null;
                                                    anonymousClass1.label = 10;
                                                    objInvoke2 = installReferrerDataSource2.invoke(anonymousClass1);
                                                    if (objInvoke2 != coroutine_suspended) {
                                                        staticDeviceInfo3 = staticDeviceInfo2;
                                                        dsl9 = dsl6;
                                                        dsl10 = dsl8;
                                                        installReferrer = (InitializationRequestOuterClass.InstallReferrer) objInvoke2;
                                                        if (installReferrer != null) {
                                                            dsl10.setInstallReferrer(installReferrer);
                                                        }
                                                        dsl6 = dsl9;
                                                        dsl8 = dsl10;
                                                        staticDeviceInfo2 = staticDeviceInfo3;
                                                    }
                                                }
                                                userIdentifier = UnityAds.getUserIdentifier();
                                                if (userIdentifier != null) {
                                                    dsl8.setExternalUserIdentifier(userIdentifier);
                                                }
                                                if (this.sessionRepository.getNativeConfiguration().getFeatureFlags().getCollectGoogleAppId()) {
                                                    dsl8.setGoogleAppId(googleAppId);
                                                }
                                                String appInstaller2 = staticDeviceInfo2.getAndroid().getAppInstaller();
                                                Intrinsics.checkNotNull(appInstaller2);
                                                if (appInstaller2.length() > 0) {
                                                }
                                                if (str7 != null) {
                                                    dsl8.setInstallSource(str7);
                                                }
                                                return dsl6._build();
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                return coroutine_suspended;
            case 2:
                dsl2 = (InitializationRequestKt.Dsl) anonymousClass1.L$3;
                staticDeviceInfo = (StaticDeviceInfoOuterClass.StaticDeviceInfo) anonymousClass1.L$2;
                dsl3 = (InitializationRequestKt.Dsl) anonymousClass1.L$1;
                dsl = (InitializationRequestKt.Dsl) anonymousClass1.L$0;
                ResultKt.throwOnFailure(objInvoke2);
                dsl2.setClientInfo((ClientInfoOuterClass.ClientInfo) objInvoke2);
                DeviceInfoRepository deviceInfoRepository10 = this.deviceInfoRepository;
                anonymousClass1.L$0 = dsl;
                anonymousClass1.L$1 = dsl3;
                anonymousClass1.L$2 = staticDeviceInfo;
                anonymousClass1.L$3 = dsl3;
                anonymousClass1.label = 3;
                objInvoke2 = deviceInfoRepository10.getIdfi(anonymousClass1);
                if (objInvoke2 != coroutine_suspended) {
                    dsl4 = dsl3;
                    dsl4.setIdfi((String) objInvoke2);
                    analyticsUserId = this.deviceInfoRepository.getAnalyticsUserId();
                    if (analyticsUserId != null) {
                        dsl3.setAnalyticsUserId(analyticsUserId);
                    }
                    dsl3.setSessionId(this.sessionRepository.getSessionId());
                    InitializationDeviceInfoKt.Dsl.Companion companion4 = InitializationDeviceInfoKt.Dsl.INSTANCE;
                    InitializationRequestOuterClass.InitializationDeviceInfo.Builder builderNewBuilder4 = InitializationRequestOuterClass.InitializationDeviceInfo.newBuilder();
                    Intrinsics.checkNotNullExpressionValue(builderNewBuilder4, "newBuilder(...)");
                    InitializationDeviceInfoKt.Dsl dsl_create4 = companion4._create(builderNewBuilder4);
                    dsl_create4.setBundleId(this.deviceInfoRepository.getAppName());
                    dsl_create4.setDeviceModel(this.deviceInfoRepository.getModel());
                    dsl_create4.setDeviceMake(this.deviceInfoRepository.getManufacturer());
                    dsl_create4.setOsVersion(this.deviceInfoRepository.getOsVersion());
                    dsl_create4.setTotalDiskSpace(staticDeviceInfo.getTotalDiskSpace());
                    dsl_create4.setTotalRamMemory(staticDeviceInfo.getTotalRamMemory());
                    dsl_create4.setCurrentUiTheme(this.deviceInfoRepository.getCurrentUiTheme());
                    String networkOperator3 = this.deviceInfoRepository.getDynamicDeviceInfo().getNetworkOperator();
                    Intrinsics.checkNotNullExpressionValue(networkOperator3, "getNetworkOperator(...)");
                    dsl_create4.setNetworkOperator(networkOperator3);
                    dsl_create4.setBatteryLevel(this.deviceInfoRepository.getDynamicDeviceInfo().getBatteryLevel());
                    dsl_create4.setBatteryStatus(this.deviceInfoRepository.getDynamicDeviceInfo().getBatteryStatus());
                    dsl_create4.setSystemBootTime(this.deviceInfoRepository.getSystemBootTime());
                    String language3 = this.deviceInfoRepository.getDynamicDeviceInfo().getLanguage();
                    Intrinsics.checkNotNullExpressionValue(language3, "getLanguage(...)");
                    dsl_create4.setLanguage(language3);
                    dsl_create4.setLocalList(CollectionsKt.joinToString$default(this.deviceInfoRepository.getLocaleList(), StringUtils.COMMA, null, null, 0, null, null, 62, null));
                    dsl_create4.setConnectionType(this.deviceInfoRepository.getConnectionTypeStr());
                    String bundleVersion3 = this.deviceInfoRepository.cachedStaticDeviceInfo().getBundleVersion();
                    Intrinsics.checkNotNullExpressionValue(bundleVersion3, "getBundleVersion(...)");
                    dsl_create4.setBundleVersion(bundleVersion3);
                    dsl3.setDeviceInfo(dsl_create4._build());
                    DeviceInfoRepository deviceInfoRepository11 = this.deviceInfoRepository;
                    anonymousClass1.L$0 = dsl;
                    anonymousClass1.L$1 = dsl3;
                    anonymousClass1.L$2 = staticDeviceInfo;
                    anonymousClass1.L$3 = null;
                    anonymousClass1.label = 4;
                    objInvoke2 = deviceInfoRepository11.getAuidByteString(anonymousClass1);
                    if (objInvoke2 != coroutine_suspended) {
                        staticDeviceInfo2 = staticDeviceInfo;
                        dsl5 = dsl3;
                        dsl6 = dsl;
                        byteString = (ByteString) objInvoke2;
                        if (byteString != null) {
                            dsl5.setAuid(byteString);
                        }
                        DeviceInfoRepository deviceInfoRepository12 = this.deviceInfoRepository;
                        anonymousClass1.L$0 = dsl6;
                        anonymousClass1.L$1 = dsl5;
                        anonymousClass1.L$2 = staticDeviceInfo2;
                        anonymousClass1.label = 5;
                        objInvoke2 = deviceInfoRepository12.getAuidString(anonymousClass1);
                        if (objInvoke2 != coroutine_suspended) {
                            str = (String) objInvoke2;
                            str2 = str;
                            if (str2 != null) {
                                dsl5.setAuidString(str);
                            }
                            SessionRepository sessionRepository5 = this.sessionRepository;
                            anonymousClass1.L$0 = dsl6;
                            anonymousClass1.L$1 = dsl5;
                            anonymousClass1.L$2 = staticDeviceInfo2;
                            anonymousClass1.label = 6;
                            objInvoke2 = sessionRepository5.getPrivacy(anonymousClass1);
                            if (objInvoke2 != coroutine_suspended) {
                                byteString2 = (ByteString) objInvoke2;
                                if (!byteString2.isEmpty()) {
                                    dsl5.setPrivacy(byteString2);
                                }
                                SessionRepository sessionRepository6 = this.sessionRepository;
                                anonymousClass1.L$0 = dsl6;
                                anonymousClass1.L$1 = dsl5;
                                anonymousClass1.L$2 = staticDeviceInfo2;
                                anonymousClass1.label = 7;
                                objInvoke2 = sessionRepository6.getGatewayCache(anonymousClass1);
                                if (objInvoke2 != coroutine_suspended) {
                                    byteString3 = (ByteString) objInvoke2;
                                    if (!byteString3.isEmpty()) {
                                        dsl5.setCache(byteString3);
                                    }
                                    legacyFlowUserConsent = this.legacyUserConsentRepository.getLegacyFlowUserConsent();
                                    if (legacyFlowUserConsent != null) {
                                        dsl5.setLegacyFlowUserConsent(legacyFlowUserConsent);
                                    }
                                    unityInstallationId = this.sessionRepository.getUnityInstallationId();
                                    if (unityInstallationId != null) {
                                        dsl5.setUnityInstallationId(ByteStringsKt.toByteStringUtf8(unityInstallationId));
                                    }
                                    unityMegaSessionId = this.sessionRepository.getUnityMegaSessionId();
                                    if (unityMegaSessionId != null) {
                                        dsl5.setUnityMegaSessionId(ByteStringsKt.toByteStringUtf8(unityMegaSessionId));
                                    }
                                    DeviceInfoRepository deviceInfoRepository13 = this.deviceInfoRepository;
                                    anonymousClass1.L$0 = dsl6;
                                    anonymousClass1.L$1 = dsl5;
                                    anonymousClass1.L$2 = staticDeviceInfo2;
                                    anonymousClass1.label = 8;
                                    objInvoke2 = deviceInfoRepository13.getUnityBuildGuid(anonymousClass1);
                                    if (objInvoke2 != coroutine_suspended) {
                                        str3 = (String) objInvoke2;
                                        if (str3 != null) {
                                            z2 = true;
                                        } else {
                                            z2 = true;
                                        }
                                        if (z2) {
                                            objInvoke2 = null;
                                        }
                                        str4 = (String) objInvoke2;
                                        if (str4 != null) {
                                            dsl5.setUnityBuildGuid(str4);
                                        }
                                        initializationConfiguration = this.sessionRepository.getInitializationConfiguration();
                                        if (initializationConfiguration != null) {
                                            str5 = (String) mutableMap.remove(BLOB_EXTRA_KEY);
                                            if (str5 != null) {
                                                new MutablePropertyReference0Impl(dsl5) { // from class: com.unity3d.ads.core.domain.AndroidGetInitializationRequestPayload$invoke$2$9$2
                                                    @Override // kotlin.jvm.internal.MutablePropertyReference0Impl, kotlin.reflect.KProperty0
                                                    public Object get() {
                                                        return ((InitializationRequestKt.Dsl) this.receiver).getUadsInitBlob();
                                                    }

                                                    @Override // kotlin.jvm.internal.MutablePropertyReference0Impl, kotlin.reflect.KMutableProperty0
                                                    public void set(Object obj3) {
                                                        ((InitializationRequestKt.Dsl) this.receiver).setUadsInitBlob((ByteString) obj3);
                                                    }
                                                }.set(byteStringUtf8);
                                            }
                                            dsl5.putAllExtras(dsl5.getExtrasMap(), mutableMap);
                                        }
                                        moduleInitParams = dsl5.getModuleInitParams();
                                        ModuleInitParamsDataSource moduleInitParamsDataSource3 = this.moduleInitParamsDataSource;
                                        anonymousClass1.L$0 = dsl6;
                                        anonymousClass1.L$1 = dsl5;
                                        anonymousClass1.L$2 = staticDeviceInfo2;
                                        anonymousClass1.L$3 = dsl5;
                                        anonymousClass1.L$4 = moduleInitParams;
                                        anonymousClass1.label = 9;
                                        objInvoke = moduleInitParamsDataSource3.invoke(anonymousClass1);
                                        if (objInvoke != coroutine_suspended) {
                                            dsl7 = dsl5;
                                            dslList = moduleInitParams;
                                            objInvoke2 = objInvoke;
                                            dsl8 = dsl7;
                                            dsl7.addAllModuleInitParams(dslList, (Iterable) objInvoke2);
                                            if (!dsl8.hasUadsInitBlob()) {
                                                MediationInitBlobMetadataReader mediationInitBlobMetadataReader3 = this.mediationInitBlobMetadataReader;
                                                obj2 = mediationInitBlobMetadataReader3.getJsonStorage().get(mediationInitBlobMetadataReader3.getKey());
                                                if (obj2 == null) {
                                                    obj2 = null;
                                                } else {
                                                    if (obj2 != null) {
                                                        z3 = obj2 instanceof String;
                                                    } else {
                                                        z3 = true;
                                                    }
                                                    if (!z3) {
                                                        obj2 = null;
                                                    }
                                                    if (obj2 == null) {
                                                        obj2 = null;
                                                    }
                                                }
                                                str6 = (String) obj2;
                                                if (str6 != null) {
                                                    new MutablePropertyReference0Impl(dsl8) { // from class: com.unity3d.ads.core.domain.AndroidGetInitializationRequestPayload$invoke$2$11
                                                        @Override // kotlin.jvm.internal.MutablePropertyReference0Impl, kotlin.reflect.KProperty0
                                                        public Object get() {
                                                            return ((InitializationRequestKt.Dsl) this.receiver).getUadsInitBlob();
                                                        }

                                                        @Override // kotlin.jvm.internal.MutablePropertyReference0Impl, kotlin.reflect.KMutableProperty0
                                                        public void set(Object obj3) {
                                                            ((InitializationRequestKt.Dsl) this.receiver).setUadsInitBlob((ByteString) obj3);
                                                        }
                                                    }.set(byteStringUtf9);
                                                }
                                            }
                                            if (dsl8.getIsFirstInit()) {
                                                InstallReferrerDataSource installReferrerDataSource3 = this.installReferrerDataSource;
                                                anonymousClass1.L$0 = dsl6;
                                                anonymousClass1.L$1 = dsl8;
                                                anonymousClass1.L$2 = staticDeviceInfo2;
                                                anonymousClass1.L$3 = null;
                                                anonymousClass1.L$4 = null;
                                                anonymousClass1.label = 10;
                                                objInvoke2 = installReferrerDataSource3.invoke(anonymousClass1);
                                                if (objInvoke2 != coroutine_suspended) {
                                                    staticDeviceInfo3 = staticDeviceInfo2;
                                                    dsl9 = dsl6;
                                                    dsl10 = dsl8;
                                                    installReferrer = (InitializationRequestOuterClass.InstallReferrer) objInvoke2;
                                                    if (installReferrer != null) {
                                                        dsl10.setInstallReferrer(installReferrer);
                                                    }
                                                    dsl6 = dsl9;
                                                    dsl8 = dsl10;
                                                    staticDeviceInfo2 = staticDeviceInfo3;
                                                }
                                            }
                                            userIdentifier = UnityAds.getUserIdentifier();
                                            if (userIdentifier != null) {
                                                dsl8.setExternalUserIdentifier(userIdentifier);
                                            }
                                            if (this.sessionRepository.getNativeConfiguration().getFeatureFlags().getCollectGoogleAppId()) {
                                                dsl8.setGoogleAppId(googleAppId);
                                            }
                                            String appInstaller3 = staticDeviceInfo2.getAndroid().getAppInstaller();
                                            Intrinsics.checkNotNull(appInstaller3);
                                            if (appInstaller3.length() > 0) {
                                            }
                                            if (str7 != null) {
                                                dsl8.setInstallSource(str7);
                                            }
                                            return dsl6._build();
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                return coroutine_suspended;
            case 3:
                dsl4 = (InitializationRequestKt.Dsl) anonymousClass1.L$3;
                staticDeviceInfo = (StaticDeviceInfoOuterClass.StaticDeviceInfo) anonymousClass1.L$2;
                dsl3 = (InitializationRequestKt.Dsl) anonymousClass1.L$1;
                dsl = (InitializationRequestKt.Dsl) anonymousClass1.L$0;
                ResultKt.throwOnFailure(objInvoke2);
                dsl4.setIdfi((String) objInvoke2);
                analyticsUserId = this.deviceInfoRepository.getAnalyticsUserId();
                if (analyticsUserId != null) {
                    dsl3.setAnalyticsUserId(analyticsUserId);
                }
                dsl3.setSessionId(this.sessionRepository.getSessionId());
                InitializationDeviceInfoKt.Dsl.Companion companion5 = InitializationDeviceInfoKt.Dsl.INSTANCE;
                InitializationRequestOuterClass.InitializationDeviceInfo.Builder builderNewBuilder5 = InitializationRequestOuterClass.InitializationDeviceInfo.newBuilder();
                Intrinsics.checkNotNullExpressionValue(builderNewBuilder5, "newBuilder(...)");
                InitializationDeviceInfoKt.Dsl dsl_create5 = companion5._create(builderNewBuilder5);
                dsl_create5.setBundleId(this.deviceInfoRepository.getAppName());
                dsl_create5.setDeviceModel(this.deviceInfoRepository.getModel());
                dsl_create5.setDeviceMake(this.deviceInfoRepository.getManufacturer());
                dsl_create5.setOsVersion(this.deviceInfoRepository.getOsVersion());
                dsl_create5.setTotalDiskSpace(staticDeviceInfo.getTotalDiskSpace());
                dsl_create5.setTotalRamMemory(staticDeviceInfo.getTotalRamMemory());
                dsl_create5.setCurrentUiTheme(this.deviceInfoRepository.getCurrentUiTheme());
                String networkOperator4 = this.deviceInfoRepository.getDynamicDeviceInfo().getNetworkOperator();
                Intrinsics.checkNotNullExpressionValue(networkOperator4, "getNetworkOperator(...)");
                dsl_create5.setNetworkOperator(networkOperator4);
                dsl_create5.setBatteryLevel(this.deviceInfoRepository.getDynamicDeviceInfo().getBatteryLevel());
                dsl_create5.setBatteryStatus(this.deviceInfoRepository.getDynamicDeviceInfo().getBatteryStatus());
                dsl_create5.setSystemBootTime(this.deviceInfoRepository.getSystemBootTime());
                String language4 = this.deviceInfoRepository.getDynamicDeviceInfo().getLanguage();
                Intrinsics.checkNotNullExpressionValue(language4, "getLanguage(...)");
                dsl_create5.setLanguage(language4);
                dsl_create5.setLocalList(CollectionsKt.joinToString$default(this.deviceInfoRepository.getLocaleList(), StringUtils.COMMA, null, null, 0, null, null, 62, null));
                dsl_create5.setConnectionType(this.deviceInfoRepository.getConnectionTypeStr());
                String bundleVersion4 = this.deviceInfoRepository.cachedStaticDeviceInfo().getBundleVersion();
                Intrinsics.checkNotNullExpressionValue(bundleVersion4, "getBundleVersion(...)");
                dsl_create5.setBundleVersion(bundleVersion4);
                dsl3.setDeviceInfo(dsl_create5._build());
                DeviceInfoRepository deviceInfoRepository14 = this.deviceInfoRepository;
                anonymousClass1.L$0 = dsl;
                anonymousClass1.L$1 = dsl3;
                anonymousClass1.L$2 = staticDeviceInfo;
                anonymousClass1.L$3 = null;
                anonymousClass1.label = 4;
                objInvoke2 = deviceInfoRepository14.getAuidByteString(anonymousClass1);
                if (objInvoke2 != coroutine_suspended) {
                    staticDeviceInfo2 = staticDeviceInfo;
                    dsl5 = dsl3;
                    dsl6 = dsl;
                    byteString = (ByteString) objInvoke2;
                    if (byteString != null) {
                        dsl5.setAuid(byteString);
                    }
                    DeviceInfoRepository deviceInfoRepository15 = this.deviceInfoRepository;
                    anonymousClass1.L$0 = dsl6;
                    anonymousClass1.L$1 = dsl5;
                    anonymousClass1.L$2 = staticDeviceInfo2;
                    anonymousClass1.label = 5;
                    objInvoke2 = deviceInfoRepository15.getAuidString(anonymousClass1);
                    if (objInvoke2 != coroutine_suspended) {
                        str = (String) objInvoke2;
                        str2 = str;
                        if (str2 != null) {
                            dsl5.setAuidString(str);
                        }
                        SessionRepository sessionRepository7 = this.sessionRepository;
                        anonymousClass1.L$0 = dsl6;
                        anonymousClass1.L$1 = dsl5;
                        anonymousClass1.L$2 = staticDeviceInfo2;
                        anonymousClass1.label = 6;
                        objInvoke2 = sessionRepository7.getPrivacy(anonymousClass1);
                        if (objInvoke2 != coroutine_suspended) {
                            byteString2 = (ByteString) objInvoke2;
                            if (!byteString2.isEmpty()) {
                                dsl5.setPrivacy(byteString2);
                            }
                            SessionRepository sessionRepository8 = this.sessionRepository;
                            anonymousClass1.L$0 = dsl6;
                            anonymousClass1.L$1 = dsl5;
                            anonymousClass1.L$2 = staticDeviceInfo2;
                            anonymousClass1.label = 7;
                            objInvoke2 = sessionRepository8.getGatewayCache(anonymousClass1);
                            if (objInvoke2 != coroutine_suspended) {
                                byteString3 = (ByteString) objInvoke2;
                                if (!byteString3.isEmpty()) {
                                    dsl5.setCache(byteString3);
                                }
                                legacyFlowUserConsent = this.legacyUserConsentRepository.getLegacyFlowUserConsent();
                                if (legacyFlowUserConsent != null) {
                                    dsl5.setLegacyFlowUserConsent(legacyFlowUserConsent);
                                }
                                unityInstallationId = this.sessionRepository.getUnityInstallationId();
                                if (unityInstallationId != null) {
                                    dsl5.setUnityInstallationId(ByteStringsKt.toByteStringUtf8(unityInstallationId));
                                }
                                unityMegaSessionId = this.sessionRepository.getUnityMegaSessionId();
                                if (unityMegaSessionId != null) {
                                    dsl5.setUnityMegaSessionId(ByteStringsKt.toByteStringUtf8(unityMegaSessionId));
                                }
                                DeviceInfoRepository deviceInfoRepository16 = this.deviceInfoRepository;
                                anonymousClass1.L$0 = dsl6;
                                anonymousClass1.L$1 = dsl5;
                                anonymousClass1.L$2 = staticDeviceInfo2;
                                anonymousClass1.label = 8;
                                objInvoke2 = deviceInfoRepository16.getUnityBuildGuid(anonymousClass1);
                                if (objInvoke2 != coroutine_suspended) {
                                    str3 = (String) objInvoke2;
                                    if (str3 != null) {
                                        z2 = true;
                                    } else {
                                        z2 = true;
                                    }
                                    if (z2) {
                                        objInvoke2 = null;
                                    }
                                    str4 = (String) objInvoke2;
                                    if (str4 != null) {
                                        dsl5.setUnityBuildGuid(str4);
                                    }
                                    initializationConfiguration = this.sessionRepository.getInitializationConfiguration();
                                    if (initializationConfiguration != null) {
                                        str5 = (String) mutableMap.remove(BLOB_EXTRA_KEY);
                                        if (str5 != null) {
                                            new MutablePropertyReference0Impl(dsl5) { // from class: com.unity3d.ads.core.domain.AndroidGetInitializationRequestPayload$invoke$2$9$2
                                                @Override // kotlin.jvm.internal.MutablePropertyReference0Impl, kotlin.reflect.KProperty0
                                                public Object get() {
                                                    return ((InitializationRequestKt.Dsl) this.receiver).getUadsInitBlob();
                                                }

                                                @Override // kotlin.jvm.internal.MutablePropertyReference0Impl, kotlin.reflect.KMutableProperty0
                                                public void set(Object obj3) {
                                                    ((InitializationRequestKt.Dsl) this.receiver).setUadsInitBlob((ByteString) obj3);
                                                }
                                            }.set(byteStringUtf8);
                                        }
                                        dsl5.putAllExtras(dsl5.getExtrasMap(), mutableMap);
                                    }
                                    moduleInitParams = dsl5.getModuleInitParams();
                                    ModuleInitParamsDataSource moduleInitParamsDataSource4 = this.moduleInitParamsDataSource;
                                    anonymousClass1.L$0 = dsl6;
                                    anonymousClass1.L$1 = dsl5;
                                    anonymousClass1.L$2 = staticDeviceInfo2;
                                    anonymousClass1.L$3 = dsl5;
                                    anonymousClass1.L$4 = moduleInitParams;
                                    anonymousClass1.label = 9;
                                    objInvoke = moduleInitParamsDataSource4.invoke(anonymousClass1);
                                    if (objInvoke != coroutine_suspended) {
                                        dsl7 = dsl5;
                                        dslList = moduleInitParams;
                                        objInvoke2 = objInvoke;
                                        dsl8 = dsl7;
                                        dsl7.addAllModuleInitParams(dslList, (Iterable) objInvoke2);
                                        if (!dsl8.hasUadsInitBlob()) {
                                            MediationInitBlobMetadataReader mediationInitBlobMetadataReader4 = this.mediationInitBlobMetadataReader;
                                            obj2 = mediationInitBlobMetadataReader4.getJsonStorage().get(mediationInitBlobMetadataReader4.getKey());
                                            if (obj2 == null) {
                                                obj2 = null;
                                            } else {
                                                if (obj2 != null) {
                                                    z3 = obj2 instanceof String;
                                                } else {
                                                    z3 = true;
                                                }
                                                if (!z3) {
                                                    obj2 = null;
                                                }
                                                if (obj2 == null) {
                                                    obj2 = null;
                                                }
                                            }
                                            str6 = (String) obj2;
                                            if (str6 != null) {
                                                new MutablePropertyReference0Impl(dsl8) { // from class: com.unity3d.ads.core.domain.AndroidGetInitializationRequestPayload$invoke$2$11
                                                    @Override // kotlin.jvm.internal.MutablePropertyReference0Impl, kotlin.reflect.KProperty0
                                                    public Object get() {
                                                        return ((InitializationRequestKt.Dsl) this.receiver).getUadsInitBlob();
                                                    }

                                                    @Override // kotlin.jvm.internal.MutablePropertyReference0Impl, kotlin.reflect.KMutableProperty0
                                                    public void set(Object obj3) {
                                                        ((InitializationRequestKt.Dsl) this.receiver).setUadsInitBlob((ByteString) obj3);
                                                    }
                                                }.set(byteStringUtf9);
                                            }
                                        }
                                        if (dsl8.getIsFirstInit()) {
                                            InstallReferrerDataSource installReferrerDataSource4 = this.installReferrerDataSource;
                                            anonymousClass1.L$0 = dsl6;
                                            anonymousClass1.L$1 = dsl8;
                                            anonymousClass1.L$2 = staticDeviceInfo2;
                                            anonymousClass1.L$3 = null;
                                            anonymousClass1.L$4 = null;
                                            anonymousClass1.label = 10;
                                            objInvoke2 = installReferrerDataSource4.invoke(anonymousClass1);
                                            if (objInvoke2 != coroutine_suspended) {
                                                staticDeviceInfo3 = staticDeviceInfo2;
                                                dsl9 = dsl6;
                                                dsl10 = dsl8;
                                                installReferrer = (InitializationRequestOuterClass.InstallReferrer) objInvoke2;
                                                if (installReferrer != null) {
                                                    dsl10.setInstallReferrer(installReferrer);
                                                }
                                                dsl6 = dsl9;
                                                dsl8 = dsl10;
                                                staticDeviceInfo2 = staticDeviceInfo3;
                                            }
                                        }
                                        userIdentifier = UnityAds.getUserIdentifier();
                                        if (userIdentifier != null) {
                                            dsl8.setExternalUserIdentifier(userIdentifier);
                                        }
                                        if (this.sessionRepository.getNativeConfiguration().getFeatureFlags().getCollectGoogleAppId()) {
                                            dsl8.setGoogleAppId(googleAppId);
                                        }
                                        String appInstaller4 = staticDeviceInfo2.getAndroid().getAppInstaller();
                                        Intrinsics.checkNotNull(appInstaller4);
                                        if (appInstaller4.length() > 0) {
                                        }
                                        if (str7 != null) {
                                            dsl8.setInstallSource(str7);
                                        }
                                        return dsl6._build();
                                    }
                                }
                            }
                        }
                    }
                }
                return coroutine_suspended;
            case 4:
                staticDeviceInfo2 = (StaticDeviceInfoOuterClass.StaticDeviceInfo) anonymousClass1.L$2;
                dsl5 = (InitializationRequestKt.Dsl) anonymousClass1.L$1;
                dsl6 = (InitializationRequestKt.Dsl) anonymousClass1.L$0;
                ResultKt.throwOnFailure(objInvoke2);
                byteString = (ByteString) objInvoke2;
                if (byteString != null) {
                    dsl5.setAuid(byteString);
                }
                DeviceInfoRepository deviceInfoRepository17 = this.deviceInfoRepository;
                anonymousClass1.L$0 = dsl6;
                anonymousClass1.L$1 = dsl5;
                anonymousClass1.L$2 = staticDeviceInfo2;
                anonymousClass1.label = 5;
                objInvoke2 = deviceInfoRepository17.getAuidString(anonymousClass1);
                if (objInvoke2 != coroutine_suspended) {
                    str = (String) objInvoke2;
                    str2 = str;
                    if (str2 != null) {
                        dsl5.setAuidString(str);
                    }
                    SessionRepository sessionRepository9 = this.sessionRepository;
                    anonymousClass1.L$0 = dsl6;
                    anonymousClass1.L$1 = dsl5;
                    anonymousClass1.L$2 = staticDeviceInfo2;
                    anonymousClass1.label = 6;
                    objInvoke2 = sessionRepository9.getPrivacy(anonymousClass1);
                    if (objInvoke2 != coroutine_suspended) {
                        byteString2 = (ByteString) objInvoke2;
                        if (!byteString2.isEmpty()) {
                            dsl5.setPrivacy(byteString2);
                        }
                        SessionRepository sessionRepository10 = this.sessionRepository;
                        anonymousClass1.L$0 = dsl6;
                        anonymousClass1.L$1 = dsl5;
                        anonymousClass1.L$2 = staticDeviceInfo2;
                        anonymousClass1.label = 7;
                        objInvoke2 = sessionRepository10.getGatewayCache(anonymousClass1);
                        if (objInvoke2 != coroutine_suspended) {
                            byteString3 = (ByteString) objInvoke2;
                            if (!byteString3.isEmpty()) {
                                dsl5.setCache(byteString3);
                            }
                            legacyFlowUserConsent = this.legacyUserConsentRepository.getLegacyFlowUserConsent();
                            if (legacyFlowUserConsent != null) {
                                dsl5.setLegacyFlowUserConsent(legacyFlowUserConsent);
                            }
                            unityInstallationId = this.sessionRepository.getUnityInstallationId();
                            if (unityInstallationId != null) {
                                dsl5.setUnityInstallationId(ByteStringsKt.toByteStringUtf8(unityInstallationId));
                            }
                            unityMegaSessionId = this.sessionRepository.getUnityMegaSessionId();
                            if (unityMegaSessionId != null) {
                                dsl5.setUnityMegaSessionId(ByteStringsKt.toByteStringUtf8(unityMegaSessionId));
                            }
                            DeviceInfoRepository deviceInfoRepository18 = this.deviceInfoRepository;
                            anonymousClass1.L$0 = dsl6;
                            anonymousClass1.L$1 = dsl5;
                            anonymousClass1.L$2 = staticDeviceInfo2;
                            anonymousClass1.label = 8;
                            objInvoke2 = deviceInfoRepository18.getUnityBuildGuid(anonymousClass1);
                            if (objInvoke2 != coroutine_suspended) {
                                str3 = (String) objInvoke2;
                                if (str3 != null) {
                                    z2 = true;
                                } else {
                                    z2 = true;
                                }
                                if (z2) {
                                    objInvoke2 = null;
                                }
                                str4 = (String) objInvoke2;
                                if (str4 != null) {
                                    dsl5.setUnityBuildGuid(str4);
                                }
                                initializationConfiguration = this.sessionRepository.getInitializationConfiguration();
                                if (initializationConfiguration != null) {
                                    str5 = (String) mutableMap.remove(BLOB_EXTRA_KEY);
                                    if (str5 != null) {
                                        new MutablePropertyReference0Impl(dsl5) { // from class: com.unity3d.ads.core.domain.AndroidGetInitializationRequestPayload$invoke$2$9$2
                                            @Override // kotlin.jvm.internal.MutablePropertyReference0Impl, kotlin.reflect.KProperty0
                                            public Object get() {
                                                return ((InitializationRequestKt.Dsl) this.receiver).getUadsInitBlob();
                                            }

                                            @Override // kotlin.jvm.internal.MutablePropertyReference0Impl, kotlin.reflect.KMutableProperty0
                                            public void set(Object obj3) {
                                                ((InitializationRequestKt.Dsl) this.receiver).setUadsInitBlob((ByteString) obj3);
                                            }
                                        }.set(byteStringUtf8);
                                    }
                                    dsl5.putAllExtras(dsl5.getExtrasMap(), mutableMap);
                                }
                                moduleInitParams = dsl5.getModuleInitParams();
                                ModuleInitParamsDataSource moduleInitParamsDataSource5 = this.moduleInitParamsDataSource;
                                anonymousClass1.L$0 = dsl6;
                                anonymousClass1.L$1 = dsl5;
                                anonymousClass1.L$2 = staticDeviceInfo2;
                                anonymousClass1.L$3 = dsl5;
                                anonymousClass1.L$4 = moduleInitParams;
                                anonymousClass1.label = 9;
                                objInvoke = moduleInitParamsDataSource5.invoke(anonymousClass1);
                                if (objInvoke != coroutine_suspended) {
                                    dsl7 = dsl5;
                                    dslList = moduleInitParams;
                                    objInvoke2 = objInvoke;
                                    dsl8 = dsl7;
                                    dsl7.addAllModuleInitParams(dslList, (Iterable) objInvoke2);
                                    if (!dsl8.hasUadsInitBlob()) {
                                        MediationInitBlobMetadataReader mediationInitBlobMetadataReader5 = this.mediationInitBlobMetadataReader;
                                        obj2 = mediationInitBlobMetadataReader5.getJsonStorage().get(mediationInitBlobMetadataReader5.getKey());
                                        if (obj2 == null) {
                                            obj2 = null;
                                        } else {
                                            if (obj2 != null) {
                                                z3 = obj2 instanceof String;
                                            } else {
                                                z3 = true;
                                            }
                                            if (!z3) {
                                                obj2 = null;
                                            }
                                            if (obj2 == null) {
                                                obj2 = null;
                                            }
                                        }
                                        str6 = (String) obj2;
                                        if (str6 != null) {
                                            new MutablePropertyReference0Impl(dsl8) { // from class: com.unity3d.ads.core.domain.AndroidGetInitializationRequestPayload$invoke$2$11
                                                @Override // kotlin.jvm.internal.MutablePropertyReference0Impl, kotlin.reflect.KProperty0
                                                public Object get() {
                                                    return ((InitializationRequestKt.Dsl) this.receiver).getUadsInitBlob();
                                                }

                                                @Override // kotlin.jvm.internal.MutablePropertyReference0Impl, kotlin.reflect.KMutableProperty0
                                                public void set(Object obj3) {
                                                    ((InitializationRequestKt.Dsl) this.receiver).setUadsInitBlob((ByteString) obj3);
                                                }
                                            }.set(byteStringUtf9);
                                        }
                                    }
                                    if (dsl8.getIsFirstInit()) {
                                        InstallReferrerDataSource installReferrerDataSource5 = this.installReferrerDataSource;
                                        anonymousClass1.L$0 = dsl6;
                                        anonymousClass1.L$1 = dsl8;
                                        anonymousClass1.L$2 = staticDeviceInfo2;
                                        anonymousClass1.L$3 = null;
                                        anonymousClass1.L$4 = null;
                                        anonymousClass1.label = 10;
                                        objInvoke2 = installReferrerDataSource5.invoke(anonymousClass1);
                                        if (objInvoke2 != coroutine_suspended) {
                                            staticDeviceInfo3 = staticDeviceInfo2;
                                            dsl9 = dsl6;
                                            dsl10 = dsl8;
                                            installReferrer = (InitializationRequestOuterClass.InstallReferrer) objInvoke2;
                                            if (installReferrer != null) {
                                                dsl10.setInstallReferrer(installReferrer);
                                            }
                                            dsl6 = dsl9;
                                            dsl8 = dsl10;
                                            staticDeviceInfo2 = staticDeviceInfo3;
                                        }
                                    }
                                    userIdentifier = UnityAds.getUserIdentifier();
                                    if (userIdentifier != null) {
                                        dsl8.setExternalUserIdentifier(userIdentifier);
                                    }
                                    if (this.sessionRepository.getNativeConfiguration().getFeatureFlags().getCollectGoogleAppId()) {
                                        dsl8.setGoogleAppId(googleAppId);
                                    }
                                    String appInstaller5 = staticDeviceInfo2.getAndroid().getAppInstaller();
                                    Intrinsics.checkNotNull(appInstaller5);
                                    if (appInstaller5.length() > 0) {
                                    }
                                    if (str7 != null) {
                                        dsl8.setInstallSource(str7);
                                    }
                                    return dsl6._build();
                                }
                            }
                        }
                    }
                }
                return coroutine_suspended;
            case 5:
                staticDeviceInfo2 = (StaticDeviceInfoOuterClass.StaticDeviceInfo) anonymousClass1.L$2;
                dsl5 = (InitializationRequestKt.Dsl) anonymousClass1.L$1;
                dsl6 = (InitializationRequestKt.Dsl) anonymousClass1.L$0;
                ResultKt.throwOnFailure(objInvoke2);
                str = (String) objInvoke2;
                str2 = str;
                if (str2 != null) {
                    dsl5.setAuidString(str);
                }
                SessionRepository sessionRepository11 = this.sessionRepository;
                anonymousClass1.L$0 = dsl6;
                anonymousClass1.L$1 = dsl5;
                anonymousClass1.L$2 = staticDeviceInfo2;
                anonymousClass1.label = 6;
                objInvoke2 = sessionRepository11.getPrivacy(anonymousClass1);
                if (objInvoke2 != coroutine_suspended) {
                    byteString2 = (ByteString) objInvoke2;
                    if (!byteString2.isEmpty()) {
                        dsl5.setPrivacy(byteString2);
                    }
                    SessionRepository sessionRepository12 = this.sessionRepository;
                    anonymousClass1.L$0 = dsl6;
                    anonymousClass1.L$1 = dsl5;
                    anonymousClass1.L$2 = staticDeviceInfo2;
                    anonymousClass1.label = 7;
                    objInvoke2 = sessionRepository12.getGatewayCache(anonymousClass1);
                    if (objInvoke2 != coroutine_suspended) {
                        byteString3 = (ByteString) objInvoke2;
                        if (!byteString3.isEmpty()) {
                            dsl5.setCache(byteString3);
                        }
                        legacyFlowUserConsent = this.legacyUserConsentRepository.getLegacyFlowUserConsent();
                        if (legacyFlowUserConsent != null) {
                            dsl5.setLegacyFlowUserConsent(legacyFlowUserConsent);
                        }
                        unityInstallationId = this.sessionRepository.getUnityInstallationId();
                        if (unityInstallationId != null) {
                            dsl5.setUnityInstallationId(ByteStringsKt.toByteStringUtf8(unityInstallationId));
                        }
                        unityMegaSessionId = this.sessionRepository.getUnityMegaSessionId();
                        if (unityMegaSessionId != null) {
                            dsl5.setUnityMegaSessionId(ByteStringsKt.toByteStringUtf8(unityMegaSessionId));
                        }
                        DeviceInfoRepository deviceInfoRepository19 = this.deviceInfoRepository;
                        anonymousClass1.L$0 = dsl6;
                        anonymousClass1.L$1 = dsl5;
                        anonymousClass1.L$2 = staticDeviceInfo2;
                        anonymousClass1.label = 8;
                        objInvoke2 = deviceInfoRepository19.getUnityBuildGuid(anonymousClass1);
                        if (objInvoke2 != coroutine_suspended) {
                            str3 = (String) objInvoke2;
                            if (str3 != null) {
                                z2 = true;
                            } else {
                                z2 = true;
                            }
                            if (z2) {
                                objInvoke2 = null;
                            }
                            str4 = (String) objInvoke2;
                            if (str4 != null) {
                                dsl5.setUnityBuildGuid(str4);
                            }
                            initializationConfiguration = this.sessionRepository.getInitializationConfiguration();
                            if (initializationConfiguration != null) {
                                str5 = (String) mutableMap.remove(BLOB_EXTRA_KEY);
                                if (str5 != null) {
                                    new MutablePropertyReference0Impl(dsl5) { // from class: com.unity3d.ads.core.domain.AndroidGetInitializationRequestPayload$invoke$2$9$2
                                        @Override // kotlin.jvm.internal.MutablePropertyReference0Impl, kotlin.reflect.KProperty0
                                        public Object get() {
                                            return ((InitializationRequestKt.Dsl) this.receiver).getUadsInitBlob();
                                        }

                                        @Override // kotlin.jvm.internal.MutablePropertyReference0Impl, kotlin.reflect.KMutableProperty0
                                        public void set(Object obj3) {
                                            ((InitializationRequestKt.Dsl) this.receiver).setUadsInitBlob((ByteString) obj3);
                                        }
                                    }.set(byteStringUtf8);
                                }
                                dsl5.putAllExtras(dsl5.getExtrasMap(), mutableMap);
                            }
                            moduleInitParams = dsl5.getModuleInitParams();
                            ModuleInitParamsDataSource moduleInitParamsDataSource6 = this.moduleInitParamsDataSource;
                            anonymousClass1.L$0 = dsl6;
                            anonymousClass1.L$1 = dsl5;
                            anonymousClass1.L$2 = staticDeviceInfo2;
                            anonymousClass1.L$3 = dsl5;
                            anonymousClass1.L$4 = moduleInitParams;
                            anonymousClass1.label = 9;
                            objInvoke = moduleInitParamsDataSource6.invoke(anonymousClass1);
                            if (objInvoke != coroutine_suspended) {
                                dsl7 = dsl5;
                                dslList = moduleInitParams;
                                objInvoke2 = objInvoke;
                                dsl8 = dsl7;
                                dsl7.addAllModuleInitParams(dslList, (Iterable) objInvoke2);
                                if (!dsl8.hasUadsInitBlob()) {
                                    MediationInitBlobMetadataReader mediationInitBlobMetadataReader6 = this.mediationInitBlobMetadataReader;
                                    obj2 = mediationInitBlobMetadataReader6.getJsonStorage().get(mediationInitBlobMetadataReader6.getKey());
                                    if (obj2 == null) {
                                        obj2 = null;
                                    } else {
                                        if (obj2 != null) {
                                            z3 = obj2 instanceof String;
                                        } else {
                                            z3 = true;
                                        }
                                        if (!z3) {
                                            obj2 = null;
                                        }
                                        if (obj2 == null) {
                                            obj2 = null;
                                        }
                                    }
                                    str6 = (String) obj2;
                                    if (str6 != null) {
                                        new MutablePropertyReference0Impl(dsl8) { // from class: com.unity3d.ads.core.domain.AndroidGetInitializationRequestPayload$invoke$2$11
                                            @Override // kotlin.jvm.internal.MutablePropertyReference0Impl, kotlin.reflect.KProperty0
                                            public Object get() {
                                                return ((InitializationRequestKt.Dsl) this.receiver).getUadsInitBlob();
                                            }

                                            @Override // kotlin.jvm.internal.MutablePropertyReference0Impl, kotlin.reflect.KMutableProperty0
                                            public void set(Object obj3) {
                                                ((InitializationRequestKt.Dsl) this.receiver).setUadsInitBlob((ByteString) obj3);
                                            }
                                        }.set(byteStringUtf9);
                                    }
                                }
                                if (dsl8.getIsFirstInit()) {
                                    InstallReferrerDataSource installReferrerDataSource6 = this.installReferrerDataSource;
                                    anonymousClass1.L$0 = dsl6;
                                    anonymousClass1.L$1 = dsl8;
                                    anonymousClass1.L$2 = staticDeviceInfo2;
                                    anonymousClass1.L$3 = null;
                                    anonymousClass1.L$4 = null;
                                    anonymousClass1.label = 10;
                                    objInvoke2 = installReferrerDataSource6.invoke(anonymousClass1);
                                    if (objInvoke2 != coroutine_suspended) {
                                        staticDeviceInfo3 = staticDeviceInfo2;
                                        dsl9 = dsl6;
                                        dsl10 = dsl8;
                                        installReferrer = (InitializationRequestOuterClass.InstallReferrer) objInvoke2;
                                        if (installReferrer != null) {
                                            dsl10.setInstallReferrer(installReferrer);
                                        }
                                        dsl6 = dsl9;
                                        dsl8 = dsl10;
                                        staticDeviceInfo2 = staticDeviceInfo3;
                                    }
                                }
                                userIdentifier = UnityAds.getUserIdentifier();
                                if (userIdentifier != null) {
                                    dsl8.setExternalUserIdentifier(userIdentifier);
                                }
                                if (this.sessionRepository.getNativeConfiguration().getFeatureFlags().getCollectGoogleAppId()) {
                                    dsl8.setGoogleAppId(googleAppId);
                                }
                                String appInstaller6 = staticDeviceInfo2.getAndroid().getAppInstaller();
                                Intrinsics.checkNotNull(appInstaller6);
                                if (appInstaller6.length() > 0) {
                                }
                                if (str7 != null) {
                                    dsl8.setInstallSource(str7);
                                }
                                return dsl6._build();
                            }
                        }
                    }
                }
                return coroutine_suspended;
            case 6:
                staticDeviceInfo2 = (StaticDeviceInfoOuterClass.StaticDeviceInfo) anonymousClass1.L$2;
                dsl5 = (InitializationRequestKt.Dsl) anonymousClass1.L$1;
                dsl6 = (InitializationRequestKt.Dsl) anonymousClass1.L$0;
                ResultKt.throwOnFailure(objInvoke2);
                byteString2 = (ByteString) objInvoke2;
                if (!byteString2.isEmpty()) {
                    dsl5.setPrivacy(byteString2);
                }
                SessionRepository sessionRepository13 = this.sessionRepository;
                anonymousClass1.L$0 = dsl6;
                anonymousClass1.L$1 = dsl5;
                anonymousClass1.L$2 = staticDeviceInfo2;
                anonymousClass1.label = 7;
                objInvoke2 = sessionRepository13.getGatewayCache(anonymousClass1);
                if (objInvoke2 != coroutine_suspended) {
                    byteString3 = (ByteString) objInvoke2;
                    if (!byteString3.isEmpty()) {
                        dsl5.setCache(byteString3);
                    }
                    legacyFlowUserConsent = this.legacyUserConsentRepository.getLegacyFlowUserConsent();
                    if (legacyFlowUserConsent != null) {
                        dsl5.setLegacyFlowUserConsent(legacyFlowUserConsent);
                    }
                    unityInstallationId = this.sessionRepository.getUnityInstallationId();
                    if (unityInstallationId != null) {
                        dsl5.setUnityInstallationId(ByteStringsKt.toByteStringUtf8(unityInstallationId));
                    }
                    unityMegaSessionId = this.sessionRepository.getUnityMegaSessionId();
                    if (unityMegaSessionId != null) {
                        dsl5.setUnityMegaSessionId(ByteStringsKt.toByteStringUtf8(unityMegaSessionId));
                    }
                    DeviceInfoRepository deviceInfoRepository110 = this.deviceInfoRepository;
                    anonymousClass1.L$0 = dsl6;
                    anonymousClass1.L$1 = dsl5;
                    anonymousClass1.L$2 = staticDeviceInfo2;
                    anonymousClass1.label = 8;
                    objInvoke2 = deviceInfoRepository110.getUnityBuildGuid(anonymousClass1);
                    if (objInvoke2 != coroutine_suspended) {
                        str3 = (String) objInvoke2;
                        if (str3 != null) {
                            z2 = true;
                        } else {
                            z2 = true;
                        }
                        if (z2) {
                            objInvoke2 = null;
                        }
                        str4 = (String) objInvoke2;
                        if (str4 != null) {
                            dsl5.setUnityBuildGuid(str4);
                        }
                        initializationConfiguration = this.sessionRepository.getInitializationConfiguration();
                        if (initializationConfiguration != null) {
                            str5 = (String) mutableMap.remove(BLOB_EXTRA_KEY);
                            if (str5 != null) {
                                new MutablePropertyReference0Impl(dsl5) { // from class: com.unity3d.ads.core.domain.AndroidGetInitializationRequestPayload$invoke$2$9$2
                                    @Override // kotlin.jvm.internal.MutablePropertyReference0Impl, kotlin.reflect.KProperty0
                                    public Object get() {
                                        return ((InitializationRequestKt.Dsl) this.receiver).getUadsInitBlob();
                                    }

                                    @Override // kotlin.jvm.internal.MutablePropertyReference0Impl, kotlin.reflect.KMutableProperty0
                                    public void set(Object obj3) {
                                        ((InitializationRequestKt.Dsl) this.receiver).setUadsInitBlob((ByteString) obj3);
                                    }
                                }.set(byteStringUtf8);
                            }
                            dsl5.putAllExtras(dsl5.getExtrasMap(), mutableMap);
                        }
                        moduleInitParams = dsl5.getModuleInitParams();
                        ModuleInitParamsDataSource moduleInitParamsDataSource7 = this.moduleInitParamsDataSource;
                        anonymousClass1.L$0 = dsl6;
                        anonymousClass1.L$1 = dsl5;
                        anonymousClass1.L$2 = staticDeviceInfo2;
                        anonymousClass1.L$3 = dsl5;
                        anonymousClass1.L$4 = moduleInitParams;
                        anonymousClass1.label = 9;
                        objInvoke = moduleInitParamsDataSource7.invoke(anonymousClass1);
                        if (objInvoke != coroutine_suspended) {
                            dsl7 = dsl5;
                            dslList = moduleInitParams;
                            objInvoke2 = objInvoke;
                            dsl8 = dsl7;
                            dsl7.addAllModuleInitParams(dslList, (Iterable) objInvoke2);
                            if (!dsl8.hasUadsInitBlob()) {
                                MediationInitBlobMetadataReader mediationInitBlobMetadataReader7 = this.mediationInitBlobMetadataReader;
                                obj2 = mediationInitBlobMetadataReader7.getJsonStorage().get(mediationInitBlobMetadataReader7.getKey());
                                if (obj2 == null) {
                                    obj2 = null;
                                } else {
                                    if (obj2 != null) {
                                        z3 = obj2 instanceof String;
                                    } else {
                                        z3 = true;
                                    }
                                    if (!z3) {
                                        obj2 = null;
                                    }
                                    if (obj2 == null) {
                                        obj2 = null;
                                    }
                                }
                                str6 = (String) obj2;
                                if (str6 != null) {
                                    new MutablePropertyReference0Impl(dsl8) { // from class: com.unity3d.ads.core.domain.AndroidGetInitializationRequestPayload$invoke$2$11
                                        @Override // kotlin.jvm.internal.MutablePropertyReference0Impl, kotlin.reflect.KProperty0
                                        public Object get() {
                                            return ((InitializationRequestKt.Dsl) this.receiver).getUadsInitBlob();
                                        }

                                        @Override // kotlin.jvm.internal.MutablePropertyReference0Impl, kotlin.reflect.KMutableProperty0
                                        public void set(Object obj3) {
                                            ((InitializationRequestKt.Dsl) this.receiver).setUadsInitBlob((ByteString) obj3);
                                        }
                                    }.set(byteStringUtf9);
                                }
                            }
                            if (dsl8.getIsFirstInit()) {
                                InstallReferrerDataSource installReferrerDataSource7 = this.installReferrerDataSource;
                                anonymousClass1.L$0 = dsl6;
                                anonymousClass1.L$1 = dsl8;
                                anonymousClass1.L$2 = staticDeviceInfo2;
                                anonymousClass1.L$3 = null;
                                anonymousClass1.L$4 = null;
                                anonymousClass1.label = 10;
                                objInvoke2 = installReferrerDataSource7.invoke(anonymousClass1);
                                if (objInvoke2 != coroutine_suspended) {
                                    staticDeviceInfo3 = staticDeviceInfo2;
                                    dsl9 = dsl6;
                                    dsl10 = dsl8;
                                    installReferrer = (InitializationRequestOuterClass.InstallReferrer) objInvoke2;
                                    if (installReferrer != null) {
                                        dsl10.setInstallReferrer(installReferrer);
                                    }
                                    dsl6 = dsl9;
                                    dsl8 = dsl10;
                                    staticDeviceInfo2 = staticDeviceInfo3;
                                }
                            }
                            userIdentifier = UnityAds.getUserIdentifier();
                            if (userIdentifier != null) {
                                dsl8.setExternalUserIdentifier(userIdentifier);
                            }
                            if (this.sessionRepository.getNativeConfiguration().getFeatureFlags().getCollectGoogleAppId()) {
                                dsl8.setGoogleAppId(googleAppId);
                            }
                            String appInstaller7 = staticDeviceInfo2.getAndroid().getAppInstaller();
                            Intrinsics.checkNotNull(appInstaller7);
                            if (appInstaller7.length() > 0) {
                            }
                            if (str7 != null) {
                                dsl8.setInstallSource(str7);
                            }
                            return dsl6._build();
                        }
                    }
                }
                return coroutine_suspended;
            case 7:
                staticDeviceInfo2 = (StaticDeviceInfoOuterClass.StaticDeviceInfo) anonymousClass1.L$2;
                dsl5 = (InitializationRequestKt.Dsl) anonymousClass1.L$1;
                dsl6 = (InitializationRequestKt.Dsl) anonymousClass1.L$0;
                ResultKt.throwOnFailure(objInvoke2);
                byteString3 = (ByteString) objInvoke2;
                if (!byteString3.isEmpty()) {
                    dsl5.setCache(byteString3);
                }
                legacyFlowUserConsent = this.legacyUserConsentRepository.getLegacyFlowUserConsent();
                if (legacyFlowUserConsent != null) {
                    dsl5.setLegacyFlowUserConsent(legacyFlowUserConsent);
                }
                unityInstallationId = this.sessionRepository.getUnityInstallationId();
                if (unityInstallationId != null) {
                    dsl5.setUnityInstallationId(ByteStringsKt.toByteStringUtf8(unityInstallationId));
                }
                unityMegaSessionId = this.sessionRepository.getUnityMegaSessionId();
                if (unityMegaSessionId != null) {
                    dsl5.setUnityMegaSessionId(ByteStringsKt.toByteStringUtf8(unityMegaSessionId));
                }
                DeviceInfoRepository deviceInfoRepository111 = this.deviceInfoRepository;
                anonymousClass1.L$0 = dsl6;
                anonymousClass1.L$1 = dsl5;
                anonymousClass1.L$2 = staticDeviceInfo2;
                anonymousClass1.label = 8;
                objInvoke2 = deviceInfoRepository111.getUnityBuildGuid(anonymousClass1);
                if (objInvoke2 != coroutine_suspended) {
                    str3 = (String) objInvoke2;
                    if (str3 != null) {
                        z2 = true;
                    } else {
                        z2 = true;
                    }
                    if (z2) {
                        objInvoke2 = null;
                    }
                    str4 = (String) objInvoke2;
                    if (str4 != null) {
                        dsl5.setUnityBuildGuid(str4);
                    }
                    initializationConfiguration = this.sessionRepository.getInitializationConfiguration();
                    if (initializationConfiguration != null) {
                        str5 = (String) mutableMap.remove(BLOB_EXTRA_KEY);
                        if (str5 != null) {
                            new MutablePropertyReference0Impl(dsl5) { // from class: com.unity3d.ads.core.domain.AndroidGetInitializationRequestPayload$invoke$2$9$2
                                @Override // kotlin.jvm.internal.MutablePropertyReference0Impl, kotlin.reflect.KProperty0
                                public Object get() {
                                    return ((InitializationRequestKt.Dsl) this.receiver).getUadsInitBlob();
                                }

                                @Override // kotlin.jvm.internal.MutablePropertyReference0Impl, kotlin.reflect.KMutableProperty0
                                public void set(Object obj3) {
                                    ((InitializationRequestKt.Dsl) this.receiver).setUadsInitBlob((ByteString) obj3);
                                }
                            }.set(byteStringUtf8);
                        }
                        dsl5.putAllExtras(dsl5.getExtrasMap(), mutableMap);
                    }
                    moduleInitParams = dsl5.getModuleInitParams();
                    ModuleInitParamsDataSource moduleInitParamsDataSource8 = this.moduleInitParamsDataSource;
                    anonymousClass1.L$0 = dsl6;
                    anonymousClass1.L$1 = dsl5;
                    anonymousClass1.L$2 = staticDeviceInfo2;
                    anonymousClass1.L$3 = dsl5;
                    anonymousClass1.L$4 = moduleInitParams;
                    anonymousClass1.label = 9;
                    objInvoke = moduleInitParamsDataSource8.invoke(anonymousClass1);
                    if (objInvoke != coroutine_suspended) {
                        dsl7 = dsl5;
                        dslList = moduleInitParams;
                        objInvoke2 = objInvoke;
                        dsl8 = dsl7;
                        dsl7.addAllModuleInitParams(dslList, (Iterable) objInvoke2);
                        if (!dsl8.hasUadsInitBlob()) {
                            MediationInitBlobMetadataReader mediationInitBlobMetadataReader8 = this.mediationInitBlobMetadataReader;
                            obj2 = mediationInitBlobMetadataReader8.getJsonStorage().get(mediationInitBlobMetadataReader8.getKey());
                            if (obj2 == null) {
                                obj2 = null;
                            } else {
                                if (obj2 != null) {
                                    z3 = obj2 instanceof String;
                                } else {
                                    z3 = true;
                                }
                                if (!z3) {
                                    obj2 = null;
                                }
                                if (obj2 == null) {
                                    obj2 = null;
                                }
                            }
                            str6 = (String) obj2;
                            if (str6 != null) {
                                new MutablePropertyReference0Impl(dsl8) { // from class: com.unity3d.ads.core.domain.AndroidGetInitializationRequestPayload$invoke$2$11
                                    @Override // kotlin.jvm.internal.MutablePropertyReference0Impl, kotlin.reflect.KProperty0
                                    public Object get() {
                                        return ((InitializationRequestKt.Dsl) this.receiver).getUadsInitBlob();
                                    }

                                    @Override // kotlin.jvm.internal.MutablePropertyReference0Impl, kotlin.reflect.KMutableProperty0
                                    public void set(Object obj3) {
                                        ((InitializationRequestKt.Dsl) this.receiver).setUadsInitBlob((ByteString) obj3);
                                    }
                                }.set(byteStringUtf9);
                            }
                        }
                        if (dsl8.getIsFirstInit()) {
                            InstallReferrerDataSource installReferrerDataSource8 = this.installReferrerDataSource;
                            anonymousClass1.L$0 = dsl6;
                            anonymousClass1.L$1 = dsl8;
                            anonymousClass1.L$2 = staticDeviceInfo2;
                            anonymousClass1.L$3 = null;
                            anonymousClass1.L$4 = null;
                            anonymousClass1.label = 10;
                            objInvoke2 = installReferrerDataSource8.invoke(anonymousClass1);
                            if (objInvoke2 != coroutine_suspended) {
                                staticDeviceInfo3 = staticDeviceInfo2;
                                dsl9 = dsl6;
                                dsl10 = dsl8;
                                installReferrer = (InitializationRequestOuterClass.InstallReferrer) objInvoke2;
                                if (installReferrer != null) {
                                    dsl10.setInstallReferrer(installReferrer);
                                }
                                dsl6 = dsl9;
                                dsl8 = dsl10;
                                staticDeviceInfo2 = staticDeviceInfo3;
                            }
                        }
                        userIdentifier = UnityAds.getUserIdentifier();
                        if (userIdentifier != null) {
                            dsl8.setExternalUserIdentifier(userIdentifier);
                        }
                        if (this.sessionRepository.getNativeConfiguration().getFeatureFlags().getCollectGoogleAppId()) {
                            dsl8.setGoogleAppId(googleAppId);
                        }
                        String appInstaller8 = staticDeviceInfo2.getAndroid().getAppInstaller();
                        Intrinsics.checkNotNull(appInstaller8);
                        if (appInstaller8.length() > 0) {
                        }
                        if (str7 != null) {
                            dsl8.setInstallSource(str7);
                        }
                        return dsl6._build();
                    }
                }
                return coroutine_suspended;
            case 8:
                staticDeviceInfo2 = (StaticDeviceInfoOuterClass.StaticDeviceInfo) anonymousClass1.L$2;
                dsl5 = (InitializationRequestKt.Dsl) anonymousClass1.L$1;
                dsl6 = (InitializationRequestKt.Dsl) anonymousClass1.L$0;
                ResultKt.throwOnFailure(objInvoke2);
                str3 = (String) objInvoke2;
                if (str3 != null) {
                    z2 = true;
                } else {
                    z2 = true;
                }
                if (z2) {
                    objInvoke2 = null;
                }
                str4 = (String) objInvoke2;
                if (str4 != null) {
                    dsl5.setUnityBuildGuid(str4);
                }
                initializationConfiguration = this.sessionRepository.getInitializationConfiguration();
                if (initializationConfiguration != null) {
                    str5 = (String) mutableMap.remove(BLOB_EXTRA_KEY);
                    if (str5 != null) {
                        new MutablePropertyReference0Impl(dsl5) { // from class: com.unity3d.ads.core.domain.AndroidGetInitializationRequestPayload$invoke$2$9$2
                            @Override // kotlin.jvm.internal.MutablePropertyReference0Impl, kotlin.reflect.KProperty0
                            public Object get() {
                                return ((InitializationRequestKt.Dsl) this.receiver).getUadsInitBlob();
                            }

                            @Override // kotlin.jvm.internal.MutablePropertyReference0Impl, kotlin.reflect.KMutableProperty0
                            public void set(Object obj3) {
                                ((InitializationRequestKt.Dsl) this.receiver).setUadsInitBlob((ByteString) obj3);
                            }
                        }.set(byteStringUtf8);
                    }
                    dsl5.putAllExtras(dsl5.getExtrasMap(), mutableMap);
                }
                moduleInitParams = dsl5.getModuleInitParams();
                ModuleInitParamsDataSource moduleInitParamsDataSource9 = this.moduleInitParamsDataSource;
                anonymousClass1.L$0 = dsl6;
                anonymousClass1.L$1 = dsl5;
                anonymousClass1.L$2 = staticDeviceInfo2;
                anonymousClass1.L$3 = dsl5;
                anonymousClass1.L$4 = moduleInitParams;
                anonymousClass1.label = 9;
                objInvoke = moduleInitParamsDataSource9.invoke(anonymousClass1);
                if (objInvoke != coroutine_suspended) {
                    dsl7 = dsl5;
                    dslList = moduleInitParams;
                    objInvoke2 = objInvoke;
                    dsl8 = dsl7;
                    dsl7.addAllModuleInitParams(dslList, (Iterable) objInvoke2);
                    if (!dsl8.hasUadsInitBlob()) {
                        MediationInitBlobMetadataReader mediationInitBlobMetadataReader9 = this.mediationInitBlobMetadataReader;
                        obj2 = mediationInitBlobMetadataReader9.getJsonStorage().get(mediationInitBlobMetadataReader9.getKey());
                        if (obj2 == null) {
                            obj2 = null;
                        } else {
                            if (obj2 != null) {
                                z3 = obj2 instanceof String;
                            } else {
                                z3 = true;
                            }
                            if (!z3) {
                                obj2 = null;
                            }
                            if (obj2 == null) {
                                obj2 = null;
                            }
                        }
                        str6 = (String) obj2;
                        if (str6 != null) {
                            new MutablePropertyReference0Impl(dsl8) { // from class: com.unity3d.ads.core.domain.AndroidGetInitializationRequestPayload$invoke$2$11
                                @Override // kotlin.jvm.internal.MutablePropertyReference0Impl, kotlin.reflect.KProperty0
                                public Object get() {
                                    return ((InitializationRequestKt.Dsl) this.receiver).getUadsInitBlob();
                                }

                                @Override // kotlin.jvm.internal.MutablePropertyReference0Impl, kotlin.reflect.KMutableProperty0
                                public void set(Object obj3) {
                                    ((InitializationRequestKt.Dsl) this.receiver).setUadsInitBlob((ByteString) obj3);
                                }
                            }.set(byteStringUtf9);
                        }
                    }
                    if (dsl8.getIsFirstInit()) {
                        InstallReferrerDataSource installReferrerDataSource9 = this.installReferrerDataSource;
                        anonymousClass1.L$0 = dsl6;
                        anonymousClass1.L$1 = dsl8;
                        anonymousClass1.L$2 = staticDeviceInfo2;
                        anonymousClass1.L$3 = null;
                        anonymousClass1.L$4 = null;
                        anonymousClass1.label = 10;
                        objInvoke2 = installReferrerDataSource9.invoke(anonymousClass1);
                        if (objInvoke2 != coroutine_suspended) {
                            staticDeviceInfo3 = staticDeviceInfo2;
                            dsl9 = dsl6;
                            dsl10 = dsl8;
                            installReferrer = (InitializationRequestOuterClass.InstallReferrer) objInvoke2;
                            if (installReferrer != null) {
                                dsl10.setInstallReferrer(installReferrer);
                            }
                            dsl6 = dsl9;
                            dsl8 = dsl10;
                            staticDeviceInfo2 = staticDeviceInfo3;
                        }
                    }
                    userIdentifier = UnityAds.getUserIdentifier();
                    if (userIdentifier != null) {
                        dsl8.setExternalUserIdentifier(userIdentifier);
                    }
                    if (this.sessionRepository.getNativeConfiguration().getFeatureFlags().getCollectGoogleAppId()) {
                        dsl8.setGoogleAppId(googleAppId);
                    }
                    String appInstaller9 = staticDeviceInfo2.getAndroid().getAppInstaller();
                    Intrinsics.checkNotNull(appInstaller9);
                    if (appInstaller9.length() > 0) {
                    }
                    if (str7 != null) {
                        dsl8.setInstallSource(str7);
                    }
                    return dsl6._build();
                }
                return coroutine_suspended;
            case 9:
                DslList dslList2 = (DslList) anonymousClass1.L$4;
                InitializationRequestKt.Dsl dsl12 = (InitializationRequestKt.Dsl) anonymousClass1.L$3;
                StaticDeviceInfoOuterClass.StaticDeviceInfo staticDeviceInfo4 = (StaticDeviceInfoOuterClass.StaticDeviceInfo) anonymousClass1.L$2;
                dsl8 = (InitializationRequestKt.Dsl) anonymousClass1.L$1;
                InitializationRequestKt.Dsl dsl13 = (InitializationRequestKt.Dsl) anonymousClass1.L$0;
                ResultKt.throwOnFailure(objInvoke2);
                dslList = dslList2;
                staticDeviceInfo2 = staticDeviceInfo4;
                dsl6 = dsl13;
                dsl7 = dsl12;
                dsl7.addAllModuleInitParams(dslList, (Iterable) objInvoke2);
                if (!dsl8.hasUadsInitBlob()) {
                    MediationInitBlobMetadataReader mediationInitBlobMetadataReader10 = this.mediationInitBlobMetadataReader;
                    obj2 = mediationInitBlobMetadataReader10.getJsonStorage().get(mediationInitBlobMetadataReader10.getKey());
                    if (obj2 == null) {
                        obj2 = null;
                    } else {
                        if (obj2 != null) {
                            z3 = obj2 instanceof String;
                        } else {
                            z3 = true;
                        }
                        if (!z3) {
                            obj2 = null;
                        }
                        if (obj2 == null) {
                            obj2 = null;
                        }
                    }
                    str6 = (String) obj2;
                    if (str6 != null) {
                        new MutablePropertyReference0Impl(dsl8) { // from class: com.unity3d.ads.core.domain.AndroidGetInitializationRequestPayload$invoke$2$11
                            @Override // kotlin.jvm.internal.MutablePropertyReference0Impl, kotlin.reflect.KProperty0
                            public Object get() {
                                return ((InitializationRequestKt.Dsl) this.receiver).getUadsInitBlob();
                            }

                            @Override // kotlin.jvm.internal.MutablePropertyReference0Impl, kotlin.reflect.KMutableProperty0
                            public void set(Object obj3) {
                                ((InitializationRequestKt.Dsl) this.receiver).setUadsInitBlob((ByteString) obj3);
                            }
                        }.set(byteStringUtf9);
                    }
                }
                if (dsl8.getIsFirstInit()) {
                    InstallReferrerDataSource installReferrerDataSource10 = this.installReferrerDataSource;
                    anonymousClass1.L$0 = dsl6;
                    anonymousClass1.L$1 = dsl8;
                    anonymousClass1.L$2 = staticDeviceInfo2;
                    anonymousClass1.L$3 = null;
                    anonymousClass1.L$4 = null;
                    anonymousClass1.label = 10;
                    objInvoke2 = installReferrerDataSource10.invoke(anonymousClass1);
                    if (objInvoke2 != coroutine_suspended) {
                        staticDeviceInfo3 = staticDeviceInfo2;
                        dsl9 = dsl6;
                        dsl10 = dsl8;
                        installReferrer = (InitializationRequestOuterClass.InstallReferrer) objInvoke2;
                        if (installReferrer != null) {
                            dsl10.setInstallReferrer(installReferrer);
                        }
                        dsl6 = dsl9;
                        dsl8 = dsl10;
                        staticDeviceInfo2 = staticDeviceInfo3;
                    }
                    return coroutine_suspended;
                }
                userIdentifier = UnityAds.getUserIdentifier();
                if (userIdentifier != null) {
                    dsl8.setExternalUserIdentifier(userIdentifier);
                }
                if (this.sessionRepository.getNativeConfiguration().getFeatureFlags().getCollectGoogleAppId()) {
                    dsl8.setGoogleAppId(googleAppId);
                }
                String appInstaller10 = staticDeviceInfo2.getAndroid().getAppInstaller();
                Intrinsics.checkNotNull(appInstaller10);
                if (appInstaller10.length() > 0) {
                }
                if (str7 != null) {
                    dsl8.setInstallSource(str7);
                }
                return dsl6._build();
            case 10:
                staticDeviceInfo3 = (StaticDeviceInfoOuterClass.StaticDeviceInfo) anonymousClass1.L$2;
                dsl10 = (InitializationRequestKt.Dsl) anonymousClass1.L$1;
                dsl9 = (InitializationRequestKt.Dsl) anonymousClass1.L$0;
                ResultKt.throwOnFailure(objInvoke2);
                installReferrer = (InitializationRequestOuterClass.InstallReferrer) objInvoke2;
                if (installReferrer != null) {
                    dsl10.setInstallReferrer(installReferrer);
                }
                dsl6 = dsl9;
                dsl8 = dsl10;
                staticDeviceInfo2 = staticDeviceInfo3;
                userIdentifier = UnityAds.getUserIdentifier();
                if (userIdentifier != null) {
                    dsl8.setExternalUserIdentifier(userIdentifier);
                }
                if (this.sessionRepository.getNativeConfiguration().getFeatureFlags().getCollectGoogleAppId()) {
                    dsl8.setGoogleAppId(googleAppId);
                }
                String appInstaller11 = staticDeviceInfo2.getAndroid().getAppInstaller();
                Intrinsics.checkNotNull(appInstaller11);
                if (appInstaller11.length() > 0) {
                }
                if (str7 != null) {
                    dsl8.setInstallSource(str7);
                }
                return dsl6._build();
            default:
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
        }
    }
}
