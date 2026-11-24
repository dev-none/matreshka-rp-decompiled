package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.networktasks.internal.NetworkServiceLocator;
import io.appmetrica.analytics.networktasks.internal.NetworkTask;

/* JADX INFO: loaded from: classes7.dex */
public final class Ng implements Ol {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Em f5808a;

    public Ng(Em em) {
        this.f5808a = em;
    }

    @Override // io.appmetrica.analytics.impl.Ol
    public final void a() throws Throwable {
        NetworkTask networkTaskC = this.f5808a.c();
        if (networkTaskC != null) {
            C2495ua.H.getClass();
            NetworkServiceLocator.getInstance().getNetworkCore().startTask(networkTaskC);
        }
    }
}
