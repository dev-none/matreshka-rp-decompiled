package com.pushwoosh.inapp.ui;

import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: loaded from: classes6.dex */
public final class q0 extends r0 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final q2 f5156a;

    public q0(q2 content) {
        Intrinsics.checkNotNullParameter(content, "content");
        this.f5156a = content;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        return (obj instanceof q0) && Intrinsics.areEqual(this.f5156a, ((q0) obj).f5156a);
    }

    public final int hashCode() {
        return this.f5156a.hashCode();
    }

    public final String toString() {
        return "Video(content=" + this.f5156a + ')';
    }
}
