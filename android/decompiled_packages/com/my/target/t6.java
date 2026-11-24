package com.my.target;

/* JADX INFO: loaded from: classes6.dex */
public class t6 extends ac {
    public final float f;
    public final boolean g;
    public float h;

    public t6(String str, String str2, float f, int i, boolean z, int i2) {
        super(str, str2, i, i2);
        this.h = 0.0f;
        this.f = f;
        this.g = z;
    }

    public static t6 a(String str, float f, int i, boolean z, int i2) {
        return new t6("mrcStat", str, f, i, z, i2);
    }

    public float e() {
        return this.h;
    }

    public void a(float f) {
        this.h = f;
    }
}
