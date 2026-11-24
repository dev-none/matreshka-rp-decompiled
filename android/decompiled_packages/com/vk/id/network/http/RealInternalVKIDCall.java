package com.vk.id.network.http;

import androidx.exifinterface.media.ExifInterface;
import com.tekartik.sqflite.Constant;
import com.vk.id.logger.InternalVKIDLog;
import com.vk.id.logger.InternalVKIDLogger;
import com.vk.id.network.InternalVKIDCall;
import io.sentry.SentryBaseEvent;
import io.sentry.SentryEvent;
import java.util.concurrent.CancellationException;
import java.util.concurrent.atomic.AtomicBoolean;
import kotlin.Metadata;
import kotlin.Result;
import kotlin.ResultKt;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.CoroutineContext;
import kotlin.coroutines.intrinsics.IntrinsicsKt;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.coroutines.BuildersKt;
import kotlinx.coroutines.Job;

/* JADX INFO: compiled from: RealInternalVKIDCall.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000N\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0000\n\u0002\u0010\u000b\n\u0002\b\u0002\b\u0000\u0018\u0000*\u0004\b\u0000\u0010\u00012\b\u0012\u0004\u0012\u0002H\u00010\u0002B+\u0012\u0006\u0010\u0003\u001a\u00020\u0004\u0012\u0006\u0010\u0005\u001a\u00020\u0006\u0012\u0012\u0010\u0007\u001a\u000e\u0012\u0004\u0012\u00020\t\u0012\u0004\u0012\u00028\u00000\b¢\u0006\u0004\b\n\u0010\u000bJ\u0016\u0010\u0013\u001a\b\u0012\u0004\u0012\u00028\u00000\u0014H\u0096@¢\u0006\u0004\b\u0015\u0010\u0016J\b\u0010\u0017\u001a\u00020\u0018H\u0016J\b\u0010\u0019\u001a\u00020\u001aH\u0016J\b\u0010\u001b\u001a\u00020\u001aH\u0016R\u000e\u0010\u0003\u001a\u00020\u0004X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0005\u001a\u00020\u0006X\u0082\u0004¢\u0006\u0002\n\u0000R\u001a\u0010\u0007\u001a\u000e\u0012\u0004\u0012\u00020\t\u0012\u0004\u0012\u00028\u00000\bX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\f\u001a\u00020\rX\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u000e\u001a\u00020\rX\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010\u000f\u001a\u0004\u0018\u00010\u0010X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u0011\u001a\u00020\u0012X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u001c"}, d2 = {"Lcom/vk/id/network/http/RealInternalVKIDCall;", ExifInterface.GPS_DIRECTION_TRUE, "Lcom/vk/id/network/InternalVKIDCall;", "httpClient", "Lcom/vk/id/network/http/HttpClient;", SentryBaseEvent.JsonKeys.REQUEST, "Lcom/vk/id/network/http/HttpRequest;", "responseMapper", "Lkotlin/Function1;", "Lcom/vk/id/network/http/HttpResponse;", "<init>", "(Lcom/vk/id/network/http/HttpClient;Lcom/vk/id/network/http/HttpRequest;Lkotlin/jvm/functions/Function1;)V", "_executed", "Ljava/util/concurrent/atomic/AtomicBoolean;", "_cancelled", "jobExecution", "Lkotlinx/coroutines/Job;", SentryEvent.JsonKeys.LOGGER, "Lcom/vk/id/logger/InternalVKIDLogger;", Constant.METHOD_EXECUTE, "Lkotlin/Result;", "execute-IoAF18A", "(Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "cancel", "", "isCanceled", "", "isExecuted", "network_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final class RealInternalVKIDCall<T> implements InternalVKIDCall<T> {
    private AtomicBoolean _cancelled;
    private AtomicBoolean _executed;
    private final HttpClient httpClient;
    private Job jobExecution;
    private final InternalVKIDLogger logger;
    private final HttpRequest request;
    private final Function1<HttpResponse, T> responseMapper;

    /* JADX WARN: Multi-variable type inference failed */
    public RealInternalVKIDCall(HttpClient httpClient, HttpRequest request, Function1<? super HttpResponse, ? extends T> responseMapper) {
        Intrinsics.checkNotNullParameter(httpClient, "httpClient");
        Intrinsics.checkNotNullParameter(request, "request");
        Intrinsics.checkNotNullParameter(responseMapper, "responseMapper");
        this.httpClient = httpClient;
        this.request = request;
        this.responseMapper = responseMapper;
        this._executed = new AtomicBoolean(false);
        this._cancelled = new AtomicBoolean(false);
        this.logger = InternalVKIDLog.INSTANCE.createLoggerForTag("RealInternalVKIDCall");
    }

    /* JADX WARN: Code duplicated, block: B:7:0x0014  */
    @Override // com.vk.id.network.InternalVKIDCall
    /* JADX INFO: renamed from: execute-IoAF18A */
    public Object mo9311executeIoAF18A(Continuation<? super Result<? extends T>> continuation) {
        RealInternalVKIDCall$execute$1 realInternalVKIDCall$execute$1;
        if (continuation instanceof RealInternalVKIDCall$execute$1) {
            realInternalVKIDCall$execute$1 = (RealInternalVKIDCall$execute$1) continuation;
            if ((realInternalVKIDCall$execute$1.label & Integer.MIN_VALUE) != 0) {
                realInternalVKIDCall$execute$1.label -= Integer.MIN_VALUE;
            } else {
                realInternalVKIDCall$execute$1 = new RealInternalVKIDCall$execute$1(this, continuation);
            }
        } else {
            realInternalVKIDCall$execute$1 = new RealInternalVKIDCall$execute$1(this, continuation);
        }
        Object objWithContext = realInternalVKIDCall$execute$1.result;
        Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
        int i = realInternalVKIDCall$execute$1.label;
        if (i == 0) {
            ResultKt.throwOnFailure(objWithContext);
            CoroutineContext coroutineContext = realInternalVKIDCall$execute$1.get$context();
            RealInternalVKIDCall$execute$2 realInternalVKIDCall$execute$2 = new RealInternalVKIDCall$execute$2(this, null);
            realInternalVKIDCall$execute$1.label = 1;
            objWithContext = BuildersKt.withContext(coroutineContext, realInternalVKIDCall$execute$2, realInternalVKIDCall$execute$1);
            if (objWithContext == coroutine_suspended) {
                return coroutine_suspended;
            }
        } else {
            if (i != 1) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            ResultKt.throwOnFailure(objWithContext);
        }
        return ((Result) objWithContext).getValue();
    }

    @Override // com.vk.id.network.InternalVKIDCall
    public void cancel() {
        Job job;
        synchronized (this) {
            if (this._cancelled.compareAndSet(false, true) && (job = this.jobExecution) != null) {
                Job.DefaultImpls.cancel$default(job, (CancellationException) null, 1, (Object) null);
            }
            Unit unit = Unit.INSTANCE;
        }
    }

    @Override // com.vk.id.network.InternalVKIDCall
    public boolean isCanceled() {
        boolean z;
        synchronized (this) {
            z = this._cancelled.get();
        }
        return z;
    }

    @Override // com.vk.id.network.InternalVKIDCall
    public boolean isExecuted() {
        boolean z;
        synchronized (this) {
            z = this._executed.get();
        }
        return z;
    }
}
