package io.appmetrica.analytics.impl;

import android.content.Context;
import java.util.concurrent.locks.ReentrantLock;

/* JADX INFO: loaded from: classes7.dex */
public final class E9 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final ReentrantLock f5656a;
    public final C2116fa b;

    public E9(Context context, String str) {
        this(new ReentrantLock(), new C2116fa(context, str));
    }

    public final void a() {
        this.f5656a.lock();
        this.b.a();
    }

    public final void b() {
        this.b.b();
        this.f5656a.unlock();
    }

    public final void c() {
        C2116fa c2116fa = this.b;
        synchronized (c2116fa) {
            c2116fa.b();
            c2116fa.f6074a.delete();
        }
        this.f5656a.unlock();
    }

    public E9(ReentrantLock reentrantLock, C2116fa c2116fa) {
        this.f5656a = reentrantLock;
        this.b = c2116fa;
    }
}
