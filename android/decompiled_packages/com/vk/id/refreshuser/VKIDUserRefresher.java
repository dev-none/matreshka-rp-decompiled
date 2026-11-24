package com.vk.id.refreshuser;

import com.vk.id.AccessToken;
import com.vk.id.VKIDInvalidTokenException;
import com.vk.id.VKIDUser;
import com.vk.id.internal.api.VKIDApiService;
import com.vk.id.internal.api.dto.VKIDUserInfoPayload;
import com.vk.id.internal.auth.ServiceCredentials;
import com.vk.id.internal.auth.device.InternalVKIDDeviceIdProvider;
import com.vk.id.internal.concurrent.VKIDCoroutinesDispatchers;
import com.vk.id.refresh.VKIDRefreshTokenCallback;
import com.vk.id.refresh.VKIDRefreshTokenFail;
import com.vk.id.refresh.VKIDRefreshTokenParams;
import com.vk.id.refresh.VKIDTokenRefresher;
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
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.coroutines.BuildersKt;
import kotlinx.coroutines.CoroutineDispatcher;
import kotlinx.coroutines.CoroutineScope;

/* JADX INFO: compiled from: VKIDUserRefresher.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000D\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\b\u0001\u0018\u00002\u00020\u0001B7\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0007\u0012\u0006\u0010\b\u001a\u00020\t\u0012\u0006\u0010\n\u001a\u00020\u000b\u0012\u0006\u0010\f\u001a\u00020\r¢\u0006\u0004\b\u000e\u0010\u000fJ \u0010\u0010\u001a\u00020\u00112\u0006\u0010\u0012\u001a\u00020\u00132\b\b\u0002\u0010\u0014\u001a\u00020\u0015H\u0086@¢\u0006\u0002\u0010\u0016R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0007X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\b\u001a\u00020\tX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\n\u001a\u00020\u000bX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\f\u001a\u00020\rX\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u0017"}, d2 = {"Lcom/vk/id/refreshuser/VKIDUserRefresher;", "", "api", "Lcom/vk/id/internal/api/VKIDApiService;", "tokenStorage", "Lcom/vk/id/storage/InternalVKIDTokenStorage;", "deviceIdProvider", "Lcom/vk/id/internal/auth/device/InternalVKIDDeviceIdProvider;", "serviceCredentials", "Lcom/vk/id/internal/auth/ServiceCredentials;", "dispatchers", "Lcom/vk/id/internal/concurrent/VKIDCoroutinesDispatchers;", "refresher", "Lcom/vk/id/refresh/VKIDTokenRefresher;", "<init>", "(Lcom/vk/id/internal/api/VKIDApiService;Lcom/vk/id/storage/InternalVKIDTokenStorage;Lcom/vk/id/internal/auth/device/InternalVKIDDeviceIdProvider;Lcom/vk/id/internal/auth/ServiceCredentials;Lcom/vk/id/internal/concurrent/VKIDCoroutinesDispatchers;Lcom/vk/id/refresh/VKIDTokenRefresher;)V", "refresh", "", "callback", "Lcom/vk/id/refreshuser/VKIDGetUserCallback;", Message.JsonKeys.PARAMS, "Lcom/vk/id/refreshuser/VKIDGetUserParams;", "(Lcom/vk/id/refreshuser/VKIDGetUserCallback;Lcom/vk/id/refreshuser/VKIDGetUserParams;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final class VKIDUserRefresher {
    public static final int $stable = 8;
    private final VKIDApiService api;
    private final InternalVKIDDeviceIdProvider deviceIdProvider;
    private final VKIDCoroutinesDispatchers dispatchers;
    private final VKIDTokenRefresher refresher;
    private final ServiceCredentials serviceCredentials;
    private final InternalVKIDTokenStorage tokenStorage;

    /* JADX INFO: renamed from: com.vk.id.refreshuser.VKIDUserRefresher$refresh$1, reason: invalid class name */
    /* JADX INFO: compiled from: VKIDUserRefresher.kt */
    @Metadata(k = 3, mv = {2, 0, 0}, xi = 48)
    @DebugMetadata(c = "com.vk.id.refreshuser.VKIDUserRefresher", f = "VKIDUserRefresher.kt", i = {0, 0, 0, 0, 1, 1, 1, 2, 2}, l = {34, 41, 49}, m = "refresh", n = {"this", "callback", Message.JsonKeys.PARAMS, "clientId", "this", "callback", Message.JsonKeys.PARAMS, "this", "callback"}, s = {"L$0", "L$1", "L$2", "L$3", "L$0", "L$1", "L$2", "L$0", "L$1"})
    static final class AnonymousClass1 extends ContinuationImpl {
        Object L$0;
        Object L$1;
        Object L$2;
        Object L$3;
        int label;
        /* synthetic */ Object result;

        AnonymousClass1(Continuation<? super AnonymousClass1> continuation) {
            super(continuation);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            this.result = obj;
            this.label |= Integer.MIN_VALUE;
            return VKIDUserRefresher.this.refresh(null, null, this);
        }
    }

    public VKIDUserRefresher(VKIDApiService api, InternalVKIDTokenStorage tokenStorage, InternalVKIDDeviceIdProvider deviceIdProvider, ServiceCredentials serviceCredentials, VKIDCoroutinesDispatchers dispatchers, VKIDTokenRefresher refresher) {
        Intrinsics.checkNotNullParameter(api, "api");
        Intrinsics.checkNotNullParameter(tokenStorage, "tokenStorage");
        Intrinsics.checkNotNullParameter(deviceIdProvider, "deviceIdProvider");
        Intrinsics.checkNotNullParameter(serviceCredentials, "serviceCredentials");
        Intrinsics.checkNotNullParameter(dispatchers, "dispatchers");
        Intrinsics.checkNotNullParameter(refresher, "refresher");
        this.api = api;
        this.tokenStorage = tokenStorage;
        this.deviceIdProvider = deviceIdProvider;
        this.serviceCredentials = serviceCredentials;
        this.dispatchers = dispatchers;
        this.refresher = refresher;
    }

    /* JADX WARN: Code duplicated, block: B:32:0x00f8  */
    /* JADX WARN: Code duplicated, block: B:34:0x00fc  */
    /* JADX WARN: Code duplicated, block: B:37:0x0126  */
    /* JADX WARN: Code duplicated, block: B:39:0x012b  */
    /* JADX WARN: Code duplicated, block: B:42:0x014d  */
    /* JADX WARN: Code duplicated, block: B:44:0x0178  */
    /* JADX WARN: Code duplicated, block: B:7:0x0018  */
    /* JADX WARN: Instruction removed from duplicated block: B:39:0x012b, please report this as an issue */
    public final Object refresh(VKIDGetUserCallback vKIDGetUserCallback, VKIDGetUserParams vKIDGetUserParams, Continuation<? super Unit> continuation) {
        AnonymousClass1 anonymousClass1;
        String clientID;
        VKIDGetUserCallback vKIDGetUserCallback2;
        VKIDGetUserParams vKIDGetUserParams2;
        VKIDUserRefresher vKIDUserRefresher;
        VKIDGetUserParams vKIDGetUserParams3;
        final VKIDGetUserCallback vKIDGetUserCallback3;
        VKIDUserRefresher vKIDUserRefresher2;
        Object value;
        final Throwable thM9864exceptionOrNullimpl;
        VKIDTokenRefresher vKIDTokenRefresher;
        VKIDRefreshTokenCallback vKIDRefreshTokenCallback;
        VKIDRefreshTokenParams vKIDRefreshTokenParamsBuild;
        Object obj;
        VKIDUserRefresher vKIDUserRefresher3;
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
        Object objWithContext = anonymousClass1.result;
        Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
        int i = anonymousClass1.label;
        if (i == 0) {
            ResultKt.throwOnFailure(objWithContext);
            clientID = this.serviceCredentials.getClientID();
            CoroutineDispatcher io2 = this.dispatchers.getIo();
            AnonymousClass3 anonymousClass3 = new AnonymousClass3(null);
            anonymousClass1.L$0 = this;
            anonymousClass1.L$1 = vKIDGetUserCallback;
            anonymousClass1.L$2 = vKIDGetUserParams;
            anonymousClass1.L$3 = clientID;
            anonymousClass1.label = 1;
            objWithContext = BuildersKt.withContext(io2, anonymousClass3, anonymousClass1);
            if (objWithContext != coroutine_suspended) {
                vKIDGetUserCallback2 = vKIDGetUserCallback;
                vKIDGetUserParams2 = vKIDGetUserParams;
                vKIDUserRefresher = this;
            }
            return coroutine_suspended;
        }
        if (i == 1) {
            clientID = (String) anonymousClass1.L$3;
            vKIDGetUserParams2 = (VKIDGetUserParams) anonymousClass1.L$2;
            vKIDGetUserCallback2 = (VKIDGetUserCallback) anonymousClass1.L$1;
            VKIDUserRefresher vKIDUserRefresher4 = (VKIDUserRefresher) anonymousClass1.L$0;
            ResultKt.throwOnFailure(objWithContext);
            vKIDUserRefresher = vKIDUserRefresher4;
        } else {
            if (i == 2) {
                VKIDGetUserParams vKIDGetUserParams4 = (VKIDGetUserParams) anonymousClass1.L$2;
                VKIDGetUserCallback vKIDGetUserCallback4 = (VKIDGetUserCallback) anonymousClass1.L$1;
                vKIDUserRefresher2 = (VKIDUserRefresher) anonymousClass1.L$0;
                ResultKt.throwOnFailure(objWithContext);
                vKIDGetUserParams3 = vKIDGetUserParams4;
                vKIDGetUserCallback3 = vKIDGetUserCallback4;
                value = ((Result) objWithContext).getValue();
                thM9864exceptionOrNullimpl = Result.m9864exceptionOrNullimpl(value);
                if (thM9864exceptionOrNullimpl != null) {
                    if (thM9864exceptionOrNullimpl instanceof VKIDInvalidTokenException) {
                        vKIDTokenRefresher = vKIDUserRefresher2.refresher;
                        vKIDRefreshTokenCallback = new VKIDRefreshTokenCallback() { // from class: com.vk.id.refreshuser.VKIDUserRefresher$refresh$6$1
                            @Override // com.vk.id.refresh.VKIDRefreshTokenCallback
                            public void onSuccess(AccessToken token) {
                                Intrinsics.checkNotNullParameter(token, "token");
                                vKIDGetUserCallback3.onSuccess(token.getUserData());
                            }

                            @Override // com.vk.id.refresh.VKIDRefreshTokenCallback
                            public void onFail(VKIDRefreshTokenFail fail) {
                                Intrinsics.checkNotNullParameter(fail, "fail");
                                vKIDGetUserCallback3.onFail(new VKIDGetUserFail.FailedApiCall("Failed to fetch user data due to " + fail.getDescription(), thM9864exceptionOrNullimpl));
                            }
                        };
                        VKIDRefreshTokenParams.Builder builder = new VKIDRefreshTokenParams.Builder();
                        builder.setState(vKIDGetUserParams3.getRefreshTokenState());
                        Unit unit = Unit.INSTANCE;
                        vKIDRefreshTokenParamsBuild = builder.build();
                        anonymousClass1.L$0 = vKIDUserRefresher2;
                        anonymousClass1.L$1 = vKIDGetUserCallback3;
                        anonymousClass1.L$2 = value;
                        anonymousClass1.label = 3;
                        if (vKIDTokenRefresher.refresh(vKIDRefreshTokenCallback, vKIDRefreshTokenParamsBuild, anonymousClass1) != coroutine_suspended) {
                            obj = value;
                            vKIDUserRefresher3 = vKIDUserRefresher2;
                        }
                        return coroutine_suspended;
                    }
                    vKIDGetUserCallback3.onFail(new VKIDGetUserFail.FailedApiCall("Failed to fetch user data due to " + thM9864exceptionOrNullimpl.getMessage(), thM9864exceptionOrNullimpl));
                }
                if (Result.m9868isSuccessimpl(value)) {
                    VKIDUserInfoPayload vKIDUserInfoPayload = (VKIDUserInfoPayload) value;
                    VKIDUser vKIDUser = new VKIDUser(vKIDUserInfoPayload.getFirstName(), vKIDUserInfoPayload.getLastName(), vKIDUserInfoPayload.getPhone(), null, null, vKIDUserInfoPayload.getAvatar(), vKIDUserInfoPayload.getEmail(), 24, null);
                    InternalVKIDTokenStorage internalVKIDTokenStorage = vKIDUserRefresher2.tokenStorage;
                    AccessToken accessToken$vkid_release = internalVKIDTokenStorage.getAccessToken$vkid_release();
                    internalVKIDTokenStorage.setAccessToken$vkid_release(accessToken$vkid_release != null ? new AccessToken(accessToken$vkid_release.getToken(), accessToken$vkid_release.getIdToken(), accessToken$vkid_release.getUserID(), accessToken$vkid_release.getExpireTime(), vKIDUser, accessToken$vkid_release.getScopes()) : null);
                    vKIDGetUserCallback3.onSuccess(vKIDUser);
                }
                return Unit.INSTANCE;
            }
            if (i != 3) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            obj = anonymousClass1.L$2;
            vKIDGetUserCallback3 = (VKIDGetUserCallback) anonymousClass1.L$1;
            vKIDUserRefresher3 = (VKIDUserRefresher) anonymousClass1.L$0;
            ResultKt.throwOnFailure(objWithContext);
        }
        vKIDUserRefresher2 = vKIDUserRefresher3;
        value = obj;
        if (Result.m9868isSuccessimpl(value)) {
            VKIDUserInfoPayload vKIDUserInfoPayload2 = (VKIDUserInfoPayload) value;
            VKIDUser vKIDUser2 = new VKIDUser(vKIDUserInfoPayload2.getFirstName(), vKIDUserInfoPayload2.getLastName(), vKIDUserInfoPayload2.getPhone(), null, null, vKIDUserInfoPayload2.getAvatar(), vKIDUserInfoPayload2.getEmail(), 24, null);
            InternalVKIDTokenStorage internalVKIDTokenStorage2 = vKIDUserRefresher2.tokenStorage;
            AccessToken accessToken$vkid_release2 = internalVKIDTokenStorage2.getAccessToken$vkid_release();
            internalVKIDTokenStorage2.setAccessToken$vkid_release(accessToken$vkid_release2 != null ? new AccessToken(accessToken$vkid_release2.getToken(), accessToken$vkid_release2.getIdToken(), accessToken$vkid_release2.getUserID(), accessToken$vkid_release2.getExpireTime(), vKIDUser2, accessToken$vkid_release2.getScopes()) : null);
            vKIDGetUserCallback3.onSuccess(vKIDUser2);
        }
        return Unit.INSTANCE;
        String str = clientID;
        Pair pair = (Pair) objWithContext;
        String str2 = (String) pair.component1();
        String str3 = (String) pair.component2();
        if (str2 == null) {
            vKIDGetUserCallback2.onFail(new VKIDGetUserFail.NotAuthenticated("Not authorized"));
            return Unit.INSTANCE;
        }
        CoroutineDispatcher io3 = vKIDUserRefresher.dispatchers.getIo();
        AnonymousClass5 anonymousClass5 = vKIDUserRefresher.new AnonymousClass5(str2, str, str3, null);
        anonymousClass1.L$0 = vKIDUserRefresher;
        anonymousClass1.L$1 = vKIDGetUserCallback2;
        anonymousClass1.L$2 = vKIDGetUserParams2;
        anonymousClass1.L$3 = null;
        anonymousClass1.label = 2;
        objWithContext = BuildersKt.withContext(io3, anonymousClass5, anonymousClass1);
        if (objWithContext != coroutine_suspended) {
            vKIDGetUserParams3 = vKIDGetUserParams2;
            vKIDGetUserCallback3 = vKIDGetUserCallback2;
            vKIDUserRefresher2 = vKIDUserRefresher;
            value = ((Result) objWithContext).getValue();
            thM9864exceptionOrNullimpl = Result.m9864exceptionOrNullimpl(value);
            if (thM9864exceptionOrNullimpl != null) {
                if (thM9864exceptionOrNullimpl instanceof VKIDInvalidTokenException) {
                    vKIDTokenRefresher = vKIDUserRefresher2.refresher;
                    vKIDRefreshTokenCallback = new VKIDRefreshTokenCallback() { // from class: com.vk.id.refreshuser.VKIDUserRefresher$refresh$6$1
                        @Override // com.vk.id.refresh.VKIDRefreshTokenCallback
                        public void onSuccess(AccessToken token) {
                            Intrinsics.checkNotNullParameter(token, "token");
                            vKIDGetUserCallback3.onSuccess(token.getUserData());
                        }

                        @Override // com.vk.id.refresh.VKIDRefreshTokenCallback
                        public void onFail(VKIDRefreshTokenFail fail) {
                            Intrinsics.checkNotNullParameter(fail, "fail");
                            vKIDGetUserCallback3.onFail(new VKIDGetUserFail.FailedApiCall("Failed to fetch user data due to " + fail.getDescription(), thM9864exceptionOrNullimpl));
                        }
                    };
                    VKIDRefreshTokenParams.Builder builder2 = new VKIDRefreshTokenParams.Builder();
                    builder2.setState(vKIDGetUserParams3.getRefreshTokenState());
                    Unit unit2 = Unit.INSTANCE;
                    vKIDRefreshTokenParamsBuild = builder2.build();
                    anonymousClass1.L$0 = vKIDUserRefresher2;
                    anonymousClass1.L$1 = vKIDGetUserCallback3;
                    anonymousClass1.L$2 = value;
                    anonymousClass1.label = 3;
                    if (vKIDTokenRefresher.refresh(vKIDRefreshTokenCallback, vKIDRefreshTokenParamsBuild, anonymousClass1) != coroutine_suspended) {
                        obj = value;
                        vKIDUserRefresher3 = vKIDUserRefresher2;
                        vKIDUserRefresher2 = vKIDUserRefresher3;
                        value = obj;
                    }
                } else {
                    vKIDGetUserCallback3.onFail(new VKIDGetUserFail.FailedApiCall("Failed to fetch user data due to " + thM9864exceptionOrNullimpl.getMessage(), thM9864exceptionOrNullimpl));
                }
            }
            if (Result.m9868isSuccessimpl(value)) {
                VKIDUserInfoPayload vKIDUserInfoPayload3 = (VKIDUserInfoPayload) value;
                VKIDUser vKIDUser3 = new VKIDUser(vKIDUserInfoPayload3.getFirstName(), vKIDUserInfoPayload3.getLastName(), vKIDUserInfoPayload3.getPhone(), null, null, vKIDUserInfoPayload3.getAvatar(), vKIDUserInfoPayload3.getEmail(), 24, null);
                InternalVKIDTokenStorage internalVKIDTokenStorage3 = vKIDUserRefresher2.tokenStorage;
                AccessToken accessToken$vkid_release3 = internalVKIDTokenStorage3.getAccessToken$vkid_release();
                internalVKIDTokenStorage3.setAccessToken$vkid_release(accessToken$vkid_release3 != null ? new AccessToken(accessToken$vkid_release3.getToken(), accessToken$vkid_release3.getIdToken(), accessToken$vkid_release3.getUserID(), accessToken$vkid_release3.getExpireTime(), vKIDUser3, accessToken$vkid_release3.getScopes()) : null);
                vKIDGetUserCallback3.onSuccess(vKIDUser3);
            }
            return Unit.INSTANCE;
        }
        return coroutine_suspended;
    }

    /* JADX INFO: renamed from: com.vk.id.refreshuser.VKIDUserRefresher$refresh$3, reason: invalid class name */
    /* JADX INFO: compiled from: VKIDUserRefresher.kt */
    @Metadata(d1 = {"\u0000\u000e\n\u0000\n\u0002\u0018\u0002\n\u0002\u0010\u000e\n\u0002\u0018\u0002\u0010\u0000\u001a\u0010\u0012\u0006\u0012\u0004\u0018\u00010\u0002\u0012\u0004\u0012\u00020\u00020\u0001*\u00020\u0003H\n"}, d2 = {"<anonymous>", "Lkotlin/Pair;", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 0, 0}, xi = 48)
    @DebugMetadata(c = "com.vk.id.refreshuser.VKIDUserRefresher$refresh$3", f = "VKIDUserRefresher.kt", i = {}, l = {}, m = "invokeSuspend", n = {}, s = {})
    static final class AnonymousClass3 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Pair<? extends String, ? extends String>>, Object> {
        int label;

        AnonymousClass3(Continuation<? super AnonymousClass3> continuation) {
            super(2, continuation);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
            return VKIDUserRefresher.this.new AnonymousClass3(continuation);
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
            if (this.label == 0) {
                ResultKt.throwOnFailure(obj);
                AccessToken accessToken$vkid_release = VKIDUserRefresher.this.tokenStorage.getAccessToken$vkid_release();
                return TuplesKt.to(accessToken$vkid_release != null ? accessToken$vkid_release.getToken() : null, VKIDUserRefresher.this.deviceIdProvider.getDeviceId$vkid_release());
            }
            throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
        }
    }

    /* JADX INFO: renamed from: com.vk.id.refreshuser.VKIDUserRefresher$refresh$5, reason: invalid class name */
    /* JADX INFO: compiled from: VKIDUserRefresher.kt */
    @Metadata(d1 = {"\u0000\u000e\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\b\u0012\u0004\u0012\u00020\u00020\u0001*\u00020\u0003H\n"}, d2 = {"<anonymous>", "Lkotlin/Result;", "Lcom/vk/id/internal/api/dto/VKIDUserInfoPayload;", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 0, 0}, xi = 48)
    @DebugMetadata(c = "com.vk.id.refreshuser.VKIDUserRefresher$refresh$5", f = "VKIDUserRefresher.kt", i = {}, l = {46}, m = "invokeSuspend", n = {}, s = {})
    static final class AnonymousClass5 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Result<? extends VKIDUserInfoPayload>>, Object> {
        final /* synthetic */ String $accessToken;
        final /* synthetic */ String $clientId;
        final /* synthetic */ String $deviceId;
        int label;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        AnonymousClass5(String str, String str2, String str3, Continuation<? super AnonymousClass5> continuation) {
            super(2, continuation);
            this.$accessToken = str;
            this.$clientId = str2;
            this.$deviceId = str3;
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
            return VKIDUserRefresher.this.new AnonymousClass5(this.$accessToken, this.$clientId, this.$deviceId, continuation);
        }

        @Override // kotlin.jvm.functions.Function2
        public /* bridge */ /* synthetic */ Object invoke(CoroutineScope coroutineScope, Continuation<? super Result<? extends VKIDUserInfoPayload>> continuation) {
            return invoke2(coroutineScope, (Continuation<? super Result<VKIDUserInfoPayload>>) continuation);
        }

        /* JADX INFO: renamed from: invoke, reason: avoid collision after fix types in other method */
        public final Object invoke2(CoroutineScope coroutineScope, Continuation<? super Result<VKIDUserInfoPayload>> continuation) {
            return ((AnonymousClass5) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            Object objMo9311executeIoAF18A;
            Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
            int i = this.label;
            if (i == 0) {
                ResultKt.throwOnFailure(obj);
                this.label = 1;
                objMo9311executeIoAF18A = VKIDUserRefresher.this.api.getUserInfo(this.$accessToken, this.$clientId, this.$deviceId).mo9311executeIoAF18A(this);
                if (objMo9311executeIoAF18A == coroutine_suspended) {
                    return coroutine_suspended;
                }
            } else {
                if (i != 1) {
                    throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
                ResultKt.throwOnFailure(obj);
                objMo9311executeIoAF18A = ((Result) obj).getValue();
            }
            return Result.m9860boximpl(objMo9311executeIoAF18A);
        }
    }

    public static /* synthetic */ Object refresh$default(VKIDUserRefresher vKIDUserRefresher, VKIDGetUserCallback vKIDGetUserCallback, VKIDGetUserParams vKIDGetUserParams, Continuation continuation, int i, Object obj) {
        if ((i & 2) != 0) {
            vKIDGetUserParams = new VKIDGetUserParams.Builder().build();
        }
        return vKIDUserRefresher.refresh(vKIDGetUserCallback, vKIDGetUserParams, continuation);
    }
}
