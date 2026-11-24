package com.my.target;

import android.content.Context;

/* JADX INFO: loaded from: classes6.dex */
public class e9 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final l8 f4610a;
    public final Context b;
    public boolean c = true;

    public e9(l8 l8Var, Context context) {
        this.f4610a = l8Var;
        this.b = context;
    }

    public static e9 a(l8 l8Var, Context context) {
        return new e9(l8Var, context);
    }

    public i5 b() {
        return new d9(this.b, this);
    }

    public i5 c() {
        return new l9(this.b, this.c);
    }

    public void a(boolean z) {
        this.c = z;
    }

    public pb b(kb kbVar, boolean z) {
        return new pb(this.b, kbVar, z);
    }

    public q8 a(s5 s5Var) {
        return q8.a(s5Var, this.f4610a, this.b);
    }

    public c1 a() {
        return new c1(this.b);
    }

    public g9 a(kb kbVar, boolean z) {
        return new g9(this.b, kbVar, z, this.c);
    }
}
