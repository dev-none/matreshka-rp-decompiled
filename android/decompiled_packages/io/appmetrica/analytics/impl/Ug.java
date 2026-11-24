package io.appmetrica.analytics.impl;

import android.os.RemoteException;
import io.appmetrica.analytics.internal.IAppMetricaService;

/* JADX INFO: loaded from: classes7.dex */
public class Ug extends Ch {
    public final Ah e;

    public Ug(C2361p0 c2361p0, InterfaceC2076dl interfaceC2076dl, Ah ah) {
        super(c2361p0, interfaceC2076dl);
        this.e = ah;
    }

    @Override // io.appmetrica.analytics.impl.Ch
    public final void a(Throwable th) {
    }

    @Override // io.appmetrica.analytics.impl.Ch
    public final void a(IAppMetricaService iAppMetricaService) throws RemoteException {
        Ah ah = this.e;
        iAppMetricaService.reportData(ah.c, ah.f5597a.d(ah.e.c()));
    }
}
