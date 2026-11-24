package com.my.target;

import com.my.target.common.models.ImageData;

/* JADX INFO: loaded from: classes6.dex */
public abstract class e4 extends b {
    public ImageData L;
    public float M;
    public boolean N = true;
    public boolean O = true;

    public e4() {
        this.r = d1.q;
    }

    public float L() {
        return this.M;
    }

    public ImageData M() {
        return this.L;
    }

    public boolean N() {
        return this.O;
    }

    public boolean O() {
        return this.N;
    }

    public void c(ImageData imageData) {
        this.L = imageData;
    }

    public void e(boolean z) {
        this.O = z;
    }

    public void f(boolean z) {
        this.N = z;
    }

    public void c(float f) {
        this.M = f;
    }
}
