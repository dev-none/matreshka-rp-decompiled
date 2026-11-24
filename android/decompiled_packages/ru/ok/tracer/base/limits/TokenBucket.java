package ru.ok.tracer.base.limits;

import androidx.collection.SieveCacheKt;
import java.util.concurrent.TimeUnit;
import java.util.concurrent.atomic.AtomicInteger;
import java.util.concurrent.atomic.AtomicLong;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.ranges.RangesKt;

/* JADX INFO: compiled from: TokenBucket.kt */
/* JADX INFO: loaded from: classes8.dex */
@Metadata(d1 = {"\u0000:\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\b\n\u0000\n\u0002\u0010\t\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0010\u000b\n\u0002\b\u0004\u0018\u0000 \u00162\u00020\u0001:\u0001\u0016B\u001f\b\u0016\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0007¢\u0006\u0002\u0010\bB\u0017\b\u0002\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\t\u001a\u00020\u0005¢\u0006\u0002\u0010\nJ\u0010\u0010\u000f\u001a\u00020\u00102\u0006\u0010\u0011\u001a\u00020\u0003H\u0002J\u0010\u0010\u0012\u001a\u00020\u00132\b\b\u0002\u0010\u0014\u001a\u00020\u0003J\b\u0010\u0015\u001a\u00020\u0010H\u0002R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u000b\u001a\u00020\fX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\t\u001a\u00020\u0005X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\r\u001a\u00020\u000eX\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u0017"}, d2 = {"Lru/ok/tracer/base/limits/TokenBucket;", "", "capacity", "", "period", "", "unit", "Ljava/util/concurrent/TimeUnit;", "(IJLjava/util/concurrent/TimeUnit;)V", "refillIntervalNs", "(IJ)V", "lastRefillTime", "Ljava/util/concurrent/atomic/AtomicLong;", "tokens", "Ljava/util/concurrent/atomic/AtomicInteger;", "addTokens", "", "amount", "allow", "", "n", "refill", "Companion", "tracer-base_release"}, k = 1, mv = {1, 7, 1}, xi = 48)
public final class TokenBucket {

    /* JADX INFO: renamed from: Companion, reason: from kotlin metadata */
    public static final Companion INSTANCE = new Companion(null);
    private final int capacity;
    private final AtomicLong lastRefillTime;
    private final long refillIntervalNs;
    private final AtomicInteger tokens;

    public /* synthetic */ TokenBucket(int i, long j, DefaultConstructorMarker defaultConstructorMarker) {
        this(i, j);
    }

    private TokenBucket(int i, long j) {
        this.capacity = i;
        this.refillIntervalNs = j;
        this.tokens = new AtomicInteger(i);
        this.lastRefillTime = new AtomicLong(System.nanoTime());
        if (i <= 0) {
            throw new IllegalArgumentException("capacity must be positive".toString());
        }
    }

    /* JADX WARN: 'this' call moved to the top of the method (can break code semantics) */
    public TokenBucket(int i, long j, TimeUnit unit) {
        this(i, unit.toNanos(j) / ((long) i));
        Intrinsics.checkNotNullParameter(unit, "unit");
        if (this.refillIntervalNs <= 0) {
            throw new IllegalStateException("period must be >= capacity to avoid zero refill interval".toString());
        }
    }

    /* JADX INFO: compiled from: TokenBucket.kt */
    @Metadata(d1 = {"\u0000\u0018\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\u0007\b\u0002¢\u0006\u0002\u0010\u0002J\u000e\u0010\u0003\u001a\u00020\u00042\u0006\u0010\u0005\u001a\u00020\u0006¨\u0006\u0007"}, d2 = {"Lru/ok/tracer/base/limits/TokenBucket$Companion;", "", "()V", "oneShot", "Lru/ok/tracer/base/limits/TokenBucket;", "capacity", "", "tracer-base_release"}, k = 1, mv = {1, 7, 1}, xi = 48)
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        private Companion() {
        }

        public final TokenBucket oneShot(int capacity) {
            return new TokenBucket(capacity, Long.MAX_VALUE, (DefaultConstructorMarker) null);
        }
    }

    public static /* synthetic */ boolean allow$default(TokenBucket tokenBucket, int i, int i2, Object obj) {
        if ((i2 & 1) != 0) {
            i = 1;
        }
        return tokenBucket.allow(i);
    }

    public final boolean allow(int n) {
        int i;
        if (n <= 0) {
            throw new IllegalArgumentException("requested tokens must be positive".toString());
        }
        refill();
        do {
            i = this.tokens.get();
            if (i < n) {
                return false;
            }
        } while (!this.tokens.compareAndSet(i, i - n));
        return true;
    }

    private final void refill() {
        long j;
        long j2;
        long j3;
        if (this.refillIntervalNs >= Long.MAX_VALUE) {
            return;
        }
        long jNanoTime = System.nanoTime();
        do {
            j = this.lastRefillTime.get();
            long j4 = jNanoTime - j;
            j2 = this.refillIntervalNs;
            if (j4 < j2) {
                return;
            }
            j3 = j4 / j2;
        } while (!this.lastRefillTime.compareAndSet(j, (j2 * j3) + j));
        addTokens((int) RangesKt.coerceAtMost(j3, SieveCacheKt.NodeLinkMask));
    }

    private final void addTokens(int amount) {
        int i;
        do {
            i = this.tokens.get();
        } while (!this.tokens.compareAndSet(i, Math.min(this.capacity, i + amount)));
    }
}
