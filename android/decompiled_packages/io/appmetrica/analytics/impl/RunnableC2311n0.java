package io.appmetrica.analytics.impl;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.n0, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class RunnableC2311n0 implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ C2361p0 f6216a;

    public RunnableC2311n0(C2361p0 c2361p0) {
        this.f6216a = c2361p0;
    }

    @Override // java.lang.Runnable
    public final void run() {
        C2361p0 c2361p0 = this.f6216a;
        synchronized (c2361p0) {
            if (c2361p0.f6247a != null && c2361p0.a()) {
                try {
                    c2361p0.d = null;
                    c2361p0.f6247a.unbindService(c2361p0.i);
                } catch (Throwable unused) {
                }
            }
            c2361p0.d = null;
        }
    }
}
