package com.ironsource.adqualitysdk.sdk.i;

import com.google.android.gms.ads.AdListener;
import com.google.android.gms.ads.AdView;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ۅ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0494 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0443 f1789;

    public C0494(C0443 c0443) {
        this.f1789 = c0443;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        this.f1789.getClass();
        AdView adView = (AdView) AbstractC0912.m8788(arrayList, 0, AdView.class);
        this.f1789.getClass();
        adView.setAdListener((AdListener) AbstractC0912.m8788(arrayList, 1, AdListener.class));
        return null;
    }
}
