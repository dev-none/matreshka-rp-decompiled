package io.appmetrica.analytics.impl;

import android.app.Activity;
import io.appmetrica.analytics.coreapi.internal.lifecycle.ActivityEvent;
import io.appmetrica.analytics.coreapi.internal.lifecycle.ActivityLifecycleListener;

/* JADX INFO: loaded from: classes7.dex */
public final class K5 implements ActivityLifecycleListener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ L5 f5756a;

    public K5(L5 l5) {
        this.f5756a = l5;
    }

    @Override // io.appmetrica.analytics.coreapi.internal.lifecycle.ActivityLifecycleListener
    public final void onEvent(Activity activity, ActivityEvent activityEvent) {
        int i = J5.f5742a[activityEvent.ordinal()];
        if (i == 1) {
            this.f5756a.b.resumeSession();
        } else {
            if (i != 2) {
                return;
            }
            this.f5756a.b.pauseSession();
        }
    }
}
