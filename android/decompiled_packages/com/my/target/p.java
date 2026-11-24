package com.my.target;

/* JADX INFO: loaded from: classes6.dex */
public class p {
    public static final p c = new p(o.i);

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final o f4761a;
    public final String b;

    public p(o oVar) {
        this.f4761a = oVar;
        this.b = "";
    }

    public static p a(o oVar) {
        return new p(oVar);
    }

    public void b(int i, String str) {
        this.f4761a.c(0, i, b(str));
    }

    public p c(int i) {
        return new p(this.f4761a, this.b + "[" + i + "]");
    }

    public void d(int i) {
        this.f4761a.c(0, i, b(""));
    }

    public p a(String str) {
        if (!this.b.isEmpty()) {
            str = this.b + "." + str;
        }
        return new p(this.f4761a, str);
    }

    public void b(int i) {
        this.f4761a.b(0, i, b(""));
    }

    public final String b(String str) {
        String str2 = this.b;
        if (str2.isEmpty()) {
            return str;
        }
        if (str.isEmpty()) {
            return str2;
        }
        return str2 + ": " + str;
    }

    public p(o oVar, String str) {
        this.f4761a = oVar;
        this.b = str;
    }

    public i0 a(h0 h0Var) {
        return i0.a(h0Var, this.b, true);
    }

    public void a(int i) {
        this.f4761a.a(0, i, b(""));
    }

    public void a(int i, String str) {
        this.f4761a.a(0, i, b(str));
    }
}
