package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreapi.internal.executors.IHandlerExecutor;
import io.appmetrica.analytics.coreapi.internal.servicecomponents.ActivationBarrierCallback;
import io.appmetrica.analytics.coreutils.internal.services.WaitForActivationDelayBarrier;
import java.util.Iterator;
import java.util.List;
import java.util.concurrent.TimeUnit;

/* JADX INFO: loaded from: classes7.dex */
public final class P5 implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final List f5831a;
    public final IHandlerExecutor b = C2495ua.k().x().a();
    public final WaitForActivationDelayBarrier c = C2495ua.k().a();

    public P5(List list) {
        this.f5831a = list;
    }

    public static final void a(P5 p5) {
        Iterator it = p5.f5831a.iterator();
        while (it.hasNext()) {
            ((Runnable) it.next()).run();
        }
    }

    @Override // java.lang.Runnable
    public final void run() {
        this.c.subscribe(TimeUnit.SECONDS.toMillis(10L), this.b, new ActivationBarrierCallback() { // from class: io.appmetrica.analytics.impl.P5$$ExternalSyntheticLambda0
            @Override // io.appmetrica.analytics.coreapi.internal.servicecomponents.ActivationBarrierCallback
            public final void onWaitFinished() {
                P5.a(this.f$0);
            }
        });
    }
}
