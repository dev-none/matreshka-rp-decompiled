package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreapi.internal.permission.PermissionStrategy;
import io.appmetrica.analytics.modulesapi.internal.common.AskForPermissionStrategyModuleProvider;

/* JADX INFO: loaded from: classes7.dex */
public final class I7 implements AskForPermissionStrategyModuleProvider {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final C2069de f5722a = new C2069de();

    @Override // io.appmetrica.analytics.modulesapi.internal.common.AskForPermissionStrategyModuleProvider
    public final PermissionStrategy getAskForPermissionStrategy() {
        return this.f5722a;
    }
}
