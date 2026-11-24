package com.my.target;

import android.content.Context;

/* JADX INFO: loaded from: classes6.dex */
public final class e8 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final l8 f4609a;
    public final Context b;
    public boolean c = true;

    public e8(l8 l8Var, Context context) {
        this.f4609a = l8Var;
        this.b = context;
    }

    public static e8 a(l8 l8Var, Context context) {
        return new e8(l8Var, context);
    }

    public void a(boolean z) {
        this.c = z;
    }

    public q8 a(s5 s5Var) {
        return q8.a(s5Var, this.f4609a, this.b);
    }

    public y a() {
        return w5.a(this.c, this.b);
    }
}
