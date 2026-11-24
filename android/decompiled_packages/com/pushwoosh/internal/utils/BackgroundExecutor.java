package com.pushwoosh.internal.utils;

import com.pushwoosh.e0.c;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;

/* JADX INFO: loaded from: classes6.dex */
public final class BackgroundExecutor {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final ExecutorService f5217a = Executors.newSingleThreadExecutor();
    private static final ExecutorService b = Executors.newSingleThreadExecutor();
    private static final ExecutorService c = Executors.newFixedThreadPool(4);

    /* JADX INFO: Access modifiers changed from: private */
    public static /* synthetic */ void a(Runnable runnable) {
        try {
            runnable.run();
        } catch (Throwable th) {
            PWLog.error("BackgroundExecutor", "Uncaught exception in background task", th);
        }
    }

    private static Runnable b(final Runnable runnable) {
        return new Runnable() { // from class: com.pushwoosh.internal.utils.BackgroundExecutor$$ExternalSyntheticLambda0
            @Override // java.lang.Runnable
            public final void run() {
                BackgroundExecutor.a(runnable);
            }
        };
    }

    public static void execute(Runnable runnable) {
        b.execute(b(runnable));
    }

    public static void executeOnPool(Runnable runnable) {
        c.execute(b(runnable));
    }

    public static void main(Runnable runnable) {
        c.f5066a.post(b(runnable));
    }

    public static void network(Runnable runnable) {
        f5217a.execute(b(runnable));
    }
}
