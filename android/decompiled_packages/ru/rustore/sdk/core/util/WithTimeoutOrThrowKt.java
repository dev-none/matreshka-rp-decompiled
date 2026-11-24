package ru.rustore.sdk.core.util;

import androidx.exifinterface.media.ExifInterface;
import kotlin.Metadata;
import kotlin.ResultKt;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.intrinsics.IntrinsicsKt;
import kotlin.coroutines.jvm.internal.ContinuationImpl;
import kotlin.coroutines.jvm.internal.DebugMetadata;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.coroutines.CoroutineScope;
import kotlinx.coroutines.TimeoutCancellationException;
import kotlinx.coroutines.TimeoutKt;

/* JADX INFO: compiled from: WithTimeoutOrThrow.kt */
/* JADX INFO: loaded from: classes8.dex */
@Metadata(d1 = {"\u00004\n\u0002\b\u0003\n\u0002\u0010\t\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\u001a_\u0010\u0000\u001a\u0002H\u0001\"\u0004\b\u0000\u0010\u00012\u0006\u0010\u0002\u001a\u00020\u00032\u0018\b\u0002\u0010\u0004\u001a\u0012\u0012\u0004\u0012\u00020\u0006\u0012\b\u0012\u00060\u0007j\u0002`\b0\u00052'\u0010\t\u001a#\b\u0001\u0012\u0004\u0012\u00020\u000b\u0012\n\u0012\b\u0012\u0004\u0012\u0002H\u00010\f\u0012\u0006\u0012\u0004\u0018\u00010\r0\n¢\u0006\u0002\b\u000eH\u0086@¢\u0006\u0002\u0010\u000f¨\u0006\u0010"}, d2 = {"withTimeoutOrThrow", ExifInterface.GPS_DIRECTION_TRUE, "timeMillis", "", "exceptionFactory", "Lkotlin/Function1;", "Lkotlinx/coroutines/TimeoutCancellationException;", "Ljava/lang/Exception;", "Lkotlin/Exception;", "block", "Lkotlin/Function2;", "Lkotlinx/coroutines/CoroutineScope;", "Lkotlin/coroutines/Continuation;", "", "Lkotlin/ExtensionFunctionType;", "(JLkotlin/jvm/functions/Function1;Lkotlin/jvm/functions/Function2;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "sdk-public-core_release"}, k = 2, mv = {1, 8, 0}, xi = 48)
public final class WithTimeoutOrThrowKt {

    /* JADX INFO: renamed from: ru.rustore.sdk.core.util.WithTimeoutOrThrowKt$withTimeoutOrThrow$1, reason: invalid class name */
    /* JADX INFO: compiled from: WithTimeoutOrThrow.kt */
    @Metadata(k = 3, mv = {1, 8, 0}, xi = 48)
    @DebugMetadata(c = "ru.rustore.sdk.core.util.WithTimeoutOrThrowKt", f = "WithTimeoutOrThrow.kt", i = {0}, l = {13}, m = "withTimeoutOrThrow", n = {"exceptionFactory"}, s = {"L$0"})
    static final class AnonymousClass1<T> extends ContinuationImpl {
        Object L$0;
        int label;
        /* synthetic */ Object result;

        AnonymousClass1(Continuation<? super AnonymousClass1> continuation) {
            super(continuation);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            this.result = obj;
            this.label |= Integer.MIN_VALUE;
            return WithTimeoutOrThrowKt.withTimeoutOrThrow(0L, null, null, this);
        }
    }

    /* JADX WARN: Code duplicated, block: B:7:0x0014  */
    public static final <T> Object withTimeoutOrThrow(long j, Function1<? super TimeoutCancellationException, ? extends Exception> function1, Function2<? super CoroutineScope, ? super Continuation<? super T>, ? extends Object> function2, Continuation<? super T> continuation) throws Exception {
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
        Object obj = anonymousClass1.result;
        Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
        int i = anonymousClass1.label;
        try {
            if (i != 0) {
                if (i != 1) {
                    throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
                ResultKt.throwOnFailure(obj);
                return obj;
            }
            ResultKt.throwOnFailure(obj);
            anonymousClass1.L$0 = function1;
            anonymousClass1.label = 1;
            Object objWithTimeout = TimeoutKt.withTimeout(j, function2, anonymousClass1);
            return objWithTimeout == coroutine_suspended ? coroutine_suspended : objWithTimeout;
        } catch (TimeoutCancellationException e) {
            throw function1.invoke(e);
        }
    }

    public static /* synthetic */ Object withTimeoutOrThrow$default(long j, Function1 function1, Function2 function2, Continuation continuation, int i, Object obj) {
        if ((i & 2) != 0) {
            function1 = new Function1<TimeoutCancellationException, TimeoutCancellationException>() { // from class: ru.rustore.sdk.core.util.WithTimeoutOrThrowKt.withTimeoutOrThrow.2
                @Override // kotlin.jvm.functions.Function1
                public final TimeoutCancellationException invoke(TimeoutCancellationException it) {
                    Intrinsics.checkNotNullParameter(it, "it");
                    return it;
                }
            };
        }
        return withTimeoutOrThrow(j, function1, function2, continuation);
    }
}
