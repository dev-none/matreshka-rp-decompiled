package io.appmetrica.analytics.impl;

import android.os.Handler;
import android.os.Looper;
import io.appmetrica.analytics.coreapi.internal.executors.IHandlerExecutor;
import io.appmetrica.analytics.coreapi.internal.executors.InterruptionSafeThread;
import io.appmetrica.analytics.modulesapi.internal.common.ExecutorProvider;
import java.util.concurrent.Executor;

/* JADX INFO: loaded from: classes7.dex */
public final class F9 implements ExecutorProvider {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final C2356ok f5673a;
    public final IHandlerExecutor b;

    public F9() {
        C2356ok c2356okX = C2495ua.k().x();
        this.f5673a = c2356okX;
        this.b = c2356okX.c();
    }

    @Override // io.appmetrica.analytics.modulesapi.internal.common.ExecutorProvider
    public final IHandlerExecutor getDefaultExecutor() {
        return this.f5673a.a();
    }

    @Override // io.appmetrica.analytics.modulesapi.internal.common.ExecutorProvider
    public final InterruptionSafeThread getInterruptionThread(String str, String str2, Runnable runnable) {
        return new InterruptionSafeThread(runnable, (str + '-' + str2) + "-" + Gd.f5690a.incrementAndGet());
    }

    @Override // io.appmetrica.analytics.modulesapi.internal.common.ExecutorProvider
    public final IHandlerExecutor getModuleExecutor() {
        return this.b;
    }

    @Override // io.appmetrica.analytics.modulesapi.internal.common.ExecutorProvider
    public final Executor getReportRunnableExecutor() {
        return this.f5673a.e();
    }

    @Override // io.appmetrica.analytics.modulesapi.internal.common.ExecutorProvider
    public final IHandlerExecutor getSupportIOExecutor() {
        C2356ok c2356ok = this.f5673a;
        if (c2356ok.f == null) {
            synchronized (c2356ok) {
                if (c2356ok.f == null) {
                    c2356ok.f6244a.getClass();
                    HandlerThreadC2220jb handlerThreadC2220jbA = G9.a("IAA-SIO");
                    c2356ok.f = new G9(handlerThreadC2220jbA, handlerThreadC2220jbA.getLooper(), new Handler(handlerThreadC2220jbA.getLooper()));
                }
            }
        }
        return c2356ok.f;
    }

    @Override // io.appmetrica.analytics.modulesapi.internal.common.ExecutorProvider
    public final Executor getUiExecutor() {
        C2356ok c2356ok = this.f5673a;
        if (c2356ok.h == null) {
            synchronized (c2356ok) {
                if (c2356ok.h == null) {
                    c2356ok.f6244a.getClass();
                    c2356ok.h = new ExecutorC2306mk(new Handler(Looper.getMainLooper()));
                }
            }
        }
        return c2356ok.h;
    }
}
