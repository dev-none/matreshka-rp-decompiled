package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreutils.internal.executors.SafeRunnable;

/* JADX INFO: loaded from: classes7.dex */
public final class C1 extends SafeRunnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ L1 f5618a;

    public C1(L1 l1) {
        this.f5618a = l1;
    }

    @Override // io.appmetrica.analytics.coreutils.internal.executors.SafeRunnable
    public final void runSafety() {
        synchronized (this.f5618a) {
            L1 l1 = this.f5618a;
            if (l1.c) {
                l1.b.onCreate();
            }
        }
    }
}
