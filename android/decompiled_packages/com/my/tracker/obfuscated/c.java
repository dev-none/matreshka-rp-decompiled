package com.my.tracker.obfuscated;

import java.util.ArrayList;

/* JADX INFO: loaded from: classes6.dex */
public class c extends g2 {
    public void a(int i, long j, boolean z) {
        this.f4943a.put(i, new v1(i, j));
        x2.c("TimeSpent: " + a(z) + "registered new anytime TimeSpent with id = " + i);
    }

    public void b(int i, long j, boolean z) throws Exception {
        u1 u1Var = (u1) this.f4943a.get(i);
        if (u1Var == null) {
            x2.c("TimeSpent: " + a(z) + "can't stop anytime TimeSpent with id = " + i + " (reason: not found)");
            throw new Exception();
        }
        a(j, u1Var, z);
        this.f4943a.remove(i);
        x2.c("TimeSpent: " + a(z) + "stopped anytime TimeSpent, id = " + i);
    }

    public void c(long j) {
        x2.a("TimeSpentCore: AnytimeTimeSpentsManager: " + a(true) + "updating all running anytime TimeSpents timestamps (size = " + this.f4943a.size() + ", new timestamp = " + j + ")");
        a(j);
    }

    public void d(long j) {
        b(j, true);
    }

    public void e(long j) {
        b(j, false);
    }

    public ArrayList a(long j, boolean z) {
        x2.a("TimeSpentCore: AnytimeTimeSpentsManager: " + a(z) + "onTick: start collecting anytime TimeSpents");
        b(j, z);
        a(j);
        ArrayList arrayListA = a();
        this.b.clear();
        x2.a("TimeSpentCore: AnytimeTimeSpentsManager: " + a(z) + "onTick: collected " + arrayListA.size() + " anytime TimeSpents");
        return arrayListA;
    }

    void a(long j, u1 u1Var, boolean z) {
        d2 d2VarA = a(u1Var.a());
        long jE = j - u1Var.e();
        if (x2.a()) {
            long jB = z ? d2VarA.b() : d2VarA.c();
            x2.a("TimeSpentCore: AnytimeTimeSpentsManager: " + a(z) + "slicing anytime TimeSpent, id = " + u1Var.a() + ", " + jB + "(existed ms) + " + jE + "(add ms) = " + (jB + jE) + "(total ms), timestamp = " + j);
        }
        if (z) {
            d2VarA.c(jE);
        } else {
            d2VarA.a(jE);
        }
    }

    public void b(long j) {
        x2.a("TimeSpentCore: AnytimeTimeSpentsManager: " + a(false) + "updating all running anytime TimeSpents timestamps (size = " + this.f4943a.size() + ", new timestamp = " + j + ")");
        a(j);
    }

    void b(long j, boolean z) {
        x2.a("TimeSpentCore: AnytimeTimeSpentsManager: " + a(z) + "slicing all running anytime TimeSpents (size = " + this.f4943a.size() + ")");
        for (int i = 0; i < this.f4943a.size(); i++) {
            a(j, (u1) this.f4943a.valueAt(i), z);
        }
    }
}
