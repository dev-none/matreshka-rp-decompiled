package com.pushwoosh.inapp.ui;

import java.util.ArrayList;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: loaded from: classes6.dex */
public final class q2 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final String f5158a;
    public final String b;
    public final String c;
    public final k1 d;
    public final k1 e;
    public final ArrayList f;
    public final boolean g;
    public final boolean h;
    public final boolean i;

    public q2(String videoUrl, String str, String str2, k1 k1Var, k1 k1Var2, ArrayList buttons, boolean z, boolean z2, boolean z3) {
        Intrinsics.checkNotNullParameter(videoUrl, "videoUrl");
        Intrinsics.checkNotNullParameter(buttons, "buttons");
        this.f5158a = videoUrl;
        this.b = str;
        this.c = str2;
        this.d = k1Var;
        this.e = k1Var2;
        this.f = buttons;
        this.g = z;
        this.h = z2;
        this.i = z3;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof q2)) {
            return false;
        }
        q2 q2Var = (q2) obj;
        return Intrinsics.areEqual(this.f5158a, q2Var.f5158a) && Intrinsics.areEqual(this.b, q2Var.b) && Intrinsics.areEqual(this.c, q2Var.c) && Intrinsics.areEqual(this.d, q2Var.d) && Intrinsics.areEqual(this.e, q2Var.e) && Intrinsics.areEqual(this.f, q2Var.f) && this.g == q2Var.g && this.h == q2Var.h && this.i == q2Var.i;
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r0v12, types: [int] */
    /* JADX WARN: Type inference failed for: r0v14, types: [int] */
    /* JADX WARN: Type inference failed for: r0v16 */
    /* JADX WARN: Type inference failed for: r0v17 */
    /* JADX WARN: Type inference failed for: r0v18 */
    /* JADX WARN: Type inference failed for: r0v19 */
    /* JADX WARN: Type inference failed for: r1v14, types: [int] */
    /* JADX WARN: Type inference failed for: r1v16, types: [int] */
    /* JADX WARN: Type inference failed for: r1v18, types: [int] */
    /* JADX WARN: Type inference failed for: r2v2 */
    /* JADX WARN: Type inference failed for: r2v3, types: [int] */
    /* JADX WARN: Type inference failed for: r2v4 */
    public final int hashCode() {
        int iHashCode = this.f5158a.hashCode() * 31;
        String str = this.b;
        int iHashCode2 = (iHashCode + (str == null ? 0 : str.hashCode())) * 31;
        String str2 = this.c;
        int iHashCode3 = (iHashCode2 + (str2 == null ? 0 : str2.hashCode())) * 31;
        k1 k1Var = this.d;
        int iHashCode4 = (iHashCode3 + (k1Var == null ? 0 : k1Var.hashCode())) * 31;
        k1 k1Var2 = this.e;
        int iHashCode5 = (this.f.hashCode() + ((iHashCode4 + (k1Var2 != null ? k1Var2.hashCode() : 0)) * 31)) * 31;
        boolean z = this.g;
        ?? r0 = z;
        if (z) {
            r0 = 1;
        }
        int i = (iHashCode5 + r0) * 31;
        boolean z2 = this.h;
        ?? r1 = z2;
        if (z2) {
            r1 = 1;
        }
        int i2 = (i + r1) * 31;
        boolean z3 = this.i;
        return i2 + (z3 ? 1 : z3);
    }

    public final String toString() {
        return "VideoContent(videoUrl=" + this.f5158a + ", posterUrl=" + this.b + ", fallbackImageUrl=" + this.c + ", title=" + this.d + ", message=" + this.e + ", buttons=" + this.f + ", loops=" + this.g + ", muted=" + this.h + ", showCloseButton=" + this.i + ')';
    }
}
