package io.appmetrica.analytics.impl;

import android.util.Pair;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.j0, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2209j0 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public Mc f6142a;
    public long b;
    public boolean c;
    public final C2531vl d;

    public C2209j0(String str, long j, C2531vl c2531vl) {
        this.b = j;
        try {
            this.f6142a = new Mc(str);
        } catch (Throwable unused) {
            this.f6142a = new Mc();
        }
        this.d = c2531vl;
    }

    public final synchronized void a(Pair pair) {
        if (this.d.b(this.f6142a, (String) pair.first, (String) pair.second)) {
            this.c = true;
        }
    }

    public final synchronized String toString() {
        return "Map size " + this.f6142a.size() + ". Is changed " + this.c + ". Current revision " + this.b;
    }

    public final synchronized C2184i0 a() {
        if (this.c) {
            this.b++;
            this.c = false;
        }
        return new C2184i0(AbstractC2322nb.b(this.f6142a), this.b);
    }
}
