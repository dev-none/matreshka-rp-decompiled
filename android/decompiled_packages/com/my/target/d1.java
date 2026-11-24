package com.my.target;

/* JADX INFO: loaded from: classes6.dex */
public class d1 {
    public static final d1 p = new d1(4096);
    public static final d1 q = new d1(64);

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final boolean f4588a;
    public final boolean b;
    public final boolean c;
    public final boolean d;
    public final boolean e;
    public final boolean f;
    public final boolean g;
    public final boolean h;
    public final boolean i;
    public final boolean j;
    public final boolean k;
    public final boolean l;
    public final boolean m;
    public final boolean n;
    public final int o;

    public d1(int i) {
        this.o = i;
        this.f4588a = (i & 1) == 1;
        this.b = (i & 2) == 2;
        this.c = (i & 4) == 4;
        this.d = (i & 8) == 8;
        this.e = (i & 16) == 16;
        this.f = (i & 32) == 32;
        this.g = (i & 64) == 64;
        this.h = (i & 128) == 128;
        this.i = (i & 256) == 256;
        this.j = (i & 512) == 512;
        this.k = (i & 1024) == 1024;
        this.l = (i & 2048) == 2048;
        this.m = (i & 4096) == 4096;
        this.n = (i & 8192) == 8192;
    }

    public static d1 a(int i) {
        return new d1(i);
    }

    public int a() {
        return this.o;
    }
}
