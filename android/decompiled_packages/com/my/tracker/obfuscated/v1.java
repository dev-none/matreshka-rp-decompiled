package com.my.tracker.obfuscated;

/* JADX INFO: loaded from: classes6.dex */
public final class v1 implements u1 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final int f5002a;
    private long b;

    public v1(int i, long j) {
        this.f5002a = i;
        this.b = j;
    }

    @Override // com.my.tracker.obfuscated.n2, com.my.tracker.obfuscated.e2
    public int a() {
        return this.f5002a;
    }

    @Override // com.my.tracker.obfuscated.u1
    public void b(long j) {
        this.b = j;
    }

    @Override // com.my.tracker.obfuscated.u1
    public long e() {
        return this.b;
    }
}
