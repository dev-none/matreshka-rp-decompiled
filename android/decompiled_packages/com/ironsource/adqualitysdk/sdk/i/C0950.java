package com.ironsource.adqualitysdk.sdk.i;

import com.fyber.inneractive.sdk.external.InneractiveContentController;
import com.fyber.inneractive.sdk.external.VideoContentListener;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.〳, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0950 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0735 f3367;

    public C0950(C0735 c0735) {
        this.f3367 = c0735;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C0735 c0735 = this.f3367;
        InneractiveContentController inneractiveContentController = (InneractiveContentController) arrayList.get(0);
        VideoContentListener videoContentListener = (VideoContentListener) arrayList.get(1);
        c0735.getClass();
        inneractiveContentController.setEventsListener(videoContentListener);
        return null;
    }
}
