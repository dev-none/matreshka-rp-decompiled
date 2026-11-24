package com.ironsource.adqualitysdk.sdk.i;

import android.app.Activity;
import android.os.Bundle;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ﺙ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C1080 extends AbstractRunnableC0910 {

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final /* synthetic */ C1006 f3866;

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final /* synthetic */ Bundle f3867;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ Activity f3868;

    public C1080(C1006 c1006, Activity activity, Bundle bundle) {
        this.f3866 = c1006;
        this.f3868 = activity;
        this.f3867 = bundle;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractRunnableC0910
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8327() {
        if (C1006.m8854(this.f3866, this.f3868)) {
            this.f3866.f3643.getClass();
            this.f3866.getClass();
            C1006 c1006 = this.f3866;
            c1006.f3640 = false;
            Bundle bundle = this.f3867;
            if (bundle == null) {
                c1006.f3641 = false;
                return;
            }
            c1006.f3641 = bundle.getBoolean(C1006.f3635);
            C1006 c1007 = this.f3866;
            if (c1007.f3641) {
                c1007.f3640 = true;
            }
            c1007.f3638 = true;
        }
    }
}
