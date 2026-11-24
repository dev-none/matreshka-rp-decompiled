package com.vk.id;

import kotlin.Metadata;
import kotlin.Result;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.intrinsics.IntrinsicsKt;
import kotlin.coroutines.jvm.internal.ContinuationImpl;
import kotlin.coroutines.jvm.internal.DebugMetadata;

/* JADX INFO: compiled from: VKID.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(k = 3, mv = {2, 0, 0}, xi = 48)
@DebugMetadata(c = "com.vk.id.VKID", f = "VKID.kt", i = {}, l = {689}, m = "fetchUserData-IoAF18A", n = {}, s = {})
final class VKID$fetchUserData$1 extends ContinuationImpl {
    int label;
    /* synthetic */ Object result;
    final /* synthetic */ VKID this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    VKID$fetchUserData$1(VKID vkid, Continuation<? super VKID$fetchUserData$1> continuation) {
        super(continuation);
        this.this$0 = vkid;
    }

    @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
    public final Object invokeSuspend(Object obj) {
        this.result = obj;
        this.label |= Integer.MIN_VALUE;
        Object objM9258fetchUserDataIoAF18A = this.this$0.m9258fetchUserDataIoAF18A(this);
        return objM9258fetchUserDataIoAF18A == IntrinsicsKt.getCOROUTINE_SUSPENDED() ? objM9258fetchUserDataIoAF18A : Result.m9860boximpl(objM9258fetchUserDataIoAF18A);
    }
}
