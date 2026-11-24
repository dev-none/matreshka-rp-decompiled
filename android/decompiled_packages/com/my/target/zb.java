package com.my.target;

import android.content.Context;
import android.view.View;
import java.util.HashMap;
import java.util.Locale;

/* JADX INFO: loaded from: classes6.dex */
public final class zb extends n1 {
    public boolean f;
    public float g;
    public Context h;

    public zb(w2 w2Var, ab abVar, long j) {
        super(w2Var, abVar, j);
        this.f = false;
        this.g = 0.0f;
    }

    public static zb a(w2 w2Var, ab abVar, long j) {
        return new zb(w2Var, abVar, j);
    }

    public final void b(float f, long j) {
        float fMin = Math.min(j, 60000L) / 1000.0f;
        String strValueOf = String.valueOf((int) f);
        String str = String.format(Locale.getDefault(), "%.1f", Float.valueOf(fMin));
        HashMap map = new HashMap();
        map.put("viewability_percent", strValueOf);
        map.put("viewability_duration", str);
        gb.b("ViewabilityTracker: ViewabilityDurationStatTracker", "Sending ViewabilityDuration stat (max visible percent = " + strValueOf + ", duration = " + str + " sec)");
        bb.a(this.f4576a, map, 1, this.h);
    }

    @Override // com.my.target.cb
    public void c() {
        if (this.f) {
            a(this.g, d());
        } else {
            this.e = 0L;
        }
        this.h = null;
    }

    public final long d() {
        return System.currentTimeMillis() - this.e;
    }

    @Override // com.my.target.cb
    public void a(View view) {
        this.h = view.getContext().getApplicationContext();
    }

    @Override // com.my.target.cb
    public void a(boolean z, float f, View view) {
        if (this.f) {
            a(z, f);
        } else if (a(z)) {
            this.f = true;
            this.g = f;
            gb.b("ViewabilityTracker: ViewabilityDurationStatTracker", "Start tracking viewability");
        }
    }

    public final void a(boolean z, float f) {
        this.g = Math.max(this.g, f);
        long jD = d();
        if (z && jD < 60000) {
            gb.b("ViewabilityTracker: ViewabilityDurationStatTracker", "No need to send ViewabilityDurationStat (isVisible = true, currentDurationMillis = " + jD + ")");
            return;
        }
        a(this.g, jD);
    }

    public final void a(float f, long j) {
        b(f, j);
        gb.b("ViewabilityTracker: ViewabilityDurationStatTracker", "ViewabilityDuration tracked, kill self");
        b();
    }
}
