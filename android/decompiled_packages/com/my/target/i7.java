package com.my.target;

import android.content.Context;

/* JADX INFO: loaded from: classes6.dex */
public final class i7 extends l {
    public final o7 h;
    public final String i;

    public static class a implements l.a {
        @Override // com.my.target.l.a
        public v a() {
            return p7.b();
        }

        @Override // com.my.target.l.a
        public s b() {
            return n7.a();
        }

        @Override // com.my.target.l.a
        public boolean c() {
            return false;
        }

        @Override // com.my.target.l.a
        public q d() {
            return m7.a();
        }
    }

    public static class b implements l.a {
        @Override // com.my.target.l.a
        public v a() {
            return p7.b();
        }

        @Override // com.my.target.l.a
        public s b() {
            return c8.a();
        }

        @Override // com.my.target.l.a
        public boolean c() {
            return false;
        }

        @Override // com.my.target.l.a
        public q d() {
            return b8.a();
        }
    }

    public i7(l.a aVar, j jVar, h6.a aVar2, o7 o7Var, String str) {
        super(aVar, jVar, aVar2);
        this.h = o7Var;
        this.i = str;
    }

    public static l a(l.a aVar, j jVar, h6.a aVar2) {
        return new i7(aVar, jVar, aVar2, null, null);
    }

    public static l a(l.a aVar, o7 o7Var, j jVar, h6.a aVar2) {
        return new i7(aVar, jVar, aVar2, o7Var, null);
    }

    public static l a(l.a aVar, String str, j jVar, h6.a aVar2) {
        return new i7(aVar, jVar, aVar2, null, str);
    }

    @Override // com.my.target.l
    public void a(h6 h6Var, Context context, l.b bVar) {
        n nVarB = n.b();
        if (this.i != null) {
            o7 o7Var = (o7) a((o7) this.f4684a.d().a(this.i, u.b(""), this.h, this.b, this.c, h6Var, null, nVarB, context), nVarB, context);
            bVar.a(o7Var, o7Var == null ? nVarB.a() : null);
            return;
        }
        o7 o7Var2 = this.h;
        if (o7Var2 != null) {
            o7 o7Var3 = (o7) a(o7Var2, nVarB, context);
            bVar.a(o7Var3, o7Var3 == null ? nVarB.a() : null);
        } else {
            super.a(h6Var, context, bVar);
        }
    }
}
