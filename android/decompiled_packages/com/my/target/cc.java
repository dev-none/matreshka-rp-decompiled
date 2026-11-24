package com.my.target;

import android.content.Context;
import android.view.View;
import java.lang.ref.WeakReference;
import java.util.ArrayList;
import java.util.Iterator;

/* JADX INFO: loaded from: classes6.dex */
public final class cc {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final ab f4577a;
    public final ab b;
    public WeakReference c;

    public cc(ab abVar, ab abVar2) {
        this.b = abVar2;
        this.f4577a = abVar;
    }

    public static cc a(za zaVar) {
        return new cc(zaVar.b(2), zaVar.a(2));
    }

    public void a(View view) {
        WeakReference weakReference;
        if (view == null && (weakReference = this.c) != null) {
            weakReference.clear();
        } else {
            this.c = new WeakReference(view);
        }
    }

    public void a(float f, float f2) {
        Context context;
        double dA;
        View view;
        WeakReference weakReference = this.c;
        if (weakReference == null || (view = (View) weakReference.get()) == null) {
            context = null;
            dA = 0.0d;
        } else {
            dA = bc.a(view);
            context = view.getContext();
        }
        a(dA, f, f2, context);
    }

    public void a() {
        WeakReference weakReference = this.c;
        if (weakReference != null) {
            weakReference.clear();
        }
        this.b.f4536a.clear();
        this.f4577a.f4536a.clear();
        this.c = null;
    }

    public final void a(double d, float f, float f2, Context context) {
        if (this.f4577a.f4536a.isEmpty() && this.b.f4536a.isEmpty()) {
            return;
        }
        if (context == null) {
            Iterator it = this.b.f4536a.iterator();
            while (it.hasNext()) {
                ((t6) it.next()).a(-1.0f);
            }
            return;
        }
        ab abVarA = ab.a(new ArrayList(), this.f4577a.b);
        while (true) {
            if (this.f4577a.f4536a.isEmpty()) {
                break;
            }
            int size = this.f4577a.f4536a.size() - 1;
            if (e2.a(((o8) this.f4577a.f4536a.get(size)).f(), f) == 1) {
                break;
            }
            o8 o8Var = (o8) this.f4577a.f4536a.remove(size);
            int i = o8Var.d;
            boolean zG = o8Var.g();
            boolean z = ((double) i) <= d;
            if ((z && zG) || (!z && !zG)) {
                abVarA.f4536a.add(o8Var);
            }
        }
        float f3 = f2 - f;
        Iterator it2 = this.b.f4536a.iterator();
        while (it2.hasNext()) {
            t6 t6Var = (t6) it2.next();
            int i2 = t6Var.d;
            float fE = t6Var.e();
            boolean z2 = d < ((double) i2);
            boolean z3 = fE < 0.0f;
            if (e2.a(f3, t6Var.f) == -1 && (z2 || z3)) {
                if (!t6Var.g) {
                    abVarA.f4536a.add(t6Var);
                }
                it2.remove();
            } else if (z2) {
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
