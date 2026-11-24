package com.ironsource.adqualitysdk.sdk.i;

import com.google.android.gms.ads.AdListener;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ゥ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0961 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0443 f3376;

    public C0961(C0443 c0443) {
        this.f3376 = c0443;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C0443 c0443 = this.f3376;
        c0443.getClass();
        return new C0469(c0443, (AdListener) AbstractC0912.m8788(arrayList, 0, AdListener.class), c0566);
    }
}
