package com.pushwoosh.inapp.ui;

import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: loaded from: classes6.dex */
public final class m0 extends r0 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final q f5143a;

    public m0(q content) {
        Intrinsics.checkNotNullParameter(content, "content");
        this.f5143a = content;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        return (obj instanceof m0) && Intrinsics.areEqual(this.f5143a, ((m0) obj).f5143a);
    }

    public final int hashCode() {
        return this.f5143a.hashCode();
    }

    public final String toString() {
        return "Fullscreen(content=" + this.f5143a + ')';
    }
}
