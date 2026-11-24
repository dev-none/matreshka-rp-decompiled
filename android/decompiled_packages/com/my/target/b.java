package com.my.target;

import com.my.target.common.NavigationType;
import com.my.target.common.models.ImageData;

/* JADX INFO: loaded from: classes6.dex */
public abstract class b {
    public String A;
    public String B;
    public String C;
    public String D;
    public String E;
    public String F;
    public c G;
    public j8 H;
    public String I;
    public boolean J;
    public final h0 K;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final za f4542a;
    public final xb b;
    public String c;
    public String d;
    public String e;
    public String f;
    public String g;
    public float h;
    public int i;
    public String j;
    public String k;
    public String l;
    public String m;
    public String n;
    public String o;
    public ImageData p;
    public ImageData q;
    public d1 r;
    public boolean s;
    public boolean t;
    public boolean u;
    public int v;
    public int w;
    public int x;
    public float y;
    public String z;

    public b() {
        this(h0.e);
    }

    public String A() {
        return this.e;
    }

    public String B() {
        return this.E;
    }

    public String C() {
        return this.z;
    }

    public String D() {
        return this.B;
    }

    public xb E() {
        return this.b;
    }

    public int F() {
        return this.i;
    }

    public int G() {
        return this.w;
    }

    public boolean H() {
        return this.u;
    }

    public boolean I() {
        return this.t;
    }

    public boolean J() {
        return this.J;
    }

    public boolean K() {
        return this.s;
    }

    public void a(j8 j8Var) {
        this.H = j8Var;
    }

    public void b(String str) {
        this.g = str;
    }

    public String c() {
        return this.g;
    }

    public final h0 d() {
        return this.K;
    }

    public String e() {
        return this.C;
    }

    public String f() {
        return this.j;
    }

    public void g(String str) {
        this.D = str;
    }

    public void h(String str) {
        this.c = str;
    }

    public String i() {
        String str = this.d;
        if (str == null) {
            return NavigationType.STORE.equals(this.m) ? "Install" : "Visit";
        }
        return str;
    }

    public String j() {
        return this.D;
    }

    public String k() {
        return this.c;
    }

    public String l() {
        return this.f;
    }

    public int m() {
        return this.v;
    }

    public String n() {
        return this.l;
    }

    public void o(String str) {
        this.k = str;
    }

    public int p() {
        return this.x;
    }

    public ImageData q() {
        return this.q;
    }

    public String r() {
        return this.A;
    }

    public ImageData s() {
        return this.p;
    }

    public String t() {
        return this.m;
    }

    public j8 u() {
        return this.H;
    }

    public String v() {
        return this.I;
    }

    public float w() {
        return this.h;
    }

    public za x() {
        return this.f4542a;
    }

    public String y() {
        return this.n;
    }

    public String z() {
        return this.k;
    }

    public b(h0 h0Var) {
        this.b = xb.d();
        this.c = "";
        this.e = "";
        this.f = "";
        this.g = "";
        this.j = "";
        this.k = "";
        this.l = "";
        this.m = NavigationType.WEB;
        this.o = "";
        this.r = d1.p;
        this.s = false;
        this.t = false;
        this.u = false;
        this.v = 0;
        this.z = "";
        this.A = "";
        this.J = true;
        this.K = h0Var;
        this.f4542a = za.a(h0Var);
    }

    public void a(int i) {
        this.v = i;
    }

    public void b(int i) {
        this.x = i;
    }

    public void c(String str) {
        this.C = str;
    }

    public void d(String str) {
        this.j = str;
    }

    public void e(String str) {
        this.F = str;
    }

    public void f(String str) {
        this.d = str;
    }

    public d1 g() {
        return this.r;
    }

    public String h() {
        return this.F;
    }

    public void j(String str) {
        this.l = str;
    }

    public void k(String str) {
        this.A = str;
    }

    public void l(String str) {
        this.m = str;
    }

    public void m(String str) {
        this.I = str;
    }

    public void n(String str) {
        this.n = str;
    }

    public float o() {
        return this.y;
    }

    public void p(String str) {
        this.e = str;
    }

    public void q(String str) {
        this.E = str;
    }

    public void r(String str) {
        this.z = str;
    }

    public void s(String str) {
        this.B = str;
    }

    public void a(ImageData imageData) {
        this.q = imageData;
    }

    public void b(ImageData imageData) {
        this.p = imageData;
    }

    public void c(int i) {
        this.i = i;
    }

    public void d(int i) {
        this.w = i;
    }

    public void a(String str) {
        this.o = str;
    }

    public void b(float f) {
        this.h = f;
    }

    public void c(boolean z) {
        this.J = z;
    }

    public void d(boolean z) {
        this.s = z;
    }

    public void a(float f) {
        this.y = f;
    }

    public void b(boolean z) {
        this.t = z;
    }

    public void a(d1 d1Var) {
        this.r = d1Var;
    }

    public String b() {
        return this.o;
    }

    public c a() {
        return this.G;
    }

    public void a(c cVar) {
        this.G = cVar;
    }

    public void a(boolean z) {
        this.u = z;
    }

    public void i(String str) {
        this.f = str;
    }
}
