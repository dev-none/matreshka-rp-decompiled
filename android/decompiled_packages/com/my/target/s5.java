package com.my.target;

/* JADX INFO: loaded from: classes6.dex */
public final class s5 extends k0 {
    public t5 k0;

    public static s5 l0() {
        return m0();
    }

    public static s5 m0() {
        return new s5();
    }

    public static s5 n0() {
        return m0();
    }

    @Override // com.my.target.b
    public int G() {
        t5 t5Var = this.k0;
        if (t5Var != null) {
            return t5Var.getWidth();
        }
        return 0;
    }

    public void a(t5 t5Var) {
        this.k0 = t5Var;
    }

    public t5 k0() {
        return this.k0;
    }

    @Override // com.my.target.b
    public int p() {
        t5 t5Var = this.k0;
        if (t5Var != null) {
            return t5Var.getHeight();
        }
        return 0;
    }
}
