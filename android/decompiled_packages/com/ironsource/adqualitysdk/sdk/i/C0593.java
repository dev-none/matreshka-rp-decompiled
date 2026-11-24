package com.ironsource.adqualitysdk.sdk.i;

import com.google.android.gms.ads.appopen.AppOpenAd;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.Ꮭ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0593 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0443 f2102;

    public C0593(C0443 c0443) {
        this.f2102 = c0443;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C0443 c0443 = this.f2102;
        c0443.getClass();
        return new C0468(c0443, (AppOpenAd.AppOpenAdLoadCallback) AbstractC0912.m8788(arrayList, 0, AppOpenAd.AppOpenAdLoadCallback.class), c0566);
    }
}
