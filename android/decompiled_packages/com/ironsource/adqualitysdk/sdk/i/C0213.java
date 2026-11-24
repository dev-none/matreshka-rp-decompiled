package com.ironsource.adqualitysdk.sdk.i;

import com.ironsource.adqualitysdk.sdk.ISAdQualityCustomMediationRevenue;
import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.Collections;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.Ÿ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0213 extends AbstractRunnableC0910 {

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final /* synthetic */ C0210 f880;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ ISAdQualityCustomMediationRevenue f881;

    public C0213(C0210 c0210, ISAdQualityCustomMediationRevenue iSAdQualityCustomMediationRevenue) {
        this.f880 = c0210;
        this.f881 = iSAdQualityCustomMediationRevenue;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractRunnableC0910
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8327() {
        this.f880.f876.m8532(StringFog.decrypt("GUZwq3te1T4aDXusVk/KNBhzeKNjeNkn\n", "dCMUwhoqvFE=\n"), Collections.singletonList(C0210.m8443(this.f880, this.f881)));
    }
}
