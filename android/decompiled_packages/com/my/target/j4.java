package com.my.target;

/* JADX INFO: loaded from: classes6.dex */
public class j4 extends e4 {
    public String P;
    public float Q;
    public boolean R;

    public static j4 S() {
        return new j4();
    }

    public static j4 a(k1 k1Var) {
        j4 j4VarS = S();
        j4VarS.k(k1Var.r());
        j4VarS.t(k1Var.R());
        j4VarS.x().a(k1Var.x(), 0.0f);
        j4VarS.E = k1Var.E;
        return j4VarS;
    }

    public boolean P() {
        return this.R;
    }

    public String Q() {
        return this.P;
    }

    public float R() {
        return this.Q;
    }

    public void d(float f) {
        this.Q = f;
    }

    public void g(boolean z) {
        this.R = z;
    }

    public void t(String str) {
        this.P = str;
    }
}
