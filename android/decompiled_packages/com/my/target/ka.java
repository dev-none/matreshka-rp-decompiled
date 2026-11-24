package com.my.target;

import android.content.Context;
import android.view.View;

/* JADX INFO: loaded from: classes6.dex */
public class ka extends n1 {
    public za f;

    public ka(w2 w2Var, ab abVar, long j, za zaVar) {
        super(w2Var, abVar, j);
        this.f = zaVar;
    }

    public static ka a(w2 w2Var, ab abVar, long j, za zaVar) {
        return new ka(w2Var, abVar, j, zaVar);
    }

    @Override // com.my.target.cb
    public void a(View view) {
    }

    @Override // com.my.target.cb
    public void b() {
        super.b();
        this.f = null;
    }

    @Override // com.my.target.cb
    public void c() {
        this.e = 0L;
    }

    public final void c(Context context) {
        bb.a(this.f4576a, 1, context);
    }

    @Override // com.my.target.cb
    public void a(boolean z, float f, View view) {
        if (a(z)) {
            a(view.getContext());
        }
    }

    public final void b(Context context) {
        String strD = kb.d(context);
        if (strD != null) {
            bb.a(this.f, strD, 1, context);
        }
    }

    public final void a(Context context) {
        b(context);
        c(context);
        bc.a aVarA = a();
        if (aVarA != null) {
            aVarA.a();
        }
        gb.b("ViewabilityTracker: ShowStatTracker", "Show tracked, kill self");
        b();
    }
}
