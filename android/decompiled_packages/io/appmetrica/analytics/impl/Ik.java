package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreutils.internal.time.SystemTimeProvider;
import java.util.concurrent.atomic.AtomicLong;

/* JADX INFO: loaded from: classes7.dex */
public final class Ik {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final C2085e5 f5732a;
    public final Zk b;
    public final Lk c;
    public long d;
    public long e;
    public AtomicLong f;
    public boolean g;
    public volatile Xk h;
    public long i;
    public long j;
    public final SystemTimeProvider k;

    public Ik(C2085e5 c2085e5, Zk zk, Lk lk, SystemTimeProvider systemTimeProvider) {
        this.f5732a = c2085e5;
        this.b = zk;
        this.c = lk;
        this.k = systemTimeProvider;
        a();
    }

    public final void a() {
        Lk lk = this.c;
        long jElapsedRealtime = this.k.elapsedRealtime();
        Long l = lk.c;
        if (l != null) {
            jElapsedRealtime = l.longValue();
        }
        this.e = jElapsedRealtime;
        Long l2 = this.c.b;
        this.d = l2 == null ? -1L : l2.longValue();
        Long l3 = this.c.e;
        this.f = new AtomicLong(l3 == null ? 0L : l3.longValue());
        Boolean bool = this.c.f;
        this.g = bool == null ? true : bool.booleanValue();
        Long l4 = this.c.g;
        long jLongValue = l4 != null ? l4.longValue() : 0L;
        this.i = jLongValue;
        Lk lk2 = this.c;
        long jLongValue2 = jLongValue - this.e;
        Long l5 = lk2.h;
        if (l5 != null) {
            jLongValue2 = l5.longValue();
        }
        this.j = jLongValue2;
    }

    public final String toString() {
        return "Session{id=" + this.d + ", creationTime=" + this.e + ", currentReportId=" + this.f + ", sessionRequestParams=" + this.h + ", sleepStart=" + this.i + '}';
    }
}
