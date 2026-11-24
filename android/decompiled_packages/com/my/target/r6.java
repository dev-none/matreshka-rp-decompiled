package com.my.target;

import android.graphics.Rect;

/* JADX INFO: loaded from: classes6.dex */
public class r6 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Rect f4801a = new Rect();
    public final Rect b = new Rect();
    public final Rect c = new Rect();
    public final Rect d = new Rect();
    public final Rect e = new Rect();
    public final Rect f = new Rect();
    public final Rect g = new Rect();
    public final Rect h = new Rect();

    public static void a(Rect rect, Rect rect2) {
        rect2.set(kb.c(rect.left), kb.c(rect.top), kb.c(rect.right), kb.c(rect.bottom));
    }

    public static r6 e() {
        return new r6();
    }

    public void b(int i, int i2, int i3, int i4) {
        this.e.set(i, i2, i3, i4);
        a(this.e, this.f);
    }

    public void c(int i, int i2, int i3, int i4) {
        this.g.set(i, i2, i3, i4);
        a(this.g, this.h);
    }

    public Rect d() {
        return this.b;
    }

    public Rect b() {
        return this.f;
    }

    public Rect c() {
        return this.h;
    }

    public void a(int i, int i2) {
        this.f4801a.set(0, 0, i, i2);
        a(this.f4801a, this.b);
    }

    public void a(int i, int i2, int i3, int i4) {
        this.c.set(i, i2, i3, i4);
        a(this.c, this.d);
    }

    public Rect a() {
        return this.d;
    }
}
