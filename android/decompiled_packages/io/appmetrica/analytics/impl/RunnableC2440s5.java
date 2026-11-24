package io.appmetrica.analytics.impl;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.s5, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class RunnableC2440s5 implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ InterfaceC2172he f6306a;
    public final /* synthetic */ C2465t5 b;

    public RunnableC2440s5(C2465t5 c2465t5, InterfaceC2172he interfaceC2172he) {
        this.b = c2465t5;
        this.f6306a = interfaceC2172he;
    }

    @Override // java.lang.Runnable
    public final void run() {
        synchronized (this.b) {
            C2465t5 c2465t5 = this.b;
            Object obj = c2465t5.f6326a;
            if (obj == null) {
                c2465t5.b.add(this.f6306a);
            } else {
                this.f6306a.consume(obj);
            }
        }
    }
}
