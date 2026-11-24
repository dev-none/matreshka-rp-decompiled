package com.my.target;

/* JADX INFO: loaded from: classes6.dex */
public final class o8 extends ac {
    public boolean f;
    public float g;
    public float h;

    public o8(String str, String str2, int i, int i2) {
        super(str, str2, i, i2);
        this.g = -1.0f;
        this.h = -1.0f;
    }

    public static o8 a(String str, int i, int i2) {
        return new o8("ovvStat", str, i, i2);
    }

    public void b(boolean z) {
        this.f = z;
    }

    public float e() {
        return this.h;
    }

    public float f() {
        return this.g;
    }

    public boolean g() {
        return this.f;
    }

    public void a(float f) {
        this.h = f;
    }

    public void b(float f) {
        this.g = f;
    }
}
