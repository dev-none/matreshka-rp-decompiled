package io.appmetrica.analytics.screenshot.impl;

import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: renamed from: io.appmetrica.analytics.screenshot.impl.n, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2647n {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final boolean f6572a;
    public final long b;

    public C2647n(boolean z, long j) {
        this.f6572a = z;
        this.b = j;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!Intrinsics.areEqual(C2647n.class, obj != null ? obj.getClass() : null)) {
            return false;
        }
        if (obj == null) {
            throw new NullPointerException("null cannot be cast to non-null type io.appmetrica.analytics.screenshot.impl.config.client.model.ClientSideServiceCaptorConfig");
        }
        C2647n c2647n = (C2647n) obj;
        return this.f6572a == c2647n.f6572a && this.b == c2647n.b;
    }

    public final int hashCode() {
        return Long.hashCode(this.b) + (Boolean.hashCode(this.f6572a) * 31);
    }

    public final String toString() {
        return "ClientSideServiceCaptorConfig(enabled=" + this.f6572a + ", delaySeconds=" + this.b + ')';
    }

    public C2647n(H h) {
        this(h.b(), h.a());
    }
}
