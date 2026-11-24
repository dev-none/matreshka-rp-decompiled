package com.pushwoosh.inapp.ui;

import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: loaded from: classes6.dex */
public final class l0 extends r0 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final g f5140a;

    public l0(g content) {
        Intrinsics.checkNotNullParameter(content, "content");
        this.f5140a = content;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        return (obj instanceof l0) && Intrinsics.areEqual(this.f5140a, ((l0) obj).f5140a);
    }

    public final int hashCode() {
        return this.f5140a.hashCode();
    }

    public final String toString() {
        return "Carousel(content=" + this.f5140a + ')';
    }
}
