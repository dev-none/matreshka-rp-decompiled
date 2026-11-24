package io.appmetrica.analytics.impl;

import android.os.Bundle;
import android.os.RemoteException;
import io.appmetrica.analytics.internal.IAppMetricaService;

/* JADX INFO: loaded from: classes7.dex */
public final class Pn extends Ch {
    public final int e;
    public final Bundle f;

    public Pn(C2361p0 c2361p0, InterfaceC2076dl interfaceC2076dl, int i, Bundle bundle) {
        super(c2361p0, interfaceC2076dl);
        this.e = i;
        this.f = bundle;
    }

    @Override // io.appmetrica.analytics.impl.Ch
    public final void a(IAppMetricaService iAppMetricaService) throws RemoteException {
        iAppMetricaService.reportData(this.e, this.f);
    }
}
