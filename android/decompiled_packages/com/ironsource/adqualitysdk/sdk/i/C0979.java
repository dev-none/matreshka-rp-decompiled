package com.ironsource.adqualitysdk.sdk.i;

import com.ironsource.adqualitysdk.sdk.ISAdQualityInitError;
import com.ironsource.adqualitysdk.sdk.ISAdQualityInitListener;
import java.util.Set;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.亠, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0979 extends AbstractRunnableC0910 {

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final /* synthetic */ String f3421;

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final /* synthetic */ ISAdQualityInitError f3422;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ Set f3423;

    public C0979(Set set, ISAdQualityInitError iSAdQualityInitError, String str) {
        this.f3423 = set;
        this.f3422 = iSAdQualityInitError;
        this.f3421 = str;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractRunnableC0910
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8327() {
        for (ISAdQualityInitListener iSAdQualityInitListener : this.f3423) {
            if (iSAdQualityInitListener != null) {
                iSAdQualityInitListener.adQualitySdkInitFailed(this.f3422, this.f3421);
            }
        }
        this.f3423.clear();
    }
}
