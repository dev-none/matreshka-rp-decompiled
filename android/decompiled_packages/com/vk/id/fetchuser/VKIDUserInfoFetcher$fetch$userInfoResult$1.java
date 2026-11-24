package com.vk.id.fetchuser;

import com.vk.id.internal.api.dto.VKIDUserInfoPayload;
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

/* JADX INFO: compiled from: VKIDUserInfoFetcher.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\u000e\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\b\u0012\u0004\u0012\u00020\u00020\u0001*\u00020\u0003H\n"}, d2 = {"<anonymous>", "Lkotlin/Result;", "Lcom/vk/id/internal/api/dto/VKIDUserInfoPayload;", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 0, 0}, xi = 48)
@DebugMetadata(c = "com.vk.id.fetchuser.VKIDUserInfoFetcher$fetch$userInfoResult$1", f = "VKIDUserInfoFetcher.kt", i = {}, l = {31}, m = "invokeSuspend", n = {}, s = {})
final class VKIDUserInfoFetcher$fetch$userInfoResult$1 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Result<? extends VKIDUserInfoPayload>>, Object> {
    final /* synthetic */ String $accessToken;
    final /* synthetic */ String $clientId;
    final /* synthetic */ String $deviceId;
    int label;
    final /* synthetic */ VKIDUserInfoFetcher this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    VKIDUserInfoFetcher$fetch$userInfoResult$1(VKIDUserInfoFetcher vKIDUserInfoFetcher, String str, String str2, String str3, Continuation<? super VKIDUserInfoFetcher$fetch$userInfoResult$1> continuation) {
        super(2, continuation);
        this.this$0 = vKIDUserInfoFetcher;
        this.$accessToken = str;
        this.$clientId = str2;
        this.$deviceId = str3;
    }

    @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
    public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
        return new VKIDUserInfoFetcher$fetch$userInfoResult$1(this.this$0, this.$accessToken, this.$clientId, this.$deviceId, continuation);
    }

    @Override // kotlin.jvm.functions.Function2
    public /* bridge */ /* synthetic */ Object invoke(CoroutineScope coroutineScope, Continuation<? super Result<? extends VKIDUserInfoPayload>> continuation) {
        return invoke2(coroutineScope, (Continuation<? super Result<VKIDUserInfoPayload>>) continuation);
    }

    /* JADX INFO: renamed from: invoke, reason: avoid collision after fix types in other method */
    public final Object invoke2(CoroutineScope coroutineScope, Continuation<? super Result<VKIDUserInfoPayload>> continuation) {
        return ((VKIDUserInfoFetcher$fetch$userInfoResult$1) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
    }

    @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
    public final Object invokeSuspend(Object obj) {
        Object objMo9311executeIoAF18A;
        Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
        int i = this.label;
        if (i == 0) {
            ResultKt.throwOnFailure(obj);
            this.label = 1;
            objMo9311executeIoAF18A = this.this$0.api.getUserInfo(this.$accessToken, this.$clientId, this.$deviceId).mo9311executeIoAF18A(this);
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
