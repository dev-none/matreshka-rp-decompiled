package io.appmetrica.analytics.screenshot.impl;

import java.util.List;

/* JADX INFO: loaded from: classes7.dex */
public final class i0 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final boolean f6564a;
    public final List b;
    public final long c;

    public i0(boolean z, List list, long j) {
        this.f6564a = z;
        this.b = list;
        this.c = j;
    }

    public final long a() {
        return this.c;
    }

    public final boolean b() {
        return this.f6564a;
    }

    public final List c() {
        return this.b;
    }

    public final String toString() {
        return "ServiceSideContentObserverCaptorConfig(enabled=" + this.f6564a + ", mediaStoreColumnNames=" + this.b + ", detectWindowSeconds=" + this.c + ')';
    }

    public i0(C2649p c2649p) {
        this(c2649p.b(), c2649p.c(), c2649p.a());
    }
}
