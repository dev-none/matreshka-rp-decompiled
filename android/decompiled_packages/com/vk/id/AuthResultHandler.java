package com.vk.id;

import com.vk.id.auth.VKIDAuthCallback;
import com.vk.id.internal.api.VKIDApiService;
import com.vk.id.internal.auth.AuthCallbacksHolder;
import com.vk.id.internal.auth.AuthResult;
import com.vk.id.internal.auth.ServiceCredentials;
import com.vk.id.internal.auth.device.InternalVKIDDeviceIdProvider;
import com.vk.id.internal.concurrent.VKIDCoroutinesDispatchers;
import com.vk.id.internal.store.InternalVKIDPrefsStore;
import com.vk.id.logger.InternalVKIDLog;
import com.vk.id.logger.InternalVKIDLogger;
import com.vk.id.logout.VKIDLoggerOut;
import com.vk.id.storage.InternalVKIDTokenStorage;
import io.flutter.plugins.firebase.auth.Constants;
import io.sentry.SentryEvent;
import java.util.Iterator;
import kotlin.Metadata;
import kotlin.NoWhenBranchMatchedException;
import kotlin.Pair;
import kotlin.ResultKt;
import kotlin.TuplesKt;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.intrinsics.IntrinsicsKt;
import kotlin.coroutines.jvm.internal.ContinuationImpl;
import kotlin.coroutines.jvm.internal.DebugMetadata;
import kotlin.coroutines.jvm.internal.SuspendLambda;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.coroutines.CoroutineScope;

/* JADX INFO: compiled from: AuthResultHandler.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000t\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\b\u0001\u0018\u00002\u00020\u0001BO\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0007\u0012\u0006\u0010\b\u001a\u00020\t\u0012\u0006\u0010\n\u001a\u00020\u000b\u0012\u0006\u0010\f\u001a\u00020\r\u0012\u0006\u0010\u000e\u001a\u00020\u000f\u0012\u0006\u0010\u0010\u001a\u00020\u0011\u0012\u0006\u0010\u0012\u001a\u00020\u0013¢\u0006\u0004\b\u0014\u0010\u0015J&\u0010\u0018\u001a\u00020\u00192\u0006\u0010\u001a\u001a\u00020\u001b2\f\u0010\u001c\u001a\b\u0012\u0004\u0012\u00020\u00190\u001dH\u0080@¢\u0006\u0004\b\u001e\u0010\u001fJ$\u0010 \u001a\u00020\u00192\u0006\u0010!\u001a\u00020\"2\f\u0010\u001c\u001a\b\u0012\u0004\u0012\u00020\u00190\u001dH\u0082@¢\u0006\u0002\u0010#J\f\u0010$\u001a\u00020%*\u00020\u001bH\u0002J\u0010\u0010&\u001a\u00020\u00192\u0006\u0010'\u001a\u00020(H\u0002J\u001e\u0010)\u001a\u00020\u00192\u0006\u0010*\u001a\u00020%2\f\u0010\u001c\u001a\b\u0012\u0004\u0012\u00020\u00190\u001dH\u0002R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0007X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\b\u001a\u00020\tX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\n\u001a\u00020\u000bX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\f\u001a\u00020\rX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u000e\u001a\u00020\u000fX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0010\u001a\u00020\u0011X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0012\u001a\u00020\u0013X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0016\u001a\u00020\u0017X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006+"}, d2 = {"Lcom/vk/id/AuthResultHandler;", "", "dispatchers", "Lcom/vk/id/internal/concurrent/VKIDCoroutinesDispatchers;", "callbacksHolder", "Lcom/vk/id/internal/auth/AuthCallbacksHolder;", "deviceIdProvider", "Lcom/vk/id/internal/auth/device/InternalVKIDDeviceIdProvider;", "prefsStore", "Lcom/vk/id/internal/store/InternalVKIDPrefsStore;", "serviceCredentials", "Lcom/vk/id/internal/auth/ServiceCredentials;", "api", "Lcom/vk/id/internal/api/VKIDApiService;", "tokensHandler", "Lcom/vk/id/TokensHandler;", "loggerOut", "Lcom/vk/id/logout/VKIDLoggerOut;", "tokenStorage", "Lcom/vk/id/storage/InternalVKIDTokenStorage;", "<init>", "(Lcom/vk/id/internal/concurrent/VKIDCoroutinesDispatchers;Lcom/vk/id/internal/auth/AuthCallbacksHolder;Lcom/vk/id/internal/auth/device/InternalVKIDDeviceIdProvider;Lcom/vk/id/internal/store/InternalVKIDPrefsStore;Lcom/vk/id/internal/auth/ServiceCredentials;Lcom/vk/id/internal/api/VKIDApiService;Lcom/vk/id/TokensHandler;Lcom/vk/id/logout/VKIDLoggerOut;Lcom/vk/id/storage/InternalVKIDTokenStorage;)V", SentryEvent.JsonKeys.LOGGER, "Lcom/vk/id/logger/InternalVKIDLogger;", "handle", "", "authResult", "Lcom/vk/id/internal/auth/AuthResult;", "onFail", "Lkotlin/Function0;", "handle$vkid_release", "(Lcom/vk/id/internal/auth/AuthResult;Lkotlin/jvm/functions/Function0;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "handleOauth", Constants.SIGN_IN_METHOD_OAUTH, "Lcom/vk/id/internal/auth/AuthResult$Success;", "(Lcom/vk/id/internal/auth/AuthResult$Success;Lkotlin/jvm/functions/Function0;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "toVKIDAuthFail", "Lcom/vk/id/VKIDAuthFail;", "emitAuthSuccess", "token", "Lcom/vk/id/AccessToken;", "emitAuthFail", "fail", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final class AuthResultHandler {
    public static final int $stable = 8;
    private final VKIDApiService api;
    private final AuthCallbacksHolder callbacksHolder;
    private final InternalVKIDDeviceIdProvider deviceIdProvider;
    private final VKIDCoroutinesDispatchers dispatchers;
    private final InternalVKIDLogger logger;
    private final VKIDLoggerOut loggerOut;
    private final InternalVKIDPrefsStore prefsStore;
    private final ServiceCredentials serviceCredentials;
    private final InternalVKIDTokenStorage tokenStorage;
    private final TokensHandler tokensHandler;

    /* JADX INFO: renamed from: com.vk.id.AuthResultHandler$handleOauth$1, reason: invalid class name */
    /* JADX INFO: compiled from: AuthResultHandler.kt */
    @Metadata(k = 3, mv = {2, 0, 0}, xi = 48)
    @DebugMetadata(c = "com.vk.id.AuthResultHandler", f = "AuthResultHandler.kt", i = {0, 0, 0, 1, 1, 2, 2, 2}, l = {57, 84, 97, 99}, m = "handleOauth", n = {"this", Constants.SIGN_IN_METHOD_OAUTH, "onFail", "this", "onFail", "this", "onFail", "callResult"}, s = {"L$0", "L$1", "L$2", "L$0", "L$1", "L$0", "L$1", "L$2"})
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
            return AuthResultHandler.this.handleOauth(null, null, this);
        }
    }

    public AuthResultHandler(VKIDCoroutinesDispatchers dispatchers, AuthCallbacksHolder callbacksHolder, InternalVKIDDeviceIdProvider deviceIdProvider, InternalVKIDPrefsStore prefsStore, ServiceCredentials serviceCredentials, VKIDApiService api, TokensHandler tokensHandler, VKIDLoggerOut loggerOut, InternalVKIDTokenStorage tokenStorage) {
        Intrinsics.checkNotNullParameter(dispatchers, "dispatchers");
        Intrinsics.checkNotNullParameter(callbacksHolder, "callbacksHolder");
        Intrinsics.checkNotNullParameter(deviceIdProvider, "deviceIdProvider");
        Intrinsics.checkNotNullParameter(prefsStore, "prefsStore");
        Intrinsics.checkNotNullParameter(serviceCredentials, "serviceCredentials");
        Intrinsics.checkNotNullParameter(api, "api");
        Intrinsics.checkNotNullParameter(tokensHandler, "tokensHandler");
        Intrinsics.checkNotNullParameter(loggerOut, "loggerOut");
        Intrinsics.checkNotNullParameter(tokenStorage, "tokenStorage");
        this.dispatchers = dispatchers;
        this.callbacksHolder = callbacksHolder;
        this.deviceIdProvider = deviceIdProvider;
        this.prefsStore = prefsStore;
        this.serviceCredentials = serviceCredentials;
        this.api = api;
        this.tokensHandler = tokensHandler;
        this.loggerOut = loggerOut;
        this.tokenStorage = tokenStorage;
        InternalVKIDLog internalVKIDLog = InternalVKIDLog.INSTANCE;
        Intrinsics.checkNotNullExpressionValue("AuthResultHandler", "getSimpleName(...)");
        this.logger = internalVKIDLog.createLoggerForTag("AuthResultHandler");
    }

    public final Object handle$vkid_release(AuthResult authResult, Function0<Unit> function0, Continuation<? super Unit> continuation) {
        if (this.callbacksHolder.isEmpty()) {
            return Unit.INSTANCE;
        }
        if (!(authResult instanceof AuthResult.Success)) {
            emitAuthFail(toVKIDAuthFail(authResult), function0);
            this.prefsStore.clear();
            return Unit.INSTANCE;
        }
        AuthResult.Success success = (AuthResult.Success) authResult;
        if (success.getOauth() != null) {
            Object objHandleOauth = handleOauth(success, function0, continuation);
            return objHandleOauth == IntrinsicsKt.getCOROUTINE_SUSPENDED() ? objHandleOauth : Unit.INSTANCE;
        }
        emitAuthFail(new VKIDAuthFail.FailedOAuth("OAuth provider response does not have necessary OAuth data."), function0);
        return Unit.INSTANCE;
    }

    /* JADX INFO: renamed from: com.vk.id.AuthResultHandler$handleOauth$2, reason: invalid class name */
    /* JADX INFO: compiled from: AuthResultHandler.kt */
    @Metadata(d1 = {"\u0000\u000e\n\u0000\n\u0002\u0018\u0002\n\u0002\u0010\u000e\n\u0002\u0018\u0002\u0010\u0000\u001a\u000e\u0012\u0004\u0012\u00020\u0002\u0012\u0004\u0012\u00020\u00020\u0001*\u00020\u0003H\n"}, d2 = {"<anonymous>", "Lkotlin/Pair;", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 0, 0}, xi = 48)
    @DebugMetadata(c = "com.vk.id.AuthResultHandler$handleOauth$2", f = "AuthResultHandler.kt", i = {}, l = {}, m = "invokeSuspend", n = {}, s = {})
    static final class AnonymousClass2 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Pair<? extends String, ? extends String>>, Object> {
        final /* synthetic */ AuthResult.Success $oauth;
        int label;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        AnonymousClass2(AuthResult.Success success, Continuation<? super AnonymousClass2> continuation) {
            super(2, continuation);
            this.$oauth = success;
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
            return AuthResultHandler.this.new AnonymousClass2(this.$oauth, continuation);
        }

        @Override // kotlin.jvm.functions.Function2
        public /* bridge */ /* synthetic */ Object invoke(CoroutineScope coroutineScope, Continuation<? super Pair<? extends String, ? extends String>> continuation) {
            return invoke2(coroutineScope, (Continuation<? super Pair<String, String>>) continuation);
        }

        /* JADX INFO: renamed from: invoke, reason: avoid collision after fix types in other method */
        public final Object invoke2(CoroutineScope coroutineScope, Continuation<? super Pair<String, String>> continuation) {
            return ((AnonymousClass2) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            IntrinsicsKt.getCOROUTINE_SUSPENDED();
            if (this.label == 0) {
                ResultKt.throwOnFailure(obj);
                AuthResultHandler.this.deviceIdProvider.setDeviceId$vkid_release(this.$oauth.getDeviceId());
                Pair pair = TuplesKt.to(AuthResultHandler.this.prefsStore.getState(), AuthResultHandler.this.prefsStore.getCodeVerifier$vkid_release());
                AuthResultHandler.this.prefsStore.clear();
                return pair;
            }
            throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX WARN: Code duplicated, block: B:50:0x0168  */
    /* JADX WARN: Code duplicated, block: B:54:0x01a2  */
    /* JADX WARN: Code duplicated, block: B:57:0x01ab  */
    /* JADX WARN: Code duplicated, block: B:7:0x001a  */
    /* JADX WARN: Code restructure failed: missing block: B:58:0x01d0, code lost:
    
        if (com.vk.id.TokensHandler.handle$default(r7, (com.vk.id.internal.auth.VKIDTokenPayload) r1, r8, r7, false, r9, 8, null) == r3) goto L59;
     */
    /* JADX WARN: Instruction removed from duplicated block: B:50:0x0168, please report this as an issue */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public final java.lang.Object handleOauth(com.vk.id.internal.auth.AuthResult.Success r18, kotlin.jvm.functions.Function0<kotlin.Unit> r19, kotlin.coroutines.Continuation<? super kotlin.Unit> r20) {
        /*
            Method dump skipped, instruction units count: 470
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.vk.id.AuthResultHandler.handleOauth(com.vk.id.internal.auth.AuthResult$Success, kotlin.jvm.functions.Function0, kotlin.coroutines.Continuation):java.lang.Object");
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit handleOauth$lambda$3$lambda$2(AuthResultHandler authResultHandler, Function0 function0, Throwable it) {
        Intrinsics.checkNotNullParameter(it, "it");
        authResultHandler.emitAuthFail(new VKIDAuthFail.FailedApiCall("Failed to fetch user data", it), function0);
        return Unit.INSTANCE;
    }

    private final VKIDAuthFail toVKIDAuthFail(AuthResult authResult) {
        if (authResult instanceof AuthResult.Canceled) {
            return new VKIDAuthFail.Canceled(((AuthResult.Canceled) authResult).getMessage());
        }
        if (authResult instanceof AuthResult.NoBrowserAvailable) {
            AuthResult.NoBrowserAvailable noBrowserAvailable = (AuthResult.NoBrowserAvailable) authResult;
            return new VKIDAuthFail.NoBrowserAvailable(noBrowserAvailable.getMessage(), noBrowserAvailable.getError());
        }
        if (authResult instanceof AuthResult.AuthActiviyResultFailed) {
            AuthResult.AuthActiviyResultFailed authActiviyResultFailed = (AuthResult.AuthActiviyResultFailed) authResult;
            return new VKIDAuthFail.FailedRedirectActivity(authActiviyResultFailed.getMessage(), authActiviyResultFailed.getError());
        }
        if (authResult instanceof AuthResult.Success) {
            throw new IllegalStateException("AuthResult is Success and cannot be converted to fail!".toString());
        }
        throw new NoWhenBranchMatchedException();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void emitAuthSuccess(AccessToken token) {
        Iterator<T> it = this.callbacksHolder.getAll().iterator();
        while (it.hasNext()) {
            ((VKIDAuthCallback) it.next()).onAuth(token);
        }
        this.callbacksHolder.clear();
    }

    private final void emitAuthFail(VKIDAuthFail fail, Function0<Unit> onFail) {
        Iterator<T> it = this.callbacksHolder.getAll().iterator();
        while (it.hasNext()) {
            ((VKIDAuthCallback) it.next()).onFail(fail);
        }
        onFail.invoke();
        this.callbacksHolder.clear();
    }
}
