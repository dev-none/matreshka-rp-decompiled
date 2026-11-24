package io.appmetrica.analytics.impl;

/* JADX INFO: loaded from: classes7.dex */
public final class Kb implements InterfaceC2028c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final InterfaceC2132g0 f5759a;
    public final Fn b = new Fn();

    public Kb(InterfaceC2132g0 interfaceC2132g0) {
        this.f5759a = interfaceC2132g0;
    }

    public static final void a(Kb kb, V v) {
        kb.f5759a.a(v);
    }

    @Override // io.appmetrica.analytics.impl.InterfaceC2028c
    public final void onAppNotResponding() {
        StackTraceElement[] stackTraceElementArrB;
        Fn fn = this.b;
        Thread threadA = fn.f5680a.a();
        try {
            stackTraceElementArrB = fn.f5680a.b();
            if (stackTraceElementArrB == null) {
                try {
                    stackTraceElementArrB = threadA.getStackTrace();
                } catch (SecurityException unused) {
                }
            }
        } catch (SecurityException unused2) {
            stackTraceElementArrB = null;
        }
        final V v = new V((C2608yn) fn.b.apply(threadA, stackTraceElementArrB), fn.a(threadA, null), fn.c.a());
        ((G9) C2213j4.l().c.a()).b.post(new Runnable() { // from class: io.appmetrica.analytics.impl.Kb$$ExternalSyntheticLambda0
            @Override // java.lang.Runnable
            public final void run() {
                Kb.a(this.f$0, v);
            }
        });
    }
}
