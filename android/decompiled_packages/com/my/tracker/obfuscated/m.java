package com.my.tracker.obfuscated;

import android.os.Handler;
import android.os.Looper;
import androidx.browser.customtabs.CustomTabsClient$2$$ExternalSyntheticLambda3;
import java.util.ArrayDeque;
import java.util.concurrent.Executor;
import java.util.concurrent.Executors;

/* JADX INFO: loaded from: classes6.dex */
public abstract class m {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final Handler f4967a;
    public static final Executor b;
    public static final Executor c;
    public static final Executor d;
    public static final Executor e;
    public static final Executor f;
    private static final Executor g;
    private static final a h;

    static {
        Handler handler = new Handler(Looper.getMainLooper());
        f4967a = handler;
        b = Executors.newSingleThreadExecutor();
        c = Executors.newSingleThreadExecutor();
        d = Executors.newSingleThreadExecutor();
        e = Executors.newSingleThreadExecutor();
        f = Executors.newSingleThreadExecutor();
        g = new CustomTabsClient$2$$ExternalSyntheticLambda3(handler);
        h = new a();
    }

    public static void a(Runnable runnable) {
        b.execute(h.a(runnable));
    }

    public static void b(Runnable runnable) {
        c.execute(h.a(runnable));
    }

    public static void c(Runnable runnable) {
        d.execute(h.a(runnable));
    }

    public static void d(Runnable runnable) {
        e.execute(h.a(runnable));
    }

    public static void e(Runnable runnable) {
        f.execute(h.a(runnable));
    }

    public static void f(Runnable runnable) {
        Runnable runnableA = h.a(runnable);
        if (Looper.getMainLooper() == Looper.myLooper()) {
            runnableA.run();
        } else {
            g.execute(runnableA);
        }
    }

    static final class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final ArrayDeque f4968a = new ArrayDeque();

        /* JADX INFO: renamed from: com.my.tracker.obfuscated.m$a$a, reason: collision with other inner class name */
        static final class RunnableC1178a implements Runnable {

            /* JADX INFO: renamed from: a, reason: collision with root package name */
            final a f4969a;
            volatile Runnable b;

            RunnableC1178a(a aVar) {
                this.f4969a = aVar;
            }

            @Override // java.lang.Runnable
            public void run() {
                try {
                    Runnable runnable = this.b;
                    if (runnable != null) {
                        runnable.run();
                    }
                    a aVar = this.f4969a;
                    if (aVar != null) {
                        aVar.a(this);
                    }
                } catch (Throwable th) {
                    try {
                        x2.b("RunnableThrowableDecorator: exception has been caught", th);
                    } finally {
                        a aVar2 = this.f4969a;
                        if (aVar2 != null) {
                            aVar2.a(this);
                        }
                    }
                }
            }
        }

        a() {
            for (int i = 0; i < 64; i++) {
                this.f4968a.add(new RunnableC1178a(this));
            }
        }

        public Runnable a(Runnable runnable) {
            RunnableC1178a runnableC1178a;
            synchronized (this) {
                runnableC1178a = (RunnableC1178a) this.f4968a.pollFirst();
            }
            if (runnableC1178a == null) {
                runnableC1178a = new RunnableC1178a(null);
            }
            runnableC1178a.b = runnable;
            return runnableC1178a;
        }

        void a(RunnableC1178a runnableC1178a) {
            synchronized (this) {
                runnableC1178a.b = null;
                this.f4968a.add(runnableC1178a);
            }
        }
    }
}
