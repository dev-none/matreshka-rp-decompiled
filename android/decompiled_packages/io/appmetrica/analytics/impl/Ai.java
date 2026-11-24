package io.appmetrica.analytics.impl;

import android.text.TextUtils;
import io.appmetrica.analytics.coreapi.internal.executors.ICommonExecutor;
import java.util.concurrent.TimeUnit;

/* JADX INFO: loaded from: classes7.dex */
public final class Ai extends C2359on {
    public final RunnableC2628zi d;
    public final ICommonExecutor e;

    public Ai(C2085e5 c2085e5, Ol ol, ICommonExecutor iCommonExecutor) {
        super(c2085e5, ol);
        this.d = new RunnableC2628zi(this);
        this.e = iCommonExecutor;
    }

    @Override // io.appmetrica.analytics.impl.C2359on
    public final void a() {
        this.e.remove(this.d);
    }

    @Override // io.appmetrica.analytics.impl.C2359on
    public final void f() {
        this.b.a();
        C2378ph c2378ph = (C2378ph) ((C2085e5) this.f6245a).k.a();
        if (c2378ph.k.a(c2378ph.j)) {
            String str = c2378ph.m;
            if (TextUtils.isEmpty(str) || "-1".equals(str)) {
                return;
            }
            try {
                a(C2043ce.a((C2085e5) this.f6245a));
            } catch (Throwable unused) {
            }
        }
    }

    @Override // io.appmetrica.analytics.impl.C2359on
    public final void g() {
        this.e.executeDelayed(this.d, TimeUnit.SECONDS.toMillis(1L));
    }

    public final void h() {
        if (this.c.get()) {
            return;
        }
        this.e.remove(this.d);
        if (((C2378ph) ((C2085e5) this.f6245a).k.a()).g > 0) {
            this.e.executeDelayed(this.d, TimeUnit.SECONDS.toMillis(((C2378ph) ((C2085e5) this.f6245a).k.a()).g));
        }
    }
}
