package io.appmetrica.analytics.impl;

import android.content.Context;

/* JADX INFO: loaded from: classes7.dex */
public final class Gg implements Ul, Na {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Context f5693a;
    public final X4 b;
    public final Y4 c;
    public final Em d;
    public final Wa e;

    public Gg(Context context, X4 x4, C2539w4 c2539w4, InterfaceC2111f5 interfaceC2111f5, Y4 y4, Ll ll) {
        this.f5693a = context;
        this.b = x4;
        this.c = y4;
        Em emA = ll.a(context, x4, c2539w4.f6378a);
        this.d = emA;
        this.e = interfaceC2111f5.a(context, x4, c2539w4.b, emA);
        ll.a(x4, this);
    }

    public final X4 a() {
        return this.b;
    }

    public final Context b() {
        return this.f5693a;
    }

    public final void a(InterfaceC2290m4 interfaceC2290m4) {
        this.c.f5965a.add(interfaceC2290m4);
    }

    public final void b(InterfaceC2290m4 interfaceC2290m4) {
        this.c.f5965a.remove(interfaceC2290m4);
    }

    @Override // io.appmetrica.analytics.impl.Ul
    public final void a(C2231jm c2231jm) {
        ((C2085e5) this.e).a(c2231jm);
    }

    @Override // io.appmetrica.analytics.impl.Ul
    public final void a(Nl nl, C2231jm c2231jm) {
        ((C2085e5) this.e).getClass();
    }

    @Override // io.appmetrica.analytics.impl.Na
    public final void a(C2539w4 c2539w4) {
        this.d.a(c2539w4.f6378a);
        this.e.a(c2539w4.b);
    }

    public final void a(W5 w5, C2539w4 c2539w4) {
        if (!D9.c.contains(EnumC2195ib.a(w5.d))) {
            this.e.a(c2539w4.b);
        }
        ((C2085e5) this.e).a(w5);
    }

    public Gg(Context context, X4 x4, C2539w4 c2539w4, InterfaceC2111f5 interfaceC2111f5) {
        this(context, x4, c2539w4, interfaceC2111f5, new Y4(), Ll.a());
    }
}
