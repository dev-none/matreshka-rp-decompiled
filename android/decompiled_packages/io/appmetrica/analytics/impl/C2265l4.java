package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreutils.internal.time.SystemTimeProvider;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.l4, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2265l4 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final SystemTimeProvider f6183a;

    public C2265l4() {
        this(new SystemTimeProvider());
    }

    public final void a() {
        this.f6183a.elapsedRealtime();
    }

    public C2265l4(SystemTimeProvider systemTimeProvider) {
        this.f6183a = systemTimeProvider;
    }
}
