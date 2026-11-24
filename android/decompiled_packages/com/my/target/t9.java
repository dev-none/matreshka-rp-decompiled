package com.my.target;

import android.view.View;

/* JADX INFO: loaded from: classes6.dex */
public final class t9 extends cb {
    public final ab d;

    public t9(w2 w2Var, ab abVar, ab abVar2) {
        super(w2Var, abVar);
        this.d = abVar2;
    }

    public static t9 a(w2 w2Var, ab abVar, ab abVar2) {
        return new t9(w2Var, abVar, abVar2);
    }

    @Override // com.my.target.cb
    public void a(boolean z, float f, View view) {
    }

    @Override // com.my.target.cb
    public void c() {
    }

    @Override // com.my.target.cb
    public void a(View view) {
        bb.a(this.f4576a, 1, view.getContext());
        bb.a(this.d, 1, view.getContext());
        gb.b("ViewabilityTracker: RenderStatTracker", "Render tracked, kill self");
        b();
    }
}
