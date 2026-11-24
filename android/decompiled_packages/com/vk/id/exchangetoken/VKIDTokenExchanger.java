package com.vk.id.exchangetoken;

import com.vk.id.AccessToken;
import com.vk.id.TokensHandler;
import com.vk.id.internal.api.VKIDApiService;
import com.vk.id.internal.auth.ServiceCredentials;
import com.vk.id.internal.auth.device.InternalVKIDDeviceIdProvider;
import com.vk.id.internal.auth.pkce.PkceGeneratorSHA256;
import com.vk.id.internal.concurrent.VKIDCoroutinesDispatchers;
import com.vk.id.internal.state.StateGenerator;
import com.vk.id.internal.store.InternalVKIDPrefsStore;
import io.sentry.protocol.Message;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.jvm.internal.ContinuationImpl;
import kotlin.coroutines.jvm.internal.DebugMetadata;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: VKIDTokenExchanger.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000V\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0006\b\u0001\u0018\u00002\u00020\u0001BG\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0007\u0012\u0006\u0010\b\u001a\u00020\t\u0012\u0006\u0010\n\u001a\u00020\u000b\u0012\u0006\u0010\f\u001a\u00020\r\u0012\u0006\u0010\u000e\u001a\u00020\u000f\u0012\u0006\u0010\u0010\u001a\u00020\u0011¢\u0006\u0004\b\u0012\u0010\u0013J&\u0010\u0014\u001a\u00020\u00152\u0006\u0010\u0016\u001a\u00020\u00172\u0006\u0010\u0018\u001a\u00020\u00192\u0006\u0010\u001a\u001a\u00020\u001bH\u0086@¢\u0006\u0002\u0010\u001cJ.\u0010\u001d\u001a\u00020\u00152\u0006\u0010\u001e\u001a\u00020\u00172\u0006\u0010\u001f\u001a\u00020\u00172\u0006\u0010\u0018\u001a\u00020\u00192\u0006\u0010\u001a\u001a\u00020\u001bH\u0082@¢\u0006\u0002\u0010 R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0007X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\b\u001a\u00020\tX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\n\u001a\u00020\u000bX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\f\u001a\u00020\rX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u000e\u001a\u00020\u000fX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0010\u001a\u00020\u0011X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006!"}, d2 = {"Lcom/vk/id/exchangetoken/VKIDTokenExchanger;", "", "api", "Lcom/vk/id/internal/api/VKIDApiService;", "deviceIdProvider", "Lcom/vk/id/internal/auth/device/InternalVKIDDeviceIdProvider;", "serviceCredentials", "Lcom/vk/id/internal/auth/ServiceCredentials;", "stateGenerator", "Lcom/vk/id/internal/state/StateGenerator;", "tokensHandler", "Lcom/vk/id/TokensHandler;", "dispatchers", "Lcom/vk/id/internal/concurrent/VKIDCoroutinesDispatchers;", "prefsStore", "Lcom/vk/id/internal/store/InternalVKIDPrefsStore;", "pkceGenerator", "Lcom/vk/id/internal/auth/pkce/PkceGeneratorSHA256;", "<init>", "(Lcom/vk/id/internal/api/VKIDApiService;Lcom/vk/id/internal/auth/device/InternalVKIDDeviceIdProvider;Lcom/vk/id/internal/auth/ServiceCredentials;Lcom/vk/id/internal/state/StateGenerator;Lcom/vk/id/TokensHandler;Lcom/vk/id/internal/concurrent/VKIDCoroutinesDispatchers;Lcom/vk/id/internal/store/InternalVKIDPrefsStore;Lcom/vk/id/internal/auth/pkce/PkceGeneratorSHA256;)V", "exchange", "", "v1Token", "", Message.JsonKeys.PARAMS, "Lcom/vk/id/exchangetoken/VKIDExchangeTokenParams;", "callback", "Lcom/vk/id/exchangetoken/VKIDExchangeTokenCallback;", "(Ljava/lang/String;Lcom/vk/id/exchangetoken/VKIDExchangeTokenParams;Lcom/vk/id/exchangetoken/VKIDExchangeTokenCallback;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "handleCode", "code", "codeVerifier", "(Ljava/lang/String;Ljava/lang/String;Lcom/vk/id/exchangetoken/VKIDExchangeTokenParams;Lcom/vk/id/exchangetoken/VKIDExchangeTokenCallback;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final class VKIDTokenExchanger {
    public static final int $stable = 8;
    private final VKIDApiService api;
    private final InternalVKIDDeviceIdProvider deviceIdProvider;
    private final VKIDCoroutinesDispatchers dispatchers;
    private final PkceGeneratorSHA256 pkceGenerator;
    private final InternalVKIDPrefsStore prefsStore;
    private final ServiceCredentials serviceCredentials;
    private final StateGenerator stateGenerator;
    private final TokensHandler tokensHandler;

    /* JADX INFO: renamed from: com.vk.id.exchangetoken.VKIDTokenExchanger$exchange$1, reason: invalid class name */
    /* JADX INFO: compiled from: VKIDTokenExchanger.kt */
    @Metadata(k = 3, mv = {2, 0, 0}, xi = 48)
    @DebugMetadata(c = "com.vk.id.exchangetoken.VKIDTokenExchanger", f = "VKIDTokenExchanger.kt", i = {0, 0, 0, 0, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2}, l = {34, 43, 62, 69}, m = "exchange", n = {"this", "v1Token", Message.JsonKeys.PARAMS, "callback", "this", Message.JsonKeys.PARAMS, "callback", "state", "codeVerifier", "this", Message.JsonKeys.PARAMS, "callback", "codeVerifier", "payload"}, s = {"L$0", "L$1", "L$2", "L$3", "L$0", "L$1", "L$2", "L$3", "L$4", "L$0", "L$1", "L$2", "L$3", "L$5"})
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
            return VKIDTokenExchanger.this.exchange(null, null, null, this);
        }
    }

    /* JADX INFO: renamed from: com.vk.id.exchangetoken.VKIDTokenExchanger$handleCode$1, reason: invalid class name and case insensitive filesystem */
    /* JADX INFO: compiled from: VKIDTokenExchanger.kt */
    @Metadata(k = 3, mv = {2, 0, 0}, xi = 48)
    @DebugMetadata(c = "com.vk.id.exchangetoken.VKIDTokenExchanger", f = "VKIDTokenExchanger.kt", i = {0, 0, 0, 0, 1, 1, 1}, l = {84, 85, 105}, m = "handleCode", n = {"this", "code", "codeVerifier", "callback", "this", "callback", "state"}, s = {"L$0", "L$1", "L$2", "L$3", "L$0", "L$1", "L$2"})
    static final class C19521 extends ContinuationImpl {
        Object L$0;
        Object L$1;
        Object L$2;
        Object L$3;
        int label;
        /* synthetic */ Object result;

        C19521(Continuation<? super C19521> continuation) {
            super(continuation);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            this.result = obj;
            this.label |= Integer.MIN_VALUE;
            return VKIDTokenExchanger.this.handleCode(null, null, null, null, this);
        }
    }

    public VKIDTokenExchanger(VKIDApiService api, InternalVKIDDeviceIdProvider deviceIdProvider, ServiceCredentials serviceCredentials, StateGenerator stateGenerator, TokensHandler tokensHandler, VKIDCoroutinesDispatchers dispatchers, InternalVKIDPrefsStore prefsStore, PkceGeneratorSHA256 pkceGenerator) {
        Intrinsics.checkNotNullParameter(api, "api");
        Intrinsics.checkNotNullParameter(deviceIdProvider, "deviceIdProvider");
        Intrinsics.checkNotNullParameter(serviceCredentials, "serviceCredentials");
        Intrinsics.checkNotNullParameter(stateGenerator, "stateGenerator");
        Intrinsics.checkNotNullParameter(tokensHandler, "tokensHandler");
        Intrinsics.checkNotNullParameter(dispatchers, "dispatchers");
        Intrinsics.checkNotNullParameter(prefsStore, "prefsStore");
        Intrinsics.checkNotNullParameter(pkceGenerator, "pkceGenerator");
        this.api = api;
        this.deviceIdProvider = deviceIdProvider;
        this.serviceCredentials = serviceCredentials;
        this.stateGenerator = stateGenerator;
        this.tokensHandler = tokensHandler;
        this.dispatchers = dispatchers;
        this.prefsStore = prefsStore;
        this.pkceGenerator = pkceGenerator;
    }

    /* JADX WARN: Code duplicated, block: B:38:0x014b  */
    /* JADX WARN: Code duplicated, block: B:41:0x0172  */
    /* JADX WARN: Code duplicated, block: B:43:0x0184  */
    /* JADX WARN: Code duplicated, block: B:45:0x0193  */
    /* JADX WARN: Code duplicated, block: B:48:0x01b7  */
    /* JADX WARN: Code duplicated, block: B:51:0x01cb  */
    /* JADX WARN: Code duplicated, block: B:52:0x01cd  */
    /* JADX WARN: Code duplicated, block: B:55:0x01d3  */
    /* JADX WARN: Code duplicated, block: B:57:0x01d6  */
    /* JADX WARN: Code duplicated, block: B:7:0x0018  */
    /* JADX WARN: Code restructure failed: missing block: B:58:0x01f0, code lost:
    
        if (r12.handleCode(r4, r6, r11, r7, r8) == r2) goto L59;
     */
    /* JADX WARN: Instruction removed from duplicated block: B:38:0x014b, please report this as an issue */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public final java.lang.Object exchange(java.lang.String r21, com.vk.id.exchangetoken.VKIDExchangeTokenParams r22, com.vk.id.exchangetoken.VKIDExchangeTokenCallback r23, kotlin.coroutines.Continuation<? super kotlin.Unit> r24) {
        /*
            Method dump skipped, instruction units count: 502
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.vk.id.exchangetoken.VKIDTokenExchanger.exchange(java.lang.String, com.vk.id.exchangetoken.VKIDExchangeTokenParams, com.vk.id.exchangetoken.VKIDExchangeTokenCallback, kotlin.coroutines.Continuation):java.lang.Object");
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX WARN: Code duplicated, block: B:29:0x00ce  */
    /* JADX WARN: Code duplicated, block: B:32:0x00dc  */
    /* JADX WARN: Code duplicated, block: B:35:0x0103  */
    /* JADX WARN: Code duplicated, block: B:37:0x0115  */
    /* JADX WARN: Code duplicated, block: B:39:0x0124  */
    /* JADX WARN: Code duplicated, block: B:7:0x0018  */
    /* JADX WARN: Code restructure failed: missing block: B:40:0x0145, code lost:
    
        if (com.vk.id.TokensHandler.handle$default(r3, r9, r6, r6, false, r8, 8, null) == r2) goto L41;
     */
    /* JADX WARN: Instruction removed from duplicated block: B:32:0x00dc, please report this as an issue */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public final java.lang.Object handleCode(java.lang.String r19, java.lang.String r20, com.vk.id.exchangetoken.VKIDExchangeTokenParams r21, com.vk.id.exchangetoken.VKIDExchangeTokenCallback r22, kotlin.coroutines.Continuation<? super kotlin.Unit> r23) {
        /*
            Method dump skipped, instruction units count: 331
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.vk.id.exchangetoken.VKIDTokenExchanger.handleCode(java.lang.String, java.lang.String, com.vk.id.exchangetoken.VKIDExchangeTokenParams, com.vk.id.exchangetoken.VKIDExchangeTokenCallback, kotlin.coroutines.Continuation):java.lang.Object");
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final /* synthetic */ Object handleCode$lambda$4$onAuth(VKIDExchangeTokenCallback vKIDExchangeTokenCallback, AccessToken accessToken, Continuation continuation) {
        vKIDExchangeTokenCallback.onAuth(accessToken);
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit handleCode$lambda$4$lambda$3(VKIDExchangeTokenCallback vKIDExchangeTokenCallback, Throwable it) {
        Intrinsics.checkNotNullParameter(it, "it");
        vKIDExchangeTokenCallback.onFail(new VKIDExchangeTokenFail.FailedApiCall("Failed to fetch user data", it));
        return Unit.INSTANCE;
    }
}
