package com.ironsource.adqualitysdk.sdk.i;

import com.google.android.gms.ads.AdListener;
import com.google.android.gms.ads.doubleclick.PublisherAdView;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.Ⅽ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0940 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0443 f3314;

    public C0940(C0443 c0443) {
        this.f3314 = c0443;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        this.f3314.getClass();
        PublisherAdView publisherAdView = (PublisherAdView) AbstractC0912.m8788(arrayList, 0, PublisherAdView.class);
        this.f3314.getClass();
        publisherAdView.setAdListener((AdListener) AbstractC0912.m8788(arrayList, 1, AdListener.class));
        return null;
    }
}
