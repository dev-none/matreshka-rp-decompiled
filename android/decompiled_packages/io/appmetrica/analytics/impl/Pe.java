package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreapi.internal.servicecomponents.ActivationBarrierCallback;
import java.util.concurrent.TimeUnit;

/* JADX INFO: loaded from: classes7.dex */
public final class Pe implements Bc, ActivationBarrierCallback {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final InterfaceC2594y9 f5836a;
    public final Ac b;
    public final Ac c;

    public Pe(InterfaceC2594y9 interfaceC2594y9, Vg vg, C2514v4 c2514v4, C2018bf c2018bf) {
        this.f5836a = interfaceC2594y9;
        Ac ac = new Ac(vg, c2514v4, c2018bf);
        this.b = ac;
        this.c = ac;
        if (ac.b()) {
            return;
        }
        C2495ua.k().a().subscribe(TimeUnit.SECONDS.toMillis(O7.f5818a.longValue()), C2495ua.k().x().e(), this);
    }

    @Override // io.appmetrica.analytics.impl.Bc
    public final K8 a() {
        return this.c;
    }

    @Override // io.appmetrica.analytics.coreapi.internal.servicecomponents.ActivationBarrierCallback
    public final void onWaitFinished() {
        this.b.a();
        ((C2415r5) this.f5836a.a()).e();
    }
}
