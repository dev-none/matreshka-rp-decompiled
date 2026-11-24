package com.ironsource.adqualitysdk.sdk.i;

import com.fyber.inneractive.sdk.activities.InneractiveFullscreenAdActivity;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ᴧ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0787 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0735 f2675;

    public C0787(C0735 c0735) {
        this.f2675 = c0735;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C0735 c0735 = this.f2675;
        InneractiveFullscreenAdActivity inneractiveFullscreenAdActivity = (InneractiveFullscreenAdActivity) arrayList.get(0);
        c0735.getClass();
        return inneractiveFullscreenAdActivity.getLayout();
    }
}
