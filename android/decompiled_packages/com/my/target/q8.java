package com.my.target;

import android.content.Context;
import android.text.TextUtils;
import java.util.ArrayList;
import java.util.Iterator;

/* JADX INFO: loaded from: classes6.dex */
public class q8 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public boolean f4790a;
    public l8 b;
    public ab c;
    public za d;
    public Context e;
    public String f;
    public a g;
    public float h;
    public boolean i;

    public interface a {
        void a();
    }

    public q8(s5 s5Var, l8 l8Var, Context context) {
        this.i = true;
        this.b = l8Var;
        if (context != null) {
            this.e = context.getApplicationContext();
        }
        if (s5Var == null) {
            return;
        }
        za zaVarX = s5Var.x();
        this.d = zaVarX;
        this.c = zaVarX.b();
        this.f = s5Var.r();
        this.h = s5Var.o();
        this.i = s5Var.J();
    }

    public static q8 a(s5 s5Var, l8 l8Var, Context context) {
        return new q8(s5Var, l8Var, context);
    }

    public static q8 b() {
        return new q8(null, null, null);
    }

    public void c() {
        if (a()) {
            return;
        }
        this.c = this.d.b();
        this.f4790a = false;
    }

    public void d() {
        if (a()) {
            return;
        }
        bb.b(this.d, "closedByUser", -1, this.e);
    }

    public void e() {
        if (a()) {
            return;
        }
        bb.b(this.d, "playbackCompleted", 1, this.e);
    }

    public void f() {
        if (a()) {
            return;
        }
        bb.b(this.d, "playbackPaused", 1, this.e);
        l8 l8Var = this.b;
        if (l8Var != null) {
            l8Var.a(0);
        }
    }

    public void g() {
        if (a()) {
            return;
        }
        bb.b(this.d, "error", 1, this.e);
        bb.b(this.d, "playbackError", 1, this.e);
        l8 l8Var = this.b;
        if (l8Var != null) {
            l8Var.a(3);
        }
    }

    public void h() {
        if (a()) {
            return;
        }
        bb.b(this.d, "playbackTimeout", 1, this.e);
    }

    public void i() {
        if (a()) {
            return;
        }
        bb.b(this.d, "playbackResumed", 1, this.e);
        l8 l8Var = this.b;
        if (l8Var != null) {
            l8Var.a(1);
        }
    }

    public void j() {
        if (a()) {
            return;
        }
        bb.b(this.d, "playbackStopped", 1, this.e);
    }

    public void a(Context context) {
        this.e = context;
    }

    public void b(float f, float f2) {
        if (e2.a(f, f2) == 0) {
            return;
        }
        if (!a()) {
            if (e2.a(0.0f, f) == 0) {
                bb.b(this.d, "volumeOn", 1, this.e);
            } else if (e2.a(0.0f, f2) == 0) {
                bb.b(this.d, "volumeOff", 1, this.e);
            }
        }
        l8 l8Var = this.b;
        if (l8Var != null) {
            l8Var.a(f2);
        }
    }

    public void a(a aVar) {
        this.g = aVar;
    }

    public void a(s5 s5Var) {
        if (s5Var != null) {
            if (s5Var.x() != this.d) {
                this.f4790a = false;
            }
            this.d = s5Var.x();
            this.c = s5Var.x().b();
            this.i = s5Var.J();
        } else {
            this.d = null;
            this.c = null;
        }
        this.f = null;
        this.h = 0.0f;
    }

    public void a(l8 l8Var) {
        this.b = l8Var;
    }

    public void a(float f, float f2) {
        if (a()) {
            return;
        }
        if (!this.f4790a) {
            bb.b(this.d, "playbackStarted", 1, this.e);
            a aVar = this.g;
            if (aVar != null) {
                aVar.a();
            }
            this.f4790a = true;
        }
        if (!this.c.f4536a.isEmpty()) {
            ab abVarA = ab.a(new ArrayList(), this.c.b);
            Iterator it = this.c.f4536a.iterator();
            while (it.hasNext()) {
                w8 w8Var = (w8) it.next();
                if (e2.a(w8Var.e(), f) != 1) {
                    abVarA.f4536a.add(w8Var);
                    it.remove();
                }
            }
            bb.b(abVarA, 1, this.e);
        }
        l8 l8Var = this.b;
        if (l8Var != null) {
            l8Var.b(f, f2);
        }
        if (this.h <= 0.0f || f2 <= 0.0f || TextUtils.isEmpty(this.f) || !this.i || Math.abs(f2 - this.h) <= 1.5f) {
            return;
        }
        q5.a("Bad value").f("Media duration error: expected " + this.h + ", but was " + f2).d(this.f).b(this.e);
        this.i = false;
    }

    public void b(boolean z) {
        if (a()) {
            return;
        }
        bb.b(this.d, z ? "volumeOn" : "volumeOff", -1, this.e);
        l8 l8Var = this.b;
        if (l8Var != null) {
            l8Var.a(z ? 1.0f : 0.0f);
        }
    }

    public void a(boolean z) {
        if (a()) {
            return;
        }
        bb.b(this.d, z ? "fullscreenOn" : "fullscreenOff", 1, this.e);
        l8 l8Var = this.b;
        if (l8Var != null) {
            l8Var.a(z);
        }
    }

    public final boolean a() {
        return this.e == null || this.d == null || this.c == null;
    }
}
