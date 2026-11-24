package com.pushwoosh.inapp.ui;

import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: loaded from: classes6.dex */
public final class o0 extends r0 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final a2 f5149a;

    public o0(a2 content) {
        Intrinsics.checkNotNullParameter(content, "content");
        this.f5149a = content;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        return (obj instanceof o0) && Intrinsics.areEqual(this.f5149a, ((o0) obj).f5149a);
    }

    public final int hashCode() {
        return this.f5149a.hashCode();
    }

    public final String toString() {
        return "Sheet(content=" + this.f5149a + ')';
    }
}
