package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreapi.internal.identifiers.SdkIdentifiers;
import io.appmetrica.analytics.modulesapi.internal.client.ModuleServiceConfig;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.e4, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2084e4 implements ModuleServiceConfig {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final SdkIdentifiers f6056a;
    public final Object b;

    public C2084e4(SdkIdentifiers sdkIdentifiers, Object obj) {
        this.f6056a = sdkIdentifiers;
        this.b = obj;
    }

    @Override // io.appmetrica.analytics.modulesapi.internal.client.ModuleServiceConfig
    public final Object getFeaturesConfig() {
        return this.b;
    }

    @Override // io.appmetrica.analytics.modulesapi.internal.client.ModuleServiceConfig
    public final SdkIdentifiers getIdentifiers() {
        return this.f6056a;
    }
}
