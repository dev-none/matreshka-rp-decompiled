package com.my.target;

/* JADX INFO: loaded from: classes6.dex */
public class h0 {
    public static final h0 e = new h0(o.i, "empty", "empty");

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public o f4645a;
    public final String b;
    public final String c;
    public boolean d = true;

    public h0(o oVar, String str, String str2) {
        this.f4645a = oVar;
        this.b = str;
        this.c = str2;
    }

    public void a(o oVar) {
        this.f4645a = oVar;
    }

    public boolean b() {
        return this.d;
    }

    public void c(int i, int i2, String str) {
        a(i, 1, i2, str);
    }

    public o a() {
        return this.f4645a;
    }

    public void b(int i, int i2) {
        a(i, 1, i2, null);
    }

    public void a(int i, int i2, String str) {
        a(i, 0, i2, str);
    }

    public void b(int i, int i2, String str) {
        a(i, 3, i2, str);
    }

    public void a(int i, int i2) {
        a(i, 3, i2, null);
    }

    public final void a(int i, int i2, int i3, String str) {
        this.f4645a.f.a(this, i, i2, i3, str, (String) null);
    }
}
