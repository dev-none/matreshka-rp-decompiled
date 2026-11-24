package com.ironsource.adqualitysdk.sdk.i;

import com.qq.e.comm.managers.status.APPStatus;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.d, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes6.dex */
public final class C1744d implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C1756i f357;

    public C1744d(C1756i c1756i) {
        this.f357 = c1756i;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C1756i c1756i = this.f357;
        APPStatus aPPStatus = (APPStatus) arrayList.get(0);
        c1756i.getClass();
        return aPPStatus.getAPPID();
    }
}
