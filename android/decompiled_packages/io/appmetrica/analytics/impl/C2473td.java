package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreutils.internal.executors.SafeRunnable;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.td, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2473td extends SafeRunnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ String f6331a;

    public C2473td(String str) {
        this.f6331a = str;
    }

    @Override // io.appmetrica.analytics.coreutils.internal.executors.SafeRunnable
    public final void runSafety() {
        C2560x0 c2560x0 = C2213j4.l().p;
        String str = this.f6331a;
        c2560x0.getClass();
        C2535w0.c().a(str);
    }
}
