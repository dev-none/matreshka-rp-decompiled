package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.ModuleEvent;
import io.appmetrica.analytics.coreutils.internal.executors.SafeRunnable;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.pd, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2374pd extends SafeRunnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ C2498ud f6257a;
    public final /* synthetic */ ModuleEvent b;

    public C2374pd(C2498ud c2498ud, ModuleEvent moduleEvent) {
        this.f6257a = c2498ud;
        this.b = moduleEvent;
    }

    @Override // io.appmetrica.analytics.coreutils.internal.executors.SafeRunnable
    public final void runSafety() {
        C2498ud.a(this.f6257a).reportEvent(this.b);
    }
}
