package com.vk.id;

import com.vk.id.exchangetoken.VKIDExchangeTokenCallback;
import com.vk.id.exchangetoken.VKIDExchangeTokenParams;
import com.vk.id.exchangetoken.VKIDTokenExchanger;
import kotlin.Metadata;
import kotlin.ResultKt;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.intrinsics.IntrinsicsKt;
import kotlin.coroutines.jvm.internal.DebugMetadata;
import kotlin.coroutines.jvm.internal.SuspendLambda;
import kotlin.jvm.functions.Function1;

/* JADX INFO: compiled from: VKID.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\u0006\n\u0000\n\u0002\u0010\u0002\u0010\u0000\u001a\u00020\u0001H\n"}, d2 = {"<anonymous>", ""}, k = 3, mv = {2, 0, 0}, xi = 48)
@DebugMetadata(c = "com.vk.id.VKID$exchangeTokenToV2$6$1$1", f = "VKID.kt", i = {}, l = {568}, m = "invokeSuspend", n = {}, s = {})
final class VKID$exchangeTokenToV2$6$1$1 extends SuspendLambda implements Function1<Continuation<? super Unit>, Object> {
    final /* synthetic */ VKIDExchangeTokenCallback $callback;
    final /* synthetic */ VKIDExchangeTokenParams $params;
    final /* synthetic */ String $v1Token;
    int label;
    final /* synthetic */ VKID this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    VKID$exchangeTokenToV2$6$1$1(VKID vkid, String str, VKIDExchangeTokenParams vKIDExchangeTokenParams, VKIDExchangeTokenCallback vKIDExchangeTokenCallback, Continuation<? super VKID$exchangeTokenToV2$6$1$1> continuation) {
        super(1, continuation);
        this.this$0 = vkid;
        this.$v1Token = str;
        this.$params = vKIDExchangeTokenParams;
        this.$callback = vKIDExchangeTokenCallback;
    }

    @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
    public final Continuation<Unit> create(Continuation<?> continuation) {
        return new VKID$exchangeTokenToV2$6$1$1(this.this$0, this.$v1Token, this.$params, this.$callback, continuation);
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Continuation<? super Unit> continuation) {
        return ((VKID$exchangeTokenToV2$6$1$1) create(continuation)).invokeSuspend(Unit.INSTANCE);
    }

    @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
    public final Object invokeSuspend(Object obj) {
        Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
        int i = this.label;
        if (i == 0) {
            ResultKt.throwOnFailure(obj);
            this.label = 1;
            if (((VKIDTokenExchanger) this.this$0.tokenExchanger.getValue()).exchange(this.$v1Token, this.$params, this.$callback, this) == coroutine_suspended) {
                return coroutine_suspended;
            }
        } else {
            if (i != 1) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            ResultKt.throwOnFailure(obj);
        }
        return Unit.INSTANCE;
    }
}
