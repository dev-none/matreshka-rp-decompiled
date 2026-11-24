package com.pushwoosh.inapp.ui;

import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: loaded from: classes6.dex */
public final class n0 extends r0 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final q1 f5147a;

    public n0(q1 content) {
        Intrinsics.checkNotNullParameter(content, "content");
        this.f5147a = content;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        return (obj instanceof n0) && Intrinsics.areEqual(this.f5147a, ((n0) obj).f5147a);
    }

    public final int hashCode() {
        return this.f5147a.hashCode();
    }

    public final String toString() {
        return "Modal(content=" + this.f5147a + ')';
    }
}
