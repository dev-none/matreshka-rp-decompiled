package com.pushwoosh.inapp.ui;

import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: loaded from: classes6.dex */
public final class c0 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final k1 f5112a;
    public final int b;
    public final int c;
    public final float d;
    public final x e;

    public c0(k1 text, int i, int i2, float f, x action) {
        Intrinsics.checkNotNullParameter(text, "text");
        Intrinsics.checkNotNullParameter(action, "action");
        this.f5112a = text;
        this.b = i;
        this.c = i2;
        this.d = f;
        this.e = action;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof c0)) {
            return false;
        }
        c0 c0Var = (c0) obj;
        return Intrinsics.areEqual(this.f5112a, c0Var.f5112a) && this.b == c0Var.b && this.c == c0Var.c && Float.compare(this.d, c0Var.d) == 0 && Intrinsics.areEqual(this.e, c0Var.e);
    }

    public final int hashCode() {
        return this.e.hashCode() + ((Float.hashCode(this.d) + ((Integer.hashCode(this.c) + ((Integer.hashCode(this.b) + (this.f5112a.hashCode() * 31)) * 31)) * 31)) * 31);
    }

    public final String toString() {
        return "InAppButton(text=" + this.f5112a + ", backgroundColor=" + this.b + ", borderColor=" + this.c + ", cornerRadiusDp=" + this.d + ", action=" + this.e + ')';
    }
}
