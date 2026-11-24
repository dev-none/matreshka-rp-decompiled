package com.ironsource.adqualitysdk.sdk.i;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ү, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0394 extends AbstractRunnableC0910 {

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final /* synthetic */ C0331 f1467;

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final /* synthetic */ EnumC0405 f1468;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ String f1469;

    public C0394(C0331 c0331, String str, EnumC0405 enumC0405) {
        this.f1467 = c0331;
        this.f1469 = str;
        this.f1468 = enumC0405;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractRunnableC0910
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8327() {
        C0396 c0396M8494 = this.f1467.m8494(this.f1469);
        if (c0396M8494 != null) {
            c0396M8494.f1477 = this.f1468;
            c0396M8494.m8510(EnumC0398.f1488);
            C0331.m8492(this.f1467, this.f1469, c0396M8494);
        }
    }
}
