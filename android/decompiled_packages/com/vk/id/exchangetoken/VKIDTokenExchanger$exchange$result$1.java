package com.vk.id.exchangetoken;

import com.vk.id.internal.auth.VKIDCodePayload;
import kotlin.Metadata;
import kotlin.Result;
import kotlin.ResultKt;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.intrinsics.IntrinsicsKt;
import kotlin.coroutines.jvm.internal.DebugMetadata;
import kotlin.coroutines.jvm.internal.SuspendLambda;
import kotlin.jvm.functions.Function2;
import kotlinx.coroutines.CoroutineScope;

/* JADX INFO: compiled from: VKIDTokenExchanger.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\u000e\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\b\u0012\u0004\u0012\u00020\u00020\u0001*\u00020\u0003H\n"}, d2 = {"<anonymous>", "Lkotlin/Result;", "Lcom/vk/id/internal/auth/VKIDCodePayload;", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 0, 0}, xi = 48)
@DebugMetadata(c = "com.vk.id.exchangetoken.VKIDTokenExchanger$exchange$result$1", f = "VKIDTokenExchanger.kt", i = {}, l = {50}, m = "invokeSuspend", n = {}, s = {})
final class VKIDTokenExchanger$exchange$result$1 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Result<? extends VKIDCodePayload>>, Object> {
    final /* synthetic */ String $clientId;
    final /* synthetic */ String $codeChallenge;
    final /* synthetic */ String $deviceId;
    final /* synthetic */ String $state;
    final /* synthetic */ String $v1Token;
    int label;
    final /* synthetic */ VKIDTokenExchanger this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    VKIDTokenExchanger$exchange$result$1(VKIDTokenExchanger vKIDTokenExchanger, String str, String str2, String str3, String str4, String str5, Continuation<? super VKIDTokenExchanger$exchange$result$1> continuation) {
        super(2, continuation);
        this.this$0 = vKIDTokenExchanger;
        this.$v1Token = str;
        this.$clientId = str2;
        this.$deviceId = str3;
        this.$state = str4;
        this.$codeChallenge = str5;
    }

    @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
    public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
        return new VKIDTokenExchanger$exchange$result$1(this.this$0, this.$v1Token, this.$clientId, this.$deviceId, this.$state, this.$codeChallenge, continuation);
    }

    @Override // kotlin.jvm.functions.Function2
    public /* bridge */ /* synthetic */ Object invoke(CoroutineScope coroutineScope, Continuation<? super Result<? extends VKIDCodePayload>> continuation) {
        return invoke2(coroutineScope, (Continuation<? super Result<VKIDCodePayload>>) continuation);
    }

    /* JADX INFO: renamed from: invoke, reason: avoid collision after fix types in other method */
    public final Object invoke2(CoroutineScope coroutineScope, Continuation<? super Result<VKIDCodePayload>> continuation) {
        return ((VKIDTokenExchanger$exchange$result$1) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
    }

    @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
    public final Object invokeSuspend(Object obj) {
        Object objMo9311executeIoAF18A;
        Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
        int i = this.label;
        if (i == 0) {
            ResultKt.throwOnFailure(obj);
            this.label = 1;
            objMo9311executeIoAF18A = this.this$0.api.exchangeToken(this.$v1Token, this.$clientId, this.$deviceId, this.$state, this.$codeChallenge).mo9311executeIoAF18A(this);
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
