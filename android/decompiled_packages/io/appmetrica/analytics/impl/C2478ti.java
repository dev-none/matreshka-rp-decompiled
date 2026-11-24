package io.appmetrica.analytics.impl;

import android.content.Context;
import io.appmetrica.analytics.coreapi.internal.executors.IHandlerExecutor;
import java.util.HashMap;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.ti, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2478ti {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final HashMap f6335a = new HashMap();
    public final C2560x0 b;

    public C2478ti(C2560x0 c2560x0) {
        this.b = c2560x0;
    }

    public static C2478ti a() {
        return AbstractC2453si.f6315a;
    }

    public final C2279li a(Context context, String str) {
        C2279li c2279li;
        C2279li c2279li2 = (C2279li) this.f6335a.get(str);
        if (c2279li2 != null) {
            return c2279li2;
        }
        synchronized (this.f6335a) {
            c2279li = (C2279li) this.f6335a.get(str);
            if (c2279li == null) {
                IHandlerExecutor iHandlerExecutorA = C2213j4.l().c.a();
                this.b.getClass();
                if (C2535w0.e == null) {
                    ((G9) iHandlerExecutorA).b.post(new RunnableC2428ri(this, context));
                }
                c2279li = new C2279li(context.getApplicationContext(), str, new C2560x0());
                this.f6335a.put(str, c2279li);
                c2279li.d(str);
            }
        }
        return c2279li;
    }
}
