package com.ironsource.adqualitysdk.sdk.i;

import com.ironsource.adqualitysdk.sdk.ISAdQualityCustomMediationRevenue;
import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.Collections;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ƒ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0218 extends AbstractRunnableC0910 {

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final /* synthetic */ C0210 f884;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ ISAdQualityCustomMediationRevenue f885;

    public C0218(C0210 c0210, ISAdQualityCustomMediationRevenue iSAdQualityCustomMediationRevenue) {
        this.f884 = c0210;
        this.f885 = iSAdQualityCustomMediationRevenue;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractRunnableC0910
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8327() {
        this.f884.f876.m8532(StringFog.decrypt("LE5W8SkzrOwvBV32CzK29y5GYP0+\n", "QSsymEhHxYM=\n"), Collections.singletonList(C0210.m8443(this.f884, this.f885)));
        this.f884.f877 = true;
    }
}
