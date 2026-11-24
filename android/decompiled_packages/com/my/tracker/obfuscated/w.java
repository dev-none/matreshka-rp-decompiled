package com.my.tracker.obfuscated;

/* JADX INFO: loaded from: classes6.dex */
public final class w implements u {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final int f5003a;
    private int b;

    public w(int i) {
        this.f5003a = i;
        g();
    }

    @Override // com.my.tracker.obfuscated.n2, com.my.tracker.obfuscated.e2
    public int a() {
        return this.f5003a;
    }

    @Override // com.my.tracker.obfuscated.u, com.my.tracker.obfuscated.v
    public int d() {
        return this.b;
    }

    @Override // com.my.tracker.obfuscated.u
    public void f() {
        this.b++;
    }

    public void g() {
        this.b = 0;
    }

    public String toString() {
        return "[CountBased TS] id = " + this.f5003a + ", count = " + this.b;
    }
}
