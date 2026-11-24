package com.my.target;

/* JADX INFO: loaded from: classes6.dex */
public abstract class n1 extends cb {
    public final long d;
    public long e;

    public n1(w2 w2Var, ab abVar, long j) {
        super(w2Var, abVar);
        this.e = 0L;
        this.d = j;
    }

    public final boolean a(boolean z) {
        if (!z) {
            this.e = 0L;
            return false;
        }
        long jCurrentTimeMillis = System.currentTimeMillis();
        if (this.e == 0) {
            this.e = jCurrentTimeMillis;
        }
        if (jCurrentTimeMillis - this.e < this.d) {
            gb.b("ViewabilityTracker: ContinuousVisibilityBaseTracker", "view continuous visibility < " + this.d + " millis");
            return false;
        }
        gb.b("ViewabilityTracker: ContinuousVisibilityBaseTracker", "view continuous visible for " + this.d + " millis");
        return true;
    }
}
