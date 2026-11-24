package com.vk.id;

import com.vk.id.internal.user.UserDataFetcher;
import kotlin.Metadata;
import kotlin.Result;
import kotlin.ResultKt;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.intrinsics.IntrinsicsKt;
import kotlin.coroutines.jvm.internal.DebugMetadata;
import kotlin.coroutines.jvm.internal.SuspendLambda;
import kotlin.jvm.functions.Function1;

/* JADX INFO: compiled from: VKID.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\n\u0012\u0006\u0012\u0004\u0018\u00010\u00020\u0001H\n"}, d2 = {"<anonymous>", "Lkotlin/Result;", "Lcom/vk/id/VKIDUser;"}, k = 3, mv = {2, 0, 0}, xi = 48)
@DebugMetadata(c = "com.vk.id.VKID$fetchUserData$3", f = "VKID.kt", i = {}, l = {690}, m = "invokeSuspend", n = {}, s = {})
final class VKID$fetchUserData$3 extends SuspendLambda implements Function1<Continuation<? super Result<? extends VKIDUser>>, Object> {
    int label;
    final /* synthetic */ VKID this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    VKID$fetchUserData$3(VKID vkid, Continuation<? super VKID$fetchUserData$3> continuation) {
        super(1, continuation);
        this.this$0 = vkid;
    }

    @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
    public final Continuation<Unit> create(Continuation<?> continuation) {
        return new VKID$fetchUserData$3(this.this$0, continuation);
    }

    @Override // kotlin.jvm.functions.Function1
    public /* bridge */ /* synthetic */ Object invoke(Continuation<? super Result<? extends VKIDUser>> continuation) {
        return invoke2((Continuation<? super Result<VKIDUser>>) continuation);
    }

    /* JADX INFO: renamed from: invoke, reason: avoid collision after fix types in other method */
    public final Object invoke2(Continuation<? super Result<VKIDUser>> continuation) {
        return ((VKID$fetchUserData$3) create(continuation)).invokeSuspend(Unit.INSTANCE);
    }

    @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
    public final Object invokeSuspend(Object obj) throws Throwable {
        Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
        int i = this.label;
        if (i == 0) {
            ResultKt.throwOnFailure(obj);
            Result.Companion companion = Result.INSTANCE;
            this.label = 1;
            obj = ((UserDataFetcher) this.this$0.userDataFetcher.getValue()).fetchUserData(this);
            if (obj == coroutine_suspended) {
                return coroutine_suspended;
            }
        } else {
            if (i != 1) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            ResultKt.throwOnFailure(obj);
        }
        return Result.m9860boximpl(Result.m9861constructorimpl(obj));
    }
}
