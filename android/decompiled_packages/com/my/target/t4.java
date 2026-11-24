package com.my.target;

/* JADX INFO: loaded from: classes6.dex */
public class t4 extends t {
    public e4 b;

    public static t4 d() {
        return new t4();
    }

    public void a(e4 e4Var) {
        this.b = e4Var;
    }

    public e4 c() {
        return this.b;
    }

    @Override // com.my.target.t
    public int a() {
        return this.b == null ? 0 : 1;
    }
}
