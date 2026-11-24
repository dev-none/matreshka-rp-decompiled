package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreutils.internal.executors.SafeRunnable;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.rd, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2423rd extends SafeRunnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ C2498ud f6293a;
    public final /* synthetic */ boolean b;

    public C2423rd(C2498ud c2498ud, boolean z) {
        this.f6293a = c2498ud;
        this.b = z;
    }

    @Override // io.appmetrica.analytics.coreutils.internal.executors.SafeRunnable
    public final void runSafety() {
        C2498ud.a(this.f6293a).a(this.b, false);
    }
}
