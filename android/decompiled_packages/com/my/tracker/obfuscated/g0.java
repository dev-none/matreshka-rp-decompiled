package com.my.tracker.obfuscated;

import android.content.Context;
import com.my.tracker.MyTrackerConfig;

/* JADX INFO: loaded from: classes6.dex */
public final class g0 {
    private static volatile g0 l;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final h f4942a = new h();
    private final y0 b = new y0();
    private final a0 c = new a0();
    private final l0 d = new l0();
    private final u0 e = new u0();
    private final i1 f = new i1();
    private final a1 g = new a1();
    private final k h = new k();
    private final d0 i = new d0();
    private final p j = new p();
    private final i0 k = new i0();

    private g0() {
    }

    public static g0 a() {
        g0 g0Var;
        g0 g0Var2 = l;
        if (g0Var2 != null) {
            return g0Var2;
        }
        synchronized (g0.class) {
            g0Var = l;
            if (g0Var == null) {
                g0Var = new g0();
                l = g0Var;
            }
        }
        return g0Var;
    }

    public f0 a(MyTrackerConfig.InstalledPackagesProvider installedPackagesProvider, boolean z, int i, boolean z2, String str, MyTrackerConfig.OkHttpClientProvider okHttpClientProvider, Context context) {
        c0 c0VarB;
        c0 c0Var;
        h0 h0VarA;
        x0 x0VarA;
        z0 z0VarA;
        k0 k0Var;
        t0 t0Var;
        g gVarA = this.f4942a.a(context);
        z zVarA = this.c.a(context);
        h1 h1VarA = this.f.a(context);
        j jVarA = this.h.a(installedPackagesProvider, context);
        if (z2) {
            c0Var = c0.c;
            z0VarA = z0.g;
            x0VarA = null;
            k0Var = null;
            t0Var = null;
            h0VarA = null;
        } else {
            t0 t0VarA = this.e.a(context);
            k0 k0VarA = this.d.a(context);
            if (z) {
                c0VarB = this.i.b(context);
            } else {
                c0VarB = c0.c;
            }
            c0Var = c0VarB;
            h0VarA = this.k.a(context);
            x0VarA = this.b.a(str, okHttpClientProvider);
            z0VarA = this.g.a(i, context);
            k0Var = k0VarA;
            t0Var = t0VarA;
        }
        return new f0(gVarA, x0VarA, zVarA, k0Var, t0Var, h1VarA, z0VarA, jVarA, c0Var, this.j.a(context), h0VarA);
    }
}
