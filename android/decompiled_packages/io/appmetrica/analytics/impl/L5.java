package io.appmetrica.analytics.impl;

import android.content.Context;
import io.appmetrica.analytics.IReporter;
import io.appmetrica.analytics.coreapi.internal.lifecycle.ActivityEvent;

/* JADX INFO: loaded from: classes7.dex */
public final class L5 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final C2335o f5769a;
    public final IReporter b;
    public Context c;
    public final K5 d;

    public L5(C2335o c2335o) {
        this(c2335o, 0);
    }

    public final synchronized void a(Context context) {
        if (this.c == null) {
            Context applicationContext = context.getApplicationContext();
            this.f5769a.a(applicationContext);
            this.f5769a.registerListener(this.d, ActivityEvent.RESUMED, ActivityEvent.PAUSED);
            this.c = applicationContext;
        }
    }

    public L5(C2335o c2335o, IReporter iReporter) {
        this.f5769a = c2335o;
        this.b = iReporter;
        this.d = new K5(this);
    }

    public /* synthetic */ L5(C2335o c2335o, int i) {
        this(c2335o, AbstractC2536w1.a());
    }

    public final synchronized Context a() {
        return this.c;
    }
}
