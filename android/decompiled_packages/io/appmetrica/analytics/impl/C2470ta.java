package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.networktasks.internal.NetworkServiceLocator;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.ta, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2470ta implements InterfaceC2381pk {
    @Override // io.appmetrica.analytics.impl.InterfaceC2381pk
    public final void onCreate() {
        NetworkServiceLocator.getInstance().onCreate();
    }

    @Override // io.appmetrica.analytics.impl.InterfaceC2381pk
    public final void onDestroy() {
        NetworkServiceLocator.getInstance().onDestroy();
    }
}
