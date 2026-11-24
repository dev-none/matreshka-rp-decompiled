package com.my.tracker.obfuscated;

import android.os.Handler;
import java.util.concurrent.atomic.AtomicBoolean;

/* JADX INFO: loaded from: classes6.dex */
public class w2 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final Handler f5006a = m.f4967a;
    final AtomicBoolean b;
    final Runnable c;
    final long d;

    private w2(long j, final Runnable runnable) {
        AtomicBoolean atomicBoolean = new AtomicBoolean(false);
        this.b = atomicBoolean;
        this.d = j;
        this.c = new Runnable() { // from class: com.my.tracker.obfuscated.w2$$ExternalSyntheticLambda0
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.a(runnable);
            }
        };
        atomicBoolean.set(false);
    }

    public static w2 a(long j, Runnable runnable) {
        return new w2(j, runnable);
    }

    private void c() {
        this.f5006a.removeCallbacks(this.c);
        this.b.set(true);
        this.f5006a.postDelayed(this.c, this.d);
    }

    public boolean b() {
        boolean z;
        synchronized (this.b) {
            z = !this.b.get();
        }
        return z;
    }

    public void d() {
        synchronized (this.b) {
            if (a()) {
                c();
            }
        }
    }

    public void e() {
        synchronized (this.b) {
            if (this.b.get()) {
                return;
            }
            c();
        }
    }

    public void f() {
        synchronized (this.b) {
            this.b.set(false);
            this.f5006a.removeCallbacks(this.c);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public /* synthetic */ void a(Runnable runnable) {
        synchronized (this.b) {
            if (this.b.get()) {
                c();
                runnable.run();
            }
        }
    }

    public boolean a() {
        boolean z;
        synchronized (this.b) {
            z = !b();
        }
        return z;
    }
}
