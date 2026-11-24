package ru.ok.tracer.lite.performance.metrics.util;

import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import android.os.SystemClock;
import androidx.compose.animation.core.MutatorMutex$$ExternalSyntheticBackportWithForwarding0;
import androidx.core.app.NotificationCompat;
import io.sentry.MonitorConfig;
import java.util.concurrent.atomic.AtomicReference;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: DelayedWork.kt */
/* JADX INFO: loaded from: classes8.dex */
@Metadata(d1 = {"\u0000>\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\t\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u0004\u0018\u0000 \u00152\u00020\u0001:\u0003\u0015\u0016\u0017BC\u0012\b\b\u0002\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\b\b\u0002\u0010\u0006\u001a\u00020\u0005\u0012\b\b\u0002\u0010\u0007\u001a\u00020\u0005\u0012\b\b\u0002\u0010\b\u001a\u00020\u0005\u0012\f\u0010\t\u001a\b\u0012\u0004\u0012\u00020\u000b0\n¢\u0006\u0002\u0010\fJ\u0012\u0010\u0012\u001a\u00020\u000b2\b\b\u0002\u0010\u0013\u001a\u00020\u0014H\u0007R\u0014\u0010\r\u001a\b\u0012\u0004\u0012\u00020\u000f0\u000eX\u0082\u0004¢\u0006\u0002\n\u0000R\u0014\u0010\t\u001a\b\u0012\u0004\u0012\u00020\u000b0\nX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0010\u001a\u00020\u0011X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\b\u001a\u00020\u0005X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0005X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0007\u001a\u00020\u0005X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u0018"}, d2 = {"Lru/ok/tracer/lite/performance/metrics/util/DelayedWork;", "", "looper", "Landroid/os/Looper;", "minDelayMillis", "", "maxDelayMillis", "minAmount", "maxAmount", "block", "Lkotlin/Function0;", "", "(Landroid/os/Looper;JJJJLkotlin/jvm/functions/Function0;)V", "atomicState", "Ljava/util/concurrent/atomic/AtomicReference;", "Lru/ok/tracer/lite/performance/metrics/util/DelayedWork$State;", "handler", "Landroid/os/Handler;", MonitorConfig.JsonKeys.SCHEDULE, "amount", "", "Companion", "State", "WorkCallback", "tracer-lite-performance-metrics_release"}, k = 1, mv = {1, 7, 1}, xi = 48)
public final class DelayedWork {
    private static final Companion Companion = new Companion(null);

    @Deprecated
    private static final int MSG_RUN = 0;
    private final AtomicReference<State> atomicState;
    private final Function0<Unit> block;
    private final Handler handler;
    private final long maxAmount;
    private final long maxDelayMillis;
    private final long minAmount;
    private final long minDelayMillis;

    public final void schedule() {
        schedule$default(this, 0, 1, null);
    }

    public DelayedWork(Looper looper, long j, long j2, long j3, long j4, Function0<Unit> block) {
        Intrinsics.checkNotNullParameter(looper, "looper");
        Intrinsics.checkNotNullParameter(block, "block");
        this.minDelayMillis = j;
        this.maxDelayMillis = j2;
        this.minAmount = j3;
        this.maxAmount = j4;
        this.block = block;
        if (j < 0) {
            throw new IllegalArgumentException("minDelayMillis < 0".toString());
        }
        if (j2 < j) {
            throw new IllegalArgumentException("maxDelayMillis < minDelayMillis".toString());
        }
        if (j3 < 1) {
            throw new IllegalArgumentException("minAmount < 1".toString());
        }
        if (j4 < j3) {
            throw new IllegalArgumentException("maxAmount < minAmount".toString());
        }
        this.handler = new Handler(looper, new WorkCallback());
        this.atomicState = new AtomicReference<>(State.INSTANCE.getNONE());
    }

    /* JADX WARN: Illegal instructions before constructor call */
    public /* synthetic */ DelayedWork(Looper looper, long j, long j2, long j3, long j4, Function0 function0, int i, DefaultConstructorMarker defaultConstructorMarker) {
        if ((i & 1) != 0) {
            looper = Looper.getMainLooper();
            Intrinsics.checkNotNullExpressionValue(looper, "getMainLooper()");
        }
        this(looper, j, (i & 4) != 0 ? Long.MAX_VALUE : j2, (i & 8) != 0 ? 1L : j3, (i & 16) != 0 ? Long.MAX_VALUE : j4, function0);
    }

    public static /* synthetic */ void schedule$default(DelayedWork delayedWork, int i, int i2, Object obj) {
        if ((i2 & 1) != 0) {
            i = 1;
        }
        delayedWork.schedule(i);
    }

    /* JADX WARN: Code duplicated, block: B:11:0x002d  */
    public final void schedule(int amount) {
        long jElapsedRealtime;
        State state;
        long deadlineMillis;
        int i;
        long j;
        long j2;
        if (amount < 0) {
            throw new IllegalArgumentException("amount < 0".toString());
        }
        if (amount == 0) {
            return;
        }
        do {
            jElapsedRealtime = SystemClock.elapsedRealtime();
            state = this.atomicState.get();
            int collectedAmount = state.getCollectedAmount();
            deadlineMillis = state.getDeadlineMillis();
            long j3 = collectedAmount;
            long j4 = this.maxAmount;
            if (j3 > j4) {
                return;
            }
            i = collectedAmount + amount;
            if (collectedAmount != 0) {
                if (deadlineMillis < Long.MAX_VALUE) {
                    j = deadlineMillis;
                } else {
                    long j5 = this.maxDelayMillis;
                    if (j5 < Long.MAX_VALUE) {
                        j = j5 + jElapsedRealtime;
                    } else {
                        j = Long.MAX_VALUE;
                        j2 = Long.MAX_VALUE;
                    }
                }
                j2 = Long.MAX_VALUE;
            } else {
                j = Long.MAX_VALUE;
                j2 = Long.MAX_VALUE;
            }
            long j6 = i;
            if (j6 > j4) {
                deadlineMillis = jElapsedRealtime;
            } else if (j6 >= this.minAmount) {
                deadlineMillis = Math.min(this.minDelayMillis + jElapsedRealtime, deadlineMillis);
            }
        } while (!MutatorMutex$$ExternalSyntheticBackportWithForwarding0.m(this.atomicState, state, new State(j, i)));
        this.handler.removeMessages(0);
        if (deadlineMillis < j2) {
            this.handler.sendEmptyMessageDelayed(0, deadlineMillis - jElapsedRealtime);
        }
    }

    /* JADX INFO: compiled from: DelayedWork.kt */
    @Metadata(d1 = {"\u0000\u0018\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\t\n\u0000\n\u0002\u0010\b\n\u0002\b\u0007\b\u0002\u0018\u0000 \u000b2\u00020\u0001:\u0001\u000bB\u0015\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005¢\u0006\u0002\u0010\u0006R\u0011\u0010\u0004\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u0007\u0010\bR\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\t\u0010\n¨\u0006\f"}, d2 = {"Lru/ok/tracer/lite/performance/metrics/util/DelayedWork$State;", "", "deadlineMillis", "", "collectedAmount", "", "(JI)V", "getCollectedAmount", "()I", "getDeadlineMillis", "()J", "Companion", "tracer-lite-performance-metrics_release"}, k = 1, mv = {1, 7, 1}, xi = 48)
    private static final class State {

        /* JADX INFO: renamed from: Companion, reason: from kotlin metadata */
        public static final Companion INSTANCE = new Companion(null);
        private static final State NONE = new State(Long.MAX_VALUE, 0);
        private final int collectedAmount;
        private final long deadlineMillis;

        public State(long j, int i) {
            this.deadlineMillis = j;
            this.collectedAmount = i;
        }

        public final long getDeadlineMillis() {
            return this.deadlineMillis;
        }

        public final int getCollectedAmount() {
            return this.collectedAmount;
        }

        /* JADX INFO: compiled from: DelayedWork.kt */
        @Metadata(d1 = {"\u0000\u0014\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\b\u0086\u0003\u0018\u00002\u00020\u0001B\u0007\b\u0002¢\u0006\u0002\u0010\u0002R\u0011\u0010\u0003\u001a\u00020\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u0005\u0010\u0006¨\u0006\u0007"}, d2 = {"Lru/ok/tracer/lite/performance/metrics/util/DelayedWork$State$Companion;", "", "()V", "NONE", "Lru/ok/tracer/lite/performance/metrics/util/DelayedWork$State;", "getNONE", "()Lru/ok/tracer/lite/performance/metrics/util/DelayedWork$State;", "tracer-lite-performance-metrics_release"}, k = 1, mv = {1, 7, 1}, xi = 48)
        public static final class Companion {
            public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
                this();
            }

            private Companion() {
            }

            public final State getNONE() {
                return State.NONE;
            }
        }
    }

    /* JADX INFO: compiled from: DelayedWork.kt */
    @Metadata(d1 = {"\u0000\u0018\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u000b\n\u0000\n\u0002\u0018\u0002\n\u0000\b\u0082\u0004\u0018\u00002\u00020\u0001B\u0005¢\u0006\u0002\u0010\u0002J\u0010\u0010\u0003\u001a\u00020\u00042\u0006\u0010\u0005\u001a\u00020\u0006H\u0016¨\u0006\u0007"}, d2 = {"Lru/ok/tracer/lite/performance/metrics/util/DelayedWork$WorkCallback;", "Landroid/os/Handler$Callback;", "(Lru/ok/tracer/lite/performance/metrics/util/DelayedWork;)V", "handleMessage", "", NotificationCompat.CATEGORY_MESSAGE, "Landroid/os/Message;", "tracer-lite-performance-metrics_release"}, k = 1, mv = {1, 7, 1}, xi = 48)
    private final class WorkCallback implements Handler.Callback {
        public WorkCallback() {
        }

        @Override // android.os.Handler.Callback
        public boolean handleMessage(Message msg) {
            Intrinsics.checkNotNullParameter(msg, "msg");
            DelayedWork.this.atomicState.set(State.INSTANCE.getNONE());
            DelayedWork.this.block.invoke();
            return true;
        }
    }

    /* JADX INFO: compiled from: DelayedWork.kt */
    @Metadata(d1 = {"\u0000\u0012\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0010\b\n\u0000\b\u0082\u0003\u0018\u00002\u00020\u0001B\u0007\b\u0002¢\u0006\u0002\u0010\u0002R\u000e\u0010\u0003\u001a\u00020\u0004X\u0082T¢\u0006\u0002\n\u0000¨\u0006\u0005"}, d2 = {"Lru/ok/tracer/lite/performance/metrics/util/DelayedWork$Companion;", "", "()V", "MSG_RUN", "", "tracer-lite-performance-metrics_release"}, k = 1, mv = {1, 7, 1}, xi = 48)
    private static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        private Companion() {
        }
    }
}
