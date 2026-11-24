package io.appmetrica.analytics.coreutils.internal.services;

/* JADX INFO: loaded from: classes7.dex */
public final class b implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ WaitForActivationDelayBarrier.ActivationBarrierHelper f5519a;

    public b(WaitForActivationDelayBarrier.ActivationBarrierHelper activationBarrierHelper) {
        this.f5519a = activationBarrierHelper;
    }

    @Override // java.lang.Runnable
    public final void run() {
        a aVar = this.f5519a.b;
        aVar.b.f5517a = true;
        aVar.f5518a.run();
    }
}
