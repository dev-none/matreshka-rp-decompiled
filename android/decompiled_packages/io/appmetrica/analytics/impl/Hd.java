package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.logger.appmetrica.internal.PublicLogger;

/* JADX INFO: loaded from: classes7.dex */
public abstract class Hd implements InterfaceC2156go, InterfaceC2412r2 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final String f5706a;
    public final int b;
    public final uo c;
    public final R2 d;
    public PublicLogger e = PublicLogger.getAnonymousInstance();

    public Hd(int i, String str, uo uoVar, R2 r2) {
        this.b = i;
        this.f5706a = str;
        this.c = uoVar;
        this.d = r2;
    }

    public final C2182ho a() {
        C2182ho c2182ho = new C2182ho();
        c2182ho.b = this.b;
        c2182ho.f6119a = this.f5706a.getBytes();
        c2182ho.d = new C2233jo();
        c2182ho.c = new C2207io();
        return c2182ho;
    }

    @Override // io.appmetrica.analytics.impl.InterfaceC2156go
    public abstract /* synthetic */ void a(C2130fo c2130fo);

    public final R2 b() {
        return this.d;
    }

    public final String c() {
        return this.f5706a;
    }

    public final uo d() {
        return this.c;
    }

    public final int e() {
        return this.b;
    }

    public final boolean f() {
        so soVarA = this.c.a(this.f5706a);
        if (soVarA.f6320a) {
            return true;
        }
        this.e.warning("Attribute " + this.f5706a + " of type " + ((String) Qn.f5856a.get(this.b)) + " is skipped because " + soVarA.b, new Object[0]);
        return false;
    }

    public final void a(PublicLogger publicLogger) {
        this.e = publicLogger;
    }
}
