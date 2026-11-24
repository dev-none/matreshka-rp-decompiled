package io.appmetrica.analytics.impl;

import android.os.Bundle;

/* JADX INFO: loaded from: classes7.dex */
public final class P1 implements InterfaceC2203ik {
    public static final O1 b = new O1();
    public static final int c = 1;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final InterfaceC2435s0 f5827a;

    public P1(InterfaceC2435s0 interfaceC2435s0) {
        this.f5827a = interfaceC2435s0;
    }

    @Override // io.appmetrica.analytics.impl.InterfaceC2203ik
    public final void reportData(int i, Bundle bundle) {
        ((M1) this.f5827a).a(bundle);
    }
}
