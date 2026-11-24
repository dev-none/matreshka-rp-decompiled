package com.my.target;

import java.util.ArrayList;

/* JADX INFO: loaded from: classes6.dex */
public final class u {
    public Boolean A;
    public Boolean B;
    public Boolean C;
    public Boolean D;
    public Boolean E;
    public Boolean F;
    public Boolean G;
    public Boolean H;
    public Boolean I;
    public j8 J;
    public c K;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final String f4826a;
    public final String b;
    public ArrayList f;
    public ArrayList g;
    public u h;
    public String i;
    public String j;
    public String k;
    public int l;
    public boolean t;
    public boolean u;
    public boolean v;
    public Boolean x;
    public Boolean y;
    public Boolean z;
    public final ArrayList c = new ArrayList();
    public final ArrayList d = new ArrayList();
    public final za e = za.a(h0.e);
    public int m = -1;
    public int n = -1;
    public int o = -1;
    public int p = -1;
    public int q = -1;
    public float r = -1.0f;
    public float s = -1.0f;
    public float w = -1.0f;

    public u(String str, String str2) {
        this.b = str;
        this.f4826a = str2;
    }

    public static u a(String str, String str2) {
        return new u(str, str2);
    }

    public static u b(String str) {
        return a(str, null);
    }

    public int A() {
        return this.n;
    }

    public int B() {
        return this.l;
    }

    public int C() {
        return this.p;
    }

    public ArrayList D() {
        return this.c;
    }

    public boolean E() {
        return this.t;
    }

    public boolean F() {
        return this.u;
    }

    public Boolean G() {
        return this.I;
    }

    public boolean H() {
        return this.v;
    }

    public void c(int i) {
        this.m = i;
    }

    public void d(int i) {
        this.n = i;
        u uVar = this.h;
        if (uVar != null) {
            uVar.d(i);
        }
    }

    public void e(int i) {
        this.l = i;
    }

    public Boolean f() {
        return this.y;
    }

    public void g(Boolean bool) {
        this.B = bool;
    }

    public Boolean h() {
        return this.z;
    }

    public Boolean i() {
        return this.A;
    }

    public Boolean j() {
        return this.B;
    }

    public Boolean k() {
        return this.G;
    }

    public void l(Boolean bool) {
        this.D = bool;
    }

    public za m() {
        return this.e;
    }

    public int n() {
        return this.q;
    }

    public ArrayList o() {
        return this.g;
    }

    public String p() {
        return this.j;
    }

    public Boolean q() {
        return this.C;
    }

    public int r() {
        return this.o;
    }

    public int s() {
        return this.m;
    }

    public ArrayList t() {
        if (this.f != null) {
            return new ArrayList(this.f);
        }
        return null;
    }

    public String u() {
        return this.i;
    }

    public j8 v() {
        return this.J;
    }

    public u w() {
        return this.h;
    }

    public Boolean x() {
        return this.D;
    }

    public float y() {
        return this.r;
    }

    public float z() {
        return this.s;
    }

    public void a(j8 j8Var) {
        this.J = j8Var;
    }

    public void b(boolean z) {
        this.u = z;
    }

    public void c(ArrayList arrayList) {
        this.f = arrayList;
    }

    public void e(String str) {
        this.i = str;
    }

    public void f(Boolean bool) {
        this.A = bool;
    }

    public Boolean g() {
        return this.E;
    }

    public void h(Boolean bool) {
        this.G = bool;
    }

    public void i(Boolean bool) {
        this.H = bool;
    }

    public void j(Boolean bool) {
        this.C = bool;
    }

    public void k(Boolean bool) {
        this.I = bool;
    }

    public Boolean l() {
        return this.H;
    }

    public void a(boolean z) {
        this.t = z;
    }

    public void b(int i) {
        this.o = i;
    }

    public void c(float f) {
        this.s = f;
    }

    public float e() {
        return this.w;
    }

    public void f(int i) {
        this.p = i;
    }

    public void a(ya yaVar) {
        this.d.add(yaVar);
    }

    public void b(u uVar) {
        this.h = uVar;
        if (uVar != null) {
            uVar.d(this.n);
        }
    }

    public void c(boolean z) {
        this.v = z;
    }

    public void e(Boolean bool) {
        this.z = bool;
    }

    public ArrayList a(String str) {
        ArrayList arrayList = new ArrayList();
        ArrayList arrayList2 = this.d;
        int size = arrayList2.size();
        int i = 0;
        while (i < size) {
            Object obj = arrayList2.get(i);
            i++;
            ya yaVar = (ya) obj;
            if (str.equals(yaVar.a())) {
                arrayList.add(yaVar);
            }
        }
        return arrayList;
    }

    public void c(Boolean bool) {
        this.y = bool;
    }

    public void d(String str) {
        this.j = str;
    }

    public Boolean c() {
        return this.F;
    }

    public Boolean d() {
        return this.x;
    }

    public void c(String str) {
        this.k = str;
    }

    public void d(Boolean bool) {
        this.E = bool;
    }

    public void b(ArrayList arrayList) {
        this.g = arrayList;
    }

    public void b(float f) {
        this.r = f;
    }

    public void b(Boolean bool) {
        this.x = bool;
    }

    public void a(u uVar) {
        this.c.add(uVar);
    }

    public String b() {
        return this.k;
    }

    public void a(ArrayList arrayList) {
        ArrayList arrayList2 = this.f;
        if (arrayList2 == null) {
            this.f = arrayList;
        } else if (arrayList != null) {
            arrayList2.addAll(arrayList);
        }
    }

    public void a(float f) {
        this.w = f;
    }

    public void a(Boolean bool) {
        this.F = bool;
    }

    public void a(int i) {
        this.q = i;
    }

    public c a() {
        return this.K;
    }

    public void a(c cVar) {
        this.K = cVar;
    }
}
