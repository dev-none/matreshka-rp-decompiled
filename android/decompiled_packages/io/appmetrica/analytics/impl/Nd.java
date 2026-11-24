package io.appmetrica.analytics.impl;

import android.os.Process;

/* JADX INFO: loaded from: classes7.dex */
public final class Nd implements InterfaceC2101el {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final int f5806a;

    public Nd(int i) {
        this.f5806a = i;
    }

    @Override // io.appmetrica.analytics.impl.InterfaceC2101el
    public final boolean a(String str) {
        return this.f5806a != Process.myPid();
    }
}
