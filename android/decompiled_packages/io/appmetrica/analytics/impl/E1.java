package io.appmetrica.analytics.impl;

import android.content.Intent;
import io.appmetrica.analytics.coreutils.internal.executors.SafeRunnable;

/* JADX INFO: loaded from: classes7.dex */
public final class E1 extends SafeRunnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ Intent f5648a;
    public final /* synthetic */ int b;
    public final /* synthetic */ int c;
    public final /* synthetic */ L1 d;

    public E1(L1 l1, Intent intent, int i, int i2) {
        this.d = l1;
        this.f5648a = intent;
        this.b = i;
        this.c = i2;
    }

    @Override // io.appmetrica.analytics.coreutils.internal.executors.SafeRunnable
    public final void runSafety() {
        this.d.b.a(this.f5648a, this.b, this.c);
    }
}
