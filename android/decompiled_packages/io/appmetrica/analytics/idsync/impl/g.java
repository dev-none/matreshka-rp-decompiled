package io.appmetrica.analytics.idsync.impl;

import io.appmetrica.analytics.coreapi.internal.servicecomponents.ActivationBarrierCallback;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: loaded from: classes7.dex */
public final class g implements ActivationBarrierCallback {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ h f5564a;

    public g(h hVar) {
        this.f5564a = hVar;
    }

    @Override // io.appmetrica.analytics.coreapi.internal.servicecomponents.ActivationBarrierCallback
    public final void onWaitFinished() {
        f fVar = this.f5564a.g;
        if (fVar == null) {
            Intrinsics.throwUninitializedPropertyAccessException("syncRunnable");
            fVar = null;
        }
        fVar.run();
    }
}
