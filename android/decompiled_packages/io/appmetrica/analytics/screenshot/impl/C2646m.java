package io.appmetrica.analytics.screenshot.impl;

import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: renamed from: io.appmetrica.analytics.screenshot.impl.m, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2646m {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final C2643j f6571a;
    public final C2647n b;
    public final C2644k c;

    public C2646m(C2643j c2643j, C2647n c2647n, C2644k c2644k) {
        this.f6571a = c2643j;
        this.b = c2647n;
        this.c = c2644k;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!Intrinsics.areEqual(C2646m.class, obj != null ? obj.getClass() : null)) {
            return false;
        }
        if (obj == null) {
            throw new NullPointerException("null cannot be cast to non-null type io.appmetrica.analytics.screenshot.impl.config.client.model.ClientSideScreenshotConfig");
        }
        C2646m c2646m = (C2646m) obj;
        return Intrinsics.areEqual(this.f6571a, c2646m.f6571a) && Intrinsics.areEqual(this.b, c2646m.b) && Intrinsics.areEqual(this.c, c2646m.c);
    }

    public final int hashCode() {
        C2643j c2643j = this.f6571a;
        int iHashCode = (c2643j != null ? c2643j.hashCode() : 0) * 31;
        C2647n c2647n = this.b;
        int iHashCode2 = (iHashCode + (c2647n != null ? c2647n.hashCode() : 0)) * 31;
        C2644k c2644k = this.c;
        return iHashCode2 + (c2644k != null ? c2644k.hashCode() : 0);
    }

    public final String toString() {
        return "ClientSideScreenshotConfig(apiCaptorConfig=" + this.f6571a + ", serviceCaptorConfig=" + this.b + ", contentObserverCaptorConfig=" + this.c + ')';
    }

    /* JADX WARN: Illegal instructions before constructor call */
    public C2646m(F f) {
        C2658z c2658zA = f.a();
        C2643j c2643j = c2658zA != null ? new C2643j(c2658zA) : null;
        H hC = f.c();
        C2647n c2647n = hC != null ? new C2647n(hC) : null;
        B b = f.b();
        this(c2643j, c2647n, b != null ? new C2644k(b) : null);
    }
}
