package com.my.target;

/* JADX INFO: loaded from: classes6.dex */
public class x9 extends ya {
    public int d;
    public int e;
    public int f;

    public x9(String str) {
        super("playheadTimerValue", str);
        this.f = 1;
    }

    public static x9 a(String str) {
        return new x9(str);
    }

    public void b(int i) {
        this.f = i;
    }

    public void c(int i) {
        this.d = i;
    }

    public int d() {
        return this.e;
    }

    public int e() {
        return this.f;
    }

    public int f() {
        return this.d;
    }

    public void a(int i) {
        this.e = i;
    }
}
