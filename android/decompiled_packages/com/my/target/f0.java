package com.my.target;

import android.os.Handler;
import android.os.Looper;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.concurrent.Executor;
import java.util.concurrent.Executors;
import java.util.concurrent.atomic.AtomicBoolean;

/* JADX INFO: loaded from: classes6.dex */
public abstract class f0 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final Executor f4613a = Executors.newFixedThreadPool(6);
    public static final Executor b = Executors.newSingleThreadExecutor();
    public static final Executor c = Executors.newFixedThreadPool(6);
    public static final Executor d = Executors.newSingleThreadExecutor();
    public static final Executor e = Executors.newSingleThreadExecutor();
    public static final List f = new ArrayList();
    public static final Handler g = new Handler(Looper.getMainLooper());
    public static final Executor h = new a();
    public static final AtomicBoolean i = new AtomicBoolean();

    public class a implements Executor {
        @Override // java.util.concurrent.Executor
        public void execute(Runnable runnable) {
            f0.g.post(runnable);
        }
    }

    public static void a(Runnable runnable) {
        AtomicBoolean atomicBoolean = i;
        if (!atomicBoolean.get()) {
            List list = f;
            synchronized (list) {
                if (!atomicBoolean.get()) {
                    list.add(runnable);
                    gb.b("AsyncCommand", "Can't use onAdLoadExecutor - sdk initialize not finished");
                    return;
                }
            }
        }
        c.execute(runnable);
    }

    public static void b(Runnable runnable) {
        b.execute(runnable);
    }

    public static void c(Runnable runnable) {
        f4613a.execute(runnable);
    }

    public static void d(Runnable runnable) {
        e.execute(runnable);
    }

    public static void e(Runnable runnable) {
        d.execute(runnable);
    }

    public static void f(Runnable runnable) {
        h.execute(runnable);
    }

    public static void b() {
        List list = f;
        synchronized (list) {
            Iterator it = list.iterator();
            while (it.hasNext()) {
                c.execute((Runnable) it.next());
            }
            f.clear();
            i.set(true);
        }
    }

    public static void a(Runnable runnable, int i2) {
        g.postDelayed(runnable, i2);
    }

    public static boolean a() {
        return Looper.myLooper() == Looper.getMainLooper();
    }
}
