package com.my.target;

/* JADX INFO: loaded from: classes6.dex */
public class d5 implements c5, v0.a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final g4 f4591a;
    public final c5.a b;
    public int c;

    public d5(g4 g4Var, c5.a aVar) {
        this.f4591a = g4Var;
        this.b = aVar;
    }

    public static c5 a(g4 g4Var, c5.a aVar) {
        return new d5(g4Var, aVar);
    }

    @Override // com.my.target.c5
    public void a(v0 v0Var, int i) {
        this.c = i;
        this.b.a(this.f4591a);
        v0Var.setBanner(this.f4591a);
        v0Var.setListener(this);
    }

    @Override // com.my.target.c5
    public void a(v0 v0Var) {
        v0Var.setBanner(null);
        v0Var.setListener(null);
    }

    @Override // com.my.target.v0.a
    public void a(boolean z, int i) {
        this.b.a(this.f4591a, z, this.c, i);
    }
}
