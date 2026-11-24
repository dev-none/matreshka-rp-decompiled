package com.pushwoosh.inapp.ui;

import java.util.ArrayList;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: loaded from: classes6.dex */
public final class q {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final String f5155a;
    public final int b;
    public final k1 c;
    public final k1 d;
    public final ArrayList e;
    public final boolean f;

    public q(String str, int i, k1 k1Var, k1 k1Var2, ArrayList buttons, boolean z) {
        Intrinsics.checkNotNullParameter(buttons, "buttons");
        this.f5155a = str;
        this.b = i;
        this.c = k1Var;
        this.d = k1Var2;
        this.e = buttons;
        this.f = z;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof q)) {
            return false;
        }
        q qVar = (q) obj;
        return Intrinsics.areEqual(this.f5155a, qVar.f5155a) && this.b == qVar.b && Intrinsics.areEqual(this.c, qVar.c) && Intrinsics.areEqual(this.d, qVar.d) && Intrinsics.areEqual(this.e, qVar.e) && this.f == qVar.f;
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r0v12, types: [int] */
    /* JADX WARN: Type inference failed for: r1v3, types: [int] */
    /* JADX WARN: Type inference failed for: r1v4 */
    /* JADX WARN: Type inference failed for: r1v6 */
    public final int hashCode() {
        String str = this.f5155a;
        int iHashCode = (Integer.hashCode(this.b) + ((str == null ? 0 : str.hashCode()) * 31)) * 31;
        k1 k1Var = this.c;
        int iHashCode2 = (iHashCode + (k1Var == null ? 0 : k1Var.hashCode())) * 31;
        k1 k1Var2 = this.d;
        int iHashCode3 = (this.e.hashCode() + ((iHashCode2 + (k1Var2 != null ? k1Var2.hashCode() : 0)) * 31)) * 31;
        boolean z = this.f;
        ?? r1 = z;
        if (z) {
            r1 = 1;
        }
        return iHashCode3 + r1;
    }

    public final String toString() {
        return "FullscreenContent(imageUrl=" + this.f5155a + ", backgroundColor=" + this.b + ", title=" + this.c + ", message=" + this.d + ", buttons=" + this.e + ", showCloseButton=" + this.f + ')';
    }
}
