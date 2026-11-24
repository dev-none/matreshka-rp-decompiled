package com.my.target;

/* JADX INFO: loaded from: classes6.dex */
public class u3 extends t {
    public r3 b;

    public static u3 d() {
        return new u3();
    }

    public void a(r3 r3Var) {
        this.b = r3Var;
    }

    public r3 c() {
        return this.b;
    }

    @Override // com.my.target.t
    public int a() {
        return this.b != null ? 1 : 0;
    }
}
