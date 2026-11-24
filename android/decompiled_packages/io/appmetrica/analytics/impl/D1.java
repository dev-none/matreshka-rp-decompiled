package io.appmetrica.analytics.impl;

import android.content.Intent;
import io.appmetrica.analytics.coreutils.internal.executors.SafeRunnable;

/* JADX INFO: loaded from: classes7.dex */
public final class D1 extends SafeRunnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ Intent f5634a;
    public final /* synthetic */ int b;
    public final /* synthetic */ L1 c;

    public D1(L1 l1, Intent intent, int i) {
        this.c = l1;
        this.f5634a = intent;
        this.b = i;
    }

    @Override // io.appmetrica.analytics.coreutils.internal.executors.SafeRunnable
    public final void runSafety() {
        this.c.b.a(this.f5634a, this.b);
    }
}
