package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreutils.internal.time.SystemTimeProvider;
import io.appmetrica.analytics.coreutils.internal.time.TimeProvider;
import java.util.concurrent.TimeUnit;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.ck, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2049ck {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public volatile long f6033a;
    public C2095ef b;
    public TimeProvider c;

    public static C2049ck c() {
        return AbstractC2023bk.f6018a;
    }

    public final synchronized long a() {
        return (System.currentTimeMillis() / 1000) + this.f6033a;
    }

    public final synchronized void b() {
        this.b.d(false);
        this.b.b();
    }

    public final synchronized long d() {
        return this.f6033a;
    }

    public final synchronized void e() {
        a(C2495ua.H.z(), new SystemTimeProvider());
    }

    public final synchronized boolean f() {
        return this.b.b(true);
    }

    public final synchronized void a(long j, Long l) {
        this.f6033a = (j - this.c.currentTimeMillis()) / 1000;
        boolean z = true;
        if (this.b.b(true)) {
            if (l != null) {
                long jAbs = Math.abs(j - this.c.currentTimeMillis());
                C2095ef c2095ef = this.b;
                if (jAbs <= TimeUnit.SECONDS.toMillis(l.longValue())) {
                    z = false;
                }
                c2095ef.d(z);
            } else {
                this.b.d(false);
            }
        }
        this.b.d(this.f6033a);
        this.b.b();
    }

    public final void a(C2095ef c2095ef, TimeProvider timeProvider) {
        this.b = c2095ef;
        this.f6033a = c2095ef.a(0);
        this.c = timeProvider;
    }
}
