package com.unity3d.ads.core.domain;

import android.content.Context;
import com.google.protobuf.ByteString;
import com.unity3d.ads.UnityAdsErrorKt;
import com.unity3d.ads.UnityAdsLoadOptions;
import com.unity3d.ads.core.data.model.AdObject;
import com.unity3d.ads.core.data.model.LoadResult;
import com.unity3d.ads.core.data.model.exception.GatewayException;
import com.unity3d.ads.core.data.model.exception.NetworkTimeoutException;
import com.unity3d.ads.core.data.model.exception.UnityAdsNetworkException;
import com.unity3d.ads.core.data.repository.AdRepository;
import com.unity3d.ads.core.data.repository.SessionRepository;
import com.unity3d.ads.gatewayclient.GatewayClient;
import gatewayprotocol.v1.AdRequestOuterClass;
import gatewayprotocol.v1.DiagnosticEventRequestOuterClass;
import gatewayprotocol.v1.ErrorOuterClass;
import gatewayprotocol.v1.HeaderBiddingAdMarkupOuterClass;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.jvm.internal.DebugMetadata;
import kotlin.coroutines.jvm.internal.SuspendLambda;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.coroutines.BuildersKt;
import kotlinx.coroutines.CoroutineDispatcher;
import kotlinx.coroutines.CoroutineScope;

/* JADX INFO: compiled from: AndroidLoad.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\u009e\u0001\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\b\u0000\u0018\u00002\u00020\u0001BW\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0007\u0012\u0006\u0010\b\u001a\u00020\t\u0012\u0006\u0010\n\u001a\u00020\u000b\u0012\u0006\u0010\f\u001a\u00020\r\u0012\u0006\u0010\u000e\u001a\u00020\u000f\u0012\u0006\u0010\u0010\u001a\u00020\u0011\u0012\u0006\u0010\u0012\u001a\u00020\u0013\u0012\u0006\u0010\u0014\u001a\u00020\u0015¢\u0006\u0004\b\u0016\u0010\u0017J@\u0010\u0018\u001a\u00020\u00192\u0006\u0010\u001a\u001a\u00020\u001b2\u0006\u0010\u001c\u001a\u00020\u001d2\u0006\u0010\u001e\u001a\u00020\u001f2\u0006\u0010 \u001a\u00020!2\b\u0010\"\u001a\u0004\u0018\u00010#2\u0006\u0010$\u001a\u00020%H\u0096B¢\u0006\u0002\u0010&J\u0010\u0010'\u001a\u00020(2\u0006\u0010)\u001a\u00020*H\u0002J\u0010\u0010+\u001a\u00020,2\u0006\u0010-\u001a\u00020(H\u0002J\u0010\u0010.\u001a\u00020/2\u0006\u00100\u001a\u00020,H\u0002J\u0010\u00101\u001a\u00020/2\u0006\u00100\u001a\u00020,H\u0002J0\u00102\u001a\u0002032\u0006\u0010\u001e\u001a\u00020\u001f2\u0006\u0010\u001c\u001a\u00020\u001d2\u0006\u00104\u001a\u00020,2\u0006\u00105\u001a\u0002062\u0006\u0010$\u001a\u00020%H\u0002R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0007X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\b\u001a\u00020\tX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\n\u001a\u00020\u000bX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\f\u001a\u00020\rX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u000e\u001a\u00020\u000fX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0010\u001a\u00020\u0011X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0012\u001a\u00020\u0013X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0014\u001a\u00020\u0015X\u0082\u0004¢\u0006\u0002\n\u0000¨\u00067"}, d2 = {"Lcom/unity3d/ads/core/domain/AndroidLoad;", "Lcom/unity3d/ads/core/domain/Load;", "defaultDispatcher", "Lkotlinx/coroutines/CoroutineDispatcher;", "getAdRequest", "Lcom/unity3d/ads/core/domain/GetAdRequest;", "getAdPlayerConfigRequest", "Lcom/unity3d/ads/core/domain/GetAdPlayerConfigRequest;", "getRequestPolicy", "Lcom/unity3d/ads/core/domain/GetRequestPolicy;", "handleGatewayAdResponse", "Lcom/unity3d/ads/core/domain/HandleGatewayAdResponse;", "sessionRepository", "Lcom/unity3d/ads/core/data/repository/SessionRepository;", "gatewayClient", "Lcom/unity3d/ads/gatewayclient/GatewayClient;", "adRepository", "Lcom/unity3d/ads/core/data/repository/AdRepository;", "sendDiagnosticEvent", "Lcom/unity3d/ads/core/domain/SendDiagnosticEvent;", "validateExtrasSize", "Lcom/unity3d/ads/core/domain/ValidateExtrasSize;", "<init>", "(Lkotlinx/coroutines/CoroutineDispatcher;Lcom/unity3d/ads/core/domain/GetAdRequest;Lcom/unity3d/ads/core/domain/GetAdPlayerConfigRequest;Lcom/unity3d/ads/core/domain/GetRequestPolicy;Lcom/unity3d/ads/core/domain/HandleGatewayAdResponse;Lcom/unity3d/ads/core/data/repository/SessionRepository;Lcom/unity3d/ads/gatewayclient/GatewayClient;Lcom/unity3d/ads/core/data/repository/AdRepository;Lcom/unity3d/ads/core/domain/SendDiagnosticEvent;Lcom/unity3d/ads/core/domain/ValidateExtrasSize;)V", "invoke", "Lcom/unity3d/ads/core/data/model/LoadResult;", "context", "Landroid/content/Context;", "placement", "", "opportunityId", "Lcom/google/protobuf/ByteString;", "headerBiddingAdMarkup", "Lgatewayprotocol/v1/HeaderBiddingAdMarkupOuterClass$HeaderBiddingAdMarkup;", "bannerSize", "Lgatewayprotocol/v1/AdRequestOuterClass$BannerSize;", HandleInvocationsFromAdViewer.KEY_LOAD_OPTIONS, "Lcom/unity3d/ads/UnityAdsLoadOptions;", "(Landroid/content/Context;Ljava/lang/String;Lcom/google/protobuf/ByteString;Lgatewayprotocol/v1/HeaderBiddingAdMarkupOuterClass$HeaderBiddingAdMarkup;Lgatewayprotocol/v1/AdRequestOuterClass$BannerSize;Lcom/unity3d/ads/UnityAdsLoadOptions;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "handleGatewayException", "Lcom/unity3d/ads/core/data/model/LoadResult$Failure;", "e", "Lcom/unity3d/ads/core/data/model/exception/UnityAdsNetworkException;", "isCachePhaseFailure", "", "failure", "incrementLoadRequestCount", "", "isBanner", "incrementLoadRequestAdmCount", "getTmpAdObject", "Lcom/unity3d/ads/core/data/model/AdObject;", HandleInvocationsFromAdViewer.KEY_IS_HEADER_BIDDING, "adType", "Lgatewayprotocol/v1/DiagnosticEventRequestOuterClass$DiagnosticAdType;", "unity-ads_defaultRelease"}, k = 1, mv = {2, 1, 0}, xi = 48)
public final class AndroidLoad implements Load {
    private final AdRepository adRepository;
    private final CoroutineDispatcher defaultDispatcher;
    private final GatewayClient gatewayClient;
    private final GetAdPlayerConfigRequest getAdPlayerConfigRequest;
    private final GetAdRequest getAdRequest;
    private final GetRequestPolicy getRequestPolicy;
    private final HandleGatewayAdResponse handleGatewayAdResponse;
    private final SendDiagnosticEvent sendDiagnosticEvent;
    private final SessionRepository sessionRepository;
    private final ValidateExtrasSize validateExtrasSize;

    public AndroidLoad(CoroutineDispatcher defaultDispatcher, GetAdRequest getAdRequest, GetAdPlayerConfigRequest getAdPlayerConfigRequest, GetRequestPolicy getRequestPolicy, HandleGatewayAdResponse handleGatewayAdResponse, SessionRepository sessionRepository, GatewayClient gatewayClient, AdRepository adRepository, SendDiagnosticEvent sendDiagnosticEvent, ValidateExtrasSize validateExtrasSize) {
        Intrinsics.checkNotNullParameter(defaultDispatcher, "defaultDispatcher");
        Intrinsics.checkNotNullParameter(getAdRequest, "getAdRequest");
        Intrinsics.checkNotNullParameter(getAdPlayerConfigRequest, "getAdPlayerConfigRequest");
        Intrinsics.checkNotNullParameter(getRequestPolicy, "getRequestPolicy");
        Intrinsics.checkNotNullParameter(handleGatewayAdResponse, "handleGatewayAdResponse");
        Intrinsics.checkNotNullParameter(sessionRepository, "sessionRepository");
        Intrinsics.checkNotNullParameter(gatewayClient, "gatewayClient");
        Intrinsics.checkNotNullParameter(adRepository, "adRepository");
        Intrinsics.checkNotNullParameter(sendDiagnosticEvent, "sendDiagnosticEvent");
        Intrinsics.checkNotNullParameter(validateExtrasSize, "validateExtrasSize");
        this.defaultDispatcher = defaultDispatcher;
        this.getAdRequest = getAdRequest;
        this.getAdPlayerConfigRequest = getAdPlayerConfigRequest;
        this.getRequestPolicy = getRequestPolicy;
        this.handleGatewayAdResponse = handleGatewayAdResponse;
        this.sessionRepository = sessionRepository;
        this.gatewayClient = gatewayClient;
        this.adRepository = adRepository;
        this.sendDiagnosticEvent = sendDiagnosticEvent;
        this.validateExtrasSize = validateExtrasSize;
    }

    public static final /* synthetic */ AdRepository access$getAdRepository$p(AndroidLoad androidLoad) {
        return androidLoad.adRepository;
    }

    public static final /* synthetic */ GatewayClient access$getGatewayClient$p(AndroidLoad androidLoad) {
        return androidLoad.gatewayClient;
    }

    public static final /* synthetic */ GetAdPlayerConfigRequest access$getGetAdPlayerConfigRequest$p(AndroidLoad androidLoad) {
        return androidLoad.getAdPlayerConfigRequest;
    }

    public static final /* synthetic */ GetAdRequest access$getGetAdRequest$p(AndroidLoad androidLoad) {
        return androidLoad.getAdRequest;
    }

    public static final /* synthetic */ GetRequestPolicy access$getGetRequestPolicy$p(AndroidLoad androidLoad) {
        return androidLoad.getRequestPolicy;
    }

    public static final /* synthetic */ HandleGatewayAdResponse access$getHandleGatewayAdResponse$p(AndroidLoad androidLoad) {
        return androidLoad.handleGatewayAdResponse;
    }

    public static final /* synthetic */ SendDiagnosticEvent access$getSendDiagnosticEvent$p(AndroidLoad androidLoad) {
        return androidLoad.sendDiagnosticEvent;
    }

    public static final /* synthetic */ SessionRepository access$getSessionRepository$p(AndroidLoad androidLoad) {
        return androidLoad.sessionRepository;
    }

    public static final /* synthetic */ AdObject access$getTmpAdObject(AndroidLoad androidLoad, ByteString byteString, String str, boolean z, DiagnosticEventRequestOuterClass.DiagnosticAdType diagnosticAdType, UnityAdsLoadOptions unityAdsLoadOptions) {
        return androidLoad.getTmpAdObject(byteString, str, z, diagnosticAdType, unityAdsLoadOptions);
    }

    public static final /* synthetic */ ValidateExtrasSize access$getValidateExtrasSize$p(AndroidLoad androidLoad) {
        return androidLoad.validateExtrasSize;
    }

    public static final /* synthetic */ LoadResult.Failure access$handleGatewayException(AndroidLoad androidLoad, UnityAdsNetworkException unityAdsNetworkException) {
        return androidLoad.handleGatewayException(unityAdsNetworkException);
    }

    public static final /* synthetic */ void access$incrementLoadRequestAdmCount(AndroidLoad androidLoad, boolean z) {
        androidLoad.incrementLoadRequestAdmCount(z);
    }

    public static final /* synthetic */ void access$incrementLoadRequestCount(AndroidLoad androidLoad, boolean z) {
        androidLoad.incrementLoadRequestCount(z);
    }

    public static final /* synthetic */ boolean access$isCachePhaseFailure(AndroidLoad androidLoad, LoadResult.Failure failure) {
        return androidLoad.isCachePhaseFailure(failure);
    }

    /* JADX INFO: renamed from: com.unity3d.ads.core.domain.AndroidLoad$invoke$2, reason: invalid class name */
    /* JADX INFO: compiled from: AndroidLoad.kt */
    @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "Lcom/unity3d/ads/core/data/model/LoadResult;", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
    @DebugMetadata(c = "com.unity3d.ads.core.domain.AndroidLoad$invoke$2", f = "AndroidLoad.kt", i = {0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 4, 4}, l = {97, 101, 119, 123, 166}, m = "invokeSuspend", n = {"$this$invokeSuspend_u24lambda_u249", "adType", "tmpAdObject", "isBanner", "loadStartTime", HandleInvocationsFromAdViewer.KEY_IS_HEADER_BIDDING, "adType", "tmpAdObject", "isBanner", "loadStartTime", HandleInvocationsFromAdViewer.KEY_IS_HEADER_BIDDING, "mark$iv$iv", "$this$invokeSuspend_u24lambda_u249", "adType", "tmpAdObject", "isBanner", "loadStartTime", HandleInvocationsFromAdViewer.KEY_IS_HEADER_BIDDING, "adType", "tmpAdObject", "isBanner", "loadStartTime", HandleInvocationsFromAdViewer.KEY_IS_HEADER_BIDDING, "mark$iv$iv", "isBanner", "loadStartTime"}, s = {"L$5", "L$6", "L$7", "I$0", "J$0", "I$1", "L$5", "L$6", "I$0", "J$0", "I$1", "J$1", "L$6", "L$7", "L$8", "I$0", "J$0", "I$1", "L$6", "L$7", "I$0", "J$0", "I$1", "J$1", "I$0", "J$0"})
    static final class AnonymousClass2 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super LoadResult>, Object> {
        final /* synthetic */ AdRequestOuterClass.BannerSize $bannerSize;
        final /* synthetic */ Context $context;
        final /* synthetic */ HeaderBiddingAdMarkupOuterClass.HeaderBiddingAdMarkup $headerBiddingAdMarkup;
        final /* synthetic */ UnityAdsLoadOptions $loadOptions;
        final /* synthetic */ ByteString $opportunityId;
        final /* synthetic */ String $placement;
        int I$0;
        int I$1;
        long J$0;
        long J$1;
        private /* synthetic */ Object L$0;
        Object L$1;
        Object L$2;
        Object L$3;
        Object L$4;
        Object L$5;
        Object L$6;
        Object L$7;
        Object L$8;
        int label;
        final /* synthetic */ AndroidLoad this$0;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        AnonymousClass2(AdRequestOuterClass.BannerSize bannerSize, AndroidLoad androidLoad, HeaderBiddingAdMarkupOuterClass.HeaderBiddingAdMarkup headerBiddingAdMarkup, ByteString byteString, String str, UnityAdsLoadOptions unityAdsLoadOptions, Context context, Continuation<? super AnonymousClass2> continuation) {
            super(2, continuation);
            this.$bannerSize = bannerSize;
            this.this$0 = androidLoad;
            this.$headerBiddingAdMarkup = headerBiddingAdMarkup;
            this.$opportunityId = byteString;
            this.$placement = str;
            this.$loadOptions = unityAdsLoadOptions;
            this.$context = context;
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
            AnonymousClass2 anonymousClass2 = new AnonymousClass2(this.$bannerSize, this.this$0, this.$headerBiddingAdMarkup, this.$opportunityId, this.$placement, this.$loadOptions, this.$context, continuation);
            anonymousClass2.L$0 = obj;
            return anonymousClass2;
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(CoroutineScope coroutineScope, Continuation<? super LoadResult> continuation) {
            return ((AnonymousClass2) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
        }

        /*  JADX ERROR: Type inference failed
            jadx.core.utils.exceptions.JadxOverflowException: Type inference error: updates count limit reached with updateSeq = 18351. Try increasing type updates limit count.
            	at jadx.core.utils.ErrorsCounter.addError(ErrorsCounter.java:59)
            	at jadx.core.utils.ErrorsCounter.error(ErrorsCounter.java:31)
            	at jadx.core.dex.attributes.nodes.NotificationAttrNode.addError(NotificationAttrNode.java:19)
            	at jadx.core.dex.visitors.typeinference.TypeInferenceVisitor.visit(TypeInferenceVisitor.java:79)
            */
        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final java.lang.Object invokeSuspend(java.lang.Object r41) {
            /*
                Method dump skipped, instruction units count: 1835
                To view this dump add '--comments-level debug' option
            */
            throw new UnsupportedOperationException("Method not decompiled: com.unity3d.ads.core.domain.AndroidLoad.AnonymousClass2.invokeSuspend(java.lang.Object):java.lang.Object");
        }
    }

    @Override // com.unity3d.ads.core.domain.Load
    public Object invoke(Context context, String str, ByteString byteString, HeaderBiddingAdMarkupOuterClass.HeaderBiddingAdMarkup headerBiddingAdMarkup, AdRequestOuterClass.BannerSize bannerSize, UnityAdsLoadOptions unityAdsLoadOptions, Continuation<? super LoadResult> continuation) {
        return BuildersKt.withContext(this.defaultDispatcher, new AnonymousClass2(bannerSize, this, headerBiddingAdMarkup, byteString, str, unityAdsLoadOptions, context, null), continuation);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final LoadResult.Failure handleGatewayException(UnityAdsNetworkException e) {
        ErrorOuterClass.PublicErrorCode errorCode;
        String loadErrorMsg;
        ErrorOuterClass.PublicErrorCode errorCode2;
        String str;
        boolean z = e instanceof NetworkTimeoutException;
        if (z) {
            errorCode = ErrorOuterClass.PublicErrorCode.PUBLIC_ERROR_CODE_TIMEOUT;
        } else if (!(e instanceof GatewayException) || (errorCode = ((GatewayException) e).getErrorCode()) == null) {
            errorCode = ErrorOuterClass.PublicErrorCode.PUBLIC_ERROR_CODE_LOAD_NETWORK;
        }
        ErrorOuterClass.PublicErrorCode publicErrorCode = errorCode;
        if (z) {
            loadErrorMsg = UnityAdsErrorKt.MSG_BOLD_LOAD_FAIL_TIME_OUT;
        } else if (!(e instanceof GatewayException) || (errorCode2 = ((GatewayException) e).getErrorCode()) == null || (loadErrorMsg = UnityAdsErrorKt.getLoadErrorMsg(errorCode2)) == null) {
            loadErrorMsg = UnityAdsErrorKt.getLoadErrorMsg(ErrorOuterClass.PublicErrorCode.PUBLIC_ERROR_CODE_LOAD_NETWORK);
        }
        String str2 = loadErrorMsg;
        if (z) {
            str = "timeout";
        } else {
            str = "gateway";
        }
        return new LoadResult.Failure(publicErrorCode, str2, e, str, e.getMessage(), e instanceof GatewayException ? ((GatewayException) e).getErrorToken() : null);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final boolean isCachePhaseFailure(LoadResult.Failure failure) {
        String reason = failure.getReason();
        int iHashCode = reason.hashCode();
        if (iHashCode == -1131560769) {
            return reason.equals("no_webview_entry_point");
        }
        if (iHashCode != -952823001) {
            return iHashCode == -711698443 && reason.equals("adviewer");
        }
        return reason.equals("invalid_url");
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void incrementLoadRequestCount(boolean isBanner) {
        if (isBanner) {
            this.sessionRepository.incrementBannerLoadRequestCount();
        } else {
            this.sessionRepository.incrementLoadRequestCount();
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void incrementLoadRequestAdmCount(boolean isBanner) {
        if (isBanner) {
            this.sessionRepository.incrementBannerLoadRequestAdmCount();
        } else {
            this.sessionRepository.incrementLoadRequestAdmCount();
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final AdObject getTmpAdObject(ByteString opportunityId, String placement, boolean isHeaderBidding, DiagnosticEventRequestOuterClass.DiagnosticAdType adType, UnityAdsLoadOptions loadOptions) {
        return SendDiagnosticEvent.INSTANCE.getTmpAdObjectForEventSending(opportunityId, placement, isHeaderBidding, loadOptions, adType);
    }
}
