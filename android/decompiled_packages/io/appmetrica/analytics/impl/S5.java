package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreapi.internal.identifiers.PlatformIdentifiers;
import io.appmetrica.analytics.coreapi.internal.identifiers.SdkIdentifiers;
import io.appmetrica.analytics.coreapi.internal.servicecomponents.SdkEnvironmentProvider;
import io.appmetrica.analytics.networktasks.internal.BaseRequestConfig;

/* JADX INFO: loaded from: classes7.dex */
public final class S5 extends BaseRequestConfig.DataSource {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final C2231jm f5877a;
    public final SdkEnvironmentProvider b;

    public S5(C2231jm c2231jm, SdkEnvironmentProvider sdkEnvironmentProvider, PlatformIdentifiers platformIdentifiers, Object obj) {
        super(new SdkIdentifiers(c2231jm.c(), c2231jm.a(), c2231jm.b()), sdkEnvironmentProvider, platformIdentifiers, obj);
        this.f5877a = c2231jm;
        this.b = sdkEnvironmentProvider;
    }
}
