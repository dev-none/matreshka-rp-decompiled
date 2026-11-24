package com.pushwoosh.inapp.ui;

import java.util.ArrayList;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: loaded from: classes6.dex */
public final class a2 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final int f5106a;
    public final k1 b;
    public final k1 c;
    public final String d;
    public final boolean e;
    public final ArrayList f;
    public final boolean g;

    public a2(int i, k1 k1Var, k1 k1Var2, String str, boolean z, ArrayList buttons, boolean z2) {
        Intrinsics.checkNotNullParameter(buttons, "buttons");
        this.f5106a = i;
        this.b = k1Var;
        this.c = k1Var2;
        this.d = str;
        this.e = z;
        this.f = buttons;
        this.g = z2;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof a2)) {
            return false;
        }
        a2 a2Var = (a2) obj;
        return this.f5106a == a2Var.f5106a && Intrinsics.areEqual(this.b, a2Var.b) && Intrinsics.areEqual(this.c, a2Var.c) && Intrinsics.areEqual(this.d, a2Var.d) && this.e == a2Var.e && Intrinsics.areEqual(this.f, a2Var.f) && this.g == a2Var.g;
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r0v9, types: [int] */
    /* JADX WARN: Type inference failed for: r1v13, types: [int] */
    /* JADX WARN: Type inference failed for: r1v14 */
    /* JADX WARN: Type inference failed for: r1v17 */
    /* JADX WARN: Type inference failed for: r1v8, types: [int] */
    /* JADX WARN: Type inference failed for: r2v2 */
    /* JADX WARN: Type inference failed for: r2v3, types: [int] */
    /* JADX WARN: Type inference failed for: r2v4 */
    public final int hashCode() {
        int iHashCode = Integer.hashCode(this.f5106a) * 31;
        k1 k1Var = this.b;
        int iHashCode2 = (iHashCode + (k1Var == null ? 0 : k1Var.hashCode())) * 31;
        k1 k1Var2 = this.c;
        int iHashCode3 = (iHashCode2 + (k1Var2 == null ? 0 : k1Var2.hashCode())) * 31;
        String str = this.d;
        int iHashCode4 = (iHashCode3 + (str != null ? str.hashCode() : 0)) * 31;
        boolean z = this.e;
        ?? r1 = z;
        if (z) {
            r1 = 1;
        }
        int iHashCode5 = (this.f.hashCode() + ((iHashCode4 + r1) * 31)) * 31;
        boolean z2 = this.g;
        return iHashCode5 + (z2 ? 1 : z2);
    }

    public final String toString() {
        return "SheetContent(backgroundColor=" + this.f5106a + ", title=" + this.b + ", message=" + this.c + ", imageUrl=" + this.d + ", showCloseButton=" + this.e + ", buttons=" + this.f + ", dimsBackground=" + this.g + ')';
    }
}
