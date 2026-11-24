package com.ironsource.adqualitysdk.sdk.i;

import android.app.Activity;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ﮉ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C1036 extends AbstractRunnableC0910 {

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final /* synthetic */ C1006 f3768;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ Activity f3769;

    public C1036(C1006 c1006, Activity activity) {
        this.f3768 = c1006;
        this.f3769 = activity;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractRunnableC0910
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8327() {
        if (C1006.m8854(this.f3768, this.f3769)) {
            this.f3768.f3643.onActivityPaused(this.f3769);
        }
    }
}
