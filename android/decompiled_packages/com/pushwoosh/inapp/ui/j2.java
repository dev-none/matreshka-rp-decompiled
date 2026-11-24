package com.pushwoosh.inapp.ui;

import java.util.ArrayList;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: loaded from: classes6.dex */
public final class j2 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final ArrayList f5134a;
    public final boolean b;
    public final boolean c;

    public j2(ArrayList items, boolean z, boolean z2) {
        Intrinsics.checkNotNullParameter(items, "items");
        this.f5134a = items;
        this.b = z;
        this.c = z2;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof j2)) {
            return false;
        }
        j2 j2Var = (j2) obj;
        return Intrinsics.areEqual(this.f5134a, j2Var.f5134a) && this.b == j2Var.b && this.c == j2Var.c;
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r0v3, types: [int] */
    /* JADX WARN: Type inference failed for: r0v5, types: [int] */
    /* JADX WARN: Type inference failed for: r1v1, types: [int] */
    /* JADX WARN: Type inference failed for: r1v3 */
    /* JADX WARN: Type inference failed for: r1v4 */
    /* JADX WARN: Type inference failed for: r2v0 */
    /* JADX WARN: Type inference failed for: r2v1, types: [int] */
    /* JADX WARN: Type inference failed for: r2v2 */
    public final int hashCode() {
        int iHashCode = this.f5134a.hashCode() * 31;
        boolean z = this.b;
        ?? r1 = z;
        if (z) {
            r1 = 1;
        }
        int i = (iHashCode + r1) * 31;
        boolean z2 = this.c;
        return i + (z2 ? 1 : z2);
    }

    public final String toString() {
        return "StoriesContent(items=" + this.f5134a + ", loops=" + this.b + ", showCloseButton=" + this.c + ')';
    }
}
