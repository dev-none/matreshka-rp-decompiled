package com.my.target;

/* JADX INFO: loaded from: classes6.dex */
public abstract class e2 {
    public static int a(float f, float f2) {
        float f3 = f - f2;
        if (f3 > 1.0E-6f) {
            return 1;
        }
        return f3 < -1.0E-6f ? -1 : 0;
    }
}
