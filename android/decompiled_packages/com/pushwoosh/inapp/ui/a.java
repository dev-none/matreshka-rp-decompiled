package com.pushwoosh.inapp.ui;

import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: loaded from: classes6.dex */
public final class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final f f5103a;
    public final String b;
    public final k1 c;
    public final k1 d;
    public final int e;
    public final x f;
    public final long g;
    public final boolean h;

    public a(f position, String str, k1 k1Var, k1 k1Var2, int i, x action, long j, boolean z) {
        Intrinsics.checkNotNullParameter(position, "position");
        Intrinsics.checkNotNullParameter(action, "action");
        this.f5103a = position;
        this.b = str;
        this.c = k1Var;
        this.d = k1Var2;
        this.e = i;
        this.f = action;
        this.g = j;
        this.h = z;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof a)) {
            return false;
        }
        a aVar = (a) obj;
        return this.f5103a == aVar.f5103a && Intrinsics.areEqual(this.b, aVar.b) && Intrinsics.areEqual(this.c, aVar.c) && Intrinsics.areEqual(this.d, aVar.d) && this.e == aVar.e && Intrinsics.areEqual(this.f, aVar.f) && this.g == aVar.g && this.h == aVar.h;
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r0v14, types: [int] */
    /* JADX WARN: Type inference failed for: r0v15 */
    /* JADX WARN: Type inference failed for: r0v16 */
    /* JADX WARN: Type inference failed for: r1v15, types: [int] */
    public final int hashCode() {
        int iHashCode = this.f5103a.hashCode() * 31;
        String str = this.b;
        int iHashCode2 = (iHashCode + (str == null ? 0 : str.hashCode())) * 31;
        k1 k1Var = this.c;
        int iHashCode3 = (iHashCode2 + (k1Var == null ? 0 : k1Var.hashCode())) * 31;
        k1 k1Var2 = this.d;
        int iHashCode4 = (Long.hashCode(this.g) + ((this.f.hashCode() + ((Integer.hashCode(this.e) + ((iHashCode3 + (k1Var2 != null ? k1Var2.hashCode() : 0)) * 31)) * 31)) * 31)) * 31;
        boolean z = this.h;
        ?? r0 = z;
        if (z) {
            r0 = 1;
        }
        return iHashCode4 + r0;
    }

    public final String toString() {
        return "BannerContent(position=" + this.f5103a + ", imageUrl=" + this.b + ", title=" + this.c + ", message=" + this.d + ", backgroundColor=" + this.e + ", action=" + this.f + ", autoDismissMs=" + this.g + ", showCloseButton=" + this.h + ')';
    }
}
