package com.ironsource.adqualitysdk.sdk.i;

import android.app.Activity;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ᕪ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0730 extends AbstractC0635 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C1013 f2473;

    public C0730(C1013 c1013) {
        this.f2473 = c1013;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0635, android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityPaused(Activity activity) {
        C1013 c1013 = this.f2473;
        c1013.m8866(AbstractC1033.f3725, C1013.m8855(c1013, activity));
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0635, android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityResumed(Activity activity) {
        C1013 c1013 = this.f2473;
        c1013.m8866(AbstractC1033.f3724, C1013.m8855(c1013, activity));
    }
}
