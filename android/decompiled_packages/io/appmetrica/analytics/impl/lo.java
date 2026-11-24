package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreutils.internal.services.UtilityServiceConfiguration;
import io.appmetrica.analytics.coreutils.internal.services.UtilityServiceProvider;

/* JADX INFO: loaded from: classes7.dex */
public final class lo implements InterfaceC2358om {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final UtilityServiceProvider f6197a;

    public lo(UtilityServiceProvider utilityServiceProvider) {
        this.f6197a = utilityServiceProvider;
    }

    @Override // io.appmetrica.analytics.impl.InterfaceC2358om
    public final void a(C2231jm c2231jm) {
        this.f6197a.updateConfiguration(new UtilityServiceConfiguration(c2231jm.v, c2231jm.u));
    }
}
