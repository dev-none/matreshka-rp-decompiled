package io.appmetrica.analytics.impl;

import android.os.Bundle;
import io.appmetrica.analytics.coreutils.internal.executors.SafeRunnable;

/* JADX INFO: loaded from: classes7.dex */
public final class I1 extends SafeRunnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ int f5717a;
    public final /* synthetic */ Bundle b;
    public final /* synthetic */ L1 c;

    public I1(L1 l1, int i, Bundle bundle) {
        this.c = l1;
        this.f5717a = i;
        this.b = bundle;
    }

    @Override // io.appmetrica.analytics.coreutils.internal.executors.SafeRunnable
    public final void runSafety() {
        this.c.b.reportData(this.f5717a, this.b);
    }
}
