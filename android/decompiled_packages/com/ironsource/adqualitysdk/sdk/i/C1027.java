package com.ironsource.adqualitysdk.sdk.i;

import android.app.Activity;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ﭴ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C1027 extends AbstractRunnableC0910 {

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final /* synthetic */ C1006 f3697;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ Activity f3698;

    public C1027(C1006 c1006, Activity activity) {
        this.f3697 = c1006;
        this.f3698 = activity;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractRunnableC0910
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8327() {
        if (C1006.m8854(this.f3697, this.f3698)) {
            AbstractC1766n.m8388(new C1028(this));
            C1006 c1006 = this.f3697;
            if (c1006.f3640 && !c1006.f3639 && this.f3698.isFinishing()) {
                C1006 c1007 = this.f3697;
                c1007.m8483(this.f3698);
                c1007.f3641 = false;
            }
        }
    }
}
