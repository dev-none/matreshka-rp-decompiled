package com.pushwoosh.inapp.ui;

import java.util.ArrayList;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: loaded from: classes6.dex */
public final class p2 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final String f5154a;
    public final k1 b;
    public final k1 c;
    public final ArrayList d;
    public final long e;

    public p2(String str, k1 k1Var, k1 k1Var2, ArrayList buttons, long j) {
        Intrinsics.checkNotNullParameter(buttons, "buttons");
        this.f5154a = str;
        this.b = k1Var;
        this.c = k1Var2;
        this.d = buttons;
        this.e = j;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof p2)) {
            return false;
        }
        p2 p2Var = (p2) obj;
        return Intrinsics.areEqual(this.f5154a, p2Var.f5154a) && Intrinsics.areEqual(this.b, p2Var.b) && Intrinsics.areEqual(this.c, p2Var.c) && Intrinsics.areEqual(this.d, p2Var.d) && this.e == p2Var.e;
    }

    public final int hashCode() {
        String str = this.f5154a;
        int iHashCode = (str == null ? 0 : str.hashCode()) * 31;
        k1 k1Var = this.b;
        int iHashCode2 = (iHashCode + (k1Var == null ? 0 : k1Var.hashCode())) * 31;
        k1 k1Var2 = this.c;
        return Long.hashCode(this.e) + ((this.d.hashCode() + ((iHashCode2 + (k1Var2 != null ? k1Var2.hashCode() : 0)) * 31)) * 31);
    }

    public final String toString() {
        return "StoryItem(imageUrl=" + this.f5154a + ", title=" + this.b + ", message=" + this.c + ", buttons=" + this.d + ", durationMs=" + this.e + ')';
    }
}
