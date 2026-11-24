package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreapi.internal.executors.InterruptionSafeThread;
import java.util.concurrent.FutureTask;
import java.util.concurrent.TimeUnit;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.dg, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2071dg implements InterfaceC2019bg {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ C2225jg f6047a;

    public C2071dg(C2225jg c2225jg) {
        this.f6047a = c2225jg;
    }

    @Override // io.appmetrica.analytics.impl.InterfaceC2019bg
    public final void a() {
        C2225jg c2225jg = this.f6047a;
        Ga ga = c2225jg.b;
        C2045cg c2045cg = new C2045cg(c2225jg);
        ga.getClass();
        try {
            FutureTask futureTask = new FutureTask(new Fa(ga));
            C2495ua.H.d.f6244a.getClass();
            new InterruptionSafeThread(futureTask, "IAA-SHMSR-" + Gd.f5690a.incrementAndGet()).start();
            C2451sg c2451sg = (C2451sg) futureTask.get(5L, TimeUnit.SECONDS);
            no.a(ga.b);
            C2225jg.a(c2225jg, c2451sg, C2225jg.a(c2225jg));
        } catch (Throwable th) {
            try {
                c2045cg.a(th);
            } finally {
                no.a(ga.b);
            }
        }
    }
}
