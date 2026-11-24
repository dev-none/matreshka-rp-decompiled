package com.ironsource.adqualitysdk.sdk.i;

import com.mbridge.msdk.out.MBridgeIds;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.т, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0372 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0199 f1406;

    public C0372(C0199 c0199) {
        this.f1406 = c0199;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C0199 c0199 = this.f1406;
        MBridgeIds mBridgeIds = (MBridgeIds) arrayList.get(0);
        c0199.getClass();
        return mBridgeIds.getUnitId();
    }
}
