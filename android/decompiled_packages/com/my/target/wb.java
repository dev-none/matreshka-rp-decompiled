package com.my.target;

import android.view.View;

/* JADX INFO: loaded from: classes6.dex */
public final class wb extends cb {
    public wb(w2 w2Var, ab abVar) {
        super(w2Var, abVar);
    }

    public static wb a(w2 w2Var, ab abVar) {
        return new wb(w2Var, abVar);
    }

    @Override // com.my.target.cb
    public void a(View view) {
    }

    @Override // com.my.target.cb
    public void c() {
    }

    @Override // com.my.target.cb
    public void a(boolean z, float f, View view) {
        if (e2.a(f, 0.0f) == 1) {
            bb.a(this.f4576a, 1, view.getContext());
            gb.b("ViewabilityTracker: ShowStatTracker", "ViewIn tracked, kill self");
            b();
        }
    }
}
