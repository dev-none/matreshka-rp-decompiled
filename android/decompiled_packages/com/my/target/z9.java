package com.my.target;

import android.content.Context;
import android.view.View;
import java.lang.ref.WeakReference;
import java.util.ArrayList;
import java.util.Iterator;

/* JADX INFO: loaded from: classes6.dex */
public class z9 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final ab f4889a;
    public WeakReference b;
    public float c = -1.0f;
    public long d;

    public z9(za zaVar) {
        this.f4889a = ab.a(new ArrayList(), zaVar.a());
        for (t6 t6Var : zaVar.a(2).f4536a) {
            if (t6Var instanceof y9) {
                this.f4889a.f4536a.add((y9) t6Var);
            }
        }
    }

    public static z9 a(za zaVar) {
        return new z9(zaVar);
    }

    public void b(int i) {
        Context context;
        double dA;
        View view;
        float f = i;
        if (f == this.c) {
            return;
        }
        if (!a(i)) {
            a();
        }
        WeakReference weakReference = this.b;
        if (weakReference == null || (view = (View) weakReference.get()) == null) {
            context = null;
            dA = 0.0d;
        } else {
            dA = bc.a(view);
            context = view.getContext();
        }
        b(dA, i, context);
        this.c = f;
        this.d = System.currentTimeMillis();
    }

    public void a(View view) {
        WeakReference weakReference;
        if (view != null || (weakReference = this.b) == null) {
            this.b = new WeakReference(view);
        } else {
            weakReference.clear();
        }
    }

    public final void a() {
        Iterator it = this.f4889a.f4536a.iterator();
        while (it.hasNext()) {
            ((y9) it.next()).a(-1.0f);
        }
    }

    public final boolean a(int i) {
        float f = i;
        float f2 = this.c;
        if (f < f2) {
            return false;
        }
        return this.d <= 0 || (((long) (f - f2)) * 1000) - (System.currentTimeMillis() - this.d) <= 1000;
    }

    public final void a(double d, int i, Context context) {
        ab abVarA = ab.a(new ArrayList(), this.f4889a.b);
        Iterator it = this.f4889a.f4536a.iterator();
        while (it.hasNext()) {
            y9 y9Var = (y9) it.next();
            int iG = y9Var.g();
            int iF = y9Var.f();
            if (iG > i || (iF != 0 && iF < i)) {
                y9Var.a(-1.0f);
            } else if (y9Var.d > d) {
                y9Var.a(-1.0f);
            } else {
                if (y9Var.e() >= 0.0f) {
                    float f = i;
                    if (f > y9Var.e()) {
                        if (f - y9Var.e() >= y9Var.f) {
                            abVarA.f4536a.add(y9Var);
                            it.remove();
                        }
                    }
                }
                y9Var.a(i);
            }
        }
        bb.b(abVarA, 1, context);
    }

    public final void b(double d, int i, Context context) {
        if (this.f4889a.f4536a.isEmpty()) {
            return;
        }
        if (context == null) {
            Iterator it = this.f4889a.f4536a.iterator();
            while (it.hasNext()) {
                ((t6) it.next()).a(-1.0f);
            }
            return;
        }
        a(d, i, context);
    }
}
