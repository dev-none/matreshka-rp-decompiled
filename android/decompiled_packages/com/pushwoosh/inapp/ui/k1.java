package com.pushwoosh.inapp.ui;

import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: loaded from: classes6.dex */
public final class k1 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final String f5137a;
    public final int b;

    public k1(String text, int i) {
        Intrinsics.checkNotNullParameter(text, "text");
        this.f5137a = text;
        this.b = i;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof k1)) {
            return false;
        }
        k1 k1Var = (k1) obj;
        return Intrinsics.areEqual(this.f5137a, k1Var.f5137a) && this.b == k1Var.b;
    }

    public final int hashCode() {
        return Integer.hashCode(this.b) + (this.f5137a.hashCode() * 31);
    }

    public final String toString() {
        return "InAppText(text=" + this.f5137a + ", color=" + this.b + ')';
    }
}
