package com.ironsource.adqualitysdk.sdk.i;

import com.google.android.gms.ads.appopen.AppOpenAd;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ᐱ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0611 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0443 f2140;

    public C0611(C0443 c0443) {
        this.f2140 = c0443;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        this.f2140.getClass();
        return ((AppOpenAd) AbstractC0912.m8788(arrayList, 0, AppOpenAd.class)).getResponseInfo();
    }
}
