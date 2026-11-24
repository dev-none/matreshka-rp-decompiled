package io.appmetrica.analytics.impl;

import android.os.Process;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.tb, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2471tb implements InterfaceC2101el {
    @Override // io.appmetrica.analytics.impl.InterfaceC2101el
    public final boolean a(C2397qb c2397qb) {
        Integer num = c2397qb.f;
        return num == null || num.intValue() != Process.myPid();
    }
}
