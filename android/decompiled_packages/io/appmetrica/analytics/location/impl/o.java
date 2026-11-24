package io.appmetrica.analytics.location.impl;

import io.appmetrica.analytics.locationapi.internal.LocationReceiverProvider;
import io.appmetrica.analytics.locationapi.internal.LocationReceiverProviderFactory;

/* JADX INFO: loaded from: classes7.dex */
public final class o implements LocationReceiverProviderFactory {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final q f6456a;

    public o(q qVar) {
        this.f6456a = qVar;
    }

    public final q a() {
        return this.f6456a;
    }

    @Override // io.appmetrica.analytics.locationapi.internal.LocationReceiverProviderFactory
    public final LocationReceiverProvider getPassiveLocationReceiverProvider() {
        return this.f6456a;
    }
}
