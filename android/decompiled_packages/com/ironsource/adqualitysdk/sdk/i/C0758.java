package com.ironsource.adqualitysdk.sdk.i;

import com.fyber.inneractive.sdk.external.InneractiveUnitController;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ᘇ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0758 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0735 f2590;

    public C0758(C0735 c0735) {
        this.f2590 = c0735;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C0735 c0735 = this.f2590;
        InneractiveUnitController inneractiveUnitController = (InneractiveUnitController) arrayList.get(0);
        c0735.getClass();
        return inneractiveUnitController.getSelectedContentController();
    }
}
