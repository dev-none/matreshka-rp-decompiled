package com.my.tracker.obfuscated;

import androidx.collection.SieveCacheKt;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes6.dex */
public class j0 extends g2 {
    public void a(int i, long j, boolean z) {
        if (!z) {
            j = SieveCacheKt.NodeMetaAndPreviousMask;
        }
        this.f4943a.put(i, new v1(i, j));
        x2.c("TimeSpent: " + a(z) + "registered new foreground TimeSpent with id = " + i);
    }

    public void b(int i, long j, boolean z) throws Exception {
        u1 u1Var = (u1) this.f4943a.get(i);
        if (u1Var == null) {
            x2.c("TimeSpent: " + a(z) + " can't stop foreground TimeSpent with id = " + i + " (reason: not found)");
            throw new Exception();
        }
        if (z) {
            a(j, u1Var);
        }
        this.f4943a.remove(i);
        x2.c("TimeSpent: " + a(z) + "stopped foreground TimeSpent, id = " + i);
    }

    public void b(long j) {
    }

    public void c(long j) {
        x2.a("TimeSpentCore: ForegroundTimeSpentsManager: " + a(true) + "updating all running foreground TimeSpents timestamps (size = " + this.f4943a.size() + ", new timestamp = " + j + ")");
        a(j);
    }

    public void d(long j) {
        f(j);
    }

    public void e(long j) {
    }

    void f(long j) {
        x2.a("TimeSpentCore: ForegroundTimeSpentsManager: " + a(true) + "slicing all running foreground TimeSpents (size = " + this.f4943a.size() + ")");
        for (int i = 0; i < this.f4943a.size(); i++) {
            a(j, (u1) this.f4943a.valueAt(i));
        }
    }

    public ArrayList a(long j, boolean z) {
        x2.a("TimeSpentCore: ForegroundTimeSpentsManager: " + a(z) + "onTick: start collecting foreground TimeSpents");
        if (z) {
            f(j);
            a(j);
        }
        ArrayList arrayListA = a();
        this.b.clear();
        x2.a("TimeSpentCore: ForegroundTimeSpentsManager: " + a(z) + "onTick: collected " + arrayListA.size() + " foreground TimeSpents");
        return arrayListA;
    }

    void a(long j, u1 u1Var) {
        d2 d2VarA = a(u1Var.a());
        long jE = j - u1Var.e();
        if (x2.a()) {
            long jB = d2VarA.b();
            x2.a("TimeSpentCore: ForegroundTimeSpentsManager: " + a(true) + "slicing foreground TimeSpent, id = " + u1Var.a() + ", " + jB + "(existed ms) + " + jE + "(add ms) = " + (jB + jE) + "(total ms), timestamp = " + j);
        }
        d2VarA.c(jE);
    }
}
