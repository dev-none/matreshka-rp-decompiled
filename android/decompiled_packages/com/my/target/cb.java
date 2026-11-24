package com.my.target;

import android.view.View;

/* JADX INFO: loaded from: classes6.dex */
public abstract class cb {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final ab f4576a;
    public final w2 b;
    public boolean c = false;

    public cb(w2 w2Var, ab abVar) {
        this.b = w2Var;
        this.f4576a = abVar;
    }

    public final bc.a a() {
        if (this.c) {
            return null;
        }
        return this.b.a();
    }

    public abstract void a(View view);

    public abstract void a(boolean z, float f, View view);

    public void b() {
        if (this.c) {
            return;
        }
        this.b.a(this);
        this.c = true;
        gb.b("ViewabilityTracker: StatTracker", "i'm killed");
    }

    public abstract void c();
}
