package com.ironsource.adqualitysdk.sdk.i;

import com.google.android.gms.ads.admanager.AdManagerAdView;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ე, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0579 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0443 f2064;

    public C0579(C0443 c0443) {
        this.f2064 = c0443;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        this.f2064.getClass();
        return ((AdManagerAdView) AbstractC0912.m8788(arrayList, 0, AdManagerAdView.class)).getAdListener();
    }
}
