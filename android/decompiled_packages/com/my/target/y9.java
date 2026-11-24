package com.my.target;

/* JADX INFO: loaded from: classes6.dex */
public class y9 extends t6 {
    public int i;
    public int j;

    public y9(String str, float f, int i, boolean z) {
        super("playheadViewabilityValue", str, f, i, z, 2);
    }

    public static y9 a(String str, float f, int i, boolean z) {
        return new y9(str, f, i, z);
    }

    public void b(int i) {
        this.i = i;
    }

    public int f() {
        return this.j;
    }

    public int g() {
        return this.i;
    }

    public void a(int i) {
        this.j = i;
    }
}
