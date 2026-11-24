package com.my.target;

/* JADX INFO: loaded from: classes6.dex */
public class w8 extends ya {
    public float d;
    public float e;

    public w8(String str) {
        super("playheadReachedValue", str);
        this.d = -1.0f;
        this.e = -1.0f;
    }

    public static w8 a(String str) {
        return new w8(str);
    }

    public void b(float f) {
        this.d = f;
    }

    public float d() {
        return this.e;
    }

    public float e() {
        return this.d;
    }

    public String toString() {
        return "ProgressStat{value=" + this.d + ", pvalue=" + this.e + '}';
    }

    public void a(float f) {
        this.e = f;
    }
}
