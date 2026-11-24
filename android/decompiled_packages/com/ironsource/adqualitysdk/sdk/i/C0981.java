package com.ironsource.adqualitysdk.sdk.i;

import com.ironsource.adqualitysdk.sdk.ISAdQualityInitListener;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.冫, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0981 extends AbstractRunnableC0910 {

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ C0964 f3426;

    public C0981(C0964 c0964) {
        this.f3426 = c0964;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractRunnableC0910
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8327() {
        for (ISAdQualityInitListener iSAdQualityInitListener : this.f3426.f3387) {
            if (iSAdQualityInitListener != null) {
                iSAdQualityInitListener.adQualitySdkInitSuccess();
            }
        }
        this.f3426.f3387.clear();
    }
}
