package com.ironsource.adqualitysdk.sdk.i;

import android.app.Activity;
import android.os.Bundle;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ᔬ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0711 extends AbstractC0635 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0655 f2445;

    public C0711(C0655 c0655) {
        this.f2445 = c0655;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0635, android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityCreated(Activity activity, Bundle bundle) {
        this.f2445.f2275.removeCallbacksAndMessages(null);
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0635, android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityDestroyed(Activity activity) {
        this.f2445.f2275.removeCallbacksAndMessages(null);
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0635, android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityPaused(Activity activity) {
        C0655 c0655 = this.f2445;
        c0655.f2275.postDelayed(new C0669(c0655, activity), 500L);
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0635, android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityResumed(Activity activity) {
        C0655 c0655 = this.f2445;
        if (c0655.f2277) {
            c0655.f2277 = false;
            c0655.f2276.mo8548(activity);
        }
        c0655.f2275.removeCallbacksAndMessages(null);
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0635, android.app.Application.ActivityLifecycleCallbacks
    public final void onActivitySaveInstanceState(Activity activity, Bundle bundle) {
        this.f2445.f2275.removeCallbacksAndMessages(null);
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0635, android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityStarted(Activity activity) {
        this.f2445.f2275.removeCallbacksAndMessages(null);
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0635, android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityStopped(Activity activity) {
        this.f2445.f2275.removeCallbacksAndMessages(null);
    }
}
