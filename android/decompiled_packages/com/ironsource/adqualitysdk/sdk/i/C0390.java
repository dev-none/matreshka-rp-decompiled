package com.ironsource.adqualitysdk.sdk.i;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ҫ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0390 extends AbstractRunnableC0910 {

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final /* synthetic */ C0331 f1456;

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final /* synthetic */ EnumC0405 f1457;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ String f1458;

    public C0390(C0331 c0331, String str, EnumC0405 enumC0405) {
        this.f1456 = c0331;
        this.f1458 = str;
        this.f1457 = enumC0405;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractRunnableC0910
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8327() {
        C0396 c0396M8494 = this.f1456.m8494(this.f1458);
        if (c0396M8494 != null) {
            EnumC0398 enumC0398 = c0396M8494.f1478;
            if (enumC0398 == EnumC0398.f1492 || enumC0398 == EnumC0398.f1491 || enumC0398 == EnumC0398.f1493) {
                c0396M8494.f1477 = this.f1457;
                c0396M8494.m8510(EnumC0398.f1488);
                C0331.m8492(this.f1456, this.f1458, c0396M8494);
            }
        }
    }
}
