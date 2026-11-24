package com.vk.id.network;

import kotlin.Metadata;
import kotlin.Result;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.intrinsics.IntrinsicsKt;
import kotlin.coroutines.jvm.internal.ContinuationImpl;
import kotlin.coroutines.jvm.internal.DebugMetadata;

/* JADX INFO: compiled from: InternalVKIDCall.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(k = 3, mv = {2, 0, 0}, xi = 48)
@DebugMetadata(c = "com.vk.id.network.VKIDCallWrapper", f = "InternalVKIDCall.kt", i = {0}, l = {46}, m = "execute-IoAF18A", n = {"this"}, s = {"L$0"})
final class VKIDCallWrapper$execute$1 extends ContinuationImpl {
    Object L$0;
    int label;
    /* synthetic */ Object result;
    final /* synthetic */ VKIDCallWrapper<T> this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    VKIDCallWrapper$execute$1(VKIDCallWrapper<T> vKIDCallWrapper, Continuation<? super VKIDCallWrapper$execute$1> continuation) {
        super(continuation);
        this.this$0 = vKIDCallWrapper;
    }

    /* JADX WARN: Type inference incomplete: some casts might be missing */
    @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
    public final Object invokeSuspend(Object obj) {
        this.result = obj;
        this.label |= Integer.MIN_VALUE;
        Object objMo9311executeIoAF18A = this.this$0.mo9311executeIoAF18A(this);
        return objMo9311executeIoAF18A == IntrinsicsKt.getCOROUTINE_SUSPENDED() ? objMo9311executeIoAF18A : Result.m9860boximpl(objMo9311executeIoAF18A);
    }
}
