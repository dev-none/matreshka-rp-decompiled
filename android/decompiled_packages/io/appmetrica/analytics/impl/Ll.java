package io.appmetrica.analytics.impl;

import android.content.Context;
import java.util.HashMap;

/* JADX INFO: loaded from: classes7.dex */
public final class Ll {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final C2545wa f5780a = new C2545wa();
    public final HashMap b = new HashMap();
    public C2231jm c = null;
    public final Jl d = new Jl(this);

    public static final Ll a() {
        return Kl.f5763a;
    }

    public final Em a(Context context, X4 x4, C2077dm c2077dm) {
        Em em = (Em) this.b.get(x4.f5952a);
        boolean z = true;
        if (em == null) {
            synchronized (this.b) {
                em = (Em) this.b.get(x4.f5952a);
                if (em == null) {
                    em = new Em(new Fm(context, x4.f5952a, c2077dm, this.d));
                    em.f();
                    this.b.put(x4.f5952a, em);
                    z = false;
                }
            }
        }
        if (z) {
            em.a(c2077dm);
        }
        return em;
    }

    public final void a(X4 x4, Ul ul) {
        synchronized (this.b) {
            this.f5780a.a(x4.f5952a, ul);
            C2231jm c2231jm = this.c;
            if (c2231jm != null) {
                ul.a(c2231jm);
            }
        }
    }
}
