package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.modulesapi.internal.client.ClientStorageProvider;
import io.appmetrica.analytics.modulesapi.internal.common.ModulePreferences;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.k4, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2239k4 implements ClientStorageProvider {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final InterfaceC2606yl f6166a;

    public C2239k4(InterfaceC2606yl interfaceC2606yl) {
        this.f6166a = interfaceC2606yl;
    }

    @Override // io.appmetrica.analytics.modulesapi.internal.client.ClientStorageProvider
    public final ModulePreferences modulePreferences(String str) {
        return new C2093ed(str, this.f6166a);
    }
}
