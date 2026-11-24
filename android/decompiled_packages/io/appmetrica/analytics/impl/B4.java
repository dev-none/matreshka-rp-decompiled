package io.appmetrica.analytics.impl;

import android.content.Context;
import android.os.ResultReceiver;

/* JADX INFO: loaded from: classes7.dex */
public final class B4 implements InterfaceC2290m4 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Context f5606a;
    public final E4 b;
    public final ResultReceiver c;

    public B4(Context context, E4 e4, C2539w4 c2539w4) {
        this.f5606a = context;
        this.b = e4;
        this.c = c2539w4.c;
        e4.a(this);
    }

    @Override // io.appmetrica.analytics.impl.InterfaceC2290m4
    public final void a(W5 w5, C2539w4 c2539w4) {
        this.b.a(c2539w4.b);
        this.b.a(w5, this);
    }

    public final E4 b() {
        return this.b;
    }

    public final Context c() {
        return this.f5606a;
    }

    public final ResultReceiver d() {
        return this.c;
    }

    public final void a(C1981a4 c1981a4) {
        I6.a(this.c, c1981a4);
    }

    @Override // io.appmetrica.analytics.impl.InterfaceC2290m4
    public final void a() {
        this.b.b(this);
    }
}
