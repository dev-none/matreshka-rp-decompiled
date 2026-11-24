package com.ironsource.adqualitysdk.sdk.i;

import android.app.Activity;
import android.os.Bundle;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ﮌ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C1039 extends AbstractRunnableC0910 {

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final /* synthetic */ C1006 f3772;

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final /* synthetic */ Bundle f3773;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ Activity f3774;

    public C1039(C1006 c1006, Activity activity, Bundle bundle) {
        this.f3772 = c1006;
        this.f3774 = activity;
        this.f3773 = bundle;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractRunnableC0910
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8327() {
        if (C1006.m8854(this.f3772, this.f3774)) {
            this.f3772.f3643.getClass();
            Bundle bundle = this.f3773;
            if (bundle != null) {
                bundle.putBoolean(C1006.f3635, this.f3772.f3641);
            }
            this.f3772.f3639 = true;
        }
    }
}
