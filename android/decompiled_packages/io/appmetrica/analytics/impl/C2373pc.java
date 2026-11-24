package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.AnrListener;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.pc, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2373pc {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public int f6256a = 5;
    public final C2079e b;

    public C2373pc(InterfaceC2132g0 interfaceC2132g0) {
        this.b = new C2079e(new Kb(interfaceC2132g0));
    }

    public static final void b(AnrListener anrListener) {
        anrListener.onAppNotResponding();
    }

    public final void a(final AnrListener anrListener) {
        C2079e c2079e = this.b;
        c2079e.f6052a.add(new InterfaceC2028c() { // from class: io.appmetrica.analytics.impl.pc$$ExternalSyntheticLambda0
            @Override // io.appmetrica.analytics.impl.InterfaceC2028c
            public final void onAppNotResponding() {
                C2373pc.b(anrListener);
            }
        });
    }
}
