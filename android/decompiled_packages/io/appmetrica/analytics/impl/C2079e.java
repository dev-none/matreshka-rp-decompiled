package io.appmetrica.analytics.impl;

import android.os.Handler;
import android.os.Looper;
import io.appmetrica.analytics.logger.appmetrica.internal.PublicLogger;
import java.util.concurrent.CopyOnWriteArrayList;
import java.util.concurrent.TimeUnit;
import java.util.concurrent.atomic.AtomicBoolean;
import java.util.concurrent.atomic.AtomicInteger;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.e, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2079e {
    public static final long g = TimeUnit.SECONDS.toMillis(1);
    public static final String h = "WatchDog-" + Gd.f5690a.incrementAndGet();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final CopyOnWriteArrayList f6052a;
    public final AtomicInteger b;
    public final Handler c;
    public C2054d d;
    public final AtomicBoolean e;
    public final Runnable f;

    public C2079e(Kb kb) {
        CopyOnWriteArrayList copyOnWriteArrayList = new CopyOnWriteArrayList();
        this.f6052a = copyOnWriteArrayList;
        this.b = new AtomicInteger();
        this.c = new Handler(Looper.getMainLooper());
        this.e = new AtomicBoolean();
        this.f = new Runnable() { // from class: io.appmetrica.analytics.impl.e$$ExternalSyntheticLambda0
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.a();
            }
        };
        copyOnWriteArrayList.add(kb);
    }

    public final /* synthetic */ void a() {
        this.e.set(true);
    }

    public final synchronized void b() {
        C2054d c2054d = this.d;
        if (c2054d != null) {
            c2054d.f6035a.set(false);
            this.d = null;
            PublicLogger.getAnonymousInstance().info("Stop ANR monitoring", new Object[0]);
        }
    }

    public final synchronized void a(int i) {
        AtomicInteger atomicInteger = this.b;
        Integer numValueOf = Integer.valueOf(i);
        int i2 = 5;
        if (numValueOf != null) {
            numValueOf.getClass();
            if (i >= 5) {
                numValueOf.getClass();
                i2 = i;
            }
        }
        atomicInteger.set(i2);
        if (this.d == null) {
            C2054d c2054d = new C2054d(this);
            this.d = c2054d;
            try {
                c2054d.setName(h);
            } catch (SecurityException unused) {
            }
            this.d.start();
            PublicLogger.getAnonymousInstance().info("Start ANR monitoring with timeout: %s seconds", Integer.valueOf(i));
        }
    }
}
