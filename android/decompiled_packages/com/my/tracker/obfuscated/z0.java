package com.my.tracker.obfuscated;

import java.util.Objects;

/* JADX INFO: loaded from: classes6.dex */
public final class z0 {
    public static final z0 g = new z0(-1, 0.0d, 0.0d, 0.0f, 0.0f, 0);

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final int f5018a;
    public final double b;
    public final double c;
    public final float d;
    public final float e;
    public final long f;

    public z0(int i, double d, double d2, float f, float f2, long j) {
        this.f5018a = i;
        this.b = d;
        this.c = d2;
        this.d = f;
        this.e = f2;
        this.f = j;
    }

    public boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj != null && z0.class == obj.getClass()) {
            z0 z0Var = (z0) obj;
            if (this.f5018a == z0Var.f5018a && Double.compare(z0Var.b, this.b) == 0 && Double.compare(z0Var.c, this.c) == 0 && Float.compare(z0Var.d, this.d) == 0 && Float.compare(z0Var.e, this.e) == 0 && this.f == z0Var.f) {
                return true;
            }
        }
        return false;
    }

    public int hashCode() {
        return Objects.hash(Integer.valueOf(this.f5018a), Double.valueOf(this.b), Double.valueOf(this.c), Float.valueOf(this.d), Float.valueOf(this.e), Long.valueOf(this.f));
    }
}
