package com.my.target;

/* JADX INFO: loaded from: classes6.dex */
public final class o {
    public static final o i = new o("", null, -1, 999, 0, j6.b);

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final String f4754a;
    public final String b;
    public final int c;
    public final Integer d;
    public final int e;
    public final k6 f;
    public int g;
    public String h;

    public o(String str, String str2, Integer num, int i2, int i3, k6 k6Var) {
        this.f4754a = str;
        this.b = str2;
        this.d = num;
        this.c = i2;
        this.e = i3;
        this.f = k6Var;
    }

    public static o a(String str, int i2, int i3, k6 k6Var) {
        return new o(str, null, Integer.valueOf(i2), i3, 0, k6Var);
    }

    public int b() {
        return this.g;
    }

    public void c(int i2, int i3, String str) {
        a(i2, 1, i3, str);
    }

    public void b(int i2, int i3) {
        a(i2, 3, i3, (String) null);
    }

    public void b(int i2, int i3, String str) {
        a(i2, 3, i3, str);
    }

    public static o a(String str, String str2, int i2, k6 k6Var) {
        return new o(str, str2, -1, i2, 1, k6Var);
    }

    public static o a(String str, int i2, k6 k6Var) {
        return new o(str, null, -1, i2, 2, k6Var);
    }

    public static o a(String str, o oVar) {
        o oVar2 = new o(str, null, oVar.d, oVar.c, oVar.e, oVar.f);
        oVar2.g = oVar.g;
        oVar2.h = oVar.h;
        return oVar2;
    }

    public h0 a(String str, String str2) {
        return new h0(this, str, str2);
    }

    public void a(int i2) {
        this.g = i2;
    }

    public String a() {
        return this.h;
    }

    public void a(String str) {
        this.h = str;
    }

    public void a(int i2, int i3) {
        a(i2, 0, i3, (String) null);
    }

    public void a(int i2, int i3, String str) {
        a(i2, 0, i3, str);
    }

    public final void a(int i2, int i3, int i4, String str) {
        a(i2, i3, i4, str, null);
    }

    public final void a(int i2, int i3, int i4, String str, String str2) {
        this.f.a(this, i2, i3, i4, str, str2);
    }
}
