package com.my.target;

import android.content.Context;
import android.os.SystemClock;
import android.view.View;
import java.lang.ref.WeakReference;
import java.util.ArrayList;
import java.util.Iterator;

/* JADX INFO: loaded from: classes6.dex */
public final class yb {
    public long b;
    public final ab d;
    public final ab e;
    public WeakReference g;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public boolean f4875a = false;
    public final u9 c = u9.d;
    public final Runnable f = new Runnable() { // from class: com.my.target.yb$$ExternalSyntheticLambda0
        @Override // java.lang.Runnable
        public final void run() {
            this.f$0.a();
        }
    };

    public yb(ab abVar, ab abVar2) {
        this.e = abVar2;
        this.d = abVar;
    }

    public static yb a(za zaVar) {
        return new yb(zaVar.b(1), zaVar.a(1));
    }

    public void b() {
        if (this.f4875a) {
            gb.b("ViewabilityBannerTracker", "banner viewability already tracking");
            return;
        }
        this.f4875a = true;
        this.b = SystemClock.elapsedRealtime();
        this.c.a(this.f);
    }

    public void c() {
        this.c.b(this.f);
        WeakReference weakReference = this.g;
        if (weakReference != null) {
            weakReference.clear();
        }
        this.e.f4536a.clear();
        this.d.f4536a.clear();
        this.g = null;
    }

    public final /* synthetic */ void a() {
        a((SystemClock.elapsedRealtime() - this.b) / 1000.0f);
    }

    public void a(float f) {
        Context context;
        double dA;
        View view;
        WeakReference weakReference = this.g;
        if (weakReference == null || (view = (View) weakReference.get()) == null) {
            context = null;
            dA = 0.0d;
        } else {
            dA = bc.a(view);
            context = view.getContext();
        }
        a(dA, f, context);
    }

    public void a(View view) {
        WeakReference weakReference;
        if (view == null && (weakReference = this.g) != null) {
            weakReference.clear();
        } else {
            this.g = new WeakReference(view);
        }
    }

    public final void a(double d, float f, Context context) {
        if (this.d.f4536a.isEmpty() && this.e.f4536a.isEmpty()) {
            return;
        }
        if (context == null) {
            Iterator it = this.e.f4536a.iterator();
            while (it.hasNext()) {
                ((t6) it.next()).a(-1.0f);
            }
            return;
        }
        ab abVarA = ab.a(new ArrayList(), this.d.b);
        while (true) {
            if (this.d.f4536a.isEmpty()) {
                break;
            }
            int size = this.d.f4536a.size() - 1;
            if (e2.a(((o8) this.d.f4536a.get(size)).f(), f) == 1) {
                break;
            }
            o8 o8Var = (o8) this.d.f4536a.remove(size);
            int i = o8Var.d;
            boolean zG = o8Var.g();
            boolean z = ((double) i) <= d;
            if ((z && zG) || (!z && !zG)) {
                abVarA.f4536a.add(o8Var);
            }
        }
        Iterator it2 = this.e.f4536a.iterator();
        while (it2.hasNext()) {
            t6 t6Var = (t6) it2.next();
            int i2 = t6Var.d;
            float fE = t6Var.e();
            boolean z2 = d < ((double) i2);
            boolean z3 = fE < 0.0f;
            if (z2) {
                t6Var.a(-1.0f);
            } else if (z3) {
                t6Var.a(f);
            } else if (e2.a(f - fE, t6Var.f) != -1) {
                if (t6Var.g) {
                    abVarA.f4536a.add(t6Var);
                }
                it2.remove();
            }
        }
        bb.b(abVarA, 1, context);
    }
}
