package io.appmetrica.analytics.coreutils.impl;

import io.appmetrica.analytics.coreapi.internal.servicecomponents.ActivationBarrierCallback;

/* JADX INFO: loaded from: classes7.dex */
public final class m implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ ActivationBarrierCallback f5495a;

    public m(ActivationBarrierCallback activationBarrierCallback) {
        this.f5495a = activationBarrierCallback;
    }

    @Override // java.lang.Runnable
    public final void run() {
        this.f5495a.onWaitFinished();
    }
}
