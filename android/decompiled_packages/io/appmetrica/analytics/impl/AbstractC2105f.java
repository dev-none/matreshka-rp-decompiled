package io.appmetrica.analytics.impl;

import android.content.Context;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.f, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public abstract class AbstractC2105f implements InterfaceC2290m4 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Context f6067a;
    public final Gg b;

    public AbstractC2105f(Context context, Gg gg) {
        this.f6067a = context.getApplicationContext();
        this.b = gg;
        gg.a(this);
        C2495ua.k().n().b(this);
    }

    @Override // io.appmetrica.analytics.impl.InterfaceC2290m4
    public final void a(W5 w5, C2539w4 c2539w4) {
        b(w5, c2539w4);
    }

    public final Gg b() {
        return this.b;
    }

    public abstract void b(W5 w5, C2539w4 c2539w4);

    public final Context c() {
        return this.f6067a;
    }

    @Override // io.appmetrica.analytics.impl.InterfaceC2290m4
    public final void a() {
        this.b.b(this);
        C2495ua.H.m().a(this);
    }
}
