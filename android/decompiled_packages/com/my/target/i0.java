package com.my.target;

/* JADX INFO: loaded from: classes6.dex */
public class i0 {
    public static i0 d = new i0(h0.e, "", false);

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final h0 f4656a;
    public final String b;
    public final boolean c;

    public i0(h0 h0Var, String str, boolean z) {
        this.f4656a = h0Var;
        this.b = str;
        this.c = z;
    }

    public static i0 a(h0 h0Var, String str, boolean z) {
        return new i0(h0Var, str, z);
    }

    public i0 b(int i) {
        return new i0(this.f4656a, this.b + "[" + i + "]", this.c);
    }

    public void c(int i) {
        this.f4656a.c(0, i, b(""));
    }

    public i0 a(String str) {
        if (!this.b.isEmpty()) {
            str = this.b + "." + str;
        }
        return new i0(this.f4656a, str, this.c);
    }

    public i0 b() {
        return new i0(this.f4656a, this.b, false);
    }

    public void b(int i, String str) {
        this.f4656a.c(0, i, b(str));
    }

    public final String b(String str) {
        String str2 = this.b;
        if (str.isEmpty()) {
            return str2;
        }
        return str2 + ": " + str;
    }

    public boolean a() {
        return this.c;
    }

    public void a(int i) {
        this.f4656a.a(0, i, b(""));
    }

    public void a(int i, String str) {
        this.f4656a.a(0, i, b(str));
    }
}
