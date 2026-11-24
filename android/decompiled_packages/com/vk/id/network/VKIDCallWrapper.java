package com.vk.id.network;

import androidx.exifinterface.media.ExifInterface;
import com.tekartik.sqflite.Constant;
import com.vk.id.network.http.HttpResponse;
import kotlin.Metadata;
import kotlin.Result;
import kotlin.ResultKt;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.intrinsics.IntrinsicsKt;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: InternalVKIDCall.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u00004\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0000\n\u0002\u0010\u000b\n\u0002\b\u0002\b\u0002\u0018\u0000*\u0004\b\u0000\u0010\u00012\b\u0012\u0004\u0012\u0002H\u00010\u0002B.\u0012\f\u0010\u0003\u001a\b\u0012\u0004\u0012\u00020\u00040\u0002\u0012\u0017\u0010\u0005\u001a\u0013\u0012\u0004\u0012\u00020\u0004\u0012\u0004\u0012\u00028\u00000\u0006¢\u0006\u0002\b\u0007¢\u0006\u0004\b\b\u0010\tJ\u0016\u0010\n\u001a\b\u0012\u0004\u0012\u00028\u00000\u000bH\u0096@¢\u0006\u0004\b\f\u0010\rJ\b\u0010\u000e\u001a\u00020\u000fH\u0016J\b\u0010\u0010\u001a\u00020\u0011H\u0016J\b\u0010\u0012\u001a\u00020\u0011H\u0016R\u0014\u0010\u0003\u001a\b\u0012\u0004\u0012\u00020\u00040\u0002X\u0082\u0004¢\u0006\u0002\n\u0000R\u001f\u0010\u0005\u001a\u0013\u0012\u0004\u0012\u00020\u0004\u0012\u0004\u0012\u00028\u00000\u0006¢\u0006\u0002\b\u0007X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u0013"}, d2 = {"Lcom/vk/id/network/VKIDCallWrapper;", ExifInterface.GPS_DIRECTION_TRUE, "Lcom/vk/id/network/InternalVKIDCall;", "delegate", "Lcom/vk/id/network/http/HttpResponse;", "responseMapping", "Lkotlin/Function1;", "Lkotlin/ExtensionFunctionType;", "<init>", "(Lcom/vk/id/network/InternalVKIDCall;Lkotlin/jvm/functions/Function1;)V", Constant.METHOD_EXECUTE, "Lkotlin/Result;", "execute-IoAF18A", "(Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "cancel", "", "isExecuted", "", "isCanceled", "network_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
final class VKIDCallWrapper<T> implements InternalVKIDCall<T> {
    private final InternalVKIDCall<HttpResponse> delegate;
    private final Function1<HttpResponse, T> responseMapping;

    /* JADX WARN: Multi-variable type inference failed */
    public VKIDCallWrapper(InternalVKIDCall<HttpResponse> delegate, Function1<? super HttpResponse, ? extends T> responseMapping) {
        Intrinsics.checkNotNullParameter(delegate, "delegate");
        Intrinsics.checkNotNullParameter(responseMapping, "responseMapping");
        this.delegate = delegate;
        this.responseMapping = responseMapping;
    }

    /* JADX WARN: Code duplicated, block: B:7:0x0014  */
    @Override // com.vk.id.network.InternalVKIDCall
    /* JADX INFO: renamed from: execute-IoAF18A */
    public Object mo9311executeIoAF18A(Continuation<? super Result<? extends T>> continuation) {
        VKIDCallWrapper$execute$1 vKIDCallWrapper$execute$1;
        Object objMo9311executeIoAF18A;
        VKIDCallWrapper<T> vKIDCallWrapper;
        if (continuation instanceof VKIDCallWrapper$execute$1) {
            vKIDCallWrapper$execute$1 = (VKIDCallWrapper$execute$1) continuation;
            if ((vKIDCallWrapper$execute$1.label & Integer.MIN_VALUE) != 0) {
                vKIDCallWrapper$execute$1.label -= Integer.MIN_VALUE;
            } else {
                vKIDCallWrapper$execute$1 = new VKIDCallWrapper$execute$1(this, continuation);
            }
        } else {
            vKIDCallWrapper$execute$1 = new VKIDCallWrapper$execute$1(this, continuation);
        }
        Object obj = vKIDCallWrapper$execute$1.result;
        Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
        int i = vKIDCallWrapper$execute$1.label;
        if (i == 0) {
            ResultKt.throwOnFailure(obj);
            InternalVKIDCall<HttpResponse> internalVKIDCall = this.delegate;
            vKIDCallWrapper$execute$1.L$0 = this;
            vKIDCallWrapper$execute$1.label = 1;
            objMo9311executeIoAF18A = internalVKIDCall.mo9311executeIoAF18A(vKIDCallWrapper$execute$1);
            if (objMo9311executeIoAF18A == coroutine_suspended) {
                return coroutine_suspended;
            }
            vKIDCallWrapper = this;
        } else {
            if (i != 1) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            vKIDCallWrapper = (VKIDCallWrapper) vKIDCallWrapper$execute$1.L$0;
            ResultKt.throwOnFailure(obj);
            objMo9311executeIoAF18A = ((Result) obj).getValue();
        }
        if (!Result.m9868isSuccessimpl(objMo9311executeIoAF18A)) {
            return Result.m9861constructorimpl(objMo9311executeIoAF18A);
        }
        try {
            Result.Companion companion = Result.INSTANCE;
            return Result.m9861constructorimpl(vKIDCallWrapper.responseMapping.invoke((HttpResponse) objMo9311executeIoAF18A));
        } catch (Throwable th) {
            Result.Companion companion2 = Result.INSTANCE;
            return Result.m9861constructorimpl(ResultKt.createFailure(th));
        }
    }

    @Override // com.vk.id.network.InternalVKIDCall
    public void cancel() {
        this.delegate.cancel();
    }

    @Override // com.vk.id.network.InternalVKIDCall
    public boolean isExecuted() {
        return this.delegate.isExecuted();
    }

    @Override // com.vk.id.network.InternalVKIDCall
    public boolean isCanceled() {
        return this.delegate.isCanceled();
    }
}
