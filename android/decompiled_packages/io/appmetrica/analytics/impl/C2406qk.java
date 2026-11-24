package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreutils.internal.time.SystemTimeProvider;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.qk, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2406qk {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final SystemTimeProvider f6278a;
    public final long b;

    public C2406qk() {
        SystemTimeProvider systemTimeProvider = new SystemTimeProvider();
        this.f6278a = systemTimeProvider;
        this.b = systemTimeProvider.currentTimeMillis();
    }
}
