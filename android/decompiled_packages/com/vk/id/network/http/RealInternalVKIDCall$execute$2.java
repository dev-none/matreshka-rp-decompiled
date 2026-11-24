package com.vk.id.network.http;

import androidx.exifinterface.media.ExifInterface;
import java.io.IOException;
import kotlin.Metadata;
import kotlin.Result;
import kotlin.ResultKt;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.intrinsics.IntrinsicsKt;
import kotlin.coroutines.jvm.internal.DebugMetadata;
import kotlin.coroutines.jvm.internal.SuspendLambda;
import kotlin.jvm.functions.Function2;
import kotlinx.coroutines.BuildersKt__Builders_commonKt;
import kotlinx.coroutines.CoroutineScope;
import kotlinx.coroutines.Deferred;

/* JADX INFO: Add missing generic type declarations: [T] */
/* JADX INFO: compiled from: RealInternalVKIDCall.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\f\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\u0010\u0000\u001a\b\u0012\u0004\u0012\u0002H\u00020\u0001\"\u0004\b\u0000\u0010\u0002*\u00020\u0003H\n"}, d2 = {"<anonymous>", "Lkotlin/Result;", ExifInterface.GPS_DIRECTION_TRUE, "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 0, 0}, xi = 48)
@DebugMetadata(c = "com.vk.id.network.http.RealInternalVKIDCall$execute$2", f = "RealInternalVKIDCall.kt", i = {}, l = {57}, m = "invokeSuspend", n = {}, s = {})
final class RealInternalVKIDCall$execute$2<T> extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Result<? extends T>>, Object> {
    private /* synthetic */ Object L$0;
    int label;
    final /* synthetic */ RealInternalVKIDCall<T> this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    RealInternalVKIDCall$execute$2(RealInternalVKIDCall<T> realInternalVKIDCall, Continuation<? super RealInternalVKIDCall$execute$2> continuation) {
        super(2, continuation);
        this.this$0 = realInternalVKIDCall;
    }

    @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
    public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
        RealInternalVKIDCall$execute$2 realInternalVKIDCall$execute$2 = new RealInternalVKIDCall$execute$2(this.this$0, continuation);
        realInternalVKIDCall$execute$2.L$0 = obj;
        return realInternalVKIDCall$execute$2;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation<? super Result<? extends T>> continuation) {
        return ((RealInternalVKIDCall$execute$2) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
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
        CoroutineScope coroutineScope = (CoroutineScope) this.L$0;
        RealInternalVKIDCall<T> realInternalVKIDCall = this.this$0;
        synchronized (realInternalVKIDCall) {
            if (!((RealInternalVKIDCall) realInternalVKIDCall)._cancelled.get()) {
                if (!((RealInternalVKIDCall) realInternalVKIDCall)._executed.get()) {
                    ((RealInternalVKIDCall) realInternalVKIDCall)._executed.set(true);
                    Unit unit = Unit.INSTANCE;
                    Deferred deferredAsync$default = BuildersKt__Builders_commonKt.async$default(coroutineScope, null, null, new RealInternalVKIDCall$execute$2$job$1(this.this$0, null), 3, null);
                    ((RealInternalVKIDCall) this.this$0).jobExecution = deferredAsync$default;
                    this.label = 1;
                    Object objAwait = deferredAsync$default.await(this);
                    return objAwait == coroutine_suspended ? coroutine_suspended : objAwait;
                }
                Result.Companion companion = Result.INSTANCE;
                return Result.m9860boximpl(Result.m9861constructorimpl(ResultKt.createFailure(new IOException("Call already executed"))));
            }
            Result.Companion companion2 = Result.INSTANCE;
            return Result.m9860boximpl(Result.m9861constructorimpl(ResultKt.createFailure(new IOException("Call was cancelled"))));
        }
    }
}
