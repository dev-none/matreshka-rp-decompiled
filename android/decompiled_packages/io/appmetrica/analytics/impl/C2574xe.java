package io.appmetrica.analytics.impl;

import android.os.Bundle;
import android.os.RemoteException;
import io.appmetrica.analytics.internal.IAppMetricaService;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.xe, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2574xe extends Ch {
    public final Gf e;

    public C2574xe(C2361p0 c2361p0, InterfaceC2076dl interfaceC2076dl, Gf gf) {
        super(c2361p0, interfaceC2076dl);
        this.e = gf;
    }

    @Override // io.appmetrica.analytics.impl.Ch
    public final void a(IAppMetricaService iAppMetricaService) throws RemoteException {
        Bundle bundle = new Bundle();
        Gf gf = this.e;
        synchronized (gf) {
            bundle.putParcelable("PROCESS_CFG_OBJ", gf);
        }
        iAppMetricaService.pauseUserSession(bundle);
    }
}
