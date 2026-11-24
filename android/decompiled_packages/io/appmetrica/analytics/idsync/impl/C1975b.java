package io.appmetrica.analytics.idsync.impl;

import io.appmetrica.analytics.coreapi.internal.system.NetworkType;
import io.appmetrica.analytics.modulesapi.internal.service.ServiceContext;

/* JADX INFO: renamed from: io.appmetrica.analytics.idsync.impl.b, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C1975b implements t {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final ServiceContext f5559a;

    public C1975b(ServiceContext serviceContext) {
        this.f5559a = serviceContext;
    }

    @Override // io.appmetrica.analytics.idsync.impl.t
    public final boolean a() {
        return this.f5559a.getActiveNetworkTypeProvider().getNetworkType(this.f5559a.getContext()) == NetworkType.CELL;
    }
}
