package com.my.target;

import android.graphics.Insets;

/* JADX INFO: loaded from: classes6.dex */
public final class ib {
    public static final ib e = new ib(0, 0, 0, 0);

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final int f4662a;
    public final int b;
    public final int c;
    public final int d;

    public ib(int i, int i2, int i3, int i4) {
        this.f4662a = i;
        this.b = i2;
        this.c = i3;
        this.d = i4;
    }

    public static ib a(int i, int i2, int i3, int i4) {
        return (i == 0 && i2 == 0 && i3 == 0 && i4 == 0) ? e : new ib(i, i2, i3, i4);
    }

    public String toString() {
        return "TrgInsets{left=" + this.f4662a + ", top=" + this.b + ", right=" + this.c + ", bottom=" + this.d + '}';
    }

    public static ib a(Insets insets) {
        return a(insets.left, insets.top, insets.right, insets.bottom);
    }
}
