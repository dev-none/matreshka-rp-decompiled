package com.ironsource.adqualitysdk.sdk.i;

import android.app.Activity;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ƭ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0225 extends AbstractC0635 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0210 f892;

    public C0225(C0210 c0210) {
        this.f892 = c0210;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0635, android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityDestroyed(Activity activity) {
        AbstractC1766n.m8388(new C0244(this));
    }
}
