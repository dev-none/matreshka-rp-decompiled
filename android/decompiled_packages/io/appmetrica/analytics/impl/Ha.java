package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreapi.internal.identifiers.AdvertisingIdsHolder;
import io.appmetrica.analytics.coreapi.internal.identifiers.SimpleAdvertisingIdGetter;

/* JADX INFO: loaded from: classes7.dex */
public interface Ha extends SimpleAdvertisingIdGetter, InterfaceC2358om {
    AdvertisingIdsHolder a();

    AdvertisingIdsHolder a(Li li);

    @Override // io.appmetrica.analytics.impl.InterfaceC2358om
    /* synthetic */ void a(C2231jm c2231jm);

    void b(boolean z);

    void c(boolean z);

    AdvertisingIdsHolder getIdentifiers();

    void init();
}
