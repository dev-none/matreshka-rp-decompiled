package com.vk.id;

import com.vk.id.fetchuser.VKIDUserInfoFetcher;
import com.vk.id.internal.auth.VKIDTokenPayload;
import com.vk.id.internal.concurrent.VKIDCoroutinesDispatchers;
import com.vk.id.storage.InternalVKIDTokenStorage;
import io.flutter.plugins.firebase.auth.Constants;
import kotlin.Metadata;
import kotlin.ResultKt;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.intrinsics.IntrinsicsKt;
import kotlin.coroutines.jvm.internal.DebugMetadata;
import kotlin.coroutines.jvm.internal.SuspendLambda;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.coroutines.CoroutineScope;

/* JADX INFO: compiled from: TokensHandler.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000J\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0010\u0003\n\u0000\n\u0002\u0010\u000b\n\u0002\b\u0002\b\u0001\u0018\u00002\u00020\u0001B\u001f\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0007¢\u0006\u0004\b\b\u0010\tJX\u0010\n\u001a\u00020\u000b2\u0006\u0010\f\u001a\u00020\r2\"\u0010\u000e\u001a\u001e\b\u0001\u0012\u0004\u0012\u00020\u0010\u0012\n\u0012\b\u0012\u0004\u0012\u00020\u000b0\u0011\u0012\u0006\u0012\u0004\u0018\u00010\u00010\u000f2\u0012\u0010\u0012\u001a\u000e\u0012\u0004\u0012\u00020\u0014\u0012\u0004\u0012\u00020\u000b0\u00132\b\b\u0002\u0010\u0015\u001a\u00020\u0016H\u0086@¢\u0006\u0002\u0010\u0017R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0007X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u0018"}, d2 = {"Lcom/vk/id/TokensHandler;", "", "userInfoFetcher", "Lcom/vk/id/fetchuser/VKIDUserInfoFetcher;", "tokenStorage", "Lcom/vk/id/storage/InternalVKIDTokenStorage;", "dispatchers", "Lcom/vk/id/internal/concurrent/VKIDCoroutinesDispatchers;", "<init>", "(Lcom/vk/id/fetchuser/VKIDUserInfoFetcher;Lcom/vk/id/storage/InternalVKIDTokenStorage;Lcom/vk/id/internal/concurrent/VKIDCoroutinesDispatchers;)V", "handle", "", "payload", "Lcom/vk/id/internal/auth/VKIDTokenPayload;", "onSuccess", "Lkotlin/Function2;", "Lcom/vk/id/AccessToken;", "Lkotlin/coroutines/Continuation;", "onFailedApiCall", "Lkotlin/Function1;", "", "refreshAccessToken", "", "(Lcom/vk/id/internal/auth/VKIDTokenPayload;Lkotlin/jvm/functions/Function2;Lkotlin/jvm/functions/Function1;ZLkotlin/coroutines/Continuation;)Ljava/lang/Object;", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final class TokensHandler {
    public static final int $stable = 8;
    private final VKIDCoroutinesDispatchers dispatchers;
    private final InternalVKIDTokenStorage tokenStorage;
    private final VKIDUserInfoFetcher userInfoFetcher;

    public TokensHandler(VKIDUserInfoFetcher userInfoFetcher, InternalVKIDTokenStorage tokenStorage, VKIDCoroutinesDispatchers dispatchers) {
        Intrinsics.checkNotNullParameter(userInfoFetcher, "userInfoFetcher");
        Intrinsics.checkNotNullParameter(tokenStorage, "tokenStorage");
        Intrinsics.checkNotNullParameter(dispatchers, "dispatchers");
        this.userInfoFetcher = userInfoFetcher;
        this.tokenStorage = tokenStorage;
        this.dispatchers = dispatchers;
    }

    public static /* synthetic */ Object handle$default(TokensHandler tokensHandler, VKIDTokenPayload vKIDTokenPayload, Function2 function2, Function1 function1, boolean z, Continuation continuation, int i, Object obj) {
        if ((i & 8) != 0) {
            z = true;
        }
        return tokensHandler.handle(vKIDTokenPayload, function2, function1, z, continuation);
    }

    public final Object handle(VKIDTokenPayload vKIDTokenPayload, Function2<? super AccessToken, ? super Continuation<? super Unit>, ? extends Object> function2, Function1<? super Throwable, Unit> function1, boolean z, Continuation<? super Unit> continuation) {
        Object objFetch = this.userInfoFetcher.fetch(vKIDTokenPayload.getAccessToken(), new AnonymousClass2(vKIDTokenPayload, this, function2, z, null), function1, continuation);
        return objFetch == IntrinsicsKt.getCOROUTINE_SUSPENDED() ? objFetch : Unit.INSTANCE;
    }

    /* JADX INFO: renamed from: com.vk.id.TokensHandler$handle$2, reason: invalid class name */
    /* JADX INFO: compiled from: TokensHandler.kt */
    @Metadata(d1 = {"\u0000\f\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u00012\u0006\u0010\u0002\u001a\u00020\u0003H\n"}, d2 = {"<anonymous>", "", "it", "Lcom/vk/id/VKIDUser;"}, k = 3, mv = {2, 0, 0}, xi = 48)
    @DebugMetadata(c = "com.vk.id.TokensHandler$handle$2", f = "TokensHandler.kt", i = {0, 1}, l = {28, 42, 46}, m = "invokeSuspend", n = {"scopes", Constants.ACCESS_TOKEN}, s = {"L$0", "L$0"})
    static final class AnonymousClass2 extends SuspendLambda implements Function2<VKIDUser, Continuation<? super Unit>, Object> {
        final /* synthetic */ Function2<AccessToken, Continuation<? super Unit>, Object> $onSuccess;
        final /* synthetic */ VKIDTokenPayload $payload;
        final /* synthetic */ boolean $refreshAccessToken;
        /* synthetic */ Object L$0;
        int label;
        final /* synthetic */ TokensHandler this$0;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        /* JADX WARN: Multi-variable type inference failed */
        AnonymousClass2(VKIDTokenPayload vKIDTokenPayload, TokensHandler tokensHandler, Function2<? super AccessToken, ? super Continuation<? super Unit>, ? extends Object> function2, boolean z, Continuation<? super AnonymousClass2> continuation) {
            super(2, continuation);
            this.$payload = vKIDTokenPayload;
            this.this$0 = tokensHandler;
            this.$onSuccess = function2;
            this.$refreshAccessToken = z;
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
            AnonymousClass2 anonymousClass2 = new AnonymousClass2(this.$payload, this.this$0, this.$onSuccess, this.$refreshAccessToken, continuation);
            anonymousClass2.L$0 = obj;
            return anonymousClass2;
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(VKIDUser vKIDUser, Continuation<? super Unit> continuation) {
            return ((AnonymousClass2) create(vKIDUser, continuation)).invokeSuspend(Unit.INSTANCE);
        }

        /* JADX WARN: Code restructure failed: missing block: B:20:0x00c1, code lost:
        
            if (r4.invoke(r2, r17) == r1) goto L21;
         */
        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        /*
            Code decompiled incorrectly, please refer to instructions dump.
            To view partially-correct add '--show-bad-code' argument
        */
        public final java.lang.Object invokeSuspend(java.lang.Object r18) {
            /*
                r17 = this;
                r0 = r17
                java.lang.Object r1 = kotlin.coroutines.intrinsics.IntrinsicsKt.getCOROUTINE_SUSPENDED()
                int r2 = r0.label
                r3 = 3
                r4 = 2
                r5 = 1
                if (r2 == 0) goto L34
                if (r2 == r5) goto L29
                if (r2 == r4) goto L20
                if (r2 != r3) goto L18
                kotlin.ResultKt.throwOnFailure(r18)
                goto Lc4
            L18:
                java.lang.IllegalStateException r1 = new java.lang.IllegalStateException
                java.lang.String r2 = "call to 'resume' before 'invoke' with coroutine"
                r1.<init>(r2)
                throw r1
            L20:
                java.lang.Object r2 = r0.L$0
                com.vk.id.AccessToken r2 = (com.vk.id.AccessToken) r2
                kotlin.ResultKt.throwOnFailure(r18)
                goto Lb6
            L29:
                java.lang.Object r2 = r0.L$0
                java.util.Set r2 = (java.util.Set) r2
                kotlin.ResultKt.throwOnFailure(r18)
                r10 = r2
                r2 = r18
                goto L80
            L34:
                kotlin.ResultKt.throwOnFailure(r18)
                java.lang.Object r2 = r0.L$0
                r9 = r2
                com.vk.id.VKIDUser r9 = (com.vk.id.VKIDUser) r9
                com.vk.id.internal.auth.VKIDTokenPayload r2 = r0.$payload
                java.lang.String r2 = r2.getScope()
                r10 = r2
                java.lang.CharSequence r10 = (java.lang.CharSequence) r10
                char[] r11 = new char[r5]
                r2 = 32
                r6 = 0
                r11[r6] = r2
                r14 = 6
                r15 = 0
                r12 = 0
                r13 = 0
                java.util.List r2 = kotlin.text.StringsKt.split$default(r10, r11, r12, r13, r14, r15)
                java.lang.Iterable r2 = (java.lang.Iterable) r2
                java.util.Set r10 = kotlin.collections.CollectionsKt.toSet(r2)
                com.vk.id.TokensHandler r2 = r0.this$0
                com.vk.id.internal.concurrent.VKIDCoroutinesDispatchers r2 = com.vk.id.TokensHandler.access$getDispatchers$p(r2)
                kotlinx.coroutines.CoroutineDispatcher r2 = r2.getIo()
                kotlin.coroutines.CoroutineContext r2 = (kotlin.coroutines.CoroutineContext) r2
                com.vk.id.TokensHandler$handle$2$accessToken$1 r6 = new com.vk.id.TokensHandler$handle$2$accessToken$1
                com.vk.id.internal.auth.VKIDTokenPayload r7 = r0.$payload
                com.vk.id.TokensHandler r8 = r0.this$0
                r11 = 0
                r6.<init>(r7, r8, r9, r10, r11)
                kotlin.jvm.functions.Function2 r6 = (kotlin.jvm.functions.Function2) r6
                r7 = r0
                kotlin.coroutines.Continuation r7 = (kotlin.coroutines.Continuation) r7
                r0.L$0 = r10
                r0.label = r5
                java.lang.Object r2 = kotlinx.coroutines.BuildersKt.withContext(r2, r6, r7)
                if (r2 != r1) goto L80
                goto Lc3
            L80:
                r14 = r2
                com.vk.id.AccessToken r14 = (com.vk.id.AccessToken) r14
                com.vk.id.RefreshToken r15 = new com.vk.id.RefreshToken
                com.vk.id.internal.auth.VKIDTokenPayload r2 = r0.$payload
                java.lang.String r2 = r2.getRefreshToken()
                r15.<init>(r2, r10)
                com.vk.id.TokensHandler r2 = r0.this$0
                com.vk.id.internal.concurrent.VKIDCoroutinesDispatchers r2 = com.vk.id.TokensHandler.access$getDispatchers$p(r2)
                kotlinx.coroutines.CoroutineDispatcher r2 = r2.getIo()
                kotlin.coroutines.CoroutineContext r2 = (kotlin.coroutines.CoroutineContext) r2
                com.vk.id.TokensHandler$handle$2$1 r11 = new com.vk.id.TokensHandler$handle$2$1
                boolean r12 = r0.$refreshAccessToken
                com.vk.id.TokensHandler r13 = r0.this$0
                r16 = 0
                r11.<init>(r12, r13, r14, r15, r16)
                kotlin.jvm.functions.Function2 r11 = (kotlin.jvm.functions.Function2) r11
                r5 = r0
                kotlin.coroutines.Continuation r5 = (kotlin.coroutines.Continuation) r5
                r0.L$0 = r14
                r0.label = r4
                java.lang.Object r2 = kotlinx.coroutines.BuildersKt.withContext(r2, r11, r5)
                if (r2 != r1) goto Lb5
                goto Lc3
            Lb5:
                r2 = r14
            Lb6:
                kotlin.jvm.functions.Function2<com.vk.id.AccessToken, kotlin.coroutines.Continuation<? super kotlin.Unit>, java.lang.Object> r4 = r0.$onSuccess
                r5 = 0
                r0.L$0 = r5
                r0.label = r3
                java.lang.Object r2 = r4.invoke(r2, r0)
                if (r2 != r1) goto Lc4
            Lc3:
                return r1
            Lc4:
                kotlin.Unit r1 = kotlin.Unit.INSTANCE
                return r1
            */
            throw new UnsupportedOperationException("Method not decompiled: com.vk.id.TokensHandler.AnonymousClass2.invokeSuspend(java.lang.Object):java.lang.Object");
        }

        /* JADX INFO: renamed from: com.vk.id.TokensHandler$handle$2$1, reason: invalid class name */
        /* JADX INFO: compiled from: TokensHandler.kt */
        @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 0, 0}, xi = 48)
        @DebugMetadata(c = "com.vk.id.TokensHandler$handle$2$1", f = "TokensHandler.kt", i = {}, l = {}, m = "invokeSuspend", n = {}, s = {})
        static final class AnonymousClass1 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Unit>, Object> {
            final /* synthetic */ AccessToken $accessToken;
            final /* synthetic */ boolean $refreshAccessToken;
            final /* synthetic */ RefreshToken $refreshToken;
            int label;
            final /* synthetic */ TokensHandler this$0;

            /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
            AnonymousClass1(boolean z, TokensHandler tokensHandler, AccessToken accessToken, RefreshToken refreshToken, Continuation<? super AnonymousClass1> continuation) {
                super(2, continuation);
                this.$refreshAccessToken = z;
                this.this$0 = tokensHandler;
                this.$accessToken = accessToken;
                this.$refreshToken = refreshToken;
            }

            @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
            public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
                return new AnonymousClass1(this.$refreshAccessToken, this.this$0, this.$accessToken, this.$refreshToken, continuation);
            }

            @Override // kotlin.jvm.functions.Function2
            public final Object invoke(CoroutineScope coroutineScope, Continuation<? super Unit> continuation) {
                return ((AnonymousClass1) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
            }

            @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
            public final Object invokeSuspend(Object obj) {
                IntrinsicsKt.getCOROUTINE_SUSPENDED();
                if (this.label != 0) {
                    throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
                ResultKt.throwOnFailure(obj);
                if (this.$refreshAccessToken) {
                    this.this$0.tokenStorage.setAccessToken$vkid_release(this.$accessToken);
                }
                this.this$0.tokenStorage.setRefreshToken$vkid_release(this.$refreshToken);
                return Unit.INSTANCE;
            }
        }
    }
}
