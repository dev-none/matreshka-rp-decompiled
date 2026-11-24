package com.ironsource.adqualitysdk.sdk.i;

import android.app.Activity;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ᓙ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0669 extends AbstractRunnableC0910 {

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final /* synthetic */ C0655 f2313;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ Activity f2314;

    public C0669(C0655 c0655, Activity activity) {
        this.f2313 = c0655;
        this.f2314 = activity;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractRunnableC0910
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8327() {
        C0655 c0655 = this.f2313;
        c0655.f2277 = true;
        InterfaceC0489 interfaceC0489 = c0655.f2276;
        if (interfaceC0489 != null) {
            interfaceC0489.mo8549(this.f2314);
        }
    }
}
