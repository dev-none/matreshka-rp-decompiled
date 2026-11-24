package io.appmetrica.analytics.impl;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.ug, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public class C2501ug {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Ua f6352a;
    public final InterfaceC2377pg b;
    public final Sa c;

    public C2501ug(Ua ua, InterfaceC2377pg interfaceC2377pg, Sa sa) {
        this.f6352a = ua;
        this.b = interfaceC2377pg;
        this.c = sa;
    }

    public final void a(C2451sg c2451sg) {
        if (this.f6352a.a(c2451sg)) {
            this.b.a(c2451sg);
            this.c.a();
        }
    }

    public final InterfaceC2377pg b() {
        return this.b;
    }

    public final Sa c() {
        return this.c;
    }

    public final Ua a() {
        return this.f6352a;
    }
}
