package io.appmetrica.analytics.impl;

import android.os.Handler;
import io.appmetrica.analytics.logger.appmetrica.internal.PublicLogger;
import java.lang.ref.WeakReference;
import java.util.Map;
import java.util.Set;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.wb, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class RunnableC2546wb implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final WeakReference f6384a;
    public final WeakReference b;

    public RunnableC2546wb(Handler handler, Q2 q2) {
        this.f6384a = new WeakReference(handler);
        this.b = new WeakReference(q2);
    }

    @Override // java.lang.Runnable
    public final void run() {
        Handler handler = (Handler) this.f6384a.get();
        Q2 q2 = (Q2) this.b.get();
        if (handler == null || q2 == null) {
            return;
        }
        boolean zF = q2.b.f();
        if (!zF) {
            PublicLogger publicLogger = q2.c;
            Set set = D9.f5638a;
            EnumC2195ib enumC2195ib = EnumC2195ib.EVENT_TYPE_UNDEFINED;
            U3 u3 = new U3("", "", 3, 0, publicLogger);
            Bi bi = q2.h;
            Kh kh = q2.b;
            bi.getClass();
            bi.a(Bi.a(u3, kh), kh, 1, (Map) null);
        }
        if (zF) {
            return;
        }
        C2521vb.a(handler, q2, this);
    }
}
