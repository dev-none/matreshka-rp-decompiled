package com.pushwoosh.inapp.ui;

import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: loaded from: classes6.dex */
public final class p {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final String f5152a;
    public final k1 b;
    public final k1 c;
    public final x d;

    public p(String str, k1 k1Var, k1 k1Var2, x xVar) {
        this.f5152a = str;
        this.b = k1Var;
        this.c = k1Var2;
        this.d = xVar;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof p)) {
            return false;
        }
        p pVar = (p) obj;
        return Intrinsics.areEqual(this.f5152a, pVar.f5152a) && Intrinsics.areEqual(this.b, pVar.b) && Intrinsics.areEqual(this.c, pVar.c) && Intrinsics.areEqual(this.d, pVar.d);
    }

    public final int hashCode() {
        String str = this.f5152a;
        int iHashCode = (str == null ? 0 : str.hashCode()) * 31;
        k1 k1Var = this.b;
        int iHashCode2 = (iHashCode + (k1Var == null ? 0 : k1Var.hashCode())) * 31;
        k1 k1Var2 = this.c;
        int iHashCode3 = (iHashCode2 + (k1Var2 == null ? 0 : k1Var2.hashCode())) * 31;
        x xVar = this.d;
        return iHashCode3 + (xVar != null ? xVar.hashCode() : 0);
    }

    public final String toString() {
        return "CarouselItem(imageUrl=" + this.f5152a + ", title=" + this.b + ", message=" + this.c + ", action=" + this.d + ')';
    }
}
