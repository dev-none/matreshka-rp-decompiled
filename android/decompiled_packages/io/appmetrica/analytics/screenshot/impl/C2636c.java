package io.appmetrica.analytics.screenshot.impl;

import android.app.Activity;
import io.appmetrica.analytics.coreapi.internal.lifecycle.ActivityEvent;
import io.appmetrica.analytics.coreapi.internal.lifecycle.ActivityLifecycleListener;

/* JADX INFO: renamed from: io.appmetrica.analytics.screenshot.impl.c, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2636c implements ActivityLifecycleListener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ C2637d f6556a;

    public C2636c(C2637d c2637d) {
        this.f6556a = c2637d;
    }

    @Override // io.appmetrica.analytics.coreapi.internal.lifecycle.ActivityLifecycleListener
    public final void onEvent(Activity activity, ActivityEvent activityEvent) {
        int i = AbstractC2635b.f6555a[activityEvent.ordinal()];
        try {
            if (i != 1) {
                if (i != 2) {
                    return;
                }
                activity.unregisterScreenCaptureCallback(C2637d.d(this.f6556a));
            } else {
                C2643j c2643j = this.f6556a.c;
                if (c2643j == null || !c2643j.f6565a) {
                    return;
                }
                activity.registerScreenCaptureCallback(this.f6556a.f6557a.getContext().getMainExecutor(), C2637d.d(this.f6556a));
            }
        } catch (Throwable unused) {
        }
    }
}
