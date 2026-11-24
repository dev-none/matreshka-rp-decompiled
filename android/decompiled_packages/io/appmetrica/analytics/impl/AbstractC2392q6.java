package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.ICrashTransformer;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.q6, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public abstract class AbstractC2392q6 implements Ma {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final InterfaceC2367p6 f6267a;
    public final ICrashTransformer b;
    public final T9 c;

    public AbstractC2392q6(InterfaceC2367p6 interfaceC2367p6, ICrashTransformer iCrashTransformer, T9 t9) {
        this.f6267a = interfaceC2367p6;
        this.b = iCrashTransformer;
        this.c = t9;
    }

    @Override // io.appmetrica.analytics.impl.Ma
    public final void a(Throwable th, V v) {
        if (this.f6267a.a(th)) {
            ICrashTransformer iCrashTransformer = this.b;
            if (iCrashTransformer == null || th == null || (th = iCrashTransformer.process(th)) != null) {
                Sn snA = Vn.a(th, v, null, (String) this.c.b.a(), (Boolean) this.c.c.a());
                C2298mc c2298mc = (C2298mc) ((Gh) this).d;
                c2298mc.f5976a.a().a(c2298mc.b).a(snA);
            }
        }
    }

    public final InterfaceC2367p6 b() {
        return this.f6267a;
    }

    public final ICrashTransformer a() {
        return this.b;
    }
}
