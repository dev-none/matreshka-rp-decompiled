package com.vk.id;

import kotlin.Metadata;
import kotlin.Result;
import kotlin.ResultKt;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.intrinsics.IntrinsicsKt;
import kotlin.coroutines.jvm.internal.DebugMetadata;
import kotlin.coroutines.jvm.internal.SuspendLambda;
import kotlin.jvm.functions.Function2;

/* JADX INFO: compiled from: VKID.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\u0010\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0003\u0010\u0000\u001a\n\u0012\u0006\u0012\u0004\u0018\u00010\u00020\u00012\u0006\u0010\u0003\u001a\u00020\u0004H\n"}, d2 = {"<anonymous>", "Lkotlin/Result;", "Lcom/vk/id/VKIDUser;", "it", ""}, k = 3, mv = {2, 0, 0}, xi = 48)
@DebugMetadata(c = "com.vk.id.VKID$fetchUserData$2", f = "VKID.kt", i = {}, l = {}, m = "invokeSuspend", n = {}, s = {})
final class VKID$fetchUserData$2 extends SuspendLambda implements Function2<Throwable, Continuation<? super Result<? extends VKIDUser>>, Object> {
    /* synthetic */ Object L$0;
    int label;

    VKID$fetchUserData$2(Continuation<? super VKID$fetchUserData$2> continuation) {
        super(2, continuation);
    }

    @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
    public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
        VKID$fetchUserData$2 vKID$fetchUserData$2 = new VKID$fetchUserData$2(continuation);
        vKID$fetchUserData$2.L$0 = obj;
        return vKID$fetchUserData$2;
    }

    @Override // kotlin.jvm.functions.Function2
    public /* bridge */ /* synthetic */ Object invoke(Throwable th, Continuation<? super Result<? extends VKIDUser>> continuation) {
        return invoke2(th, (Continuation<? super Result<VKIDUser>>) continuation);
    }

    /* JADX INFO: renamed from: invoke, reason: avoid collision after fix types in other method */
    public final Object invoke2(Throwable th, Continuation<? super Result<VKIDUser>> continuation) {
        return ((VKID$fetchUserData$2) create(th, continuation)).invokeSuspend(Unit.INSTANCE);
    }

    @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
    public final Object invokeSuspend(Object obj) {
        IntrinsicsKt.getCOROUTINE_SUSPENDED();
        if (this.label != 0) {
            throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
        }
        ResultKt.throwOnFailure(obj);
        Throwable th = (Throwable) this.L$0;
        Result.Companion companion = Result.INSTANCE;
        return Result.m9860boximpl(Result.m9861constructorimpl(ResultKt.createFailure(th)));
    }
}
