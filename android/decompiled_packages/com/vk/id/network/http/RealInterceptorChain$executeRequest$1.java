package com.vk.id.network.http;

import io.sentry.SentryBaseEvent;
import kotlin.Metadata;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.jvm.internal.ContinuationImpl;
import kotlin.coroutines.jvm.internal.DebugMetadata;

/* JADX INFO: compiled from: RealInterceptorChain.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(k = 3, mv = {2, 0, 0}, xi = 48)
@DebugMetadata(c = "com.vk.id.network.http.RealInterceptorChain", f = "RealInterceptorChain.kt", i = {0}, l = {66}, m = "executeRequest$network_release", n = {SentryBaseEvent.JsonKeys.REQUEST}, s = {"L$0"})
final class RealInterceptorChain$executeRequest$1 extends ContinuationImpl {
    Object L$0;
    int label;
    /* synthetic */ Object result;
    final /* synthetic */ RealInterceptorChain this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    RealInterceptorChain$executeRequest$1(RealInterceptorChain realInterceptorChain, Continuation<? super RealInterceptorChain$executeRequest$1> continuation) {
        super(continuation);
        this.this$0 = realInterceptorChain;
    }

    @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
    public final Object invokeSuspend(Object obj) {
        this.result = obj;
        this.label |= Integer.MIN_VALUE;
        return this.this$0.executeRequest$network_release(null, this);
    }
}
