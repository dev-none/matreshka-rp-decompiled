package com.ironsource.adqualitysdk.sdk.i;

import com.fyber.inneractive.sdk.external.InneractiveFullscreenVideoContentController;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.〵, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0951 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0735 f3368;

    public C0951(C0735 c0735) {
        this.f3368 = c0735;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C0735 c0735 = this.f3368;
        InneractiveFullscreenVideoContentController inneractiveFullscreenVideoContentController = (InneractiveFullscreenVideoContentController) arrayList.get(0);
        c0735.getClass();
        return inneractiveFullscreenVideoContentController.getEventsListener();
    }
}
