package com.vk.id;

import com.vk.id.internal.auth.VKIDTokenPayload;
import java.util.Set;
import java.util.concurrent.TimeUnit;
import kotlin.Metadata;
import kotlin.ResultKt;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.intrinsics.IntrinsicsKt;
import kotlin.coroutines.jvm.internal.DebugMetadata;
import kotlin.coroutines.jvm.internal.SuspendLambda;
import kotlin.jvm.functions.Function2;
import kotlin.text.StringsKt;
import kotlinx.coroutines.CoroutineScope;

/* JADX INFO: compiled from: TokensHandler.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "Lcom/vk/id/AccessToken;", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 0, 0}, xi = 48)
@DebugMetadata(c = "com.vk.id.TokensHandler$handle$2$accessToken$1", f = "TokensHandler.kt", i = {}, l = {}, m = "invokeSuspend", n = {}, s = {})
final class TokensHandler$handle$2$accessToken$1 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super AccessToken>, Object> {
    final /* synthetic */ VKIDUser $it;
    final /* synthetic */ VKIDTokenPayload $payload;
    final /* synthetic */ Set<String> $scopes;
    int label;
    final /* synthetic */ TokensHandler this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    TokensHandler$handle$2$accessToken$1(VKIDTokenPayload vKIDTokenPayload, TokensHandler tokensHandler, VKIDUser vKIDUser, Set<String> set, Continuation<? super TokensHandler$handle$2$accessToken$1> continuation) {
        super(2, continuation);
        this.$payload = vKIDTokenPayload;
        this.this$0 = tokensHandler;
        this.$it = vKIDUser;
        this.$scopes = set;
    }

    @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
    public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
        return new TokensHandler$handle$2$accessToken$1(this.$payload, this.this$0, this.$it, this.$scopes, continuation);
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation<? super AccessToken> continuation) {
        return ((TokensHandler$handle$2$accessToken$1) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
    }

    @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
    public final Object invokeSuspend(Object obj) {
        IntrinsicsKt.getCOROUTINE_SUSPENDED();
        if (this.label != 0) {
            throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
        }
        ResultKt.throwOnFailure(obj);
        String accessToken = this.$payload.getAccessToken();
        String idToken = this.$payload.getIdToken();
        String idToken2 = null;
        if (StringsKt.isBlank(idToken)) {
            idToken = null;
        }
        if (idToken == null) {
            AccessToken accessToken$vkid_release = this.this$0.tokenStorage.getAccessToken$vkid_release();
            if (accessToken$vkid_release != null) {
                idToken2 = accessToken$vkid_release.getIdToken();
            }
        } else {
            idToken2 = idToken;
        }
        long userId = this.$payload.getUserId();
        long expiresIn = this.$payload.getExpiresIn();
        return new AccessToken(accessToken, idToken2, userId, expiresIn > 0 ? System.currentTimeMillis() + TimeUnit.SECONDS.toMillis(expiresIn) : -1L, this.$it, this.$scopes);
    }
}
