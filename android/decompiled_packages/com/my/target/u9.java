package com.my.target;

import android.os.Handler;
import android.os.Looper;
import java.io.Closeable;
import java.util.ArrayList;
import java.util.WeakHashMap;

/* JADX INFO: loaded from: classes6.dex */
public final class u9 implements Closeable {
    public static final u9 d = new u9(1000);
    public static final Handler e = new Handler(Looper.getMainLooper());

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final int f4835a;
    public final WeakHashMap b = new WeakHashMap();
    public final Runnable c = new Runnable() { // from class: com.my.target.u9$$ExternalSyntheticLambda0
        @Override // java.lang.Runnable
        public final void run() {
            this.f$0.b();
        }
    };

    public u9(int i) {
        this.f4835a = i;
    }

    public static u9 a(int i) {
        return new u9(i);
    }

    public void b(Runnable runnable) {
        synchronized (this) {
            this.b.remove(runnable);
            if (this.b.size() == 0) {
                e.removeCallbacks(this.c);
            }
        }
    }

    @Override // java.io.Closeable, java.lang.AutoCloseable
    public void close() {
        this.b.clear();
        e.removeCallbacks(this.c);
    }

    public void a(Runnable runnable) {
        synchronized (this) {
            int size = this.b.size();
            if (this.b.put(runnable, Boolean.TRUE) == null && size == 0) {
                a();
            }
        }
    }

    public void b() {
        synchronized (this) {
            ArrayList arrayList = new ArrayList(this.b.keySet());
            int size = arrayList.size();
            int i = 0;
            while (i < size) {
                Object obj = arrayList.get(i);
                i++;
                ((Runnable) obj).run();
            }
            if (this.b.keySet().size() > 0) {
                a();
            }
        }
    }

    public final void a() {
        e.postDelayed(this.c, this.f4835a);
    }
}
