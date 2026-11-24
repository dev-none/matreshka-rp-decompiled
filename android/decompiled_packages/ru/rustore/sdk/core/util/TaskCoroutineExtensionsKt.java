package ru.rustore.sdk.core.util;

import androidx.exifinterface.media.ExifInterface;
import java.util.concurrent.Executor;
import kotlin.Metadata;
import kotlin.Result;
import kotlin.ResultKt;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.intrinsics.IntrinsicsKt;
import kotlin.coroutines.jvm.internal.ContinuationImpl;
import kotlin.coroutines.jvm.internal.DebugMetadata;
import kotlin.coroutines.jvm.internal.DebugProbesKt;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.coroutines.CancellableContinuation;
import kotlinx.coroutines.CancellableContinuationImpl;
import kotlinx.coroutines.CoroutineDispatcher;
import kotlinx.coroutines.ExecutorsKt;
import ru.rustore.sdk.core.tasks.OnFailureListener;
import ru.rustore.sdk.core.tasks.OnSuccessListener;
import ru.rustore.sdk.core.tasks.Task;

/* JADX INFO: compiled from: TaskCoroutineExtensions.kt */
/* JADX INFO: loaded from: classes8.dex */
@Metadata(d1 = {"\u0000\u0010\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\u001a$\u0010\u0000\u001a\b\u0012\u0004\u0012\u0002H\u00020\u0001\"\u0004\b\u0000\u0010\u0002*\b\u0012\u0004\u0012\u0002H\u00020\u0003H\u0086@¢\u0006\u0002\u0010\u0004¨\u0006\u0005"}, d2 = {"toSuspendResult", "Lkotlin/Result;", ExifInterface.GPS_DIRECTION_TRUE, "Lru/rustore/sdk/core/tasks/Task;", "(Lru/rustore/sdk/core/tasks/Task;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "sdk-public-core_release"}, k = 2, mv = {1, 8, 0}, xi = 48)
public final class TaskCoroutineExtensionsKt {

    /* JADX INFO: renamed from: ru.rustore.sdk.core.util.TaskCoroutineExtensionsKt$toSuspendResult$1, reason: invalid class name */
    /* JADX INFO: compiled from: TaskCoroutineExtensions.kt */
    @Metadata(k = 3, mv = {1, 8, 0}, xi = 48)
    @DebugMetadata(c = "ru.rustore.sdk.core.util.TaskCoroutineExtensionsKt", f = "TaskCoroutineExtensions.kt", i = {0, 0}, l = {36}, m = "toSuspendResult", n = {"$this$toSuspendResult", "executor"}, s = {"L$0", "L$1"})
    static final class AnonymousClass1<T> extends ContinuationImpl {
        Object L$0;
        Object L$1;
        int label;
        /* synthetic */ Object result;

        AnonymousClass1(Continuation<? super AnonymousClass1> continuation) {
            super(continuation);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            this.result = obj;
            this.label |= Integer.MIN_VALUE;
            Object suspendResult = TaskCoroutineExtensionsKt.toSuspendResult(null, this);
            return suspendResult == IntrinsicsKt.getCOROUTINE_SUSPENDED() ? suspendResult : Result.m9860boximpl(suspendResult);
        }
    }

    /* JADX WARN: Code duplicated, block: B:7:0x0014  */
    public static final <T> Object toSuspendResult(final Task<T> task, Continuation<? super Result<? extends T>> continuation) {
        AnonymousClass1 anonymousClass1;
        if (continuation instanceof AnonymousClass1) {
            anonymousClass1 = (AnonymousClass1) continuation;
            if ((anonymousClass1.label & Integer.MIN_VALUE) != 0) {
                anonymousClass1.label -= Integer.MIN_VALUE;
            } else {
                anonymousClass1 = new AnonymousClass1(continuation);
            }
        } else {
            anonymousClass1 = new AnonymousClass1(continuation);
        }
        Object result = anonymousClass1.result;
        Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
        int i = anonymousClass1.label;
        if (i == 0) {
            ResultKt.throwOnFailure(result);
            CoroutineDispatcher coroutineDispatcher = (CoroutineDispatcher) anonymousClass1.get$context().get(CoroutineDispatcher.INSTANCE);
            Executor executorAsExecutor = coroutineDispatcher != null ? ExecutorsKt.asExecutor(coroutineDispatcher) : null;
            anonymousClass1.L$0 = task;
            anonymousClass1.L$1 = executorAsExecutor;
            anonymousClass1.label = 1;
            CancellableContinuationImpl cancellableContinuationImpl = new CancellableContinuationImpl(IntrinsicsKt.intercepted(anonymousClass1), 1);
            cancellableContinuationImpl.initCancellability();
            final CancellableContinuationImpl cancellableContinuationImpl2 = cancellableContinuationImpl;
            if (executorAsExecutor == null) {
                task.addOnSuccessListener(new OnSuccessListener() { // from class: ru.rustore.sdk.core.util.TaskCoroutineExtensionsKt$toSuspendResult$2$1
                    @Override // ru.rustore.sdk.core.tasks.OnSuccessListener
                    public final void onSuccess(T t) {
                        CancellableContinuation<Result<? extends T>> cancellableContinuation = cancellableContinuationImpl2;
                        Result.Companion companion = Result.INSTANCE;
                        CancellableContinuationExtKt.resumeIfActive(cancellableContinuation, Result.m9860boximpl(Result.m9861constructorimpl(t)));
                    }
                });
                task.addOnFailureListener(new OnFailureListener() { // from class: ru.rustore.sdk.core.util.TaskCoroutineExtensionsKt$toSuspendResult$2$2
                    @Override // ru.rustore.sdk.core.tasks.OnFailureListener
                    public final void onFailure(Throwable throwable) {
                        Intrinsics.checkNotNullParameter(throwable, "throwable");
                        CancellableContinuation<Result<? extends T>> cancellableContinuation = cancellableContinuationImpl2;
                        Result.Companion companion = Result.INSTANCE;
                        CancellableContinuationExtKt.resumeIfActive(cancellableContinuation, Result.m9860boximpl(Result.m9861constructorimpl(ResultKt.createFailure(throwable))));
                    }
                });
            } else {
                task.addOnSuccessListener(executorAsExecutor, new OnSuccessListener() { // from class: ru.rustore.sdk.core.util.TaskCoroutineExtensionsKt$toSuspendResult$2$3
                    @Override // ru.rustore.sdk.core.tasks.OnSuccessListener
                    public final void onSuccess(T t) {
                        CancellableContinuation<Result<? extends T>> cancellableContinuation = cancellableContinuationImpl2;
                        Result.Companion companion = Result.INSTANCE;
                        CancellableContinuationExtKt.resumeIfActive(cancellableContinuation, Result.m9860boximpl(Result.m9861constructorimpl(t)));
                    }
                });
                task.addOnFailureListener(executorAsExecutor, new OnFailureListener() { // from class: ru.rustore.sdk.core.util.TaskCoroutineExtensionsKt$toSuspendResult$2$4
                    @Override // ru.rustore.sdk.core.tasks.OnFailureListener
                    public final void onFailure(Throwable throwable) {
                        Intrinsics.checkNotNullParameter(throwable, "throwable");
                        CancellableContinuation<Result<? extends T>> cancellableContinuation = cancellableContinuationImpl2;
                        Result.Companion companion = Result.INSTANCE;
                        CancellableContinuationExtKt.resumeIfActive(cancellableContinuation, Result.m9860boximpl(Result.m9861constructorimpl(ResultKt.createFailure(throwable))));
                    }
                });
            }
            cancellableContinuationImpl2.invokeOnCancellation(new Function1<Throwable, Unit>() { // from class: ru.rustore.sdk.core.util.TaskCoroutineExtensionsKt$toSuspendResult$2$5
                /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
                {
                    super(1);
                }

                @Override // kotlin.jvm.functions.Function1
                public /* bridge */ /* synthetic */ Unit invoke(Throwable th) {
                    invoke2(th);
                    return Unit.INSTANCE;
                }

                /* JADX INFO: renamed from: invoke, reason: avoid collision after fix types in other method */
                public final void invoke2(Throwable th) {
                    task.cancel();
                }
            });
            result = cancellableContinuationImpl.getResult();
            if (result == IntrinsicsKt.getCOROUTINE_SUSPENDED()) {
                DebugProbesKt.probeCoroutineSuspended(anonymousClass1);
            }
            if (result == coroutine_suspended) {
                return coroutine_suspended;
            }
        } else {
            if (i != 1) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            ResultKt.throwOnFailure(result);
        }
        return ((Result) result).getValue();
    }
}
