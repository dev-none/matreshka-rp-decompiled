package com.vk.id.network.http;

import kotlin.Metadata;
import kotlin.ResultKt;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.intrinsics.IntrinsicsKt;
import kotlin.coroutines.jvm.internal.DebugMetadata;
import kotlin.coroutines.jvm.internal.SuspendLambda;
import kotlin.jvm.functions.Function2;
import kotlinx.coroutines.CoroutineScope;

/* JADX INFO: compiled from: RealInterceptorChain.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "Lcom/vk/id/network/http/HttpResponse;", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 0, 0}, xi = 48)
@DebugMetadata(c = "com.vk.id.network.http.RealInterceptorChain$executeRequest$httpResponse$1", f = "RealInterceptorChain.kt", i = {}, l = {67}, m = "invokeSuspend", n = {}, s = {})
final class RealInterceptorChain$executeRequest$httpResponse$1 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super HttpResponse>, Object> {
    final /* synthetic */ HttpRequest $request;
    int label;
    final /* synthetic */ RealInterceptorChain this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    RealInterceptorChain$executeRequest$httpResponse$1(RealInterceptorChain realInterceptorChain, HttpRequest httpRequest, Continuation<? super RealInterceptorChain$executeRequest$httpResponse$1> continuation) {
        super(2, continuation);
        this.this$0 = realInterceptorChain;
        this.$request = httpRequest;
    }

    @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
    public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
        return new RealInterceptorChain$executeRequest$httpResponse$1(this.this$0, this.$request, continuation);
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation<? super HttpResponse> continuation) {
        return ((RealInterceptorChain$executeRequest$httpResponse$1) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
    }

    @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
    public final Object invokeSuspend(Object obj) {
        Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
        int i = this.label;
        if (i != 0) {
            if (i != 1) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            ResultKt.throwOnFailure(obj);
            return obj;
        }
        ResultKt.throwOnFailure(obj);
        this.label = 1;
        Object objExecuteWithInterceptors$network_release = this.this$0.httpClient.executeWithInterceptors$network_release(this.$request, this);
        return objExecuteWithInterceptors$network_release == coroutine_suspended ? coroutine_suspended : objExecuteWithInterceptors$network_release;
    }
}
