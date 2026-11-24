package com.pushwoosh.inapp.ui;

import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: loaded from: classes6.dex */
public final class p0 extends r0 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final j2 f5153a;

    public p0(j2 content) {
        Intrinsics.checkNotNullParameter(content, "content");
        this.f5153a = content;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        return (obj instanceof p0) && Intrinsics.areEqual(this.f5153a, ((p0) obj).f5153a);
    }

    public final int hashCode() {
        return this.f5153a.hashCode();
    }

    public final String toString() {
        return "Stories(content=" + this.f5153a + ')';
    }
}
