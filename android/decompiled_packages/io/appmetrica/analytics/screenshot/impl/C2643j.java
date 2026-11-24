package io.appmetrica.analytics.screenshot.impl;

import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: renamed from: io.appmetrica.analytics.screenshot.impl.j, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2643j {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final boolean f6565a;

    public C2643j(boolean z) {
        this.f6565a = z;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!Intrinsics.areEqual(C2643j.class, obj != null ? obj.getClass() : null)) {
            return false;
        }
        if (obj != null) {
            return this.f6565a == ((C2643j) obj).f6565a;
        }
        throw new NullPointerException("null cannot be cast to non-null type io.appmetrica.analytics.screenshot.impl.config.client.model.ClientSideApiCaptorConfig");
    }

    public final int hashCode() {
        return Boolean.hashCode(this.f6565a);
    }

    public final String toString() {
        return "ClientSideApiCaptorConfig(enabled=" + this.f6565a + ')';
    }

    public C2643j(C2658z c2658z) {
        this(c2658z.a());
    }
}
