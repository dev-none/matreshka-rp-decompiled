package io.appmetrica.analytics.impl;

import android.content.Context;
import io.appmetrica.analytics.AppMetricaLibraryAdapterConfig;
import io.appmetrica.analytics.coreapi.internal.executors.IHandlerExecutor;
import io.appmetrica.analytics.coreutils.internal.logger.LoggerStorage;
import java.util.concurrent.TimeUnit;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.b0, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2003b0 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final C2560x0 f6008a;
    public final C2024bl b;
    public final Z3 c;
    public final long d = TimeUnit.SECONDS.toMillis(10);

    public C2003b0(C2560x0 c2560x0, C2024bl c2024bl, Z3 z3) {
        this.f6008a = c2560x0;
        this.b = c2024bl;
        this.c = z3;
    }

    public final synchronized void a(final Context context, final AppMetricaLibraryAdapterConfig appMetricaLibraryAdapterConfig) {
        this.f6008a.getClass();
        if (C2560x0.a()) {
            return;
        }
        LoggerStorage.getMainPublicOrAnonymousLogger().info("Session autotracking enabled", new Object[0]);
        this.b.a();
        this.f6008a.getClass();
        C2535w0 c2535w0A = C2535w0.a(context);
        c2535w0A.d.a(null, c2535w0A);
        IHandlerExecutor iHandlerExecutorA = this.c.a();
        ((G9) iHandlerExecutorA).b.post(new Runnable() { // from class: io.appmetrica.analytics.impl.b0$$ExternalSyntheticLambda0
            @Override // java.lang.Runnable
            public final void run() {
                C2003b0.a(this.f$0, context, appMetricaLibraryAdapterConfig);
            }
        });
        this.f6008a.getClass();
        C2560x0.b();
    }

    public static final void a(C2003b0 c2003b0, Context context, AppMetricaLibraryAdapterConfig appMetricaLibraryAdapterConfig) {
        c2003b0.f6008a.getClass();
        C2535w0 c2535w0A = C2535w0.a(context);
        c2535w0A.f().a(appMetricaLibraryAdapterConfig);
        C2213j4.l().c.a().execute(new RunnableC2511v1(c2535w0A.f6377a));
    }
}
