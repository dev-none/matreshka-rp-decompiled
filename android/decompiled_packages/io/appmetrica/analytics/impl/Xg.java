package io.appmetrica.analytics.impl;

import android.content.Context;
import android.os.Bundle;
import io.appmetrica.analytics.coreapi.internal.executors.IHandlerExecutor;

/* JADX INFO: loaded from: classes7.dex */
public final class Xg implements InterfaceC2241k6 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Context f5956a;
    public final C2188i4 b;
    public final IHandlerExecutor c = C2495ua.k().x().e();

    public Xg(Context context, C2188i4 c2188i4) {
        this.f5956a = context;
        this.b = c2188i4;
    }

    public final void a(W5 w5, Bundle bundle) {
        if (w5.m()) {
            return;
        }
        this.c.execute(new RunnableC2403qh(this.f5956a, w5, bundle, this.b));
    }

    public final void a(X3 x3, W5 w5, C2539w4 c2539w4) {
        this.b.a(x3, c2539w4).a(w5, c2539w4);
        this.b.a(x3.b, x3.c, x3.d);
    }
}
