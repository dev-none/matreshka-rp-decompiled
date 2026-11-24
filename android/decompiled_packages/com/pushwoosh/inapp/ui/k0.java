package com.pushwoosh.inapp.ui;

import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: loaded from: classes6.dex */
public final class k0 extends r0 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final a f5136a;

    public k0(a content) {
        Intrinsics.checkNotNullParameter(content, "content");
        this.f5136a = content;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        return (obj instanceof k0) && Intrinsics.areEqual(this.f5136a, ((k0) obj).f5136a);
    }

    public final int hashCode() {
        return this.f5136a.hashCode();
    }

    public final String toString() {
        return "Banner(content=" + this.f5136a + ')';
    }
}
