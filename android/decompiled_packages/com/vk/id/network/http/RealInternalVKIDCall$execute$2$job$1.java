package com.vk.id.network.http;

import androidx.exifinterface.media.ExifInterface;
import java.io.IOException;
import java.util.concurrent.CancellationException;
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

/* JADX INFO: Add missing generic type declarations: [T] */
/* JADX INFO: compiled from: RealInternalVKIDCall.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\f\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\u0010\u0000\u001a\b\u0012\u0004\u0012\u0002H\u00020\u0001\"\u0004\b\u0000\u0010\u0002*\u00020\u0003H\n"}, d2 = {"<anonymous>", "Lkotlin/Result;", ExifInterface.GPS_DIRECTION_TRUE, "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 0, 0}, xi = 48)
@DebugMetadata(c = "com.vk.id.network.http.RealInternalVKIDCall$execute$2$job$1", f = "RealInternalVKIDCall.kt", i = {}, l = {43}, m = "invokeSuspend", n = {}, s = {})
final class RealInternalVKIDCall$execute$2$job$1<T> extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Result<? extends T>>, Object> {
    int label;
    final /* synthetic */ RealInternalVKIDCall<T> this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    RealInternalVKIDCall$execute$2$job$1(RealInternalVKIDCall<T> realInternalVKIDCall, Continuation<? super RealInternalVKIDCall$execute$2$job$1> continuation) {
        super(2, continuation);
        this.this$0 = realInternalVKIDCall;
    }

    @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
    public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
        return new RealInternalVKIDCall$execute$2$job$1(this.this$0, continuation);
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation<? super Result<? extends T>> continuation) {
        return ((RealInternalVKIDCall$execute$2$job$1) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
    }

    @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
    public final Object invokeSuspend(Object obj) {
        Object objM9861constructorimpl;
        Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
        int i = this.label;
        try {
            if (i == 0) {
                ResultKt.throwOnFailure(obj);
                this.label = 1;
                obj = ((RealInternalVKIDCall) this.this$0).httpClient.executeWithInterceptors$network_release(((RealInternalVKIDCall) this.this$0).request, this);
                if (obj == coroutine_suspended) {
                    return coroutine_suspended;
                }
            } else {
                if (i != 1) {
                    throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
                ResultKt.throwOnFailure(obj);
            }
            Result.Companion companion = Result.INSTANCE;
            objM9861constructorimpl = Result.m9861constructorimpl(((RealInternalVKIDCall) this.this$0).responseMapper.invoke((HttpResponse) obj));
        } catch (IOException e) {
            IOException iOException = e;
            ((RealInternalVKIDCall) this.this$0).logger.error("Network error during request to " + ((RealInternalVKIDCall) this.this$0).request.getUrl(), iOException);
            Result.Companion companion2 = Result.INSTANCE;
            objM9861constructorimpl = Result.m9861constructorimpl(ResultKt.createFailure(iOException));
        } catch (CancellationException e2) {
            throw e2;
        } catch (Throwable th) {
            ((RealInternalVKIDCall) this.this$0).logger.error("Execution error during request to " + ((RealInternalVKIDCall) this.this$0).request.getUrl(), th);
            Result.Companion companion3 = Result.INSTANCE;
            objM9861constructorimpl = Result.m9861constructorimpl(ResultKt.createFailure(new IOException(th.getMessage(), th)));
        }
        return Result.m9860boximpl(objM9861constructorimpl);
    }
}
