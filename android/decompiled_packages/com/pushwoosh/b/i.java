package com.pushwoosh.b;

import android.os.Handler;

/* JADX INFO: loaded from: classes6.dex */
public final class i {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Handler f5041a;
    public final long b;
    public final Runnable c;
    public final Runnable d = new Runnable() { // from class: com.pushwoosh.b.i$$ExternalSyntheticLambda0
        @Override // java.lang.Runnable
        public final void run() {
            this.f$0.a();
        }
    };
    public boolean e;

    public i(Handler handler, long j, Runnable runnable) {
        this.f5041a = handler;
        this.b = j;
        this.c = runnable;
    }

    public final void a() {
        if (this.e) {
            this.e = false;
            this.c.run();
        }
    }
}
