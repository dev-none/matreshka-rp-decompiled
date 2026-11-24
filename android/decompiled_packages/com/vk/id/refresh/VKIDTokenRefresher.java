package com.vk.id.refresh;

import com.vk.id.RefreshToken;
import com.vk.id.TokensHandler;
import com.vk.id.internal.api.VKIDApiService;
import com.vk.id.internal.auth.ServiceCredentials;
import com.vk.id.internal.auth.VKIDTokenPayload;
import com.vk.id.internal.auth.device.InternalVKIDDeviceIdProvider;
import com.vk.id.internal.concurrent.VKIDCoroutinesDispatchers;
import com.vk.id.internal.state.StateGenerator;
import com.vk.id.internal.store.InternalVKIDPrefsStore;
import com.vk.id.storage.InternalVKIDTokenStorage;
import io.sentry.protocol.Message;
import kotlin.Metadata;
import kotlin.Pair;
import kotlin.Result;
import kotlin.ResultKt;
import kotlin.TuplesKt;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.intrinsics.IntrinsicsKt;
import kotlin.coroutines.jvm.internal.ContinuationImpl;
import kotlin.coroutines.jvm.internal.DebugMetadata;
import kotlin.coroutines.jvm.internal.SuspendLambda;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.coroutines.BuildersKt;
import kotlinx.coroutines.CoroutineDispatcher;
import kotlinx.coroutines.CoroutineScope;

/* JADX INFO: compiled from: VKIDTokenRefresher.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000P\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\b\u0001\u0018\u00002\u00020\u0001BG\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0007\u0012\u0006\u0010\b\u001a\u00020\t\u0012\u0006\u0010\n\u001a\u00020\u000b\u0012\u0006\u0010\f\u001a\u00020\r\u0012\u0006\u0010\u000e\u001a\u00020\u000f\u0012\u0006\u0010\u0010\u001a\u00020\u0011¢\u0006\u0004\b\u0012\u0010\u0013J \u0010\u0014\u001a\u00020\u00152\u0006\u0010\u0016\u001a\u00020\u00172\b\b\u0002\u0010\u0018\u001a\u00020\u0019H\u0086@¢\u0006\u0002\u0010\u001aJ\u0010\u0010\u001b\u001a\u00020\u00152\u0006\u0010\u0016\u001a\u00020\u0017H\u0002R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0007X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\b\u001a\u00020\tX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\n\u001a\u00020\u000bX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\f\u001a\u00020\rX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u000e\u001a\u00020\u000fX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0010\u001a\u00020\u0011X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u001c"}, d2 = {"Lcom/vk/id/refresh/VKIDTokenRefresher;", "", "api", "Lcom/vk/id/internal/api/VKIDApiService;", "tokenStorage", "Lcom/vk/id/storage/InternalVKIDTokenStorage;", "deviceIdProvider", "Lcom/vk/id/internal/auth/device/InternalVKIDDeviceIdProvider;", "serviceCredentials", "Lcom/vk/id/internal/auth/ServiceCredentials;", "stateGenerator", "Lcom/vk/id/internal/state/StateGenerator;", "tokensHandler", "Lcom/vk/id/TokensHandler;", "dispatchers", "Lcom/vk/id/internal/concurrent/VKIDCoroutinesDispatchers;", "prefsStore", "Lcom/vk/id/internal/store/InternalVKIDPrefsStore;", "<init>", "(Lcom/vk/id/internal/api/VKIDApiService;Lcom/vk/id/storage/InternalVKIDTokenStorage;Lcom/vk/id/internal/auth/device/InternalVKIDDeviceIdProvider;Lcom/vk/id/internal/auth/ServiceCredentials;Lcom/vk/id/internal/state/StateGenerator;Lcom/vk/id/TokensHandler;Lcom/vk/id/internal/concurrent/VKIDCoroutinesDispatchers;Lcom/vk/id/internal/store/InternalVKIDPrefsStore;)V", "refresh", "", "callback", "Lcom/vk/id/refresh/VKIDRefreshTokenCallback;", Message.JsonKeys.PARAMS, "Lcom/vk/id/refresh/VKIDRefreshTokenParams;", "(Lcom/vk/id/refresh/VKIDRefreshTokenCallback;Lcom/vk/id/refresh/VKIDRefreshTokenParams;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "emitUnauthorizedFail", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final class VKIDTokenRefresher {
    public static final int $stable = 8;
    private final VKIDApiService api;
    private final InternalVKIDDeviceIdProvider deviceIdProvider;
    private final VKIDCoroutinesDispatchers dispatchers;
    private final InternalVKIDPrefsStore prefsStore;
    private final ServiceCredentials serviceCredentials;
    private final StateGenerator stateGenerator;
    private final InternalVKIDTokenStorage tokenStorage;
    private final TokensHandler tokensHandler;

    /* JADX INFO: renamed from: com.vk.id.refresh.VKIDTokenRefresher$refresh$1, reason: invalid class name */
    /* JADX INFO: compiled from: VKIDTokenRefresher.kt */
    @Metadata(k = 3, mv = {2, 0, 0}, xi = 48)
    @DebugMetadata(c = "com.vk.id.refresh.VKIDTokenRefresher", f = "VKIDTokenRefresher.kt", i = {0, 0, 0, 0, 1, 1, 1, 1, 1, 2, 2, 2, 2, 3, 3, 3}, l = {32, 35, 39, 53}, m = "refresh", n = {"this", "callback", Message.JsonKeys.PARAMS, "clientId", "this", "callback", Message.JsonKeys.PARAMS, "clientId", "refreshToken", "this", "callback", Message.JsonKeys.PARAMS, "refreshTokenState", "this", "callback", "result"}, s = {"L$0", "L$1", "L$2", "L$3", "L$0", "L$1", "L$2", "L$3", "L$4", "L$0", "L$1", "L$2", "L$3", "L$0", "L$1", "L$2"})
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
            return VKIDTokenRefresher.this.refresh(null, null, this);
        }
    }

    public VKIDTokenRefresher(VKIDApiService api, InternalVKIDTokenStorage tokenStorage, InternalVKIDDeviceIdProvider deviceIdProvider, ServiceCredentials serviceCredentials, StateGenerator stateGenerator, TokensHandler tokensHandler, VKIDCoroutinesDispatchers dispatchers, InternalVKIDPrefsStore prefsStore) {
        Intrinsics.checkNotNullParameter(api, "api");
        Intrinsics.checkNotNullParameter(tokenStorage, "tokenStorage");
        Intrinsics.checkNotNullParameter(deviceIdProvider, "deviceIdProvider");
        Intrinsics.checkNotNullParameter(serviceCredentials, "serviceCredentials");
        Intrinsics.checkNotNullParameter(stateGenerator, "stateGenerator");
        Intrinsics.checkNotNullParameter(tokensHandler, "tokensHandler");
        Intrinsics.checkNotNullParameter(dispatchers, "dispatchers");
        Intrinsics.checkNotNullParameter(prefsStore, "prefsStore");
        this.api = api;
        this.tokenStorage = tokenStorage;
        this.deviceIdProvider = deviceIdProvider;
        this.serviceCredentials = serviceCredentials;
        this.stateGenerator = stateGenerator;
        this.tokensHandler = tokensHandler;
        this.dispatchers = dispatchers;
        this.prefsStore = prefsStore;
    }

    /* JADX WARN: Code duplicated, block: B:36:0x012f  */
    /* JADX WARN: Code duplicated, block: B:39:0x013e  */
    /* JADX WARN: Code duplicated, block: B:41:0x014b  */
    /* JADX WARN: Code duplicated, block: B:43:0x015f  */
    /* JADX WARN: Code duplicated, block: B:46:0x0187  */
    /* JADX WARN: Code duplicated, block: B:50:0x0193  */
    /* JADX WARN: Code duplicated, block: B:7:0x0018  */
    /* JADX WARN: Instruction removed from duplicated block: B:50:0x0193, please report this as an issue */
    public final Object refresh(VKIDRefreshTokenCallback vKIDRefreshTokenCallback, VKIDRefreshTokenParams vKIDRefreshTokenParams, Continuation<? super Unit> continuation) {
        AnonymousClass1 anonymousClass1;
        VKIDRefreshTokenParams vKIDRefreshTokenParams2;
        String str;
        VKIDRefreshTokenCallback vKIDRefreshTokenCallback2;
        final VKIDTokenRefresher vKIDTokenRefresher;
        String str2;
        VKIDRefreshTokenParams vKIDRefreshTokenParams3;
        RefreshToken refreshToken;
        VKIDRefreshTokenCallback vKIDRefreshTokenCallback3;
        String str3;
        final VKIDRefreshTokenCallback vKIDRefreshTokenCallback4;
        VKIDRefreshTokenParams vKIDRefreshTokenParams4;
        String str4;
        Object value;
        VKIDTokenPayload vKIDTokenPayload;
        TokensHandler tokensHandler;
        VKIDTokenRefresher$refresh$4$1 vKIDTokenRefresher$refresh$4$1;
        Function1<? super Throwable, Unit> function1;
        boolean refreshAccessToken;
        Object obj;
        VKIDRefreshTokenCallback vKIDRefreshTokenCallback5;
        VKIDTokenRefresher vKIDTokenRefresher2;
        Throwable thM9864exceptionOrNullimpl;
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
        AnonymousClass1 anonymousClass2 = anonymousClass1;
        Object objWithContext = anonymousClass2.result;
        Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
        int i = anonymousClass2.label;
        if (i == 0) {
            ResultKt.throwOnFailure(objWithContext);
            String clientID = this.serviceCredentials.getClientID();
            CoroutineDispatcher io2 = this.dispatchers.getIo();
            VKIDTokenRefresher$refresh$refreshToken$1 vKIDTokenRefresher$refresh$refreshToken$1 = new VKIDTokenRefresher$refresh$refreshToken$1(this, null);
            anonymousClass2.L$0 = this;
            anonymousClass2.L$1 = vKIDRefreshTokenCallback;
            vKIDRefreshTokenParams2 = vKIDRefreshTokenParams;
            anonymousClass2.L$2 = vKIDRefreshTokenParams2;
            anonymousClass2.L$3 = clientID;
            anonymousClass2.label = 1;
            Object objWithContext2 = BuildersKt.withContext(io2, vKIDTokenRefresher$refresh$refreshToken$1, anonymousClass2);
            if (objWithContext2 != coroutine_suspended) {
                str = clientID;
                objWithContext = objWithContext2;
                vKIDRefreshTokenCallback2 = vKIDRefreshTokenCallback;
                vKIDTokenRefresher = this;
            }
            return coroutine_suspended;
        }
        if (i == 1) {
            str = (String) anonymousClass2.L$3;
            VKIDRefreshTokenParams vKIDRefreshTokenParams5 = (VKIDRefreshTokenParams) anonymousClass2.L$2;
            vKIDRefreshTokenCallback2 = (VKIDRefreshTokenCallback) anonymousClass2.L$1;
            vKIDTokenRefresher = (VKIDTokenRefresher) anonymousClass2.L$0;
            ResultKt.throwOnFailure(objWithContext);
            vKIDRefreshTokenParams2 = vKIDRefreshTokenParams5;
        } else {
            if (i == 2) {
                RefreshToken refreshToken2 = (RefreshToken) anonymousClass2.L$4;
                String str5 = (String) anonymousClass2.L$3;
                vKIDRefreshTokenParams3 = (VKIDRefreshTokenParams) anonymousClass2.L$2;
                vKIDRefreshTokenCallback2 = (VKIDRefreshTokenCallback) anonymousClass2.L$1;
                vKIDTokenRefresher = (VKIDTokenRefresher) anonymousClass2.L$0;
                ResultKt.throwOnFailure(objWithContext);
                refreshToken = refreshToken2;
                str2 = str5;
                vKIDRefreshTokenCallback3 = vKIDRefreshTokenCallback2;
                Pair pair = (Pair) objWithContext;
                str3 = (String) pair.component1();
                String str6 = (String) pair.component2();
                CoroutineDispatcher io3 = vKIDTokenRefresher.dispatchers.getIo();
                VKIDTokenRefresher$refresh$result$1 vKIDTokenRefresher$refresh$result$1 = new VKIDTokenRefresher$refresh$result$1(vKIDTokenRefresher, refreshToken, str2, str6, str3, null);
                anonymousClass2.L$0 = vKIDTokenRefresher;
                anonymousClass2.L$1 = vKIDRefreshTokenCallback3;
                anonymousClass2.L$2 = vKIDRefreshTokenParams3;
                anonymousClass2.L$3 = str3;
                anonymousClass2.L$4 = null;
                anonymousClass2.label = 3;
                objWithContext = BuildersKt.withContext(io3, vKIDTokenRefresher$refresh$result$1, anonymousClass2);
                if (objWithContext != coroutine_suspended) {
                    vKIDRefreshTokenCallback4 = vKIDRefreshTokenCallback3;
                    vKIDRefreshTokenParams4 = vKIDRefreshTokenParams3;
                    str4 = str3;
                    value = ((Result) objWithContext).getValue();
                    if (Result.m9868isSuccessimpl(value)) {
                        vKIDTokenPayload = (VKIDTokenPayload) value;
                        if (!Intrinsics.areEqual(vKIDTokenPayload.getState(), str4)) {
                            vKIDTokenRefresher.prefsStore.clear();
                            vKIDRefreshTokenCallback4.onFail(new VKIDRefreshTokenFail.FailedOAuthState("Wrong state for getting user info"));
                            return Unit.INSTANCE;
                        }
                        tokensHandler = vKIDTokenRefresher.tokensHandler;
                        vKIDTokenRefresher$refresh$4$1 = new VKIDTokenRefresher$refresh$4$1(vKIDTokenRefresher, vKIDRefreshTokenCallback4, null);
                        function1 = new Function1() { // from class: com.vk.id.refresh.VKIDTokenRefresher$$ExternalSyntheticLambda0
                            @Override // kotlin.jvm.functions.Function1
                            public final Object invoke(Object obj2) {
                                return VKIDTokenRefresher.refresh$lambda$2$lambda$1(this.f$0, vKIDRefreshTokenCallback4, (Throwable) obj2);
                            }
                        };
                        refreshAccessToken = vKIDRefreshTokenParams4.getRefreshAccessToken();
                        anonymousClass2.L$0 = vKIDTokenRefresher;
                        anonymousClass2.L$1 = vKIDRefreshTokenCallback4;
                        anonymousClass2.L$2 = value;
                        anonymousClass2.L$3 = value;
                        anonymousClass2.label = 4;
                        if (tokensHandler.handle(vKIDTokenPayload, vKIDTokenRefresher$refresh$4$1, function1, refreshAccessToken, anonymousClass2) != coroutine_suspended) {
                            obj = value;
                            vKIDRefreshTokenCallback5 = vKIDRefreshTokenCallback4;
                            vKIDTokenRefresher2 = vKIDTokenRefresher;
                        }
                    }
                    thM9864exceptionOrNullimpl = Result.m9864exceptionOrNullimpl(value);
                    if (thM9864exceptionOrNullimpl != null) {
                        vKIDTokenRefresher.prefsStore.clear();
                        vKIDRefreshTokenCallback4.onFail(new VKIDRefreshTokenFail.FailedApiCall("Failed code to refresh token due to: " + thM9864exceptionOrNullimpl.getMessage(), thM9864exceptionOrNullimpl));
                    }
                    return Unit.INSTANCE;
                }
                return coroutine_suspended;
            }
            if (i == 3) {
                str4 = (String) anonymousClass2.L$3;
                vKIDRefreshTokenParams4 = (VKIDRefreshTokenParams) anonymousClass2.L$2;
                VKIDRefreshTokenCallback vKIDRefreshTokenCallback6 = (VKIDRefreshTokenCallback) anonymousClass2.L$1;
                VKIDTokenRefresher vKIDTokenRefresher3 = (VKIDTokenRefresher) anonymousClass2.L$0;
                ResultKt.throwOnFailure(objWithContext);
                vKIDRefreshTokenCallback4 = vKIDRefreshTokenCallback6;
                vKIDTokenRefresher = vKIDTokenRefresher3;
                value = ((Result) objWithContext).getValue();
                if (Result.m9868isSuccessimpl(value)) {
                    vKIDTokenPayload = (VKIDTokenPayload) value;
                    if (!Intrinsics.areEqual(vKIDTokenPayload.getState(), str4)) {
                        vKIDTokenRefresher.prefsStore.clear();
                        vKIDRefreshTokenCallback4.onFail(new VKIDRefreshTokenFail.FailedOAuthState("Wrong state for getting user info"));
                        return Unit.INSTANCE;
                    }
                    tokensHandler = vKIDTokenRefresher.tokensHandler;
                    vKIDTokenRefresher$refresh$4$1 = new VKIDTokenRefresher$refresh$4$1(vKIDTokenRefresher, vKIDRefreshTokenCallback4, null);
                    function1 = new Function1() { // from class: com.vk.id.refresh.VKIDTokenRefresher$$ExternalSyntheticLambda0
                        @Override // kotlin.jvm.functions.Function1
                        public final Object invoke(Object obj2) {
                            return VKIDTokenRefresher.refresh$lambda$2$lambda$1(this.f$0, vKIDRefreshTokenCallback4, (Throwable) obj2);
                        }
                    };
                    refreshAccessToken = vKIDRefreshTokenParams4.getRefreshAccessToken();
                    anonymousClass2.L$0 = vKIDTokenRefresher;
                    anonymousClass2.L$1 = vKIDRefreshTokenCallback4;
                    anonymousClass2.L$2 = value;
                    anonymousClass2.L$3 = value;
                    anonymousClass2.label = 4;
                    if (tokensHandler.handle(vKIDTokenPayload, vKIDTokenRefresher$refresh$4$1, function1, refreshAccessToken, anonymousClass2) != coroutine_suspended) {
                        obj = value;
                        vKIDRefreshTokenCallback5 = vKIDRefreshTokenCallback4;
                        vKIDTokenRefresher2 = vKIDTokenRefresher;
                    }
                    return coroutine_suspended;
                }
                thM9864exceptionOrNullimpl = Result.m9864exceptionOrNullimpl(value);
                if (thM9864exceptionOrNullimpl != null) {
                    vKIDTokenRefresher.prefsStore.clear();
                    vKIDRefreshTokenCallback4.onFail(new VKIDRefreshTokenFail.FailedApiCall("Failed code to refresh token due to: " + thM9864exceptionOrNullimpl.getMessage(), thM9864exceptionOrNullimpl));
                }
                return Unit.INSTANCE;
            }
            if (i != 4) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            Object obj2 = anonymousClass2.L$3;
            obj = anonymousClass2.L$2;
            vKIDRefreshTokenCallback5 = (VKIDRefreshTokenCallback) anonymousClass2.L$1;
            vKIDTokenRefresher2 = (VKIDTokenRefresher) anonymousClass2.L$0;
            ResultKt.throwOnFailure(objWithContext);
        }
        value = obj;
        vKIDRefreshTokenCallback4 = vKIDRefreshTokenCallback5;
        vKIDTokenRefresher = vKIDTokenRefresher2;
        thM9864exceptionOrNullimpl = Result.m9864exceptionOrNullimpl(value);
        if (thM9864exceptionOrNullimpl != null) {
            vKIDTokenRefresher.prefsStore.clear();
            vKIDRefreshTokenCallback4.onFail(new VKIDRefreshTokenFail.FailedApiCall("Failed code to refresh token due to: " + thM9864exceptionOrNullimpl.getMessage(), thM9864exceptionOrNullimpl));
        }
        return Unit.INSTANCE;
        RefreshToken refreshToken3 = (RefreshToken) objWithContext;
        if (refreshToken3 == null) {
            vKIDTokenRefresher.emitUnauthorizedFail(vKIDRefreshTokenCallback2);
            return Unit.INSTANCE;
        }
        CoroutineDispatcher io4 = vKIDTokenRefresher.dispatchers.getIo();
        AnonymousClass3 anonymousClass3 = new AnonymousClass3(vKIDRefreshTokenParams2, vKIDTokenRefresher, null);
        anonymousClass2.L$0 = vKIDTokenRefresher;
        anonymousClass2.L$1 = vKIDRefreshTokenCallback2;
        anonymousClass2.L$2 = vKIDRefreshTokenParams2;
        anonymousClass2.L$3 = str;
        anonymousClass2.L$4 = refreshToken3;
        anonymousClass2.label = 2;
        Object objWithContext3 = BuildersKt.withContext(io4, anonymousClass3, anonymousClass2);
        if (objWithContext3 != coroutine_suspended) {
            str2 = str;
            vKIDRefreshTokenParams3 = vKIDRefreshTokenParams2;
            refreshToken = refreshToken3;
            objWithContext = objWithContext3;
            vKIDRefreshTokenCallback3 = vKIDRefreshTokenCallback2;
            Pair pair2 = (Pair) objWithContext;
            str3 = (String) pair2.component1();
            String str7 = (String) pair2.component2();
            CoroutineDispatcher io5 = vKIDTokenRefresher.dispatchers.getIo();
            VKIDTokenRefresher$refresh$result$1 vKIDTokenRefresher$refresh$result$2 = new VKIDTokenRefresher$refresh$result$1(vKIDTokenRefresher, refreshToken, str2, str7, str3, null);
            anonymousClass2.L$0 = vKIDTokenRefresher;
            anonymousClass2.L$1 = vKIDRefreshTokenCallback3;
            anonymousClass2.L$2 = vKIDRefreshTokenParams3;
            anonymousClass2.L$3 = str3;
            anonymousClass2.L$4 = null;
            anonymousClass2.label = 3;
            objWithContext = BuildersKt.withContext(io5, vKIDTokenRefresher$refresh$result$2, anonymousClass2);
            if (objWithContext != coroutine_suspended) {
                vKIDRefreshTokenCallback4 = vKIDRefreshTokenCallback3;
                vKIDRefreshTokenParams4 = vKIDRefreshTokenParams3;
                str4 = str3;
                value = ((Result) objWithContext).getValue();
                if (Result.m9868isSuccessimpl(value)) {
                    vKIDTokenPayload = (VKIDTokenPayload) value;
                    if (!Intrinsics.areEqual(vKIDTokenPayload.getState(), str4)) {
                        vKIDTokenRefresher.prefsStore.clear();
                        vKIDRefreshTokenCallback4.onFail(new VKIDRefreshTokenFail.FailedOAuthState("Wrong state for getting user info"));
                        return Unit.INSTANCE;
                    }
                    tokensHandler = vKIDTokenRefresher.tokensHandler;
                    vKIDTokenRefresher$refresh$4$1 = new VKIDTokenRefresher$refresh$4$1(vKIDTokenRefresher, vKIDRefreshTokenCallback4, null);
                    function1 = new Function1() { // from class: com.vk.id.refresh.VKIDTokenRefresher$$ExternalSyntheticLambda0
                        @Override // kotlin.jvm.functions.Function1
                        public final Object invoke(Object obj3) {
                            return VKIDTokenRefresher.refresh$lambda$2$lambda$1(this.f$0, vKIDRefreshTokenCallback4, (Throwable) obj3);
                        }
                    };
                    refreshAccessToken = vKIDRefreshTokenParams4.getRefreshAccessToken();
                    anonymousClass2.L$0 = vKIDTokenRefresher;
                    anonymousClass2.L$1 = vKIDRefreshTokenCallback4;
                    anonymousClass2.L$2 = value;
                    anonymousClass2.L$3 = value;
                    anonymousClass2.label = 4;
                    if (tokensHandler.handle(vKIDTokenPayload, vKIDTokenRefresher$refresh$4$1, function1, refreshAccessToken, anonymousClass2) != coroutine_suspended) {
                        obj = value;
                        vKIDRefreshTokenCallback5 = vKIDRefreshTokenCallback4;
                        vKIDTokenRefresher2 = vKIDTokenRefresher;
                        value = obj;
                        vKIDRefreshTokenCallback4 = vKIDRefreshTokenCallback5;
                        vKIDTokenRefresher = vKIDTokenRefresher2;
                    }
                }
                thM9864exceptionOrNullimpl = Result.m9864exceptionOrNullimpl(value);
                if (thM9864exceptionOrNullimpl != null) {
                    vKIDTokenRefresher.prefsStore.clear();
                    vKIDRefreshTokenCallback4.onFail(new VKIDRefreshTokenFail.FailedApiCall("Failed code to refresh token due to: " + thM9864exceptionOrNullimpl.getMessage(), thM9864exceptionOrNullimpl));
                }
                return Unit.INSTANCE;
            }
        }
        return coroutine_suspended;
    }

    /* JADX INFO: renamed from: com.vk.id.refresh.VKIDTokenRefresher$refresh$3, reason: invalid class name */
    /* JADX INFO: compiled from: VKIDTokenRefresher.kt */
    @Metadata(d1 = {"\u0000\u000e\n\u0000\n\u0002\u0018\u0002\n\u0002\u0010\u000e\n\u0002\u0018\u0002\u0010\u0000\u001a\u000e\u0012\u0004\u0012\u00020\u0002\u0012\u0004\u0012\u00020\u00020\u0001*\u00020\u0003H\n"}, d2 = {"<anonymous>", "Lkotlin/Pair;", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 0, 0}, xi = 48)
    @DebugMetadata(c = "com.vk.id.refresh.VKIDTokenRefresher$refresh$3", f = "VKIDTokenRefresher.kt", i = {}, l = {}, m = "invokeSuspend", n = {}, s = {})
    static final class AnonymousClass3 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Pair<? extends String, ? extends String>>, Object> {
        final /* synthetic */ VKIDRefreshTokenParams $params;
        int label;
        final /* synthetic */ VKIDTokenRefresher this$0;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        AnonymousClass3(VKIDRefreshTokenParams vKIDRefreshTokenParams, VKIDTokenRefresher vKIDTokenRefresher, Continuation<? super AnonymousClass3> continuation) {
            super(2, continuation);
            this.$params = vKIDRefreshTokenParams;
            this.this$0 = vKIDTokenRefresher;
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
            return new AnonymousClass3(this.$params, this.this$0, continuation);
        }

        @Override // kotlin.jvm.functions.Function2
        public /* bridge */ /* synthetic */ Object invoke(CoroutineScope coroutineScope, Continuation<? super Pair<? extends String, ? extends String>> continuation) {
            return invoke2(coroutineScope, (Continuation<? super Pair<String, String>>) continuation);
        }

        /* JADX INFO: renamed from: invoke, reason: avoid collision after fix types in other method */
        public final Object invoke2(CoroutineScope coroutineScope, Continuation<? super Pair<String, String>> continuation) {
            return ((AnonymousClass3) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            IntrinsicsKt.getCOROUTINE_SUSPENDED();
            if (this.label != 0) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            ResultKt.throwOnFailure(obj);
            String state = this.$params.getState();
            if (state == null) {
                state = this.this$0.stateGenerator.regenerateState();
            }
            return TuplesKt.to(state, this.this$0.deviceIdProvider.getDeviceId$vkid_release());
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit refresh$lambda$2$lambda$1(VKIDTokenRefresher vKIDTokenRefresher, VKIDRefreshTokenCallback vKIDRefreshTokenCallback, Throwable it) {
        Intrinsics.checkNotNullParameter(it, "it");
        vKIDTokenRefresher.prefsStore.clear();
        vKIDRefreshTokenCallback.onFail(new VKIDRefreshTokenFail.FailedApiCall("Failed to fetch user data due to: " + it.getMessage(), it));
        return Unit.INSTANCE;
    }

    private final void emitUnauthorizedFail(VKIDRefreshTokenCallback callback) {
        callback.onFail(new VKIDRefreshTokenFail.NotAuthenticated("You must login before refreshing token"));
    }

    public static /* synthetic */ Object refresh$default(VKIDTokenRefresher vKIDTokenRefresher, VKIDRefreshTokenCallback vKIDRefreshTokenCallback, VKIDRefreshTokenParams vKIDRefreshTokenParams, Continuation continuation, int i, Object obj) {
        if ((i & 2) != 0) {
            vKIDRefreshTokenParams = new VKIDRefreshTokenParams.Builder().build();
        }
        return vKIDTokenRefresher.refresh(vKIDRefreshTokenCallback, vKIDRefreshTokenParams, continuation);
    }
}
