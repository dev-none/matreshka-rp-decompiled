package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreutils.internal.executors.SafeRunnable;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.qd, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2399qd extends SafeRunnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ C2498ud f6273a;
    public final /* synthetic */ int b;
    public final /* synthetic */ String c;

    public C2399qd(C2498ud c2498ud, int i, String str) {
        this.f6273a = c2498ud;
        this.b = i;
        this.c = str;
    }

    @Override // io.appmetrica.analytics.coreutils.internal.executors.SafeRunnable
    public final void runSafety() {
        C2498ud.a(this.f6273a).a(new M9(this.b, this.c));
    }
}
