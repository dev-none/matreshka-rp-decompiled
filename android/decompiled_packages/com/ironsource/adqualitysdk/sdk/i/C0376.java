package com.ironsource.adqualitysdk.sdk.i;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ь, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0376 extends AbstractRunnableC0910 {

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final /* synthetic */ C0331 f1413;

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final /* synthetic */ EnumC0398 f1414;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ String f1415;

    public C0376(C0331 c0331, String str, EnumC0398 enumC0398) {
        this.f1413 = c0331;
        this.f1415 = str;
        this.f1414 = enumC0398;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractRunnableC0910
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8327() {
        C0396 c0396M8494 = this.f1413.m8494(this.f1415);
        if (c0396M8494 != null) {
            c0396M8494.m8510(this.f1414);
            C0331.m8492(this.f1413, this.f1415, c0396M8494);
        }
    }
}
