package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.locationapi.internal.LocationReceiverProvider;
import io.appmetrica.analytics.locationapi.internal.LocationReceiverProviderFactory;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.dc, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2067dc implements LocationReceiverProviderFactory {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final C2092ec f6044a = new C2092ec();

    @Override // io.appmetrica.analytics.locationapi.internal.LocationReceiverProviderFactory
    public final LocationReceiverProvider getPassiveLocationReceiverProvider() {
        return this.f6044a;
    }
}
