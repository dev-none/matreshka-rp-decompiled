package com.vk.id.tracking.tracer;

import android.os.SystemClock;
import com.unity3d.ads.core.domain.HandleInvocationsFromAdViewer;
import com.vk.id.tracking.core.PerformanceTracker;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.TimeUnit;
import kotlin.Metadata;
import kotlin.Pair;
import kotlin.ResultKt;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.intrinsics.IntrinsicsKt;
import kotlin.coroutines.jvm.internal.ContinuationImpl;
import kotlin.coroutines.jvm.internal.DebugMetadata;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import ru.ok.tracer.lite.TracerLite;
import ru.ok.tracer.lite.performance.metrics.TracerPerformanceMetricsLite;

/* JADX INFO: compiled from: TracerPerformanceTracker.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000F\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0010\t\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\b\u0000\u0018\u00002\u00020\u0001B!\u0012\b\u0010\u0002\u001a\u0004\u0018\u00010\u0003\u0012\u000e\b\u0002\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005¢\u0006\u0004\b\u0007\u0010\bB\u0013\b\u0016\u0012\b\u0010\t\u001a\u0004\u0018\u00010\n¢\u0006\u0004\b\u0007\u0010\u000bJ\u0010\u0010\u000f\u001a\u00020\u00102\u0006\u0010\u0011\u001a\u00020\u000eH\u0016J\u0010\u0010\u0012\u001a\u00020\u00102\u0006\u0010\u0011\u001a\u00020\u000eH\u0016J\u001e\u0010\u0013\u001a\u00020\u00102\u0006\u0010\u0011\u001a\u00020\u000e2\f\u0010\u0014\u001a\b\u0012\u0004\u0012\u00020\u00100\u0005H\u0016J4\u0010\u0015\u001a\u00020\u00102\u0006\u0010\u0011\u001a\u00020\u000e2\u001c\u0010\u0014\u001a\u0018\b\u0001\u0012\n\u0012\b\u0012\u0004\u0012\u00020\u00100\u0017\u0012\u0006\u0012\u0004\u0018\u00010\u00180\u0016H\u0096@¢\u0006\u0002\u0010\u0019R\u0010\u0010\u0002\u001a\u0004\u0018\u00010\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u0014\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005X\u0082\u0004¢\u0006\u0002\n\u0000R\u001a\u0010\f\u001a\u000e\u0012\u0004\u0012\u00020\u000e\u0012\u0004\u0012\u00020\u00060\rX\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u001a"}, d2 = {"Lcom/vk/id/tracking/tracer/TracerPerformanceTracker;", "Lcom/vk/id/tracking/core/PerformanceTracker;", "reporter", "Lru/ok/tracer/lite/performance/metrics/TracerPerformanceMetricsLite;", "systemClockProvider", "Lkotlin/Function0;", "", "<init>", "(Lru/ok/tracer/lite/performance/metrics/TracerPerformanceMetricsLite;Lkotlin/jvm/functions/Function0;)V", "tracerLite", "Lru/ok/tracer/lite/TracerLite;", "(Lru/ok/tracer/lite/TracerLite;)V", "startTimes", "Ljava/util/concurrent/ConcurrentHashMap;", "", "startTracking", "", "key", "endTracking", "runTracking", HandleInvocationsFromAdViewer.KEY_ACTION, "runTrackingSuspend", "Lkotlin/Function1;", "Lkotlin/coroutines/Continuation;", "", "(Ljava/lang/String;Lkotlin/jvm/functions/Function1;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "tracking-tracer_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final class TracerPerformanceTracker implements PerformanceTracker {
    private final TracerPerformanceMetricsLite reporter;
    private final ConcurrentHashMap<String, Long> startTimes;
    private final Function0<Long> systemClockProvider;

    /* JADX INFO: renamed from: com.vk.id.tracking.tracer.TracerPerformanceTracker$runTrackingSuspend$1, reason: invalid class name */
    /* JADX INFO: compiled from: TracerPerformanceTracker.kt */
    @Metadata(k = 3, mv = {2, 0, 0}, xi = 48)
    @DebugMetadata(c = "com.vk.id.tracking.tracer.TracerPerformanceTracker", f = "TracerPerformanceTracker.kt", i = {0, 0}, l = {57}, m = "runTrackingSuspend", n = {"this", "key"}, s = {"L$0", "L$1"})
    static final class AnonymousClass1 extends ContinuationImpl {
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
            return TracerPerformanceTracker.this.runTrackingSuspend(null, null, this);
        }
    }

    public TracerPerformanceTracker(TracerPerformanceMetricsLite tracerPerformanceMetricsLite, Function0<Long> systemClockProvider) {
        Intrinsics.checkNotNullParameter(systemClockProvider, "systemClockProvider");
        this.reporter = tracerPerformanceMetricsLite;
        this.systemClockProvider = systemClockProvider;
        this.startTimes = new ConcurrentHashMap<>();
    }

    public /* synthetic */ TracerPerformanceTracker(TracerPerformanceMetricsLite tracerPerformanceMetricsLite, Function0 function0, int i, DefaultConstructorMarker defaultConstructorMarker) {
        this(tracerPerformanceMetricsLite, (i & 2) != 0 ? new Function0() { // from class: com.vk.id.tracking.tracer.TracerPerformanceTracker$$ExternalSyntheticLambda0
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                return Long.valueOf(SystemClock.elapsedRealtimeNanos());
            }
        } : function0);
    }

    /* JADX WARN: Illegal instructions before constructor call */
    /* JADX WARN: Multi-variable type inference failed */
    public TracerPerformanceTracker(TracerLite tracerLite) {
        TracerPerformanceMetricsLite tracerPerformanceMetricsLite;
        Function0 function0 = null;
        Object[] objArr = 0;
        if (tracerLite != null) {
            try {
                tracerPerformanceMetricsLite = new TracerPerformanceMetricsLite(tracerLite);
            } catch (Throwable unused) {
                tracerPerformanceMetricsLite = null;
            }
        } else {
            tracerPerformanceMetricsLite = null;
        }
        this(tracerPerformanceMetricsLite, function0, 2, objArr == true ? 1 : 0);
    }

    @Override // com.vk.id.tracking.core.PerformanceTracker
    public synchronized void startTracking(String key) {
        Intrinsics.checkNotNullParameter(key, "key");
        this.startTimes.put(key, this.systemClockProvider.invoke());
    }

    @Override // com.vk.id.tracking.core.PerformanceTracker
    public synchronized void endTracking(String key) {
        Intrinsics.checkNotNullParameter(key, "key");
        Long lRemove = this.startTimes.remove(key);
        if (lRemove != null) {
            long jLongValue = this.systemClockProvider.invoke().longValue() - lRemove.longValue();
            try {
                TracerPerformanceMetricsLite tracerPerformanceMetricsLite = this.reporter;
                if (tracerPerformanceMetricsLite != null) {
                    tracerPerformanceMetricsLite.sample(key, jLongValue, TimeUnit.NANOSECONDS, new Pair[0]);
                }
            } catch (Throwable unused) {
            }
        }
    }

    @Override // com.vk.id.tracking.core.PerformanceTracker
    public void runTracking(String key, Function0<Unit> action) {
        Intrinsics.checkNotNullParameter(key, "key");
        Intrinsics.checkNotNullParameter(action, "action");
        startTracking(key);
        action.invoke();
        endTracking(key);
    }

    /* JADX WARN: Code duplicated, block: B:7:0x0014  */
    @Override // com.vk.id.tracking.core.PerformanceTracker
    public Object runTrackingSuspend(String str, Function1<? super Continuation<? super Unit>, ? extends Object> function1, Continuation<? super Unit> continuation) {
        AnonymousClass1 anonymousClass1;
        TracerPerformanceTracker tracerPerformanceTracker;
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
        if (i == 0) {
            ResultKt.throwOnFailure(obj);
            startTracking(str);
            anonymousClass1.L$0 = this;
            anonymousClass1.L$1 = str;
            anonymousClass1.label = 1;
            if (function1.invoke(anonymousClass1) == coroutine_suspended) {
                return coroutine_suspended;
            }
            tracerPerformanceTracker = this;
        } else {
            if (i != 1) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            str = (String) anonymousClass1.L$1;
            tracerPerformanceTracker = (TracerPerformanceTracker) anonymousClass1.L$0;
            ResultKt.throwOnFailure(obj);
        }
        tracerPerformanceTracker.endTracking(str);
        return Unit.INSTANCE;
    }
}
