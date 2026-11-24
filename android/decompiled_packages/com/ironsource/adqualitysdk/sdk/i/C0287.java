package com.ironsource.adqualitysdk.sdk.i;

import android.content.Context;
import android.content.Intent;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ʷ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0287 extends AbstractRunnableC0910 {

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final /* synthetic */ C0273 f1078;

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final /* synthetic */ Intent f1079;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ Context f1080;

    public C0287(C0273 c0273, Context context, Intent intent) {
        this.f1078 = c0273;
        this.f1080 = context;
        this.f1079 = intent;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractRunnableC0910
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8327() {
        C0273 c0273 = this.f1078;
        C0944 c0944 = c0273.f985;
        C0704 c0704 = c0273.f984;
        C1013 c1013 = c0273.f983;
        ArrayList arrayListM8913 = C1137.m8913(c0273.f981, c0273.f982, new Object[]{c0273, this.f1080, this.f1079});
        c0944.getClass();
        c0944.m8820(c0704, c0704.f2434, c1013, arrayListM8913);
    }
}
