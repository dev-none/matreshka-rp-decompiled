package com.ironsource.adqualitysdk.sdk.i;

import com.ironsource.adqualitysdk.sdk.ISAdQualityAdListener;
import com.ironsource.adqualitysdk.sdk.ISAdQualityAdType;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ς, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0337 implements ISAdQualityAdListener {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0324 f1317;

    public C0337(C0324 c0324) {
        this.f1317 = c0324;
    }

    @Override // com.ironsource.adqualitysdk.sdk.ISAdQualityAdListener
    public final void adClosed(String str, ISAdQualityAdType iSAdQualityAdType) {
        ISAdQualityAdListener iSAdQualityAdListener = this.f1317.f1190.f4004;
        if (iSAdQualityAdListener != null) {
            iSAdQualityAdListener.adClosed(str, iSAdQualityAdType);
        }
    }

    @Override // com.ironsource.adqualitysdk.sdk.ISAdQualityAdListener
    public final void adDisplayed(String str, ISAdQualityAdType iSAdQualityAdType) {
        ISAdQualityAdListener iSAdQualityAdListener = this.f1317.f1190.f4004;
        if (iSAdQualityAdListener != null) {
            iSAdQualityAdListener.adDisplayed(str, iSAdQualityAdType);
        }
    }
}
