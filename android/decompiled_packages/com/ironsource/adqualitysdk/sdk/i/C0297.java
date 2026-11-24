package com.ironsource.adqualitysdk.sdk.i;

import com.smaato.sdk.core.ad.InterstitialAdPresenter;
import com.smaato.sdk.video.ad.InterstitialVideoAdPresenter;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ˁ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0297 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0798 f1126;

    public C0297(C0798 c0798) {
        this.f1126 = c0798;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C0798 c0798 = this.f1126;
        InterstitialVideoAdPresenter interstitialVideoAdPresenter = (InterstitialVideoAdPresenter) arrayList.get(0);
        InterstitialAdPresenter.Listener listener = (InterstitialAdPresenter.Listener) arrayList.get(1);
        c0798.getClass();
        interstitialVideoAdPresenter.setListener(listener);
        return null;
    }
}
