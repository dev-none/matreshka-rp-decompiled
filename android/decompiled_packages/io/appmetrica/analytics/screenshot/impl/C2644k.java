package io.appmetrica.analytics.screenshot.impl;

import java.util.List;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: renamed from: io.appmetrica.analytics.screenshot.impl.k, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2644k {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final boolean f6567a;
    public final List b;
    public final long c;

    public C2644k(boolean z, List list, long j) {
        this.f6567a = z;
        this.b = list;
        this.c = j;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!Intrinsics.areEqual(C2644k.class, obj != null ? obj.getClass() : null)) {
            return false;
        }
        if (obj == null) {
            throw new NullPointerException("null cannot be cast to non-null type io.appmetrica.analytics.screenshot.impl.config.client.model.ClientSideContentObserverCaptorConfig");
        }
        C2644k c2644k = (C2644k) obj;
        return this.f6567a == c2644k.f6567a && Intrinsics.areEqual(this.b, c2644k.b) && this.c == c2644k.c;
    }

    public final int hashCode() {
        return Long.hashCode(this.c) + ((this.b.hashCode() + (Boolean.hashCode(this.f6567a) * 31)) * 31);
    }

    public final String toString() {
        return "ClientSideContentObserverCaptorConfig(enabled=" + this.f6567a + ", mediaStoreColumnNames=" + this.b + ", detectWindowSeconds=" + this.c + ')';
    }

    public C2644k(B b) {
        this(b.b(), b.c(), b.a());
    }
}
