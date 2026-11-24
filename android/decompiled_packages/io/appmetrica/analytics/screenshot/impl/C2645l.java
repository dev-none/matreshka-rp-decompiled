package io.appmetrica.analytics.screenshot.impl;

import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: renamed from: io.appmetrica.analytics.screenshot.impl.l, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2645l {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final boolean f6569a;
    public final C2646m b;

    public C2645l(boolean z, C2646m c2646m) {
        this.f6569a = z;
        this.b = c2646m;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!Intrinsics.areEqual(C2645l.class, obj != null ? obj.getClass() : null)) {
            return false;
        }
        if (obj == null) {
            throw new NullPointerException("null cannot be cast to non-null type io.appmetrica.analytics.screenshot.impl.config.client.model.ClientSideRemoteScreenshotConfig");
        }
        C2645l c2645l = (C2645l) obj;
        return this.f6569a == c2645l.f6569a && Intrinsics.areEqual(this.b, c2645l.b);
    }

    public final int hashCode() {
        int iHashCode = Boolean.hashCode(this.f6569a) * 31;
        C2646m c2646m = this.b;
        return iHashCode + (c2646m != null ? c2646m.hashCode() : 0);
    }

    public final String toString() {
        return "ClientSideRemoteScreenshotConfig(enabled=" + this.f6569a + ", config=" + this.b + ')';
    }
}
