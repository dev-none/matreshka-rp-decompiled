package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreutils.internal.logger.LoggerStorage;
import java.util.ArrayList;
import java.util.concurrent.atomic.AtomicBoolean;

/* JADX INFO: loaded from: classes7.dex */
public final class X1 implements Thread.UncaughtExceptionHandler {
    public static final AtomicBoolean e = new AtomicBoolean();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Ma f5949a;
    public final C2591y6 b = C2213j4.l().n();
    public final C2516v6 c = new C2516v6();
    public final Fn d = new Fn();

    public X1(C2416r6 c2416r6) {
        this.f5949a = c2416r6;
    }

    @Override // java.lang.Thread.UncaughtExceptionHandler
    public final void uncaughtException(Thread thread, Throwable th) {
        StackTraceElement[] stackTraceElementArrB;
        try {
            e.set(true);
            Ma ma = this.f5949a;
            C2608yn c2608ynApply = this.c.apply(thread);
            Fn fn = this.d;
            Thread threadA = fn.f5680a.a();
            ArrayList arrayListA = fn.a(threadA, thread);
            if (thread != threadA) {
                try {
                    stackTraceElementArrB = fn.f5680a.b();
                    if (stackTraceElementArrB == null) {
                        try {
                            stackTraceElementArrB = threadA.getStackTrace();
                        } catch (SecurityException unused) {
                        }
                    }
                } catch (SecurityException unused2) {
                    stackTraceElementArrB = null;
                }
                arrayListA.add(0, (C2608yn) fn.b.apply(threadA, stackTraceElementArrB));
            }
            ma.a(th, new V(c2608ynApply, arrayListA, this.b.f6410a.a()));
        } catch (Throwable th2) {
            LoggerStorage.getMainPublicOrAnonymousLogger().error(th2, th2.getMessage(), new Object[0]);
        }
    }
}
